// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/buffer_traits.hpp

// Line 81: range 000000000CC9318E-000000000CC93462
bool __fastcall boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > *buffers)
{
  _DWORD *v1; // r12
  bool result; // al
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type it; // rax
  const boost::beast::buffers_suffix<boost::asio::const_buffer> *b; // rdx
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type p_skip; // rdi
  std::size_t skip; // rdx
  std::size_t v7; // rax
  unsigned __int64 size; // rax
  boost::asio::const_buffer *v9; // rax
  const boost::beast::buffers_suffix<boost::asio::const_buffer> *v10; // rdx
  std::size_t *v11; // rdi
  std::size_t v12; // rax
  std::size_t v13; // rdx
  std::size_t v14; // rax
  __int64 vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator anonymous0; // [rsp+20h] [rbp+20h] BYREF
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator anonymous1; // [rsp+60h] [rbp+60h] BYREF

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_2(160LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"2 32 32 5 it:83 96 32 6 end:84";
  vars0[2] = (__int64)boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>;
  v1 = (_DWORD *)((unsigned __int64)vars0 >> 3);
  v1[536862720] = -235802127;
  v1[536862722] = -218959118;
  v1[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
    goto LABEL_6;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::begin(
    &anonymous0,
    buffers->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::end(
    &anonymous1,
    buffers->buffers_);
  while ( 1 )
  {
    if ( anonymous0.b_ == anonymous1.b_ )
    {
LABEL_6:
      if ( anonymous0.it_.b_ == anonymous1.it_.b_ && anonymous0.it_.it_ == anonymous1.it_.it_ )
      {
        result = 1;
        goto LABEL_41;
      }
    }
    it = anonymous0.it_.it_;
    b = anonymous0.it_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&anonymous0.it_.b_->begin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&anonymous0.it_.b_->begin_);
    }
    else if ( anonymous0.it_.it_ != anonymous0.it_.b_->begin_ )
    {
      p_skip = anonymous0.it_.it_;
      if ( *(_WORD *)(((unsigned __int64)anonymous0.it_.it_ >> 3) + 0x7FFF8000) )
        goto LABEL_17;
      size = anonymous0.it_.it_->size_;
      goto LABEL_29;
    }
    p_skip = (boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type)&b->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&b->skip_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_skip);
LABEL_16:
      __asan_report_load16(p_skip);
LABEL_17:
      size = __asan_report_load16(p_skip);
      goto LABEL_18;
    }
    skip = b->skip_;
    p_skip = it;
    if ( *(_WORD *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
      goto LABEL_16;
    v7 = it->size_;
    if ( skip >= v7 )
      skip = v7;
    size = v7 - skip;
LABEL_29:
    if ( anonymous0.remain_ < size )
      size = anonymous0.remain_;
LABEL_18:
    if ( size )
      goto LABEL_40;
    v9 = (boost::asio::const_buffer *)anonymous0.it_.it_++;
    v10 = anonymous0.it_.b_;
    if ( *(_BYTE *)(((unsigned __int64)&anonymous0.it_.b_->begin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&anonymous0.it_.b_->begin_);
    }
    else if ( v9 != anonymous0.it_.b_->begin_ )
    {
      v11 = (std::size_t *)v9;
      if ( *(_WORD *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        goto LABEL_39;
      v12 = v9->size_;
      goto LABEL_23;
    }
    v11 = &v10->skip_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->skip_ >> 3) + 0x7FFF8000) )
      break;
    v13 = v10->skip_;
    v11 = (std::size_t *)v9;
    if ( *(_WORD *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      goto LABEL_38;
    v14 = v9->size_;
    if ( v13 >= v14 )
      v13 = v14;
    v12 = v14 - v13;
LABEL_23:
    anonymous0.remain_ -= v12;
  }
  __asan_report_load8(v11);
LABEL_38:
  __asan_report_load16(v11);
LABEL_39:
  __asan_report_load16(v11);
LABEL_40:
  result = 0;
LABEL_41:
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0;
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8008) = 0;
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8010) = 0;
  return result;
};

// Line 81: range 000000000CC98C11-000000000CC990F9
bool __fastcall boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *buffers)
{
  unsigned __int64 v1; // r13
  _DWORD *v2; // r14
  __int64 v3; // rax
  bool v4; // r12
  char *v5; // rdi
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  std::size_t v10; // rbp
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v11; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  __int64 v13; // rbp
  std::size_t size; // rbp
  unsigned __int64 p_it; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  char v19; // dl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-120h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v22; // [rsp+20h] [rbp-118h] BYREF
  __int64 v23; // [rsp+38h] [rbp-100h]
  char v24[248]; // [rsp+40h] [rbp-F8h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v1 = v3;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 48 5 it:83 112 48 6 end:84";
  *(_QWORD *)(v1 + 16) = boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862722] = -219021312;
  v2[536862723] = 62194;
  v2[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v1 + 32),
    buffers->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v1 + 112),
    buffers->buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v1 + 32) == *(_QWORD *)(v1 + 112) )
