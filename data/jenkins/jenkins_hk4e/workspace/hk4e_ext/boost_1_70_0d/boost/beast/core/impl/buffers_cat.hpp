// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/impl/buffers_cat.hpp

// Line 92: range 0000000019BB6A60-0000000019BB6BFC
bool __fastcall boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
        const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const this,
        const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *other)
{
  bool result; // al
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r8
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v4; // r9
  unsigned __int8 i; // dl
  unsigned __int8 *p_i; // rcx

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
  if ( this->bn_ != other->bn_ )
    return 0;
LABEL_7:
  p_it = &other->it_;
  v4 = &this->it_;
  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&this->it_.i_);
    goto LABEL_12;
  }
  i = this->it_.i_;
  p_i = &other->it_.i_;
  if ( *(char *)(((unsigned __int64)&other->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_12:
    this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)p_i;
    __asan_report_load1(p_i);
    goto LABEL_13;
  }
  if ( i != other->it_.i_ )
    return 0;
LABEL_13:
  switch ( i )
  {
    case 0u:
    case 4u:
      goto LABEL_30;
    case 1u:
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v4);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
      {
        return *(_QWORD *)&this->it_.buf_ == *(_QWORD *)&other->it_.buf_;
      }
      this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)p_it;
      __asan_report_load8(p_it);
LABEL_20:
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v4);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
      {
        return *(_QWORD *)&this->it_.buf_ == *(_QWORD *)&other->it_.buf_;
      }
      this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)p_it;
      __asan_report_load8(p_it);
LABEL_25:
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v4);
      }
      else if ( !*(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
      {
        return *(_QWORD *)&this->it_.buf_ == *(_QWORD *)&other->it_.buf_;
      }
      __asan_report_load8(p_it);
LABEL_30:
      result = 1;
      break;
    case 2u:
      goto LABEL_20;
    case 3u:
      goto LABEL_25;
    default:
      __asan_handle_no_return(this);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 5; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const b"
        "oost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_bas"
        "e::past_end>::equals; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = bool; boost::mp11::mp_siz"
        "e_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
  }
  return result;
};

// Line 92: range 0000000019BE3C9C-0000000019BE51CF
void __fastcall boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next(
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const this)
{
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *self; // rbx
  char *buf; // r12
  unsigned __int64 v3; // rbp
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rdi
  boost::beast::detail::aligned_union_t_5 v5; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v6; // rax
  unsigned __int64 v7; // rdi
  char v8; // dl

  v3 = (unsigned __int64)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_load1(this);
    goto LABEL_7;
  }
  if ( self->it_.i_ != 8 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 8; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
      "o::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buf"
      "fer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_i"
      "terator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
  }
  while ( 1 )
  {
    this = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(this);
LABEL_8:
      boost::beast::http::chunk_crlf::begin(void)const::cb[0] = "\r\n";
      boost::beast::http::chunk_crlf::begin(void)const::cb[1] = 2LL;
      __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
      goto LABEL_9;
    }
    buf = (char *)self->it_.buf_;
    if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
      && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
    {
      goto LABEL_8;
    }
LABEL_9:
    if ( buf == (char *)&boost::beast::http::chunk_crlf::begin(void)const::cb[2] )
      goto LABEL_20;
    p_it = &self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
      break;
    v5 = self->it_.buf_;
    p_it = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v5;
    if ( *(_WORD *)((*(_QWORD *)&v5 >> 3) + 0x7FFF8000LL) )
      goto LABEL_19;
    if ( *(_QWORD *)(*(_QWORD *)&v5 + 8LL) )
      return;
    self->it_.buf_ = (boost::beast::detail::aligned_union_t_5)(*(_QWORD *)&v5 + 16LL);
  }
  __asan_report_load8(p_it);
LABEL_19:
  __asan_report_load16(p_it);
LABEL_20:
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    v7 = v3;
    __asan_report_load8(v3);
    goto LABEL_28;
  }
  v6 = *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator **)v3;
  v7 = *(_QWORD *)v3 + 16LL;
  if ( *(char *)((v7 >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_28:
    __asan_report_load1(v7);
LABEL_29:
    __asan_handle_no_return(v7);
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
  if ( v6->it_.i_ > 9u )
    goto LABEL_29;
  v8 = *(_BYTE *)(((unsigned __int64)&v6->it_ >> 3) + 0x7FFF8000);
  if ( v8 <= (((unsigned __int8)v6 + 8) & 7) && v8 )
  {
    __asan_report_store1(&v6->it_);
    JUMPOUT(0x19BE3E65LL);
  }
  v6->it_.buf_.__data[0] = 0;
  v6->it_.i_ = 9;
};

// Line 154: range 0000000019BE84B4-0000000019BE8CA1
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<2ul>(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const this)
{
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v1; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *self; // r12
  unsigned __int64 v3; // r13
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v4; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v5; // r14
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v6; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v7; // r12
  unsigned __int64 v8; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v9; // rdi
  unsigned __int64 v10; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v11; // rbp
  const boost::beast::detail::tuple_element_impl<3,boost::beast::http::chunk_crlf> *v12; // r14
  const boost::beast::http::chunk_crlf *v13; // rax
  boost::beast::http::chunk_crlf::const_iterator v14; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v15; // rdi
  boost::mp11::mp_size_t_0 v16; // [rsp+0h] [rbp-38h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-30h] BYREF

  v3 = (unsigned __int64)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_load1(this);
    goto LABEL_7;
  }
  if ( self->it_.i_ != 2 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 2; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const"
      " boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio"
      "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers"
      "_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost"
      "::asio::const_buffer*]");
  }
  while ( 1 )
  {
    this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(this);
LABEL_8:
      __asan_report_load8(this);
LABEL_9:
      __asan_report_load8(this);
LABEL_10:
      __asan_report_load16(this);
      goto LABEL_11;
    }
    v1 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)self->it_.buf_.__data;
    v4 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v3;
    this = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const *)v3;
    if ( *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
      goto LABEL_8;
    v5 = v4->self;
    v6 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)boost::beast::detail::get<1ul,boost::beast::http::detail::chunk_size>((const boost::beast::detail::tuple_element_impl<1,boost::beast::http::detail::chunk_size> *)&v4->self->it_);
    this = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    if ( v1 == (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)&v6->self->it_.buf_.1
             + 1 )
    {
      v7 = v4 + 1;
      v8 = (unsigned __int64)boost::beast::detail::get<2ul,boost::asio::const_buffer>(
                               (const boost::beast::detail::tuple_element_impl<2,boost::asio::const_buffer> *)&v5->it_.buf_.1
                             + 1);
      f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v4[1];
      v9 = v4 + 4;
      if ( *(char *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) < 0 )
      {
        __asan_report_load1(v9);
      }
      else
      {
        boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          LOBYTE(v4[4].self),
          &f);
        v9 = v4 + 1;
        if ( !*(_BYTE *)(((unsigned __int64)&v4[1] >> 3) + 0x7FFF8000) )
        {
          v4[1].self = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v8;
          v9 = v4 + 4;
          if ( *(char *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) >= 0 )
          {
            LOBYTE(v4[4].self) = 3;
            if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
            {
              v7 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v3;
              v10 = *(_QWORD *)v3 + 32LL;
              if ( *(char *)((v10 >> 3) + 0x7FFF8000) >= 0 )
              {
                if ( LOBYTE(v7[4].self) != 3 )
                {
                  __asan_handle_no_return(v10);
                  __assert_fail(
                    "i_ == I",
                    "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/cor"
                    "e/detail/variant.hpp",
                    0xD2u,
                    "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>:"
                    ":get() [with long unsigned int I = 3; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer"
                    ", boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::alloca"
                    "tor<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio"
                    "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::as"
                    "io::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::"
                    "asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterat"
                    "or_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::"
                    "asio::const_buffer*]");
                }
                while ( 1 )
                {
                  v10 = (unsigned __int64)&v7[1];
                  if ( *(_BYTE *)(((unsigned __int64)&v7[1] >> 3) + 0x7FFF8000) )
                    break;
                  v8 = (unsigned __int64)v7[1].self;
                  v11 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v3;
                  v10 = *(_QWORD *)v3;
                  if ( *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
                    goto LABEL_32;
                  v12 = (const boost::beast::detail::tuple_element_impl<3,boost::beast::http::chunk_crlf> *)v11->self;
                  if ( (const boost::asio::const_buffer *)v8 == &boost::beast::detail::get<2ul,boost::asio::const_buffer>(
                                                                   (const boost::beast::detail::tuple_element_impl<2,boost::asio::const_buffer> *)&v11->self->it_.buf_.1
                                                                 + 1)[1] )
                  {
                    v13 = boost::beast::detail::get<3ul,boost::beast::http::chunk_crlf>(v12 + 40);
                    v14 = boost::beast::http::chunk_crlf::begin(v13);
                    f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v11[1];
                    v15 = v11 + 4;
                    if ( *(char *)(((unsigned __int64)&v11[4] >> 3) + 0x7FFF8000) < 0 )
                    {
                      __asan_report_load1(v15);
                    }
                    else
                    {
                      boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        LOBYTE(v11[4].self),
                        &f);
                      v15 = v11 + 1;
                      if ( !*(_BYTE *)(((unsigned __int64)&v11[1] >> 3) + 0x7FFF8000) )
                      {
                        v11[1].self = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v14;
                        v15 = v11 + 4;
                        if ( *(char *)(((unsigned __int64)&v11[4] >> 3) + 0x7FFF8000) >= 0 )
                        {
                          LOBYTE(v11[4].self) = 4;
                          boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(
                            (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)v3,
                            v16);
                          return;
                        }
LABEL_47:
                        __asan_report_store1(v15);
                        JUMPOUT(0x19BE87C5LL);
                      }
                    }
                    __asan_report_store8();
                    goto LABEL_47;
                  }
                  v10 = v8;
                  if ( *(_WORD *)((v8 >> 3) + 0x7FFF8000) )
                    goto LABEL_33;
                  if ( *(_QWORD *)(v8 + 8) )
                    return;
LABEL_34:
                  v8 += 16LL;
                  v7[1].self = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v8;
                }
LABEL_31:
                __asan_report_load8(v10);
LABEL_32:
                __asan_report_load8(v10);
LABEL_33:
                __asan_report_load16(v10);
                goto LABEL_34;
              }
LABEL_30:
              __asan_report_load1(v10);
              goto LABEL_31;
            }
LABEL_29:
            v10 = v3;
            __asan_report_load8(v3);
            goto LABEL_30;
          }
LABEL_28:
          __asan_report_store1(v9);
          goto LABEL_29;
        }
      }
      __asan_report_store8();
      goto LABEL_28;
    }
    this = v1;
    if ( *(_WORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    if ( v1[1].self )
      break;
LABEL_11:
    v1 += 2;
    *(_QWORD *)self->it_.buf_.__data = v1;
  }
};