LABEL_7:
      v4 = *(_QWORD *)(v1 + 72) == *(_QWORD *)(v1 + 152)
        && boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v1 + 128));
    else
      v4 = 0;
    if ( v4 )
      break;
    v13 = *(_QWORD *)(v1 + 72);
    if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
            (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v13 + 40)) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 64) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13 + 64);
LABEL_11:
      v5 = (char *)(v1 + 48);
      v6 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
      goto LABEL_32;
    }
    size = *(_QWORD *)(v13 + 64);
    v5 = (char *)(v1 + 48);
    v6 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
    if ( size >= v6.size_ )
      size = v6.size_;
    v6.size_ -= size;
LABEL_32:
    if ( *(_QWORD *)(v1 + 40) < v6.size_ )
      v6.size_ = *(_QWORD *)(v1 + 40);
    if ( v6.size_ )
      break;
    v22.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v1 + 48);
    v22.it_.i_ = 0;
    p_it = (unsigned __int64)&v22.it_;
    v16 = v1 + 56;
    switch ( *(_BYTE *)(v1 + 64) )
    {
      case 0:
        goto LABEL_17;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_37:
          __asan_report_store8();
          goto LABEL_38;
        }
        p_i = &v22.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v22.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_37;
        v22.it_.buf_ = *(boost::beast::detail::aligned_union_t *)(v1 + 56);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v22.it_.i_;
        if ( *(char *)(((unsigned __int64)&v22.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v22.it_.i_ = 1;
          goto LABEL_17;
        }
LABEL_38:
        p_it = __asan_report_store1(p_i);
LABEL_39:
        v17 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_44:
          __asan_report_store8();
          goto LABEL_45;
        }
        v17 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_44;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v17 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_17;
        }
LABEL_45:
        p_it = __asan_report_store1(v17);
LABEL_46:
        v18 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_51:
          __asan_report_store8();
          goto LABEL_52;
        }
        v18 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v18 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_17;
        }
LABEL_52:
        p_it = __asan_report_store1(v18);
LABEL_53:
        v9 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_59:
          __asan_report_load1(v9);
LABEL_60:
          __asan_report_store1(v9);
LABEL_61:
          __asan_report_load8(v9);
LABEL_62:
          v12 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v22);
          goto LABEL_22;
        }
        v9 = v16;
        v19 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
        if ( v19 <= (char)(v16 & 7) && v19 )
          goto LABEL_59;
        *(_BYTE *)p_it = *(_BYTE *)(v1 + 56);
        v9 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_60;
        *(_BYTE *)(p_it + 8) = 4;
LABEL_17:
        v23 = *(_QWORD *)(v1 + 72);
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
        v8 = v23;
        if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v22,
                (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v23 + 40)) )
          goto LABEL_62;
        v9 = v8 + 64;
        if ( *(_BYTE *)(((unsigned __int64)(v8 + 64) >> 3) + 0x7FFF8000) )
          goto LABEL_61;
        v10 = *(_QWORD *)(v8 + 64);
        v11 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v22);
        if ( v10 >= v11.size_ )
          v10 = v11.size_;
        v12.size_ = v11.size_ - v10;
LABEL_22:
        if ( v22.it_.i_ > 4u )
        {
          __asan_handle_no_return(&v22);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 5; F = boost::beast::detail::variant<const boost::asio::const_buffer*,"
            " const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_"
            "iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; bo"
            "ost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        *(_QWORD *)(v1 + 40) -= v12.size_;
        break;
      case 2:
        goto LABEL_39;
      case 3:
        goto LABEL_46;
      case 4:
        goto LABEL_53;
      default:
        __asan_handle_no_return(v5);
        __assert_fail(
          "i < N",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
          0x17Du,
          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_"
          "t, F&&) [with long unsigned int N = 5; F = boost::beast::detail::variant<const boost::asio::const_buffer*, con"
          "st boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterat"
          "or_base::past_end>::copy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::"
          "mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
    }
  }
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 136);
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 144),
    &f);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 64),
    &f);
  if ( v24 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};

// Line 81: range 000000000CC97F18-000000000CC98254
bool __fastcall boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *buffers)
{
  unsigned __int64 v1; // r12
  _DWORD *v2; // r14
  __int64 v3; // rax
  bool v4; // r15
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v5; // rax
  std::size_t v6; // rbp
  __int64 v7; // rbp
  std::size_t size; // rbp
  std::size_t v9; // r15
  std::size_t v10; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v11; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-160h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v15; // [rsp+20h] [rbp-158h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v16; // [rsp+30h] [rbp-148h] BYREF
  std::size_t v17; // [rsp+58h] [rbp-120h]
  char v18[280]; // [rsp+60h] [rbp-118h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v1 = v3;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 64 5 it:83 128 64 6 end:84";
  *(_QWORD *)(v1 + 16) = boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862723] = -218959118;
  v2[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v1 + 32),
    buffers->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v1 + 128),
    buffers->buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v1 + 32) == *(_QWORD *)(v1 + 128) )
LABEL_7:
      v4 = *(_QWORD *)(v1 + 88) == *(_QWORD *)(v1 + 184)
        && boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v1 + 144));
    else
      v4 = 0;
    if ( v4 )
      break;
    v7 = *(_QWORD *)(v1 + 88);
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v7 + 112)) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 152) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v7 + 152);
LABEL_11:
      v5 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
      goto LABEL_23;
    }
    size = *(_QWORD *)(v7 + 152);
    v5 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
    if ( size >= v5.size_ )
      size = v5.size_;
    v5.size_ -= size;
LABEL_23:
    if ( *(_QWORD *)(v1 + 40) < v5.size_ )
      v5.size_ = *(_QWORD *)(v1 + 40);
    if ( v5.size_ )
      break;
    v16.bn_ = *(const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v1 + 48);
    v16.it_.i_ = 0;
    v9 = (std::size_t)&v16;
    v15.self = &v16.it_;
    v15.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      *(unsigned __int8 *)(v1 + 80),
      &v15);
    v17 = *(_QWORD *)(v1 + 88);
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
    v10 = v17;
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v16,
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v17 + 112)) )
    {
      if ( *(_BYTE *)(((v10 + 152) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v10 + 152);
      }
      else
      {
        v9 = *(_QWORD *)(v10 + 152);
        v11 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v16);
        v10 = v11.size_;
        if ( v9 >= v11.size_ )
          v9 = v11.size_;
      }
      v6 = v10 - v9;
    }
    else
    {
      v12 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v16);
      v6 = v12.size_;
    }
    f.self = &v16.it_;
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v16.it_.i_,
      &f);
    *(_QWORD *)(v1 + 40) -= v6;
  }
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 152);
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 176),
    &f);
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 80),
    &f);
  if ( v18 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v4;
};

// Line 81: range 000000000CC939D7-000000000CC94045
bool __fastcall boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *buffers)
{
  unsigned __int64 v1; // r13
  _DWORD *v2; // r15
  __int64 v3; // rax
  bool v4; // r12
  char *v5; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rdi
  __int64 v8; // rbp
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v9; // rdi
  std::size_t v10; // r12
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v11; // rax
  std::size_t v12; // rbp
  __int64 v13; // rbp
  std::size_t size; // rbp
  unsigned __int64 v15; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v17; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v18; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v19; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v20; // rdi
  char v21; // dl
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v22; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v24; // [rsp+18h] [rbp-160h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-158h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v26; // [rsp+30h] [rbp-148h] BYREF
  __int64 v27; // [rsp+58h] [rbp-120h]
  char v28[280]; // [rsp+60h] [rbp-118h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v1 = v3;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 64 5 it:83 128 64 6 end:84";
  *(_QWORD *)(v1 + 16) = boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862723] = -218959118;
  v2[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v1 + 32),
    buffers->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v1 + 128),
    buffers->buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v1 + 32) == *(_QWORD *)(v1 + 128) )
LABEL_7:
      v4 = *(_QWORD *)(v1 + 88) == *(_QWORD *)(v1 + 184)
        && boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v1 + 144));
    else
      v4 = 0;
    if ( v4 )
      break;
    v13 = *(_QWORD *)(v1 + 88);
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v13 + 72)) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 112) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13 + 112);
LABEL_11:
      v5 = (char *)(v1 + 48);
      v6 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
      goto LABEL_33;
    }
    size = *(_QWORD *)(v13 + 112);
    v5 = (char *)(v1 + 48);
    v6 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
    if ( size >= v6.size_ )
      size = v6.size_;
    v6.size_ -= size;