// Line 154: range 0000000019BE09A8-0000000019BE1206
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<2ul>(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const this)
{
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v1; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *self; // r12
  unsigned __int64 v3; // r13
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v4; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v5; // r14
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v6; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v7; // r12
  unsigned __int64 v8; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v9; // rdi
  unsigned __int64 v10; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v11; // rbp
  const boost::beast::detail::tuple_element_impl<3,boost::beast::http::chunk_crlf> *v12; // r14
  const boost::beast::http::chunk_crlf *v13; // rax
  boost::beast::http::chunk_crlf::const_iterator v14; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v15; // rdi
  boost::mp11::mp_size_t_0 v16; // [rsp+0h] [rbp-38h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-30h] BYREF

  v3 = (unsigned __int64)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_load1(this);
    goto LABEL_7;
  }
  if ( self->it_.i_ != 2 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 2; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const"
      " boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::det"
      "ail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> ="
      " const boost::asio::const_buffer*]");
  }
  while ( 1 )
  {
    this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(this);
LABEL_8:
      __asan_report_load8(this);
LABEL_9:
      __asan_report_load8(this);
LABEL_10:
      __asan_report_load16(this);
      goto LABEL_11;
    }
    v1 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)self->it_.buf_.__data;
    v4 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v3;
    this = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const *)v3;
    if ( *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
      goto LABEL_8;
    v5 = v4->self;
    v6 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)boost::beast::detail::get<1ul,boost::beast::http::detail::chunk_size>((const boost::beast::detail::tuple_element_impl<1,boost::beast::http::detail::chunk_size> *)&v4->self->it_);
    this = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    if ( v1 == (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)&v6->self->it_.buf_.1
             + 1 )
    {
      v7 = v4 + 1;
      v8 = (unsigned __int64)boost::beast::detail::get<2ul,boost::asio::const_buffer>(
                               (const boost::beast::detail::tuple_element_impl<2,boost::asio::const_buffer> *)&v5->it_.buf_.1
                             + 1);
      f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v4[1];
      v9 = v4 + 4;
      if ( *(char *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) < 0 )
      {
        __asan_report_load1(v9);
      }
      else
      {
        boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          LOBYTE(v4[4].self),
          &f);
        v9 = v4 + 1;
        if ( !*(_BYTE *)(((unsigned __int64)&v4[1] >> 3) + 0x7FFF8000) )
        {
          v4[1].self = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v8;
          v9 = v4 + 4;
          if ( *(char *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) >= 0 )
          {
            LOBYTE(v4[4].self) = 3;
            if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
            {
              v7 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v3;
              v10 = *(_QWORD *)v3 + 32LL;
              if ( *(char *)((v10 >> 3) + 0x7FFF8000) >= 0 )
              {
                if ( LOBYTE(v7[4].self) != 3 )
                {
                  __asan_handle_no_return(v10);
                  __assert_fail(
                    "i_ == I",
                    "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/cor"
                    "e/detail/variant.hpp",
                    0xD2u,
                    "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>:"
                    ":get() [with long unsigned int I = 3; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer"
                    ", boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::alloca"
                    "tor<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio"
                    "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::as"
                    "io::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator"
                    "_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::as"
                    "io::const_buffer*]");
                }
                while ( 1 )
                {
                  v10 = (unsigned __int64)&v7[1];
                  if ( *(_BYTE *)(((unsigned __int64)&v7[1] >> 3) + 0x7FFF8000) )
                    break;
                  v8 = (unsigned __int64)v7[1].self;
                  v11 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v3;
                  v10 = *(_QWORD *)v3;
                  if ( *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
                    goto LABEL_32;
                  v12 = (const boost::beast::detail::tuple_element_impl<3,boost::beast::http::chunk_crlf> *)v11->self;
                  if ( (const boost::asio::const_buffer *)v8 == &boost::beast::detail::get<2ul,boost::asio::const_buffer>(
                                                                   (const boost::beast::detail::tuple_element_impl<2,boost::asio::const_buffer> *)&v11->self->it_.buf_.1
                                                                 + 1)[1] )
                  {
                    v13 = boost::beast::detail::get<3ul,boost::beast::http::chunk_crlf>(v12 + 40);
                    v14 = boost::beast::http::chunk_crlf::begin(v13);
                    f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v11[1];
                    v15 = v11 + 4;
                    if ( *(char *)(((unsigned __int64)&v11[4] >> 3) + 0x7FFF8000) < 0 )
                    {
                      __asan_report_load1(v15);
                    }
                    else
                    {
                      boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                        LOBYTE(v11[4].self),
                        &f);
                      v15 = v11 + 1;
                      if ( !*(_BYTE *)(((unsigned __int64)&v11[1] >> 3) + 0x7FFF8000) )
                      {
                        v11[1].self = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v14;
                        v15 = v11 + 4;
                        if ( *(char *)(((unsigned __int64)&v11[4] >> 3) + 0x7FFF8000) >= 0 )
                        {
                          LOBYTE(v11[4].self) = 4;
                          boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(
                            (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)v3,
                            v16);
                          return;
                        }
LABEL_47:
                        __asan_report_store1(v15);
                        JUMPOUT(0x19BE0CB9LL);
                      }
                    }
                    __asan_report_store8();
                    goto LABEL_47;
                  }
                  v10 = v8;
                  if ( *(_WORD *)((v8 >> 3) + 0x7FFF8000) )
                    goto LABEL_33;
                  if ( *(_QWORD *)(v8 + 8) )
                    return;
LABEL_34:
                  v8 += 16LL;
                  v7[1].self = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v8;
                }
LABEL_31:
                __asan_report_load8(v10);
LABEL_32:
                __asan_report_load8(v10);
LABEL_33:
                __asan_report_load16(v10);
                goto LABEL_34;
              }
LABEL_30:
              __asan_report_load1(v10);
              goto LABEL_31;
            }
LABEL_29:
            v10 = v3;
            __asan_report_load8(v3);
            goto LABEL_30;
          }
LABEL_28:
          __asan_report_store1(v9);
          goto LABEL_29;
        }
      }
      __asan_report_store8();
      goto LABEL_28;
    }
    this = v1;
    if ( *(_WORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    if ( v1[1].self )
      break;
LABEL_11:
    v1 += 2;
    *(_QWORD *)self->it_.buf_.__data = v1;
  }
};

// Line 196: range 0000000019BDBE84-0000000019BDCEC9
void __fastcall boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment *const this)
{
  unsigned __int64 v1; // r14
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *self; // rbx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r12
  unsigned __int64 buf; // rax
  const boost::beast::detail::tuple_element_impl<3,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range> **size; // rbp
  const boost::beast::http::basic_fields<std::allocator<char> >::value_type *p_last; // rdi
  const boost::beast::detail::tuple_element_impl<3,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range> *v7; // r13
  const boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range *v8; // rax
  boost::intrusive::list_node<void*> *nodeptr; // rax
  boost::asio::const_buffer v10; // rax
  const boost::beast::http::chunk_crlf *v11; // rax
  boost::beast::http::chunk_crlf::const_iterator v12; // rbx
  _QWORD *v13; // rdi
  unsigned __int64 p_size; // rdi
  std::size_t *v15; // rdi
  std::size_t v16; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *v17; // rbx
  unsigned __int64 p_i; // rdi
  char v19; // al
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-30h] BYREF

  v1 = (unsigned __int64)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_load1(this);