LABEL_33:
    if ( *(_QWORD *)(v1 + 40) < v6.size_ )
      v6.size_ = *(_QWORD *)(v1 + 40);
    if ( v6.size_ )
      break;
    v26.bn_ = *(const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v1 + 48);
    v26.it_.i_ = 0;
    v15 = v1 + 56;
    switch ( *(_BYTE *)(v1 + 80) )
    {
      case 0:
        goto LABEL_19;
      case 1:
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_it);
LABEL_38:
          __asan_report_store8();
LABEL_39:
          __asan_report_store1(p_it);
LABEL_40:
          __asan_report_load1(p_it);
          goto LABEL_41;
        }
        p_it = &v26.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_38;
        *(_QWORD *)v26.it_.buf_.__data = *(_QWORD *)(v1 + 56);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v26.it_.buf_.1 + 2);
        if ( *(char *)(((unsigned __int64)(&v26.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_39;
        v26.it_.buf_.__data[16] = 0;
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v26.it_.buf_.1 + 1);
        f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 64);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 72);
        if ( *(char *)(((v1 + 72) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_40;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v1 + 72),
          &f);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v26.it_.i_ = 1;
          goto LABEL_19;
        }
LABEL_41:
        v15 = __asan_report_store1(p_it);
LABEL_42:
        p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_47:
          __asan_report_store8();
          goto LABEL_48;
        }
        p_i = &v26.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_47;
        *(_QWORD *)v26.it_.buf_.__data = *(_QWORD *)(v1 + 56);
        p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v26.it_.i_ = 2;
          goto LABEL_19;
        }
LABEL_48:
        v15 = __asan_report_store1(p_i);
LABEL_49:
        v17 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_54:
          __asan_report_store8();
          goto LABEL_55;
        }
        v17 = &v26.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_54;
        *(_QWORD *)v26.it_.buf_.__data = *(_QWORD *)(v1 + 56);
        v17 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v26.it_.i_ = 3;
          goto LABEL_19;
        }
LABEL_55:
        v15 = __asan_report_store1(v17);
LABEL_56:
        v18 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_61:
          __asan_report_store8();
          goto LABEL_62;
        }
        v18 = &v26.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_61;
        *(_QWORD *)v26.it_.buf_.__data = *(_QWORD *)(v1 + 56);
        v18 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v26.it_.i_ = 4;
          goto LABEL_19;
        }
LABEL_62:
        v15 = __asan_report_store1(v18);
LABEL_63:
        v19 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_68:
          __asan_report_store8();
          goto LABEL_69;
        }
        v19 = &v26.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_68;
        *(_QWORD *)v26.it_.buf_.__data = *(_QWORD *)(v1 + 56);
        v19 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v26.it_.i_ = 5;
          goto LABEL_19;
        }
LABEL_69:
        v15 = __asan_report_store1(v19);
LABEL_70:
        v20 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v15;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v15);
LABEL_75:
          __asan_report_store8();
          goto LABEL_76;
        }
        v20 = &v26.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_75;
        *(_QWORD *)v26.it_.buf_.__data = *(_QWORD *)(v1 + 56);
        v20 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v26.it_.i_ = 6;
          goto LABEL_19;
        }
LABEL_76:
        v15 = __asan_report_store1(v20);
LABEL_77:
        v9 = &v26.it_;
        if ( *(char *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(&v26.it_);
LABEL_83:
          __asan_report_load1(v9);
LABEL_84:
          __asan_report_store1(v9);
LABEL_85:
          __asan_report_load8(v9);
LABEL_86:
          v22 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
          v12 = v22.size_;
          goto LABEL_24;
        }
        v9 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v15;
        v21 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
        if ( v21 <= (char)(v15 & 7) && v21 )
          goto LABEL_83;
        v26.it_.buf_.__data[0] = *(_BYTE *)(v1 + 56);
        v9 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_84;
        v26.it_.i_ = 7;
LABEL_19:
        v27 = *(_QWORD *)(v1 + 88);
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
        v8 = v27;
        if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v26,
                (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v27 + 72)) )
          goto LABEL_86;
        v9 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v8 + 112);
        if ( *(_BYTE *)(((unsigned __int64)(v8 + 112) >> 3) + 0x7FFF8000) )
          goto LABEL_85;
        v10 = *(_QWORD *)(v8 + 112);
        v11 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
        if ( v10 >= v11.size_ )
          v10 = v11.size_;
        v12 = v11.size_ - v10;
LABEL_24:
        v24.self = &v26.it_;
        boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v26.it_.i_,
          &v24);
        *(_QWORD *)(v1 + 40) -= v12;
        break;
      case 2:
        goto LABEL_42;
      case 3:
        goto LABEL_49;
      case 4:
        goto LABEL_56;
      case 5:
        goto LABEL_63;
      case 6:
        goto LABEL_70;
      case 7:
        goto LABEL_77;
      default:
        __asan_handle_no_return(v5);
        __assert_fail(
          "i < N",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
          0x17Du,
          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_"
          "t, F&&) [with long unsigned int N = 8; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<boost:"
          ":asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<st"
          "d::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio:"
          ":const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_b"
          "uffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::cop"
          "y; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::int"
          "egral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
    }
  }
  v24.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 152);
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 176),
    &v24);
  v24.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
  boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 80),
    &v24);
  if ( v28 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v4;
};

// Line 81: range 000000000CC962A6-000000000CC9698D
bool __fastcall boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *buffers)
{
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v1; // rbp
  unsigned __int64 v2; // r13
  _DWORD *v3; // r14
  __int64 v4; // rax
  bool v5; // r12
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  std::size_t v10; // rbp
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v11; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  __int64 v13; // rbp
  std::size_t size; // rbp
  unsigned __int64 p_it; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  char v24; // cl
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v26; // [rsp+10h] [rbp-118h] BYREF
  __int64 v27; // [rsp+28h] [rbp-100h]
  char v28[248]; // [rsp+30h] [rbp-F8h] BYREF

  v1 = buffers;
  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v2 = v4;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 48 5 it:83 112 48 6 end:84";
  *(_QWORD *)(v2 + 16) = boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v2 + 32),
    buffers->buffers_);
  buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 112);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v2 + 112),
    v1->buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v2 + 32) == *(_QWORD *)(v2 + 112) )
    {
LABEL_7:
      if ( *(_QWORD *)(v2 + 72) == *(_QWORD *)(v2 + 152) )
      {
        buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 48);
        v5 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48),
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v2 + 128));
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      v5 = 0;
    }
    if ( v5 )
      break;
    v13 = *(_QWORD *)(v2 + 72);
    if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v13 + 104)) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 128) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13 + 128);
LABEL_11:
      buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 48);
      v6 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48));
      goto LABEL_32;
    }
    size = *(_QWORD *)(v13 + 128);
    buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 48);
    v6 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48));
    if ( size >= v6.size_ )
      size = v6.size_;
    v6.size_ -= size;
LABEL_32:
    if ( *(_QWORD *)(v2 + 40) < v6.size_ )
      v6.size_ = *(_QWORD *)(v2 + 40);
    if ( v6.size_ )
      break;
    v26.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v2 + 48);
    v26.it_.i_ = 0;
    p_it = (unsigned __int64)&v26.it_;
    v16 = v2 + 56;
    switch ( *(_BYTE *)(v2 + 64) )
    {
      case 0:
        goto LABEL_17;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_37:
          __asan_report_store8();
          goto LABEL_38;
        }
        p_i = &v26.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_37;
        v26.it_.buf_ = *(boost::beast::detail::aligned_union_t_6 *)(v2 + 56);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v26.it_.i_ = 1;
          goto LABEL_17;
        }
LABEL_38:
        p_it = __asan_report_store1(p_i);
LABEL_39:
        v17 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_44:
          __asan_report_store8();
          goto LABEL_45;
        }
        v17 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_44;
        *(_QWORD *)p_it = *(_QWORD *)(v2 + 56);
        v17 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_17;
        }
LABEL_45:
        p_it = __asan_report_store1(v17);
LABEL_46:
        v18 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_51:
          __asan_report_store8();
          goto LABEL_52;
        }
        v18 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        *(_QWORD *)p_it = *(_QWORD *)(v2 + 56);
        v18 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_17;
        }
LABEL_52:
        p_it = __asan_report_store1(v18);
LABEL_53:
        v19 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_58:
          __asan_report_store8();
          goto LABEL_59;
        }
        v19 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        *(_QWORD *)p_it = *(_QWORD *)(v2 + 56);
        v19 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_17;
        }
LABEL_59:
        p_it = __asan_report_store1(v19);
LABEL_60:
        v20 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_65:
          __asan_report_store8();
          goto LABEL_66;
        }
        v20 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_65;
        *(_QWORD *)p_it = *(_QWORD *)(v2 + 56);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_17;
        }
LABEL_66:
        p_it = __asan_report_store1(v20);
LABEL_67:
        v21 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_72:
          __asan_report_store8();
          goto LABEL_73;
        }
        v21 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_72;
        *(_QWORD *)p_it = *(_QWORD *)(v2 + 56);
        v21 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 6;
          goto LABEL_17;
        }
LABEL_73:
        p_it = __asan_report_store1(v21);