LABEL_7:
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 4; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
      "o::const_buffer*, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator, const boost::as"
      "io::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::be"
      "ast::detail::variant<TN>, (I - 1)> = boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator]");
  }
  if ( self->it_.i_ != 4 )
    goto LABEL_7;
  p_it = &self->it_;
  while ( 1 )
  {
    size = *(const boost::beast::detail::tuple_element_impl<3,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range> ***)v1;
    p_last = *(const boost::beast::http::basic_fields<std::allocator<char> >::value_type **)v1;
    if ( *(_BYTE *)((*(_QWORD *)v1 >> 3) + 0x7FFF8000LL) )
    {
      __asan_report_load8(p_last);
LABEL_9:
      __asan_report_load8(p_last);
LABEL_10:
      __asan_report_load8(p_last);
LABEL_11:
      __asan_report_load8(p_last);
LABEL_12:
      __asan_handle_no_return(p_last);
      __assert_fail(
        off_1B5D9D60,
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/intrusive/detail/hook_traits.hpp",
        0x3Eu,
        "static boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer boost::intrusive::bhtraits_base<T, NodePt"
        "r, Tag, Type>::to_value_ptr(const node_ptr&) [with T = boost::beast::http::basic_fields<std::allocator<char> >::"
        "element; NodePtr = boost::intrusive::list_node<void*>*; Tag = boost::intrusive::dft_tag; unsigned int Type = 1; "
        "boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::pointer = boost::beast::http::basic_fields<std::allocato"
        "r<char> >::element*; boost::intrusive::bhtraits_base<T, NodePtr, Tag, Type>::node_ptr = boost::intrusive::list_node<void*>*]");
    }
    v7 = *size;
    v8 = boost::beast::detail::get<3ul,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range>(*size + 3);
    p_last = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&v8->last_;
    if ( *(_BYTE *)(((unsigned __int64)&v8->last_ >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    nodeptr = v8->last_.it_.members_.nodeptr_;
    p_last = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    if ( (boost::intrusive::list_node<void*> *)self->it_.buf_ == nodeptr )
      goto LABEL_25;
    p_last = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    p_last = (const boost::beast::http::basic_fields<std::allocator<char> >::value_type *)p_it->buf_;
    if ( !*(_QWORD *)&p_it->buf_ )
      goto LABEL_12;
    v10 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::buffer(p_last + 8);
    if ( v10.size_ )
      return;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
    {
      buf = __asan_report_load8(&self->it_);
      goto LABEL_14;
    }
    buf = (unsigned __int64)self->it_.buf_;
    if ( *(_BYTE *)((buf >> 3) + 0x7FFF8000) )
      break;
LABEL_14:
    self->it_.buf_ = *(boost::beast::detail::aligned_union_t_2 *)buf;
  }
  __asan_report_load8(*(_QWORD *)&self->it_.buf_);
LABEL_25:
  v11 = boost::beast::detail::get<4ul,boost::beast::http::chunk_crlf>((const boost::beast::detail::tuple_element_impl<4,boost::beast::http::chunk_crlf> *)&v7[4]);
  v12 = boost::beast::http::chunk_crlf::begin(v11);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(size + 1);
  v13 = size + 2;
  if ( *(char *)(((unsigned __int64)(size + 2) >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(v13);
    goto LABEL_33;
  }
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *((unsigned __int8 *)size + 16),
    &f);
  v13 = size + 1;
  if ( *(_BYTE *)(((unsigned __int64)(size + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_store8();
    goto LABEL_34;
  }
  size[1] = (const boost::beast::detail::tuple_element_impl<3,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range> *)v12;
  v13 = size + 2;
  if ( *(char *)(((unsigned __int64)(size + 2) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_34:
    __asan_report_store1(v13);
    goto LABEL_35;
  }
  *((_BYTE *)size + 16) = 5;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    p_size = v1;
    __asan_report_load8(v1);
    goto LABEL_36;
  }
  v12 = *(boost::beast::http::chunk_crlf::const_iterator *)v1;
  p_size = *(_QWORD *)v1 + 16LL;
  if ( *(char *)((p_size >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_36:
    __asan_report_load1(p_size);
    goto LABEL_37;
  }
  if ( LOBYTE(v12[1].data_) != 5 )
  {
    __asan_handle_no_return(p_size);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 5; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
      "o::const_buffer*, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator, const boost::as"
      "io::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::be"
      "ast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
  }
  while ( 1 )
  {
    p_size = (unsigned __int64)&v12->size_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->size_ >> 3) + 0x7FFF8000) )
    {
LABEL_37:
      __asan_report_load8(p_size);
LABEL_38:
      boost::beast::http::chunk_crlf::begin(void)const::cb[0] = "\r\n";
      boost::beast::http::chunk_crlf::begin(void)const::cb[1] = 2LL;
      __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
      goto LABEL_39;
    }
    size = (const boost::beast::detail::tuple_element_impl<3,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range> **)v12->size_;
    if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
      && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
    {
      goto LABEL_38;
    }
LABEL_39:
    if ( size == &boost::beast::http::chunk_crlf::begin(void)const::cb[2] )
      goto LABEL_50;
    v15 = &v12->size_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->size_ >> 3) + 0x7FFF8000) )
      break;
    v16 = v12->size_;
    v15 = (std::size_t *)v16;
    if ( *(_WORD *)((v16 >> 3) + 0x7FFF8000) )
      goto LABEL_49;
    if ( *(_QWORD *)(v16 + 8) )
      return;
    v12->size_ = v16 + 16;
  }
  __asan_report_load8(v15);
LABEL_49:
  __asan_report_load16(v15);
LABEL_50:
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
    p_i = v1;
    __asan_report_load8(v1);
    goto LABEL_58;
  }
  v17 = *(boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator **)v1;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(*(_QWORD *)v1 + 8LL);
  p_i = (unsigned __int64)&v17->it_.i_;
  if ( *(char *)(((unsigned __int64)&v17->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_58:
    __asan_report_load1(p_i);
LABEL_59:
    __asan_report_store1(p_i);
    goto LABEL_60;
  }
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v17->it_.i_,
    &f);
  p_i = (unsigned __int64)&v17->it_;
  v19 = *(_BYTE *)(((unsigned __int64)&v17->it_ >> 3) + 0x7FFF8000);
  if ( v19 <= (((unsigned __int8)v17 + 8) & 7) && v19 )
    goto LABEL_59;
  v17->it_.buf_.__data[0] = 0;
  p_i = (unsigned __int64)&v17->it_.i_;
  if ( *(char *)(((unsigned __int64)&v17->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_60:
    __asan_report_store1(p_i);
    JUMPOUT(0x19BDC263LL);
  }
  v17->it_.i_ = 6;
};

// Line 196: range 0000000019BDF968-0000000019BE0603
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<5ul>(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        boost::mp11::mp_size_t_3 a7)
{
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v7; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *self; // r12
  unsigned __int64 v9; // r13
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v10; // rbp
  const boost::beast::detail::tuple_element_impl<4,boost::asio::const_buffer> *v11; // r14
  const boost::beast::http::chunk_crlf *v12; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v13; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v14; // rdi
  unsigned __int64 v15; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v16; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v17; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v18; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v19; // rdi
  char v20; // al
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-30h] BYREF

  v9 = (unsigned __int64)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_load1(this);
    goto LABEL_7;
  }
  if ( self->it_.i_ != 5 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 5; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const"
      " boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::det"
      "ail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> ="
      " const boost::asio::const_buffer*]");
  }
  while ( 1 )
  {
    this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(this);
LABEL_8:
      __asan_report_load8(this);
LABEL_9:
      __asan_report_load16(this);
      goto LABEL_10;
    }
    v7 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)self->it_.buf_.__data;
    v10 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v9;
    this = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const *)v9;
    if ( *(_BYTE *)((*(_QWORD *)v9 >> 3) + 0x7FFF8000LL) )
      goto LABEL_8;
    v11 = (const boost::beast::detail::tuple_element_impl<4,boost::asio::const_buffer> *)v10->self;
    if ( v7 == (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)&boost::beast::detail::get<4ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<4,boost::asio::const_buffer> *)&v10->self[1].it_)[1] )
      break;
    this = v7;
    if ( *(_WORD *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    if ( v7[1].self )
      return;
LABEL_10:
    v7 += 2;
    *(_QWORD *)self->it_.buf_.__data = v7;
  }
  v12 = boost::beast::detail::get<5ul,boost::beast::http::chunk_crlf>((const boost::beast::detail::tuple_element_impl<5,boost::beast::http::chunk_crlf> *)&v11[4]);
  v13 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)boost::beast::http::chunk_crlf::begin(v12);
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v10[1];
  v14 = v10 + 4;
  if ( *(char *)(((unsigned __int64)&v10[4] >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(v14);
    goto LABEL_25;
  }
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    LOBYTE(v10[4].self),
    &f);
  v14 = v10 + 1;
  if ( *(_BYTE *)(((unsigned __int64)&v10[1] >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  v10[1].self = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v13;
  v14 = v10 + 4;
  if ( *(char *)(((unsigned __int64)&v10[4] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    __asan_report_store1(v14);
    goto LABEL_27;
  }
  LOBYTE(v10[4].self) = 6;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    v15 = v9;
    __asan_report_load8(v9);
    goto LABEL_28;
  }
  v13 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v9;
  v15 = *(_QWORD *)v9 + 32LL;
  if ( *(char *)((v15 >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_28:
    __asan_report_load1(v15);
    goto LABEL_29;
  }
  if ( LOBYTE(v13[4].self) != 6 )
  {
    __asan_handle_no_return(v15);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 6; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const"
      " boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::det"
      "ail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> ="
      " const boost::asio::const_buffer*]");
  }
  while ( 1 )
  {
    v15 = (unsigned __int64)&v13[1];
    if ( *(_BYTE *)(((unsigned __int64)&v13[1] >> 3) + 0x7FFF8000) )
    {
LABEL_29:
      __asan_report_load8(v15);
    }
    else
    {
      v10 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)v13[1].self;
      if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
        && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
      {
        boost::beast::http::chunk_crlf::begin(void)const::cb[0] = "\r\n";
        boost::beast::http::chunk_crlf::begin(void)const::cb[1] = 2LL;
        __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
      }
    }
    if ( v10 == (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)&boost::beast::http::chunk_crlf::begin(void)const::cb[2] )
      break;
    v16 = v13 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v13[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v16);
LABEL_40:
      __asan_report_load16(v16);
      break;
    }
    v17 = v13[1].self;
    v16 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)v17;
    if ( *(_WORD *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      goto LABEL_40;
    if ( *(_QWORD *)v17->it_.buf_.__data )
      return;
    v13[1].self = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(&v17->it_.buf_.1 + 1);
  }
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
    v19 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)v9;
    __asan_report_load8(v9);
    goto LABEL_48;
  }
  v18 = *(boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v9;
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(*(_QWORD *)v9 + 8LL);
  v19 = v18 + 4;
  if ( *(char *)(((unsigned __int64)&v18[4] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_48:
    __asan_report_load1(v19);
LABEL_49:
    __asan_report_store1(v19);
    goto LABEL_50;
  }
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    LOBYTE(v18[4].self),
    &f);
  v19 = v18 + 1;
  v20 = *(_BYTE *)(((unsigned __int64)&v18[1] >> 3) + 0x7FFF8000);
  if ( v20 <= (((unsigned __int8)v18 + 8) & 7) && v20 )
    goto LABEL_49;
  LOBYTE(v18[1].self) = 0;
  v19 = v18 + 4;
  if ( *(char *)(((unsigned __int64)&v18[4] >> 3) + 0x7FFF8000) >= 0 )
  {
    LOBYTE(v18[4].self) = 7;
    return;
  }
LABEL_50:
  __asan_report_store1(v19);
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(
    v19,
    (boost::mp11::mp_size_t_0)a7.gap0[0]);
};

// Line 196: range 0000000019BE5588-0000000019BE5CEC
void __fastcall boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<1ul>(
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const this)
{
  unsigned __int64 buf; // rbx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *self; // r12
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **v3; // r13
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v4; // rbp
  const boost::beast::detail::tuple_element_impl<0,boost::beast::http::detail::chunk_size> *v5; // r14
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v6; // rax
  const boost::asio::const_buffer *v7; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v8; // rdi
  unsigned __int64 v9; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v10; // r12
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v11; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v12; // rbx
  const boost::beast::http::chunk_crlf *v13; // rax
  boost::beast::http::chunk_crlf::const_iterator v14; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v15; // rdi
  boost::mp11::mp_size_t v16; // [rsp+0h] [rbp-28h]

  v3 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_load1(this);
    goto LABEL_7;
  }
  if ( self->it_.i_ != 1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 1; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
      "o::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buf"
      "fer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_i"
      "terator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
  }
  while ( 1 )
  {
    this = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(this);
LABEL_8:
      __asan_report_load8(this);
LABEL_9:
      __asan_report_load8(this);
LABEL_10:
      __asan_report_load16(this);
      goto LABEL_11;
    }
    buf = (unsigned __int64)self->it_.buf_;
    v4 = *v3;
    this = *v3;
    if ( *(_BYTE *)(((unsigned __int64)*v3 >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    v5 = (const boost::beast::detail::tuple_element_impl<0,boost::beast::http::detail::chunk_size> *)v4->self;
    v6 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)boost::beast::detail::get<0ul,boost::beast::http::detail::chunk_size>((const boost::beast::detail::tuple_element_impl<0,boost::beast::http::detail::chunk_size> *)v4->self);
    this = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    if ( (unsigned __int8 *)buf == &v6->self->it_.i_ )
      break;
    this = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)buf;
    if ( *(_WORD *)((buf >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    if ( *(_QWORD *)(buf + 8) )
      return;
LABEL_11:
    buf += 16LL;
    self->it_.buf_ = (boost::beast::detail::aligned_union_t_5)buf;
  }
  v7 = boost::beast::detail::get<1ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> *)&v5[1]);
  v8 = v4 + 2;
  if ( *(char *)(((unsigned __int64)&v4[2] >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(v8);
LABEL_31:
    __asan_handle_no_return(v8);
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
  if ( LOBYTE(v4[2].self) > 9u )
    goto LABEL_31;
  v9 = (unsigned __int64)&v4[1];
  if ( *(_BYTE *)(((unsigned __int64)&v4[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_33;
  }
  v4[1].self = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v7;
  LOBYTE(v4[2].self) = 2;
  v10 = *v3;
  v9 = (unsigned __int64)&(*v3)[2];
  if ( *(char *)((v9 >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_33:
    __asan_report_load1(v9);
LABEL_34:
    __asan_handle_no_return(v9);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 2; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
      "o::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buf"
      "fer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_i"
      "terator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
  }
  if ( LOBYTE(v10[2].self) != 2 )
    goto LABEL_34;
  while ( 1 )
  {
    v11 = v10 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v10[1] >> 3) + 0x7FFF8000) )
      break;
    v12 = v10[1].self;
    v4 = *v3;
    v11 = *v3;
    if ( *(_BYTE *)(((unsigned __int64)*v3 >> 3) + 0x7FFF8000) )
      goto LABEL_36;
    v5 = (const boost::beast::detail::tuple_element_impl<0,boost::beast::http::detail::chunk_size> *)v4->self;
    if ( v12 == (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&boost::beast::detail::get<1ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> *)&v4->self->it_.i_)[1] )
      goto LABEL_38;
    v11 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)v12;
    if ( *(_WORD *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      goto LABEL_37;
    if ( v12->it_.buf_ )
      return;
    v10[1].self = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&v12->it_.i_;
  }
  __asan_report_load8(v11);
LABEL_36:
  __asan_report_load8(v11);
LABEL_37:
  __asan_report_load16(v11);
LABEL_38:
  v13 = boost::beast::detail::get<2ul,boost::beast::http::chunk_crlf>((const boost::beast::detail::tuple_element_impl<2,boost::beast::http::chunk_crlf> *)&v5[2]);
  v14 = boost::beast::http::chunk_crlf::begin(v13);
  v15 = v4 + 2;
  if ( *(char *)(((unsigned __int64)&v4[2] >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(v15);
LABEL_43:
    __asan_handle_no_return(v15);
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
  if ( LOBYTE(v4[2].self) > 9u )
    goto LABEL_43;
  if ( *(_BYTE *)(((unsigned __int64)&v4[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    JUMPOUT(0x19BE5877LL);
  }
  v4[1].self = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v14;
  LOBYTE(v4[2].self) = 3;
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<3ul>(
    (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)v3,
    v16);
};

// Line 196: range 0000000019BD4066-0000000019BD4EED
void __fastcall boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<4ul>(
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        boost::mp11::mp_size_t_0 a7)
{
  boost::beast::detail::aligned_union_t_4 buf; // rbx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *self; // r12
  unsigned __int64 v9; // r13
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v10; // rbp
  const boost::beast::detail::tuple_element_impl<4,boost::beast::http::chunk_crlf> *v11; // r14
  const boost::beast::http::chunk_crlf *v12; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v13; // rbx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v14; // rdi
  unsigned __int64 v15; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v16; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v17; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v18; // rbx
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v19; // rdi
  char v20; // al
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-30h] BYREF

  v9 = (unsigned __int64)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_load1(this);
    goto LABEL_7;
  }
  if ( self->it_.i_ != 4 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 4; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
      "o::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffer"
      "s_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boos"
      "t::asio::const_buffer*]");
  }
  while ( 1 )
  {
    this = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(this);
LABEL_8:
      __asan_report_load8(this);
LABEL_9:
      __asan_report_load16(this);
      goto LABEL_10;
    }
    buf = self->it_.buf_;
    v10 = *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v9;
    this = *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const *)v9;
    if ( *(_BYTE *)((*(_QWORD *)v9 >> 3) + 0x7FFF8000LL) )
      goto LABEL_8;
    v11 = (const boost::beast::detail::tuple_element_impl<4,boost::beast::http::chunk_crlf> *)v10->self;
    if ( (const boost::asio::const_buffer *)buf == &boost::beast::detail::get<3ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<3,boost::asio::const_buffer> *)&v10->self[1].it_.i_)[1] )
      break;
    this = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)buf;
    if ( *(_WORD *)((*(_QWORD *)&buf >> 3) + 0x7FFF8000LL) )
      goto LABEL_9;
    if ( *(_QWORD *)(*(_QWORD *)&buf + 8LL) )
      return;
LABEL_10:
    *(_QWORD *)&buf += 16LL;
    self->it_.buf_ = buf;
  }
  v12 = boost::beast::detail::get<4ul,boost::beast::http::chunk_crlf>(v11 + 56);
  v13 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)boost::beast::http::chunk_crlf::begin(v12);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v10[1];
  v14 = v10 + 2;
  if ( *(char *)(((unsigned __int64)&v10[2] >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(v14);
    goto LABEL_25;
  }
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    LOBYTE(v10[2].self),
    &f);
  v14 = v10 + 1;
  if ( *(_BYTE *)(((unsigned __int64)&v10[1] >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  v10[1].self = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)v13;
  v14 = v10 + 2;
  if ( *(char *)(((unsigned __int64)&v10[2] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    __asan_report_store1(v14);
    goto LABEL_27;
  }
  LOBYTE(v10[2].self) = 5;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    v15 = v9;
    __asan_report_load8(v9);
    goto LABEL_28;
  }
  v13 = *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v9;
  v15 = *(_QWORD *)v9 + 16LL;
  if ( *(char *)((v15 >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_28:
    __asan_report_load1(v15);
    goto LABEL_29;
  }
  if ( LOBYTE(v13[2].self) != 5 )
  {
    __asan_handle_no_return(v15);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 5; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
      "o::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffer"
      "s_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boos"
      "t::asio::const_buffer*]");
  }
  while ( 1 )
  {
    v15 = (unsigned __int64)&v13[1];
    if ( *(_BYTE *)(((unsigned __int64)&v13[1] >> 3) + 0x7FFF8000) )
    {
LABEL_29:
      __asan_report_load8(v15);
    }
    else
    {
      v10 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)v13[1].self;
      if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
        && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
      {
        boost::beast::http::chunk_crlf::begin(void)const::cb[0] = "\r\n";
        boost::beast::http::chunk_crlf::begin(void)const::cb[1] = 2LL;
        __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
      }
    }
    if ( v10 == (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)&boost::beast::http::chunk_crlf::begin(void)const::cb[2] )
      break;
    v16 = v13 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v13[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v16);
LABEL_40:
      __asan_report_load16(v16);
      break;
    }
    v17 = v13[1].self;
    v16 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)v17;
    if ( *(_WORD *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      goto LABEL_40;
    if ( v17->it_.buf_ )
      return;
    v13[1].self = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)&v17->it_.i_;
  }
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
    v19 = (boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)v9;
    __asan_report_load8(v9);
    goto LABEL_48;
  }
  v18 = *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment **)v9;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(*(_QWORD *)v9 + 8LL);
  v19 = v18 + 2;
  if ( *(char *)(((unsigned __int64)&v18[2] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_48:
    __asan_report_load1(v19);
LABEL_49:
    __asan_report_store1(v19);
    goto LABEL_50;
  }
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    LOBYTE(v18[2].self),
    &f);
  v19 = v18 + 1;
  v20 = *(_BYTE *)(((unsigned __int64)&v18[1] >> 3) + 0x7FFF8000);
  if ( v20 <= (((unsigned __int8)v18 + 8) & 7) && v20 )
    goto LABEL_49;
  LOBYTE(v18[1].self) = 0;
  v19 = v18 + 2;
  if ( *(char *)(((unsigned __int64)&v18[2] >> 3) + 0x7FFF8000) >= 0 )
  {
    LOBYTE(v18[2].self) = 6;
    return;
  }
LABEL_50:
  __asan_report_store1(v19);
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next<3ul>(
    v19,
    (boost::mp11::mp_size_t)a7.gap0[0]);
};

// Line 223: range 0000000019BE6A7C-0000000019BE80F5
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment::next(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const this)
{
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *self; // rbx
  _QWORD *v2; // r12
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *v3; // rbp
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rdi
  unsigned __int64 v5; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *v6; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *p_i; // rdi
  char v8; // al
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-20h] BYREF

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_load1(this);
    goto LABEL_7;
  }
  if ( self->it_.i_ != 9 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 9; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const"
      " boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio"
      "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers"
      "_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost"
      "::asio::const_buffer*]");
  }
  while ( 1 )
  {
    this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *const)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(this);
LABEL_8:
      boost::beast::http::chunk_crlf::begin(void)const::cb[0] = "\r\n";
      boost::beast::http::chunk_crlf::begin(void)const::cb[1] = 2LL;
      __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
      goto LABEL_9;
    }
    v2 = *(_QWORD **)self->it_.buf_.__data;
    if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
      && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
    {
      goto LABEL_8;
    }
LABEL_9:
    if ( v2 == &boost::beast::http::chunk_crlf::begin(void)const::cb[2] )
      goto LABEL_20;
    p_it = &self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
      break;
    v5 = *(_QWORD *)self->it_.buf_.__data;
    p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v5;
    if ( *(_WORD *)((v5 >> 3) + 0x7FFF8000) )
      goto LABEL_19;
    if ( *(_QWORD *)(v5 + 8) )
      return;
    *(_QWORD *)self->it_.buf_.__data = v5 + 16;
  }
  __asan_report_load8(p_it);
LABEL_19:
  __asan_report_load16(p_it);
LABEL_20:
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    p_i = v3;
    __asan_report_load8(v3);
    goto LABEL_28;
  }
  v6 = v3->self;
  f.self = &v3->self->it_;
  p_i = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)&v6->it_.i_;
  if ( *(char *)(((unsigned __int64)&v6->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_28:
    __asan_report_load1(p_i);
LABEL_29:
    __asan_report_store1(p_i);
    goto LABEL_30;
  }
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v6->it_.i_,
    &f);
  p_i = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)&v6->it_;
  v8 = *(_BYTE *)(((unsigned __int64)&v6->it_ >> 3) + 0x7FFF8000);
  if ( v8 <= (((unsigned __int8)v6 + 8) & 7) && v8 )
    goto LABEL_29;
  v6->it_.buf_.__data[0] = 0;
  p_i = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::increment *)&v6->it_.i_;
  if ( *(char *)(((unsigned __int64)&v6->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_30:
    __asan_report_store1(p_i);
    JUMPOUT(0x19BE6C57LL);
  }
  v6->it_.i_ = 10;
};

// Line 243: range 0000000019BDD5F8-0000000019BDDB6D
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::increment::next<1ul>(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::increment *const this)
{
  const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **v1; // r13
  unsigned __int64 v2; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *self; // r12
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *i; // r12
  const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **v5; // rdi
  const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **v6; // rax
  unsigned int v7; // eax
  unsigned __int64 v8; // rbp
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v9; // rax
  const boost::asio::const_buffer *v10; // r12
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *v11; // rdi
  unsigned __int64 v12; // rdi
  const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **v13; // r12
  const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **v14; // rdi
  char v15; // al
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-50h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator other; // [rsp+10h] [rbp-48h] BYREF

  v2 = (unsigned __int64)this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_6;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::increment *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_6:
    __asan_report_load1(this);
LABEL_7:
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 1; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_"
      "iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = boost::beast::buffers"
      "_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::bas"
      "ic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator]");
  }
  if ( self->it_.i_ != 1 )
    goto LABEL_7;
  for ( i = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)&self->it_;
        ;
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator++(i) )
  {
    v5 = (const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **)v2;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v2);
LABEL_9:
      __asan_report_load8(v5);
LABEL_10:
      __asan_report_load8(v5);
      continue;
    }
    v5 = *(const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > ***)v2;
    if ( *(_BYTE *)((*(_QWORD *)v2 >> 3) + 0x7FFF8000LL) )
      goto LABEL_9;
    v6 = (const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **)boost::beast::detail::get<0ul,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>(**(const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > ***)v2);
    v5 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::end(
      &other,
      (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *const)*v6);
    LOBYTE(v7) = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                   i,
                   &other);
    v8 = v7;
    f.self = &other.it_;
    boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      other.it_.i_,
      &f);
    if ( (_BYTE)v8 )
    {
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v2);
      }
      else
      {
        v8 = *(_QWORD *)v2;
        v1 = (const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **)(*(_QWORD *)v2 + 8LL);
        if ( !*(_BYTE *)((*(_QWORD *)v2 >> 3) + 0x7FFF8000LL) )
        {
          v10 = boost::beast::detail::get<1ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> *)(*(_QWORD *)v8 + 8LL));
          f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v1;
          v11 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(v8 + 32);
          if ( *(char *)(((v8 + 32) >> 3) + 0x7FFF8000) >= 0 )
          {
            boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
              *(unsigned __int8 *)(v8 + 32),
              (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
            v11 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(v8 + 8);
            if ( !*(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v8 + 8) = v10;
              v11 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(v8 + 32);
              if ( *(char *)(((v8 + 32) >> 3) + 0x7FFF8000) >= 0 )
              {
                *(_BYTE *)(v8 + 32) = 2;
                if ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                {
                  v1 = *(const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > ***)v2;
                  v12 = *(_QWORD *)v2 + 32LL;
                  if ( *(char *)((v12 >> 3) + 0x7FFF8000) >= 0 )
                  {
                    if ( *((_BYTE *)v1 + 32) != 2 )
                    {
                      __asan_handle_no_return(v12);
                      __assert_fail(
                        "i_ == I",
                        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast"
                        "/core/detail/variant.hpp",
                        0xD2u,
                        "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<"
                        "TN>::get() [with long unsigned int I = 2; TN = {boost::beast::buffers_cat_view<boost::asio::cons"
                        "t_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields"
                        "<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, c"
                        "onst boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end}"
                        "; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
                    }
                    while ( 1 )
                    {
                      v12 = (unsigned __int64)(v1 + 1);
                      if ( *(_BYTE *)(((unsigned __int64)(v1 + 1) >> 3) + 0x7FFF8000) )
                        break;
                      v8 = (unsigned __int64)v1[1];
                      v13 = *(const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > ***)v2;
                      v12 = *(_QWORD *)v2;
                      if ( *(_BYTE *)((*(_QWORD *)v2 >> 3) + 0x7FFF8000LL) )
                        goto LABEL_35;
                      if ( (const boost::asio::const_buffer *)v8 == &boost::beast::detail::get<1ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> *)&(*v13)[1])[1] )
                      {
                        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v13 + 1);
                        v14 = v13 + 4;
                        if ( *(char *)(((unsigned __int64)(v13 + 4) >> 3) + 0x7FFF8000) < 0 )
                        {
                          __asan_report_load1(v14);
                        }
                        else
                        {
                          boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                            *((unsigned __int8 *)v13 + 32),
                            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
                          v14 = v13 + 1;
                          v15 = *(_BYTE *)(((unsigned __int64)(v13 + 1) >> 3) + 0x7FFF8000);
                          if ( v15 > (((unsigned __int8)v13 + 8) & 7) || !v15 )
                          {
                            *((_BYTE *)v13 + 8) = 0;
                            v14 = v13 + 4;
                            if ( *(char *)(((unsigned __int64)(v13 + 4) >> 3) + 0x7FFF8000) >= 0 )
                            {
                              *((_BYTE *)v13 + 32) = 3;
                              return;
                            }
LABEL_51:
                            __asan_report_store1(v14);
                            JUMPOUT(0x19BDD94FLL);
                          }
                        }
                        __asan_report_store1(v14);
                        goto LABEL_51;
                      }
                      v12 = v8;
                      if ( *(_WORD *)((v8 >> 3) + 0x7FFF8000) )
                        goto LABEL_36;
                      if ( *(_QWORD *)(v8 + 8) )
                        return;
LABEL_37:
                      v8 += 16LL;
                      v1[1] = (const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *)v8;
                    }
LABEL_34:
                    __asan_report_load8(v12);
LABEL_35:
                    __asan_report_load8(v12);
LABEL_36:
                    __asan_report_load16(v12);
                    goto LABEL_37;
                  }
LABEL_33:
                  __asan_report_load1(v12);
                  goto LABEL_34;
                }
LABEL_32:
                v12 = v2;
                __asan_report_load8(v2);
                goto LABEL_33;
              }
LABEL_31:
              __asan_report_store1(v11);
              goto LABEL_32;
            }