LABEL_74:
        v22 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_79:
          __asan_report_store8();
          goto LABEL_80;
        }
        v22 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_79;
        *(_QWORD *)p_it = *(_QWORD *)(v2 + 56);
        v22 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 7;
          goto LABEL_17;
        }
LABEL_80:
        p_it = __asan_report_store1(v22);
LABEL_81:
        v23 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_86:
          __asan_report_store8();
          goto LABEL_87;
        }
        v23 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_86;
        *(_QWORD *)p_it = *(_QWORD *)(v2 + 56);
        v23 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 8;
          goto LABEL_17;
        }
LABEL_87:
        p_it = __asan_report_store1(v23);
LABEL_88:
        v9 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_94:
          __asan_report_load1(v9);
LABEL_95:
          __asan_report_store1(v9);
LABEL_96:
          __asan_report_load8(v9);
LABEL_97:
          buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)&v26;
          v12 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
          goto LABEL_22;
        }
        v9 = v16;
        v24 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
        if ( v24 <= (char)(v16 & 7) && v24 )
          goto LABEL_94;
        *(_BYTE *)p_it = *(_BYTE *)(v2 + 56);
        v9 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_95;
        *(_BYTE *)(p_it + 8) = 9;
LABEL_17:
        v27 = *(_QWORD *)(v2 + 72);
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48));
        v8 = v27;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v26,
                (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v27 + 104)) )
          goto LABEL_97;
        v9 = v8 + 128;
        if ( *(_BYTE *)(((unsigned __int64)(v8 + 128) >> 3) + 0x7FFF8000) )
          goto LABEL_96;
        v10 = *(_QWORD *)(v8 + 128);
        buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)&v26;
        v11 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
        if ( v10 >= v11.size_ )
          v10 = v11.size_;
        v12.size_ = v11.size_ - v10;
LABEL_22:
        if ( v26.it_.i_ > 9u )
        {
          __asan_handle_no_return(&v26);
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
        *(_QWORD *)(v2 + 40) -= v12.size_;
        break;
      case 2:
        goto LABEL_39;
      case 3:
        goto LABEL_46;
      case 4:
        goto LABEL_53;
      case 5:
        goto LABEL_60;
      case 6:
        goto LABEL_67;
      case 7:
        goto LABEL_74;
      case 8:
        goto LABEL_81;
      case 9:
        goto LABEL_88;
      default:
        __asan_handle_no_return(buffers);
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
  if ( *(_BYTE *)(v2 + 144) > 9u )
  {
    __asan_handle_no_return(buffers);
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
  if ( *(_BYTE *)(v2 + 64) > 9u )
  {
    __asan_handle_no_return(buffers);
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
  if ( v28 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 81: range 000000000CC949F7-000000000CC94F99
bool __fastcall boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *buffers)
{
  unsigned __int64 v1; // r13
  _DWORD *v2; // r14
  __int64 v3; // rax
  bool v4; // r12
  char *v5; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  std::size_t v10; // rbp
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v11; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  __int64 v13; // rbp
  std::size_t size; // rbp
  unsigned __int64 p_it; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  char v21; // cl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-120h] BYREF
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v24; // [rsp+20h] [rbp-118h] BYREF
  __int64 v25; // [rsp+38h] [rbp-100h]
  char v26[248]; // [rsp+40h] [rbp-F8h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v1 = v3;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 48 5 it:83 112 48 6 end:84";
  *(_QWORD *)(v1 + 16) = boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862722] = -219021312;
  v2[536862723] = 62194;
  v2[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v1 + 32),
    buffers->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v1 + 112),
    buffers->buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v1 + 32) == *(_QWORD *)(v1 + 112) )
LABEL_7:
      v4 = *(_QWORD *)(v1 + 72) == *(_QWORD *)(v1 + 152)
        && boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
             (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v1 + 128));
    else
      v4 = 0;
    if ( v4 )
      break;
    v13 = *(_QWORD *)(v1 + 72);
    if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v13 + 64)) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 88) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13 + 88);
LABEL_11:
      v5 = (char *)(v1 + 48);
      v6 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
      goto LABEL_32;
    }
    size = *(_QWORD *)(v13 + 88);
    v5 = (char *)(v1 + 48);
    v6 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
    if ( size >= v6.size_ )
      size = v6.size_;
    v6.size_ -= size;