LABEL_30:
            __asan_report_store8();
            goto LABEL_31;
          }
LABEL_29:
          __asan_report_load1(v11);
          goto LABEL_30;
        }
      }
      v11 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)v8;
      __asan_report_load8(v8);
      goto LABEL_29;
    }
    v9 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(i);
    if ( v9.size_ )
      break;
  }
};

// Line 281: range 0000000019C2A080-0000000019C2BE88
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement::operator()<2ul>(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement *const this)
{
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement v1; // rbp
  const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *bn; // r14
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement *v3; // r13
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *self; // r12
  const boost::beast::http::detail::chunk_size *p_it; // rdi
  std::__shared_ptr<boost::beast::http::detail::chunk_size::sequence,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rbx
  const boost::beast::http::detail::chunk_size *v7; // rax
  boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *v8; // rax
  unsigned __int8 *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v10; // rdi
  boost::mp11::mp_size_t_5 v11; // [rsp+0h] [rbp-68h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-60h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v13; // [rsp+10h] [rbp-58h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator v14; // [rsp+20h] [rbp-48h] BYREF

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_12;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_12:
    __asan_report_load1(this);
LABEL_13:
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 2; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const"
      " boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio"
      "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers"
      "_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost"
      "::asio::const_buffer*]");
  }
  if ( self->it_.i_ != 2 )
    goto LABEL_13;
  while ( 1 )
  {
    p_it = (const boost::beast::http::detail::chunk_size *)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
      break;
    v6 = *(std::__shared_ptr<boost::beast::http::detail::chunk_size::sequence,(__gnu_cxx::_Lock_policy)2>::element_type **)self->it_.buf_.__data;
    v1.self = v3->self;
    p_it = (const boost::beast::http::detail::chunk_size *)v3->self;
    if ( *(_BYTE *)(((unsigned __int64)v3->self >> 3) + 0x7FFF8000) )
      goto LABEL_15;
    bn = v1.self->bn_;
    v7 = boost::beast::detail::get<1ul,boost::beast::http::detail::chunk_size>(&v1.self->bn_->boost::beast::detail::tuple_element_impl<1,boost::beast::http::detail::chunk_size>);
    p_it = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      goto LABEL_16;
    if ( v6 == v7->sp_._M_ptr )
      goto LABEL_18;
    *(_QWORD *)self->it_.buf_.__data = (char *)v6 - 16;
    p_it = (const boost::beast::http::detail::chunk_size *)&v6[-1].data[8];
    if ( *(_WORD *)(((unsigned __int64)&v6[-1].data[8] >> 3) + 0x7FFF8000) )
      goto LABEL_17;
    if ( *(_QWORD *)&v6[-1].data[16] )
      return;
  }
  __asan_report_load8(p_it);
LABEL_15:
  __asan_report_load8(p_it);
LABEL_16:
  __asan_report_load8(p_it);
LABEL_17:
  __asan_report_load16(p_it);
LABEL_18:
  v8 = (boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *)boost::beast::detail::get<0ul,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>(bn);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    p_i = (unsigned __int8 *)v8;
    __asan_report_load8(v8);
    goto LABEL_26;
  }
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::end(
    &v14,
    v8->buffers_);
  f.self = &v1.self->it_;
  p_i = &v1.self->it_.i_;
  if ( *(char *)(((unsigned __int64)&v1.self->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    __asan_report_load1(p_i);
    goto LABEL_27;
  }
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v1.self->it_.i_,
    &f);
  p_i = &v1.self->it_.i_;
  if ( *(char *)(((unsigned __int64)&v1.self->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_27:
    __asan_report_store1(p_i);
    goto LABEL_28;
  }
  v1.self->it_.i_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&v1.self->it_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    v10 = &v1.self->it_;
    __asan_report_store8();
    goto LABEL_29;
  }
  *(_QWORD *)v1.self->it_.buf_.__data = v14.bn_;
  v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v1.self->it_.buf_.1 + 2);
  if ( *(char *)(((unsigned __int64)(&v1.self->it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_29:
    __asan_report_store1(v10);
    goto LABEL_30;
  }
  v1.self->it_.buf_.__data[16] = 0;
  v13.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v1.self->it_.buf_.1 + 1);
  v13.other = &v14.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v14.it_.i_,
    &v13);
  v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v1.self->it_.i_;
  if ( *(char *)(((unsigned __int64)&v1.self->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_30:
    __asan_report_store1(v10);
    JUMPOUT(0x19C2A2E5LL);
  }
  v1.self->it_.i_ = 1;
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v14.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v14.it_.i_,
    (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement::operator()(
    v3,
    v11);
};

// Line 281: range 0000000019C20034-0000000019C215C2
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement::operator()<2ul>(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement *const this)
{
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement v1; // rbp
  const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *bn; // r14
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement *v3; // r13
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *self; // r12
  const boost::beast::http::detail::chunk_size *p_it; // rdi
  std::__shared_ptr<boost::beast::http::detail::chunk_size::sequence,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rbx
  const boost::beast::http::detail::chunk_size *v7; // rax
  boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *v8; // rax
  unsigned __int8 *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v10; // rdi
  boost::mp11::mp_size_t_5 v11; // [rsp+0h] [rbp-68h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-60h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v13; // [rsp+10h] [rbp-58h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator v14; // [rsp+20h] [rbp-48h] BYREF

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_12;
  }
  self = this->self;
  this = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement *const)&this->self->it_.i_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_12:
    __asan_report_load1(this);
LABEL_13:
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 2; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const"
      " boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::det"
      "ail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> ="
      " const boost::asio::const_buffer*]");
  }
  if ( self->it_.i_ != 2 )
    goto LABEL_13;
  while ( 1 )
  {
    p_it = (const boost::beast::http::detail::chunk_size *)&self->it_;
    if ( *(_BYTE *)(((unsigned __int64)&self->it_ >> 3) + 0x7FFF8000) )
      break;
    v6 = *(std::__shared_ptr<boost::beast::http::detail::chunk_size::sequence,(__gnu_cxx::_Lock_policy)2>::element_type **)self->it_.buf_.__data;
    v1.self = v3->self;
    p_it = (const boost::beast::http::detail::chunk_size *)v3->self;
    if ( *(_BYTE *)(((unsigned __int64)v3->self >> 3) + 0x7FFF8000) )
      goto LABEL_15;
    bn = v1.self->bn_;
    v7 = boost::beast::detail::get<1ul,boost::beast::http::detail::chunk_size>(&v1.self->bn_->boost::beast::detail::tuple_element_impl<1,boost::beast::http::detail::chunk_size>);
    p_it = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      goto LABEL_16;
    if ( v6 == v7->sp_._M_ptr )
      goto LABEL_18;
    *(_QWORD *)self->it_.buf_.__data = (char *)v6 - 16;
    p_it = (const boost::beast::http::detail::chunk_size *)&v6[-1].data[8];
    if ( *(_WORD *)(((unsigned __int64)&v6[-1].data[8] >> 3) + 0x7FFF8000) )
      goto LABEL_17;
    if ( *(_QWORD *)&v6[-1].data[16] )
      return;
  }
  __asan_report_load8(p_it);
LABEL_15:
  __asan_report_load8(p_it);
LABEL_16:
  __asan_report_load8(p_it);
LABEL_17:
  __asan_report_load16(p_it);
LABEL_18:
  v8 = (boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *)boost::beast::detail::get<0ul,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>(bn);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    p_i = (unsigned __int8 *)v8;
    __asan_report_load8(v8);
    goto LABEL_26;
  }
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::end(
    &v14,
    v8->buffers_);
  f.self = &v1.self->it_;
  p_i = &v1.self->it_.i_;
  if ( *(char *)(((unsigned __int64)&v1.self->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    __asan_report_load1(p_i);
    goto LABEL_27;
  }
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v1.self->it_.i_,
    &f);
  p_i = &v1.self->it_.i_;
  if ( *(char *)(((unsigned __int64)&v1.self->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_27:
    __asan_report_store1(p_i);
    goto LABEL_28;
  }
  v1.self->it_.i_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&v1.self->it_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    v10 = &v1.self->it_;
    __asan_report_store8();
    goto LABEL_29;
  }
  *(_QWORD *)v1.self->it_.buf_.__data = v14.bn_;
  v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v1.self->it_.buf_.1 + 2);
  if ( *(char *)(((unsigned __int64)(&v1.self->it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_29:
    __asan_report_store1(v10);
    goto LABEL_30;
  }
  v1.self->it_.buf_.__data[16] = 0;
  v13.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v1.self->it_.buf_.1 + 1);
  v13.other = &v14.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v14.it_.i_,
    &v13);
  v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v1.self->it_.i_;
  if ( *(char *)(((unsigned __int64)&v1.self->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_30:
    __asan_report_store1(v10);
    JUMPOUT(0x19C20299LL);
  }
  v1.self->it_.i_ = 1;
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v14.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v14.it_.i_,
    (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::decrement::operator()(
    v3,
    v11);
};

// Line 314: range 0000000019BD2BDA-0000000019BD2C89
void __fastcall boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::const_iterator(
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const this,
        const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *bn)
{
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  unsigned __int8 *p_i; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v4; // rax
  char v5; // dl
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *v6; // rdi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_8;
  }
  this->bn_ = &bn->bn_;
  p_it = &this->it_;
  if ( *(_WORD *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store16(p_it);
    goto LABEL_9;
  }
  this->it_.buf_ = 0LL;
  *(_QWORD *)&this->it_.i_ = 0LL;
  p_i = &this->it_.i_;
  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_9:
    v4 = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)__asan_report_store1(p_i);
    goto LABEL_10;
  }
  this->it_.i_ = 0;
  v4 = &this->it_;
  v5 = *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000);
  if ( v5 > (((unsigned __int8)this + 8) & 7) || !v5 )
  {
    this->it_.buf_.__data[0] = 0;
    this->it_.i_ = 6;
    return;
  }
LABEL_10:
  v6 = (boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)v4;
  __asan_report_store1(v4);
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::end(
    v6,
    bn);
};

// Line 314: range 0000000019BBD27E-0000000019BBD375
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::const_iterator(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const this,
        const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *bn)
{
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r8
  unsigned __int8 *p_i; // rdx
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v4; // rax
  char v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_9:
    __asan_report_store_n(p_it, 32LL);
    goto LABEL_10;
  }
  this->bn_ = bn;
  p_it = &this->it_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 39) & 7)
    || *(char *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_9;
  }
  *(_OWORD *)this->it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->it_.i_ = 0LL;
  p_i = &this->it_.i_;
  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_10:
    v4 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)__asan_report_store1(p_i);
    goto LABEL_11;
  }
  this->it_.i_ = 0;
  v4 = &this->it_;
  v5 = *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000);
  if ( v5 <= (((unsigned __int8)this + 8) & 7) && v5 )
  {
LABEL_11:
    __asan_report_store1(v4);
    JUMPOUT(0x19BBD367LL);
  }
  this->it_.buf_.__data[0] = 0;
  this->it_.i_ = 10;
};

// Line 314: range 0000000019BBCDEE-0000000019BBCEE5
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::const_iterator(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const this,
        const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *bn)
{
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r8
  unsigned __int8 *p_i; // rdx
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v4; // rax
  char v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_9:
    __asan_report_store_n(p_it, 32LL);
    goto LABEL_10;
  }
  this->bn_ = bn;
  p_it = &this->it_;
  if ( *(_BYTE *)(((unsigned __int64)(&this->it_.i_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(&this->it_.i_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 39) & 7)
    || *(char *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_9;
  }
  *(_OWORD *)this->it_.buf_.__data = 0uLL;
  *((_QWORD *)&this->it_.buf_.1 + 2) = 0LL;
  *(_QWORD *)&this->it_.i_ = 0LL;
  p_i = &this->it_.i_;
  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_10:
    v4 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)__asan_report_store1(p_i);
    goto LABEL_11;
  }
  this->it_.i_ = 0;
  v4 = &this->it_;
  v5 = *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000);
  if ( v5 <= (((unsigned __int8)this + 8) & 7) && v5 )
  {
LABEL_11:
    __asan_report_store1(v4);
    JUMPOUT(0x19BBCED7LL);
  }
  this->it_.buf_.__data[0] = 0;
  this->it_.i_ = 7;
};

// Line 342: range 0000000019BB46FA-0000000019BB482C
bool __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
        const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const this,
        const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *other)
{
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // r8
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v4; // r9
  unsigned __int8 i; // al
  unsigned __int8 *p_i; // rcx

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
  if ( this->bn_ != other->bn_ )
    return 0;
LABEL_7:
  p_it = &other->it_;
  v4 = &this->it_;
  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&this->it_.i_);
    goto LABEL_12;
  }
  i = this->it_.i_;
  p_i = &other->it_.i_;
  if ( *(char *)(((unsigned __int64)&other->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_12:
    this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)p_i;
    i = __asan_report_load1(p_i);
    goto LABEL_13;
  }
  if ( i != other->it_.i_ )
    return 0;
LABEL_13:
  if ( i > 3u )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 4; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::c"
      "onst_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator"
      "<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::equals; decltype (declval<F>()(declval<boost::mp1"
      "1::mp_size_t<0> >())) = bool; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_"
      "t = long unsigned int]");
  }
  if ( i == 2LL )
  {
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v4);
    }
    else if ( !*(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
    {
      return *(_QWORD *)this->it_.buf_.__data == *(_QWORD *)other->it_.buf_.__data;
    }
    __asan_report_load8(p_it);
    return 1;
  }
  if ( i > 2uLL )
    return 1;
  return !i
      || boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)v4,
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)p_it);
};

// Line 351: range 0000000019BB6C02-0000000019BB6E7C
boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference __fastcall boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(
        const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const this)
{
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v3; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v4; // rax
  unsigned __int8 *p_i; // rax

  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
    this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
    __asan_report_load1(this);
LABEL_4:
    __asan_handle_no_return(this);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 5; F = boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::cons"
      "t_buffer, boost::beast::http::chunk_crlf>::const_iterator::dereference; decltype (declval<F>()(declval<boost::mp11"
      "::mp_size_t<0> >())) = boost::asio::const_buffer; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned"
      " int, 0>; std::size_t = long unsigned int]");
  }
  switch ( this->it_.i_ )
  {
    case 0u:
      __asan_handle_no_return(this);
      __assert_fail(
        "(false)&&((\"Dereferencing a default-constructed iterator\"))",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/buffers_cat.hpp",
        0xA4u,
        "boost::beast::buffers_cat_view<Buffers>::const_iterator::reference boost::beast::buffers_cat_view<Buffers>::cons"
        "t_iterator::dereference::operator()(boost::mp11::mp_size_t<0>) [with Bn = {boost::asio::const_buffer, boost::asi"
        "o::const_buffer, boost::beast::http::chunk_crlf}; boost::beast::buffers_cat_view<Buffers>::const_iterator::refer"
        "ence = boost::asio::const_buffer; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>]");
    case 1u:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_12:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 1; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::"
          "mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 1 )
        goto LABEL_12;
      p_it = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(p_it);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_15:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_21:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 2; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::"
          "mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 2 )
        goto LABEL_21;
      v3 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v3);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_24:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_30:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 3; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::"
          "mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 3 )
        goto LABEL_30;
      v4 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v4);
        goto LABEL_32;
      }
      this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
LABEL_32:
        __asan_report_load16(this);
LABEL_33:
        p_i = &this->it_.i_;
        if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
        {
          this = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
          __asan_report_load1(p_i);
        }
        else if ( this->it_.i_ == 4 )
        {
          __asan_handle_no_return(this);
          boost::beast::detail::buffers_cat_view_iterator_base::past_end::operator*((const boost::beast::detail::buffers_cat_view_iterator_base::past_end *const)&this->it_);
        }
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 4; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::"
          "mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = boost::beast::detail::buffers_cat_view_iterator_base::past_end]");
      }
      return *(boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
    case 2u:
      goto LABEL_15;
    case 3u:
      goto LABEL_24;
    case 4u:
      goto LABEL_33;
    default:
      goto LABEL_4;
  }
};

// Line 351: range 0000000019BD3178-0000000019BD3337
boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(
        const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const this)
{
  unsigned __int64 i; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference result; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  unsigned __int8 *p_i; // rax

  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
    this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)((char *)this + 32);
    __asan_report_load1(this);
LABEL_10:
    __asan_handle_no_return(this);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 4; F = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::bea"
      "st::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast"
      "::http::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf> >, boost::asio::"
      "const_buffer>::const_iterator::dereference; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = boost"
      "::asio::const_buffer; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
  }
  i = this->it_.i_;
  if ( i > 3 )
    goto LABEL_10;
  if ( i != 2 )
  {
    if ( i <= 2 )
    {
      if ( !this->it_.i_ )
      {
        __asan_handle_no_return(this);
        __assert_fail(
          "(false)&&((\"Dereferencing a default-constructed iterator\"))",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/buffers_cat.hpp",
          0xA4u,
          "boost::beast::buffers_cat_view<Buffers>::const_iterator::reference boost::beast::buffers_cat_view<Buffers>::co"
          "nst_iterator::dereference::operator()(boost::mp11::mp_size_t<0>) [with Bn = {boost::beast::detail::buffers_ref"
          "<boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffe"
          "r, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crl"
          "f> >, boost::asio::const_buffer}; boost::beast::buffers_cat_view<Buffers>::const_iterator::reference = boost::"
          "asio::const_buffer; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>]");
      }
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
      }
      else if ( this->it_.i_ == 1 )
      {
        return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)&this->it_);
      }
      __asan_handle_no_return(this);
      __assert_fail(
        "i_ == I",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
        0xDBu,
        "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() const"
        " [with long unsigned int I = 1; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::con"
        "st_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_ran"
        "ge, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, boost::beast::detail::buf"
        "fers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = boost"
        "::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost"
        "::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator]");
    }
LABEL_23:
    p_i = &this->it_.i_;
    if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
    {
      this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)((char *)this + 32);
      __asan_report_load1(p_i);
    }
    else if ( this->it_.i_ == 3 )
    {
      __asan_handle_no_return(this);
      boost::beast::detail::buffers_cat_view_iterator_base::past_end::operator*((const boost::beast::detail::buffers_cat_view_iterator_base::past_end *const)&this->it_);
    }
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xDBu,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() const ["
      "with long unsigned int I = 3; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_b"
      "uffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, bo"
      "ost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat"
      "_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = boost::beast::d"
      "etail::buffers_cat_view_iterator_base::past_end]");
  }
  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
    this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)((char *)this + 32);
    __asan_report_load1(this);
LABEL_20:
    __asan_handle_no_return(this);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xDBu,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() const ["
      "with long unsigned int I = 2; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_b"
      "uffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, bo"
      "ost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat"
      "_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::as"
      "io::const_buffer*]");
  }
  if ( this->it_.i_ != 2 )
    goto LABEL_20;
  p_it = &this->it_;
  if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
  {
    this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)((char *)this + 8);
    __asan_report_load8(p_it);
    goto LABEL_22;
  }
  this = *(const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const *)this->it_.buf_.__data;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load16(this);
    goto LABEL_23;
  }
  result.data_ = this->bn_;
  result.size_ = *(_QWORD *)this->it_.buf_.__data;
  return result;
};

// Line 351: range 0000000019BD38D0-0000000019BD3E5B
boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(
        const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const this)
{
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference result; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v3; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v4; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v6; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v7; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v8; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v9; // rax
  unsigned __int8 *p_i; // rax

  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
    this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
    __asan_report_load1(this);
LABEL_4:
    __asan_handle_no_return(this);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 11; F = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::be"
      "ast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beas"
      "t::http::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf> >, boost::beast"
      "::http::detail::chunk_size, boost::asio::const_buffer, boost::beast::http::chunk_crlf, boost::asio::const_buffer, "
      "boost::beast::http::chunk_crlf, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::chunk_cr"
      "lf>::const_iterator::dereference; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = boost::asio::co"
      "nst_buffer; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
  }
  switch ( this->it_.i_ )
  {
    case 0u:
      __asan_handle_no_return(this);
      __assert_fail(
        "(false)&&((\"Dereferencing a default-constructed iterator\"))",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/buffers_cat.hpp",
        0xA4u,
        "boost::beast::buffers_cat_view<Buffers>::const_iterator::reference boost::beast::buffers_cat_view<Buffers>::cons"
        "t_iterator::dereference::operator()(boost::mp11::mp_size_t<0>) [with Bn = {boost::beast::detail::buffers_ref<boo"
        "st::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boo"
        "st::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf> >, bo"
        "ost::beast::http::detail::chunk_size, boost::asio::const_buffer, boost::beast::http::chunk_crlf, boost::asio::co"
        "nst_buffer, boost::beast::http::chunk_crlf, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::"
        "http::chunk_crlf}; boost::beast::buffers_cat_view<Buffers>::const_iterator::reference = boost::asio::const_buffe"
        "r; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>]");
    case 1u:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
      }
      else if ( this->it_.i_ == 1 )
      {
        return boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)&this->it_);
      }
      __asan_handle_no_return(this);
      __assert_fail(
        "i_ == I",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
        0xDBu,
        "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() const"
        " [with long unsigned int I = 1; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::con"
        "st_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_ran"
        "ge, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio::const_"
        "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, c"
        "onst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beas"
        "t::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I"
        " - 1)> = boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const"
        "_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk"
        "_crlf>::const_iterator]");
    case 2u:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
LABEL_17:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 2; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio:"
          ":const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fie"
          "ld_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio"
          "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_"
          "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
          " boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::v"
          "ariant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 2 )
        goto LABEL_17;
      p_it = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(p_it);
      }
      else
      {
        this = *(const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const *)this->it_.buf_.__data;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          result.data_ = this->bn_;
          result.size_ = *(_QWORD *)this->it_.buf_.__data;
          return result;
        }
      }
      __asan_report_load16(this);
LABEL_20:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
LABEL_26:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 3; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio:"
          ":const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fie"
          "ld_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio"
          "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_"
          "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
          " boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::v"
          "ariant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 3 )
        goto LABEL_26;
      v3 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v3);
      }
      else
      {
        this = *(const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const *)this->it_.buf_.__data;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          result.data_ = this->bn_;
          result.size_ = *(_QWORD *)this->it_.buf_.__data;
          return result;
        }
      }
      __asan_report_load16(this);
LABEL_29:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
LABEL_35:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 4; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio:"
          ":const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fie"
          "ld_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio"
          "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_"
          "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
          " boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::v"
          "ariant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 4 )
        goto LABEL_35;
      v4 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v4);
      }
      else
      {
        this = *(const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const *)this->it_.buf_.__data;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          result.data_ = this->bn_;
          result.size_ = *(_QWORD *)this->it_.buf_.__data;
          return result;
        }
      }
      __asan_report_load16(this);
LABEL_38:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
LABEL_44:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 5; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio:"
          ":const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fie"
          "ld_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio"
          "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_"
          "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
          " boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::v"
          "ariant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 5 )
        goto LABEL_44;
      v5 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v5);
      }
      else
      {
        this = *(const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const *)this->it_.buf_.__data;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          result.data_ = this->bn_;
          result.size_ = *(_QWORD *)this->it_.buf_.__data;
          return result;
        }
      }
      __asan_report_load16(this);