LABEL_32:
    if ( *(_QWORD *)(v1 + 40) < v6.size_ )
      v6.size_ = *(_QWORD *)(v1 + 40);
    if ( v6.size_ )
      break;
    v24.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v1 + 48);
    v24.it_.i_ = 0;
    p_it = (unsigned __int64)&v24.it_;
    v16 = v1 + 56;
    switch ( *(_BYTE *)(v1 + 64) )
    {
      case 0:
        goto LABEL_17;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_37:
          __asan_report_store8();
          goto LABEL_38;
        }
        p_i = &v24.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v24.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_37;
        v24.it_.buf_ = *(boost::beast::detail::aligned_union_t_5 *)(v1 + 56);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v24.it_.i_;
        if ( *(char *)(((unsigned __int64)&v24.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v24.it_.i_ = 1;
          goto LABEL_17;
        }
LABEL_38:
        p_it = __asan_report_store1(p_i);
LABEL_39:
        v17 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_44:
          __asan_report_store8();
          goto LABEL_45;
        }
        v17 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_44;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v17 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_17;
        }
LABEL_45:
        p_it = __asan_report_store1(v17);
LABEL_46:
        v18 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_51:
          __asan_report_store8();
          goto LABEL_52;
        }
        v18 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v18 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_17;
        }
LABEL_52:
        p_it = __asan_report_store1(v18);
LABEL_53:
        v19 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_58:
          __asan_report_store8();
          goto LABEL_59;
        }
        v19 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v19 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_17;
        }
LABEL_59:
        p_it = __asan_report_store1(v19);
LABEL_60:
        v20 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_65:
          __asan_report_store8();
          goto LABEL_66;
        }
        v20 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_65;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_17;
        }
LABEL_66:
        p_it = __asan_report_store1(v20);
LABEL_67:
        v9 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_73:
          __asan_report_load1(v9);
LABEL_74:
          __asan_report_store1(v9);
LABEL_75:
          __asan_report_load8(v9);
LABEL_76:
          v12 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v24);
          goto LABEL_22;
        }
        v9 = v16;
        v21 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
        if ( v21 <= (char)(v16 & 7) && v21 )
          goto LABEL_73;
        *(_BYTE *)p_it = *(_BYTE *)(v1 + 56);
        v9 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_74;
        *(_BYTE *)(p_it + 8) = 6;
LABEL_17:
        v25 = *(_QWORD *)(v1 + 72);
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
        v8 = v25;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v24,
                (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v25 + 64)) )
          goto LABEL_76;
        v9 = v8 + 88;
        if ( *(_BYTE *)(((unsigned __int64)(v8 + 88) >> 3) + 0x7FFF8000) )
          goto LABEL_75;
        v10 = *(_QWORD *)(v8 + 88);
        v11 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v24);
        if ( v10 >= v11.size_ )
          v10 = v11.size_;
        v12.size_ = v11.size_ - v10;
LABEL_22:
        if ( v24.it_.i_ > 6u )
        {
          __asan_handle_no_return(&v24);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_buffer*,"
            " const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const"
            " boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; declt"
            "ype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_"
            "constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        *(_QWORD *)(v1 + 40) -= v12.size_;
        break;
      case 2:
        goto LABEL_39;
      case 3:
        goto LABEL_46;
      case 4:
        goto LABEL_53;
      case 5:
        goto LABEL_60;
      case 6:
        goto LABEL_67;
      default:
        __asan_handle_no_return(v5);
        __assert_fail(
          "i < N",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
          0x17Du,
          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_"
          "t, F&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_buffer*, con"
          "st boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost"
          "::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declva"
          "l<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long"
          " unsigned int, 0>; std::size_t = long unsigned int]");
    }
  }
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 136);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 144),
    &f);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 64),
    &f);
  if ( v26 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};

// Line 81: range 000000000CC91DB7-000000000CC92359
bool __fastcall boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > *buffers)
{
  unsigned __int64 v1; // r13
  _DWORD *v2; // r14
  __int64 v3; // rax
  bool v4; // r12
  char *v5; // rdi
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  std::size_t v10; // rbp
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v11; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  __int64 v13; // rbp
  std::size_t size; // rbp
  unsigned __int64 p_it; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  char v21; // cl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-120h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator v24; // [rsp+20h] [rbp-118h] BYREF
  __int64 v25; // [rsp+38h] [rbp-100h]
  char v26[248]; // [rsp+40h] [rbp-F8h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v1 = v3;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 48 5 it:83 112 48 6 end:84";
  *(_QWORD *)(v1 + 16) = boost::beast::detail::buffers_empty<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862722] = -219021312;
  v2[536862723] = 62194;
  v2[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)(v1 + 32),
    buffers->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)(v1 + 112),
    buffers->buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v1 + 32) == *(_QWORD *)(v1 + 112) )