LABEL_47:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
LABEL_53:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 6; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio:"
          ":const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fie"
          "ld_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio"
          "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_"
          "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
          " boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::v"
          "ariant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 6 )
        goto LABEL_53;
      v6 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v6);
      }
      else
      {
        this = *(const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const *)this->it_.buf_.__data;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          result.data_ = this->bn_;
          result.size_ = *(_QWORD *)this->it_.buf_.__data;
          return result;
        }
      }
      __asan_report_load16(this);
LABEL_56:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
LABEL_62:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 7; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio:"
          ":const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fie"
          "ld_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio"
          "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_"
          "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
          " boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::v"
          "ariant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 7 )
        goto LABEL_62;
      v7 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v7);
      }
      else
      {
        this = *(const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const *)this->it_.buf_.__data;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          result.data_ = this->bn_;
          result.size_ = *(_QWORD *)this->it_.buf_.__data;
          return result;
        }
      }
      __asan_report_load16(this);
LABEL_65:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
LABEL_71:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 8; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio:"
          ":const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fie"
          "ld_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio"
          "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_"
          "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
          " boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::v"
          "ariant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 8 )
        goto LABEL_71;
      v8 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v8);
      }
      else
      {
        this = *(const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const *)this->it_.buf_.__data;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          result.data_ = this->bn_;
          result.size_ = *(_QWORD *)this->it_.buf_.__data;
          return result;
        }
      }
      __asan_report_load16(this);
LABEL_74:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
        __asan_report_load1(this);
LABEL_80:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 9; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio:"
          ":const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fie"
          "ld_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asio"
          "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_"
          "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
          " boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::v"
          "ariant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 9 )
        goto LABEL_80;
      v9 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v9);
        goto LABEL_82;
      }
      this = *(const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const *)this->it_.buf_.__data;
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
LABEL_82:
        __asan_report_load16(this);
LABEL_83:
        p_i = &this->it_.i_;
        if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
        {
          this = (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 32);
          __asan_report_load1(p_i);
        }
        else if ( this->it_.i_ == 10 )
        {
          __asan_handle_no_return(this);
          boost::beast::detail::buffers_cat_view_iterator_base::past_end::operator*((const boost::beast::detail::buffers_cat_view_iterator_base::past_end *const)&this->it_);
        }
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 10; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio"
          "::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fi"
          "eld_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, const boost::asi"
          "o::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const"
          "_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*"
          ", boost::beast::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::"
          "variant<TN>, (I - 1)> = boost::beast::detail::buffers_cat_view_iterator_base::past_end]");
      }
      result.data_ = this->bn_;
      result.size_ = *(_QWORD *)this->it_.buf_.__data;
      return result;
    case 3u:
      goto LABEL_20;
    case 4u:
      goto LABEL_29;
    case 5u:
      goto LABEL_38;
    case 6u:
      goto LABEL_47;
    case 7u:
      goto LABEL_56;
    case 8u:
      goto LABEL_65;
    case 9u:
      goto LABEL_74;
    case 0xAu:
      goto LABEL_83;
    default:
      goto LABEL_4;
  }
};

// Line 351: range 0000000019BB5DE0-0000000019BB6316
boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference __fastcall boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(
        const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const this)
{
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v3; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v4; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v6; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v7; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v8; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v9; // rax
  unsigned __int8 *p_i; // rax

  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
    this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
    __asan_report_load1(this);
LABEL_4:
    __asan_handle_no_return(this);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size, boo"
      "st::asio::const_buffer, boost::beast::http::chunk_crlf, boost::asio::const_buffer, boost::beast::http::chunk_crlf,"
      " boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::chunk_crlf>::const_iterator::dereferenc"
      "e; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = boost::asio::const_buffer; boost::mp11::mp_siz"
      "e_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
  }
  switch ( this->it_.i_ )
  {
    case 0u:
      __asan_handle_no_return(this);
      __assert_fail(
        "(false)&&((\"Dereferencing a default-constructed iterator\"))",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/buffers_cat.hpp",
        0xA4u,
        "boost::beast::buffers_cat_view<Buffers>::const_iterator::reference boost::beast::buffers_cat_view<Buffers>::cons"
        "t_iterator::dereference::operator()(boost::mp11::mp_size_t<0>) [with Bn = {boost::beast::http::detail::chunk_siz"
        "e, boost::asio::const_buffer, boost::beast::http::chunk_crlf, boost::asio::const_buffer, boost::beast::http::chu"
        "nk_crlf, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::chunk_crlf}; boost::beast::bu"
        "ffers_cat_view<Buffers>::const_iterator::reference = boost::asio::const_buffer; boost::mp11::mp_size_t<0> = std:"
        ":integral_constant<long unsigned int, 0>]");
    case 1u:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_12:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 1; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::deta"
          "il::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)"
          "> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 1 )
        goto LABEL_12;
      p_it = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(p_it);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_15:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_21:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 2; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::deta"
          "il::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)"
          "> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 2 )
        goto LABEL_21;
      v3 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v3);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_24:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_30:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 3; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::deta"
          "il::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)"
          "> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 3 )
        goto LABEL_30;
      v4 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v4);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_33:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_39:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 4; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::deta"
          "il::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)"
          "> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 4 )
        goto LABEL_39;
      v5 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v5);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_42:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_48:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 5; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::deta"
          "il::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)"
          "> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 5 )
        goto LABEL_48;
      v6 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v6);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_51:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_57:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 6; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::deta"
          "il::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)"
          "> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 6 )
        goto LABEL_57;
      v7 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v7);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_60:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_66:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 7; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::deta"
          "il::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)"
          "> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 7 )
        goto LABEL_66;
      v8 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v8);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_69:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_75:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 8; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::deta"
          "il::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)"
          "> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 8 )
        goto LABEL_75;
      v9 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v9);
        goto LABEL_77;
      }
      this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
LABEL_77:
        __asan_report_load16(this);
LABEL_78:
        p_i = &this->it_.i_;
        if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
        {
          this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
          __asan_report_load1(p_i);
        }
        else if ( this->it_.i_ == 9 )
        {
          __asan_handle_no_return(this);
          boost::beast::detail::buffers_cat_view_iterator_base::past_end::operator*((const boost::beast::detail::buffers_cat_view_iterator_base::past_end *const)&this->it_);
        }
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 9; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::deta"
          "il::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)"
          "> = boost::beast::detail::buffers_cat_view_iterator_base::past_end]");
      }
      return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
    case 2u:
      goto LABEL_15;
    case 3u:
      goto LABEL_24;
    case 4u:
      goto LABEL_33;
    case 5u:
      goto LABEL_42;
    case 6u:
      goto LABEL_51;
    case 7u:
      goto LABEL_60;
    case 8u:
      goto LABEL_69;
    case 9u:
      goto LABEL_78;
    default:
      goto LABEL_4;
  }
};

// Line 351: range 0000000019BB5504-0000000019BB5896
boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference __fastcall boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(
        const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const this)
{
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v3; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v4; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v5; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v6; // rax
  unsigned __int8 *p_i; // rax

  if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
  {
    this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
    __asan_report_load1(this);
LABEL_4:
    __asan_handle_no_return(this);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 7; F = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size, boos"
      "t::asio::const_buffer, boost::beast::http::chunk_crlf, boost::asio::const_buffer, boost::beast::http::chunk_crlf>:"
      ":const_iterator::dereference; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = boost::asio::const_"
      "buffer; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
  }
  switch ( this->it_.i_ )
  {
    case 0u:
      __asan_handle_no_return(this);
      __assert_fail(
        "(false)&&((\"Dereferencing a default-constructed iterator\"))",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/buffers_cat.hpp",
        0xA4u,
        "boost::beast::buffers_cat_view<Buffers>::const_iterator::reference boost::beast::buffers_cat_view<Buffers>::cons"
        "t_iterator::dereference::operator()(boost::mp11::mp_size_t<0>) [with Bn = {boost::beast::http::detail::chunk_siz"
        "e, boost::asio::const_buffer, boost::beast::http::chunk_crlf, boost::asio::const_buffer, boost::beast::http::chu"
        "nk_crlf}; boost::beast::buffers_cat_view<Buffers>::const_iterator::reference = boost::asio::const_buffer; boost:"
        ":mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>]");
    case 1u:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_12:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 1; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::bea"
          "st::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>,"
          " (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 1 )
        goto LABEL_12;
      p_it = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(p_it);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_15:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_21:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 2; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::bea"
          "st::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>,"
          " (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 2 )
        goto LABEL_21;
      v3 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v3);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_24:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_30:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 3; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::bea"
          "st::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>,"
          " (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 3 )
        goto LABEL_30;
      v4 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v4);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_33:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_39:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 4; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::bea"
          "st::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>,"
          " (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 4 )
        goto LABEL_39;
      v5 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v5);
      }
      else
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
        if ( !*(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
      }
      __asan_report_load16(this);
LABEL_42:
      if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
        __asan_report_load1(this);
LABEL_48:
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 5; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::bea"
          "st::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>,"
          " (I - 1)> = const boost::asio::const_buffer*]");
      }
      if ( this->it_.i_ != 5 )
        goto LABEL_48;
      v6 = &this->it_;
      if ( *(_BYTE *)(((unsigned __int64)&this->it_ >> 3) + 0x7FFF8000) )
      {
        this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 8);
        __asan_report_load8(v6);
        goto LABEL_50;
      }
      this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)this->it_.buf_;
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
LABEL_50:
        __asan_report_load16(this);
LABEL_51:
        p_i = &this->it_.i_;
        if ( *(char *)(((unsigned __int64)&this->it_.i_ >> 3) + 0x7FFF8000) < 0 )
        {
          this = (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)((char *)this + 16);
          __asan_report_load1(p_i);
        }
        else if ( this->it_.i_ == 6 )
        {
          __asan_handle_no_return(this);
          boost::beast::detail::buffers_cat_view_iterator_base::past_end::operator*((const boost::beast::detail::buffers_cat_view_iterator_base::past_end *const)&this->it_);
        }
        __asan_handle_no_return(this);
        __assert_fail(
          "i_ == I",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
          0xDBu,
          "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() con"
          "st [with long unsigned int I = 6; TN = {const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::bea"
          "st::detail::buffers_cat_view_iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>,"
          " (I - 1)> = boost::beast::detail::buffers_cat_view_iterator_base::past_end]");
      }
      return *(boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference *)&this->bn_;
    case 2u:
      goto LABEL_15;
    case 3u:
      goto LABEL_24;
    case 4u:
      goto LABEL_33;
    case 5u:
      goto LABEL_42;
    case 6u:
      goto LABEL_51;
    default:
      goto LABEL_4;
  }
};