LABEL_7:
      v4 = *(_QWORD *)(v1 + 72) == *(_QWORD *)(v1 + 152)
        && boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v1 + 128));
    else
      v4 = 0;
    if ( v4 )
      break;
    v13 = *(_QWORD *)(v1 + 72);
    if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
            (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v13 + 8)) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13 + 32);
LABEL_11:
      v5 = (char *)(v1 + 48);
      v6 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
      goto LABEL_32;
    }
    size = *(_QWORD *)(v13 + 32);
    v5 = (char *)(v1 + 48);
    v6 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
    if ( size >= v6.size_ )
      size = v6.size_;
    v6.size_ -= size;
LABEL_32:
    if ( *(_QWORD *)(v1 + 40) < v6.size_ )
      v6.size_ = *(_QWORD *)(v1 + 40);
    if ( v6.size_ )
      break;
    v24.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> **)(v1 + 48);
    v24.it_.i_ = 0;
    p_it = (unsigned __int64)&v24.it_;
    v16 = v1 + 56;
    switch ( *(_BYTE *)(v1 + 64) )
    {
      case 0:
        goto LABEL_17;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_37:
          __asan_report_store8();
          goto LABEL_38;
        }
        p_i = &v24.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v24.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_37;
        v24.it_.buf_ = *(boost::beast::detail::aligned_union_t_3 *)(v1 + 56);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v24.it_.i_;
        if ( *(char *)(((unsigned __int64)&v24.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v24.it_.i_ = 1;
          goto LABEL_17;
        }
LABEL_38:
        p_it = __asan_report_store1(p_i);
LABEL_39:
        v17 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_44:
          __asan_report_store8();
          goto LABEL_45;
        }
        v17 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_44;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v17 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_17;
        }
LABEL_45:
        p_it = __asan_report_store1(v17);
LABEL_46:
        v18 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_51:
          __asan_report_store8();
          goto LABEL_52;
        }
        v18 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v18 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_17;
        }
LABEL_52:
        p_it = __asan_report_store1(v18);
LABEL_53:
        v19 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_58:
          __asan_report_store8();
          goto LABEL_59;
        }
        v19 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v19 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_17;
        }
LABEL_59:
        p_it = __asan_report_store1(v19);
LABEL_60:
        v20 = v16;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v16);
LABEL_65:
          __asan_report_store8();
          goto LABEL_66;
        }
        v20 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_65;
        *(_QWORD *)p_it = *(_QWORD *)(v1 + 56);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_17;
        }
LABEL_66:
        p_it = __asan_report_store1(v20);
LABEL_67:
        v9 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_73:
          __asan_report_load1(v9);
LABEL_74:
          __asan_report_store1(v9);
LABEL_75:
          __asan_report_load8(v9);
LABEL_76:
          v12 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v24);
          goto LABEL_22;
        }
        v9 = v16;
        v21 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
        if ( v21 <= (char)(v16 & 7) && v21 )
          goto LABEL_73;
        *(_BYTE *)p_it = *(_BYTE *)(v1 + 56);
        v9 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_74;
        *(_BYTE *)(p_it + 8) = 6;
LABEL_17:
        v25 = *(_QWORD *)(v1 + 72);
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
        v8 = v25;
        if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v24,
                (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v25 + 8)) )
          goto LABEL_76;
        v9 = v8 + 32;
        if ( *(_BYTE *)(((unsigned __int64)(v8 + 32) >> 3) + 0x7FFF8000) )
          goto LABEL_75;
        v10 = *(_QWORD *)(v8 + 32);
        v11 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v24);
        if ( v10 >= v11.size_ )
          v10 = v11.size_;
        v12.size_ = v11.size_ - v10;
LABEL_22:
        if ( v24.it_.i_ > 6u )
        {
          __asan_handle_no_return(&v24);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_buffer*,"
            " const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::http::basic_fields<std::a"
            "llocator<char> >::writer::field_iterator, const boost::asio::const_buffer*, boost::beast::detail::buffers_ca"
            "t_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = v"
            "oid; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        *(_QWORD *)(v1 + 40) -= v12.size_;
        break;
      case 2:
        goto LABEL_39;
      case 3:
        goto LABEL_46;
      case 4:
        goto LABEL_53;
      case 5:
        goto LABEL_60;
      case 6:
        goto LABEL_67;
      default:
        __asan_handle_no_return(v5);
        __assert_fail(
          "i < N",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
          0x17Du,
          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_"
          "t, F&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_buffer*, con"
          "st boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::http::basic_fields<std::allocat"
          "or<char> >::writer::field_iterator, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_i"
          "terator_base::past_end>::copy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::m"
          "p11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
    }
  }
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 136);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 144),
    &f);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 64),
    &f);
  if ( v26 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v4;
};