// Line 390: range 0000000019C1A9BA-0000000019C1BA65
boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *__fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator--(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const this)
{
  const boost::asio::const_buffer *v1; // r12
  const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *v2; // r14
  unsigned __int8 *p_i; // rdi
  unsigned __int64 i; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *result; // rax
  __int64 v7; // r13
  __int64 v8; // rdi
  const boost::asio::const_buffer *v9; // rdi
  const boost::asio::const_buffer *v10; // rbx
  const boost::asio::const_buffer *v11; // rax
  const boost::asio::const_buffer *v12; // rdi
  std::size_t *p_size; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdi
  const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *p_f; // rsi
  __int64 v17; // r13
  const boost::asio::const_buffer *v18; // rdi
  const boost::asio::const_buffer *v19; // rbx
  const boost::asio::const_buffer *v20; // rax
  const boost::asio::const_buffer *v21; // rdi
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *v22; // rdi
  std::size_t v23; // rdx
  boost::mp11::mp_size_t_5 v24[8]; // [rsp+0h] [rbp-68h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-60h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v26; // [rsp+10h] [rbp-58h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator v27; // [rsp+20h] [rbp-48h] BYREF

  *(_QWORD *)v24[0].gap0 = this;
  p_i = &this->it_.i_;
  if ( *(char *)(((unsigned __int64)p_i >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_i);
LABEL_9:
    __asan_handle_no_return(p_i);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 4; F = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::bea"
      "st::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast"
      "::http::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf> >, boost::asio::"
      "const_buffer>::const_iterator::decrement; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; b"
      "oost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
  }
  i = this->it_.i_;
  if ( i > 3 )
    goto LABEL_9;
  if ( i == 2 )
  {
    v7 = *(_QWORD *)v24[0].gap0;
    v8 = *(_QWORD *)v24[0].gap0 + 32LL;
    if ( *(char *)(((unsigned __int64)(*(_QWORD *)v24[0].gap0 + 32LL) >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_load1(v8);
    }
    else if ( *(_BYTE *)(*(_QWORD *)v24[0].gap0 + 32LL) == 2 )
    {
      while ( 1 )
      {
        v9 = (const boost::asio::const_buffer *)(v7 + 8);
        if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
          break;
        v10 = *(const boost::asio::const_buffer **)(v7 + 8);
        v1 = *(const boost::asio::const_buffer **)v24[0].gap0;
        v9 = *(const boost::asio::const_buffer **)v24[0].gap0;
        if ( *(_BYTE *)((*(_QWORD *)v24[0].gap0 >> 3) + 0x7FFF8000LL) )
          goto LABEL_22;
        v2 = **(const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > ***)v24[0].gap0;
        if ( v10 == boost::beast::detail::get<1ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> *)(**(_QWORD **)v24[0].gap0 + 8LL)) )
          goto LABEL_24;
        *(_QWORD *)(v7 + 8) = v10 - 1;
        v9 = v10 - 1;
        if ( *(_WORD *)(((unsigned __int64)&v10[-1] >> 3) + 0x7FFF8000) )
          goto LABEL_23;
        if ( v10[-1].size_ )
          return this;
      }
      __asan_report_load8(v9);
LABEL_22:
      __asan_report_load8(v9);
LABEL_23:
      __asan_report_load16(v9);
LABEL_24:
      v11 = (const boost::asio::const_buffer *)boost::beast::detail::get<0ul,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>(v2);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        v12 = v11;
        __asan_report_load8(v11);
      }
      else
      {
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::end(
          &v27,
          (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *const)v11->data_);
        f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v1->size_;
        v12 = v1 + 2;
        if ( *(char *)(((unsigned __int64)&v1[2] >> 3) + 0x7FFF8000) >= 0 )
        {
          boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
            LOBYTE(v1[2].data_),
            &f);
          v12 = v1 + 2;
          if ( *(char *)(((unsigned __int64)&v1[2] >> 3) + 0x7FFF8000) >= 0 )
          {
            LOBYTE(v1[2].data_) = 0;
            if ( !*(_BYTE *)(((unsigned __int64)&v1->size_ >> 3) + 0x7FFF8000) )
            {
              v1->size_ = (std::size_t)v27.bn_;
              p_size = &v1[1].size_;
              if ( *(char *)(((unsigned __int64)&v1[1].size_ >> 3) + 0x7FFF8000) >= 0 )
              {
                LOBYTE(v1[1].size_) = 0;
                v26.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v1[1];
                v26.other = &v27.it_;
                boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
                  v27.it_.i_,
                  &v26);
                p_size = (std::size_t *)&v1[2];
                if ( *(char *)(((unsigned __int64)&v1[2] >> 3) + 0x7FFF8000) >= 0 )
                {
LABEL_30:
                  LOBYTE(v1[2].data_) = 1;
                  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v27.it_;
                  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                    v27.it_.i_,
                    (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
                  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::decrement::operator()(
                    (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::decrement *const)v24,
                    v24[0]);
                  return this;
                }
                goto LABEL_36;
              }
LABEL_35:
              __asan_report_store1(p_size);
LABEL_36:
              __asan_report_store1(p_size);
              goto LABEL_37;
            }
LABEL_34:
            p_size = &v1->size_;
            __asan_report_store8();
            goto LABEL_35;
          }
LABEL_33:
          __asan_report_store1(v12);
          goto LABEL_34;
        }
      }
      __asan_report_load1(v12);
      goto LABEL_33;
    }
    __asan_handle_no_return(v8);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 2; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_"
      "iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
  }
  if ( i <= 2 )
  {
    if ( !this->it_.i_ )
    {
      __asan_handle_no_return(p_i);
      __assert_fail(
        "(false)&&(\"Decrementing a default-constructed iterator\")",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/impl/buffers_cat.hpp",
        0xFFu,
        "void boost::beast::buffers_cat_view<Buffers>::const_iterator::decrement::operator()(boost::mp11::mp_size_t<0>) ["
        "with Bn = {boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::as"
        "io::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::fi"
        "eld_range, boost::beast::http::chunk_crlf> >, boost::asio::const_buffer}; boost::mp11::mp_size_t<0> = std::integ"
        "ral_constant<long unsigned int, 0>]");
    }
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::decrement::operator()(
      (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::decrement *const)v24,
      v24[0]);
    return this;
  }
LABEL_37:
  v14 = *(_QWORD *)v24[0].gap0;
  if ( *(_BYTE *)((*(_QWORD *)v24[0].gap0 >> 3) + 0x7FFF8000LL) )
  {
    v15 = *(_QWORD *)v24[0].gap0;
    __asan_report_load8(*(_QWORD *)v24[0].gap0);
    goto LABEL_50;
  }
  v1 = boost::beast::detail::get<1ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> *)(**(_QWORD **)v24[0].gap0 + 8LL))
     + 1;
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(*(_QWORD *)v24[0].gap0 + 8LL);
  v15 = *(_QWORD *)v24[0].gap0 + 32LL;
  if ( *(char *)(((unsigned __int64)(*(_QWORD *)v24[0].gap0 + 32LL) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_50:
    __asan_report_load1(v15);
    goto LABEL_51;
  }
  p_f = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *)&f;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(*(_QWORD *)v24[0].gap0 + 32LL),
    &f);
  v15 = *(_QWORD *)v24[0].gap0 + 8LL;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v24[0].gap0 + 8LL) >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_store8();
    goto LABEL_52;
  }
  *(_QWORD *)(*(_QWORD *)v24[0].gap0 + 8LL) = v1;
  v15 = v14 + 32;
  if ( *(char *)(((unsigned __int64)(v14 + 32) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_52:
    __asan_report_store1(v15);
    goto LABEL_53;
  }
  *(_BYTE *)(v14 + 32) = 2;
  v17 = *(_QWORD *)v24[0].gap0;
  v15 = *(_QWORD *)v24[0].gap0 + 32LL;
  if ( *(char *)(((unsigned __int64)(*(_QWORD *)v24[0].gap0 + 32LL) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_53:
    __asan_report_load1(v15);
LABEL_54:
    __asan_handle_no_return(v15);
    __assert_fail(
      "i_ == I",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/core/detail/variant.hpp",
      0xD2u,
      "boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)>& boost::beast::detail::variant<TN>::get() [with l"
      "ong unsigned int I = 2; TN = {boost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer,"
      " boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::b"
      "east::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_"
      "iterator_base::past_end}; boost::mp11::mp_at_c<boost::beast::detail::variant<TN>, (I - 1)> = const boost::asio::const_buffer*]");
  }
  if ( *(_BYTE *)(*(_QWORD *)v24[0].gap0 + 32LL) != 2 )
    goto LABEL_54;
  while ( 1 )
  {
    v18 = (const boost::asio::const_buffer *)(v17 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v17 + 8) >> 3) + 0x7FFF8000) )
      break;
    v19 = *(const boost::asio::const_buffer **)(v17 + 8);
    v1 = *(const boost::asio::const_buffer **)v24[0].gap0;
    v18 = *(const boost::asio::const_buffer **)v24[0].gap0;
    if ( *(_BYTE *)((*(_QWORD *)v24[0].gap0 >> 3) + 0x7FFF8000LL) )
      goto LABEL_56;
    v2 = **(const boost::beast::detail::tuple_element_impl<0,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > ***)v24[0].gap0;
    if ( v19 == boost::beast::detail::get<1ul,boost::asio::const_buffer>((const boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> *)(**(_QWORD **)v24[0].gap0 + 8LL)) )
      goto LABEL_58;
    *(_QWORD *)(v17 + 8) = v19 - 1;
    v18 = v19 - 1;
    if ( *(_WORD *)(((unsigned __int64)&v19[-1] >> 3) + 0x7FFF8000) )
      goto LABEL_57;
    if ( v19[-1].size_ )
      return this;
  }
  __asan_report_load8(v18);
LABEL_56:
  __asan_report_load8(v18);
LABEL_57:
  __asan_report_load16(v18);
LABEL_58:
  v20 = (const boost::asio::const_buffer *)boost::beast::detail::get<0ul,boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>(v2);
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    v21 = v20;
    __asan_report_load8(v20);
    goto LABEL_66;
  }
  p_f = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *)v20->data_;
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::end(
    &v27,
    (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *const)v20->data_);
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v1->size_;
  v21 = v1 + 2;
  if ( *(char *)(((unsigned __int64)&v1[2] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_66:
    __asan_report_load1(v21);
    goto LABEL_67;
  }
  p_f = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *)&f;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    LOBYTE(v1[2].data_),
    &f);
  v21 = v1 + 2;
  if ( *(char *)(((unsigned __int64)&v1[2] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_67:
    __asan_report_store1(v21);
    goto LABEL_68;
  }
  LOBYTE(v1[2].data_) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&v1->size_ >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    v22 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *)&v1->size_;
    __asan_report_store8();
    goto LABEL_69;
  }
  v1->size_ = (std::size_t)v27.bn_;
  v22 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *)&v1[1].size_;
  if ( *(char *)(((unsigned __int64)&v1[1].size_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_69:
    __asan_report_store1(v22);
    goto LABEL_70;
  }
  LOBYTE(v1[1].size_) = 0;
  v26.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v1[1];
  v26.other = &v27.it_;
  p_f = (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> *)&v26;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v27.it_.i_,
    &v26);
  v22 = (boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *)&v1[2];
  if ( *(char *)(((unsigned __int64)&v1[2] >> 3) + 0x7FFF8000) >= 0 )
    goto LABEL_30;
LABEL_70:
  __asan_report_store1(v22);
  boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>::buffers_prefix_view(
    v22,
    (const boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > *)p_f,
    v23);
  return result;
};

// Line 417: range 0000000019BACFCC-0000000019BAE933
void __fastcall boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::buffers_cat_view(
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> *const this,
        const boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > *bn_0,
        const boost::asio::const_buffer *bn_1)
{
  boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> *v3; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *v4; // rdi
  const boost::beast::http::detail::chunk_size *v5; // rdx
  const boost::asio::const_buffer *v6; // rcx
  const boost::beast::http::chunk_crlf *v7; // r8
  const boost::asio::const_buffer *v8; // r9
  const boost::beast::http::chunk_crlf *v9; // [rsp+10h] [rbp+8h]
  const boost::asio::const_buffer *v10; // [rsp+18h] [rbp+10h]
  const boost::asio::const_buffer *v11; // [rsp+20h] [rbp+18h]
  const boost::beast::http::chunk_crlf *v12; // [rsp+28h] [rbp+20h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)bn_0 >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    v3 = (boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> *)__asan_report_load8(bn_0);
    goto LABEL_8;
  }
  this->bn_.t = (boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >)bn_0->buffers_;
  v3 = &this->bn_.boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer>;
  if ( *(_WORD *)(((unsigned __int64)&this->bn_.boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> >> 3)
                + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store16(v3);
    goto LABEL_9;
  }
  if ( !*(_WORD *)(((unsigned __int64)bn_1 >> 3) + 0x7FFF8000) )
  {
    this->bn_.boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer> = (boost::beast::detail::tuple_element_impl<1,boost::asio::const_buffer>)_mm_loadu_si128((const __m128i *)bn_1);
    return;
  }
LABEL_9:
  v4 = (boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> *)bn_1;
  __asan_report_load16(bn_1);
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::buffers_cat_view(
    v4,
    bn_0,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
};
