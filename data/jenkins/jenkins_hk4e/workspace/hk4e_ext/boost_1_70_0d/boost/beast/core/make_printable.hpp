// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/make_printable.hpp

// Line 44: range 0000000019D0A502-0000000019D0AA32
std::ostream *__fastcall boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        std::ostream *os,
        const boost::beast::detail::make_printable_adaptor<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v)
{
  unsigned __int64 v3; // r13
  _DWORD *v4; // r15
  __int64 v5; // rax
  bool v6; // al
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  const char *data; // rsi
  unsigned __int64 p_it; // rax
  unsigned __int64 v10; // rcx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  std::size_t v14; // rbp
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v15; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  __int64 v17; // rbp
  std::size_t size; // rbp
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  char v21; // dl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-120h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v24; // [rsp+20h] [rbp-118h] BYREF
  __int64 v25; // [rsp+38h] [rbp-100h]
  char v26[248]; // [rsp+40h] [rbp-F8h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 48 5 it:48 112 48 6 end:49";
  *(_QWORD *)(v3 + 16) = boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 32),
    v->b_.buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 112),
    v->b_.buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v3 + 32) == *(_QWORD *)(v3 + 112) )
LABEL_7:
      v6 = *(_QWORD *)(v3 + 72) == *(_QWORD *)(v3 + 152)
        && boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 128));
    else
      v6 = 0;
    if ( v6 )
      break;
    v17 = *(_QWORD *)(v3 + 72);
    if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v17 + 40)) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(v17 + 64) >> 3) + 0x7FFF8000) )
      {
        size = *(_QWORD *)(v17 + 64);
        v7 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        if ( size >= v7.size_ )
          size = v7.size_;
        data = (char *)v7.data_ + size;
        v7.size_ -= size;
        goto LABEL_33;
      }
      __asan_report_load8(v17 + 64);
    }
    v7 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
    data = (const char *)v7.data_;
LABEL_33:
    if ( *(_QWORD *)(v3 + 40) < v7.size_ )
      v7.size_ = *(_QWORD *)(v3 + 40);
    std::ostream::write(os, data, v7.size_);
    v24.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v3 + 48);
    v24.it_.i_ = 0;
    p_it = (unsigned __int64)&v24.it_;
    v10 = v3 + 56;
    switch ( *(_BYTE *)(v3 + 64) )
    {
      case 0:
        goto LABEL_18;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_37:
          __asan_report_store8();
          goto LABEL_38;
        }
        p_i = &v24.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v24.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_37;
        v24.it_.buf_ = *(boost::beast::detail::aligned_union_t_7 *)(v3 + 56);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v24.it_.i_;
        if ( *(char *)(((unsigned __int64)&v24.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v24.it_.i_ = 1;
          goto LABEL_18;
        }
LABEL_38:
        p_it = __asan_report_store1(p_i);
LABEL_39:
        v19 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_44:
          __asan_report_store8();
          goto LABEL_45;
        }
        v19 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_44;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v19 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_18;
        }
LABEL_45:
        p_it = __asan_report_store1(v19);
LABEL_46:
        v20 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_51:
          __asan_report_store8();
          goto LABEL_52;
        }
        v20 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_18;
        }
LABEL_52:
        p_it = __asan_report_store1(v20);
LABEL_53:
        v13 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_59:
          __asan_report_load1(v13);
LABEL_60:
          __asan_report_store1(v13);
LABEL_61:
          __asan_report_load8(v13);
LABEL_62:
          v16 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v24);
          goto LABEL_23;
        }
        v13 = v10;
        v21 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
        if ( v21 <= (char)(v10 & 7) && v21 )
          goto LABEL_59;
        *(_BYTE *)p_it = *(_BYTE *)(v3 + 56);
        v13 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_60;
        *(_BYTE *)(p_it + 8) = 4;
LABEL_18:
        v25 = *(_QWORD *)(v3 + 72);
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        v12 = v25;
        if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v24,
                (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v25 + 40)) )
          goto LABEL_62;
        v13 = v12 + 64;
        if ( *(_BYTE *)(((unsigned __int64)(v12 + 64) >> 3) + 0x7FFF8000) )
          goto LABEL_61;
        v14 = *(_QWORD *)(v12 + 64);
        v15 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v24);
        if ( v14 >= v15.size_ )
          v14 = v15.size_;
        v16.size_ = v15.size_ - v14;
LABEL_23:
        if ( v24.it_.i_ > 4u )
        {
          __asan_handle_no_return(&v24);
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
        *(_QWORD *)(v3 + 40) -= v16.size_;
        break;
      case 2:
        goto LABEL_39;
      case 3:
        goto LABEL_46;
      case 4:
        goto LABEL_53;
      default:
        __asan_handle_no_return(os);
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
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 136);
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 144),
    &f);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 64),
    &f);
  if ( v26 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return os;
};

// Line 44: range 0000000019D149C6-0000000019D15207
std::ostream *__fastcall boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        std::ostream *os,
        const boost::beast::detail::make_printable_adaptor<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v)
{
  unsigned __int64 v3; // r13
  _DWORD *v4; // r15
  __int64 v5; // rax
  bool v6; // al
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  const char *data; // rsi
  unsigned __int64 v9; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rdi
  __int64 v11; // rbp
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v12; // rdi
  std::size_t v13; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v14; // rax
  std::size_t v15; // rbp
  __int64 v16; // rbp
  std::size_t size; // rbp
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v19; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v20; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v21; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v22; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v23; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v24; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v25; // rdi
  char v26; // dl
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v27; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v29; // [rsp+18h] [rbp-160h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-158h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v31; // [rsp+30h] [rbp-148h] BYREF
  __int64 v32; // [rsp+58h] [rbp-120h]
  char v33[280]; // [rsp+60h] [rbp-118h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 64 5 it:48 128 64 6 end:49";
  *(_QWORD *)(v3 + 16) = boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862723] = -218959118;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 32),
    v->b_.buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 128),
    v->b_.buffers_);
  while ( 2 )
  {
    if ( *(_QWORD *)(v3 + 32) == *(_QWORD *)(v3 + 128) )
LABEL_7:
      v6 = *(_QWORD *)(v3 + 88) == *(_QWORD *)(v3 + 184)
        && boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 144));
    else
      v6 = 0;
    if ( v6 )
      goto LABEL_114;
    v16 = *(_QWORD *)(v3 + 88);
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v16 + 112)) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)(v16 + 152) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v16 + 152);
LABEL_11:
      v7 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
      data = (const char *)v7.data_;
      goto LABEL_36;
    }
    size = *(_QWORD *)(v16 + 152);
    v7 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
    if ( size >= v7.size_ )
      size = v7.size_;
    data = (char *)v7.data_ + size;
    v7.size_ -= size;
LABEL_36:
    if ( *(_QWORD *)(v3 + 40) < v7.size_ )
      v7.size_ = *(_QWORD *)(v3 + 40);
    std::ostream::write(os, data, v7.size_);
    v31.bn_ = *(const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v3 + 48);
    v31.it_.i_ = 0;
    v9 = v3 + 56;
    switch ( *(_BYTE *)(v3 + 80) )
    {
      case 0:
        goto LABEL_20;
      case 1:
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_it);
LABEL_40:
          __asan_report_store8();
LABEL_41:
          __asan_report_store1(p_it);
LABEL_42:
          __asan_report_load1(p_it);
          goto LABEL_43;
        }
        p_it = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_40;
        *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v31.it_.buf_.1 + 2);
        if ( *(char *)(((unsigned __int64)(&v31.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_41;
        v31.it_.buf_.__data[16] = 0;
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v31.it_.buf_.1 + 1);
        f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 64);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 72);
        if ( *(char *)(((v3 + 72) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_42;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v3 + 72),
          &f);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 1;
          goto LABEL_20;
        }
LABEL_43:
        v9 = __asan_report_store1(p_it);
LABEL_44:
        p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_49:
          __asan_report_store8();
          goto LABEL_50;
        }
        p_i = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_49;
        *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 2;
          goto LABEL_20;
        }
LABEL_50:
        v9 = __asan_report_store1(p_i);
LABEL_51:
        v19 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_56:
          __asan_report_store8();
          goto LABEL_57;
        }
        v19 = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_56;
        *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v19 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 3;
          goto LABEL_20;
        }
LABEL_57:
        v9 = __asan_report_store1(v19);
LABEL_58:
        v20 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_63:
          __asan_report_store8();
          goto LABEL_64;
        }
        v20 = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_63;
        *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v20 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 4;
          goto LABEL_20;
        }
LABEL_64:
        v9 = __asan_report_store1(v20);
LABEL_65:
        v21 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_70:
          __asan_report_store8();
          goto LABEL_71;
        }
        v21 = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_70;
        *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v21 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 5;
          goto LABEL_20;
        }
LABEL_71:
        v9 = __asan_report_store1(v21);
LABEL_72:
        v22 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_77:
          __asan_report_store8();
          goto LABEL_78;
        }
        v22 = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_77;
        *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v22 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 6;
          goto LABEL_20;
        }
LABEL_78:
        v9 = __asan_report_store1(v22);
LABEL_79:
        v23 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_84:
          __asan_report_store8();
          goto LABEL_85;
        }
        v23 = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_84;
        *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v23 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 7;
          goto LABEL_20;
        }
LABEL_85:
        v9 = __asan_report_store1(v23);
LABEL_86:
        v24 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_91:
          __asan_report_store8();
          goto LABEL_92;
        }
        v24 = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_91;
        *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v24 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 8;
          goto LABEL_20;
        }
LABEL_92:
        v9 = __asan_report_store1(v24);
LABEL_93:
        v25 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_98:
          __asan_report_store8();
          goto LABEL_99;
        }
        v25 = &v31.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_98;
        *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v25 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v31.it_.i_ = 9;
          goto LABEL_20;
        }
LABEL_99:
        v9 = __asan_report_store1(v25);
LABEL_100:
        v12 = &v31.it_;
        if ( *(char *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(&v31.it_);
LABEL_106:
          __asan_report_load1(v12);
LABEL_107:
          __asan_report_store1(v12);
LABEL_108:
          __asan_report_load8(v12);
LABEL_109:
          v27 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v31);
          v15 = v27.size_;
          goto LABEL_25;
        }
        v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        v26 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
        if ( v26 <= (char)(v9 & 7) && v26 )
          goto LABEL_106;
        v31.it_.buf_.__data[0] = *(_BYTE *)(v3 + 56);
        v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
        if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_107;
        v31.it_.i_ = 10;
LABEL_20:
        v32 = *(_QWORD *)(v3 + 88);
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        v11 = v32;
        if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v31,
                (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v32 + 112)) )
          goto LABEL_109;
        v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v11 + 152);
        if ( *(_BYTE *)(((unsigned __int64)(v11 + 152) >> 3) + 0x7FFF8000) )
          goto LABEL_108;
        v13 = *(_QWORD *)(v11 + 152);
        v14 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v31);
        if ( v13 >= v14.size_ )
          v13 = v14.size_;
        v15 = v14.size_ - v13;
LABEL_25:
        if ( v31.it_.i_ > 0xAuLL )
        {
          __asan_handle_no_return(&v31);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 11; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<b"
            "oost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fi"
            "elds<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boo"
            "st::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::as"
            "io::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::co"
            "nst_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_en"
            "d>::destroy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0"
            "> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        if ( v31.it_.i_ != 1LL )
          goto LABEL_27;
        v29.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v31.it_.buf_.1 + 1);
        if ( *(char *)(((unsigned __int64)(&v31.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
        {
          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
            v31.it_.buf_.__data[16],
            &v29);
LABEL_27:
          *(_QWORD *)(v3 + 40) -= v15;
          continue;
        }
        __asan_report_load1(&v31.it_.buf_.1 + 2);
LABEL_114:
        v29.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 152);
        boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v3 + 176),
          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v29);
        v29.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
        boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v3 + 80),
          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v29);
        if ( v33 == (char *)v3 )
        {
          *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
          *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
          *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
        }
        else
        {
          *(_QWORD *)v3 = 1172321806LL;
          *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
          *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
          *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
          *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
        }
        return os;
      case 2:
        goto LABEL_44;
      case 3:
        goto LABEL_51;
      case 4:
        goto LABEL_58;
      case 5:
        goto LABEL_65;
      case 6:
        goto LABEL_72;
      case 7:
        goto LABEL_79;
      case 8:
        goto LABEL_86;
      case 9:
        goto LABEL_93;
      case 0xA:
        goto LABEL_100;
      default:
        __asan_handle_no_return(os);
        __assert_fail(
          "i < N",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
          0x17Du,
          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_"
          "t, F&&) [with long unsigned int N = 11; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<boost"
          "::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<s"
          "td::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio"
          "::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_"
          "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
          " const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decl"
          "type (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_c"
          "onstant<long unsigned int, 0>; std::size_t = long unsigned int]");
    }
  }
};

// Line 44: range 0000000019D0F095-0000000019D0F7B0
std::ostream *__fastcall boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        std::ostream *os,
        const boost::beast::detail::make_printable_adaptor<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v)
{
  unsigned __int64 v3; // r13
  _DWORD *v4; // r15
  __int64 v5; // rax
  bool v6; // al
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  const char *data; // rsi
  unsigned __int64 v9; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rdi
  __int64 v11; // rbp
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v12; // rdi
  std::size_t v13; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v14; // rax
  std::size_t v15; // rbp
  __int64 v16; // rbp
  std::size_t size; // rbp
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v19; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v20; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v21; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v22; // rdi
  char v23; // dl
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v24; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v26; // [rsp+18h] [rbp-160h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-158h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v28; // [rsp+30h] [rbp-148h] BYREF
  __int64 v29; // [rsp+58h] [rbp-120h]
  char v30[280]; // [rsp+60h] [rbp-118h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 64 5 it:48 128 64 6 end:49";
  *(_QWORD *)(v3 + 16) = boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862723] = -218959118;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 32),
    v->b_.buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 128),
    v->b_.buffers_);
  while ( 2 )
  {
    if ( *(_QWORD *)(v3 + 32) == *(_QWORD *)(v3 + 128) )
LABEL_7:
      v6 = *(_QWORD *)(v3 + 88) == *(_QWORD *)(v3 + 184)
        && boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 144));
    else
      v6 = 0;
    if ( v6 )
      goto LABEL_93;
    v16 = *(_QWORD *)(v3 + 88);
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v16 + 72)) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)(v16 + 112) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v16 + 112);
LABEL_11:
      v7 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
      data = (const char *)v7.data_;
      goto LABEL_36;
    }
    size = *(_QWORD *)(v16 + 112);
    v7 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
    if ( size >= v7.size_ )
      size = v7.size_;
    data = (char *)v7.data_ + size;
    v7.size_ -= size;
LABEL_36:
    if ( *(_QWORD *)(v3 + 40) < v7.size_ )
      v7.size_ = *(_QWORD *)(v3 + 40);
    std::ostream::write(os, data, v7.size_);
    v28.bn_ = *(const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v3 + 48);
    v28.it_.i_ = 0;
    v9 = v3 + 56;
    switch ( *(_BYTE *)(v3 + 80) )
    {
      case 0:
        goto LABEL_20;
      case 1:
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_it);
LABEL_40:
          __asan_report_store8();
LABEL_41:
          __asan_report_store1(p_it);
LABEL_42:
          __asan_report_load1(p_it);
          goto LABEL_43;
        }
        p_it = &v28.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v28.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_40;
        *(_QWORD *)v28.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v28.it_.buf_.1 + 2);
        if ( *(char *)(((unsigned __int64)(&v28.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_41;
        v28.it_.buf_.__data[16] = 0;
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v28.it_.buf_.1 + 1);
        f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 64);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 72);
        if ( *(char *)(((v3 + 72) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_42;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v3 + 72),
          &f);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v28.it_.i_;
        if ( *(char *)(((unsigned __int64)&v28.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v28.it_.i_ = 1;
          goto LABEL_20;
        }
LABEL_43:
        v9 = __asan_report_store1(p_it);
LABEL_44:
        p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_49:
          __asan_report_store8();
          goto LABEL_50;
        }
        p_i = &v28.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v28.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_49;
        *(_QWORD *)v28.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v28.it_.i_;
        if ( *(char *)(((unsigned __int64)&v28.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v28.it_.i_ = 2;
          goto LABEL_20;
        }
LABEL_50:
        v9 = __asan_report_store1(p_i);
LABEL_51:
        v19 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_56:
          __asan_report_store8();
          goto LABEL_57;
        }
        v19 = &v28.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v28.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_56;
        *(_QWORD *)v28.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v19 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v28.it_.i_;
        if ( *(char *)(((unsigned __int64)&v28.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v28.it_.i_ = 3;
          goto LABEL_20;
        }
LABEL_57:
        v9 = __asan_report_store1(v19);
LABEL_58:
        v20 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_63:
          __asan_report_store8();
          goto LABEL_64;
        }
        v20 = &v28.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v28.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_63;
        *(_QWORD *)v28.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v20 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v28.it_.i_;
        if ( *(char *)(((unsigned __int64)&v28.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v28.it_.i_ = 4;
          goto LABEL_20;
        }
LABEL_64:
        v9 = __asan_report_store1(v20);
LABEL_65:
        v21 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_70:
          __asan_report_store8();
          goto LABEL_71;
        }
        v21 = &v28.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v28.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_70;
        *(_QWORD *)v28.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v21 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v28.it_.i_;
        if ( *(char *)(((unsigned __int64)&v28.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v28.it_.i_ = 5;
          goto LABEL_20;
        }
LABEL_71:
        v9 = __asan_report_store1(v21);
LABEL_72:
        v22 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v9);
LABEL_77:
          __asan_report_store8();
          goto LABEL_78;
        }
        v22 = &v28.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v28.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_77;
        *(_QWORD *)v28.it_.buf_.__data = *(_QWORD *)(v3 + 56);
        v22 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v28.it_.i_;
        if ( *(char *)(((unsigned __int64)&v28.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v28.it_.i_ = 6;
          goto LABEL_20;
        }
LABEL_78:
        v9 = __asan_report_store1(v22);
LABEL_79:
        v12 = &v28.it_;
        if ( *(char *)(((unsigned __int64)&v28.it_ >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(&v28.it_);
LABEL_85:
          __asan_report_load1(v12);
LABEL_86:
          __asan_report_store1(v12);
LABEL_87:
          __asan_report_load8(v12);
LABEL_88:
          v24 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v28);
          v15 = v24.size_;
          goto LABEL_25;
        }
        v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v9;
        v23 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
        if ( v23 <= (char)(v9 & 7) && v23 )
          goto LABEL_85;
        v28.it_.buf_.__data[0] = *(_BYTE *)(v3 + 56);
        v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v28.it_.i_;
        if ( *(char *)(((unsigned __int64)&v28.it_.i_ >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_86;
        v28.it_.i_ = 7;
LABEL_20:
        v29 = *(_QWORD *)(v3 + 88);
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        v11 = v29;
        if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v28,
                (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v29 + 72)) )
          goto LABEL_88;
        v12 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v11 + 112);
        if ( *(_BYTE *)(((unsigned __int64)(v11 + 112) >> 3) + 0x7FFF8000) )
          goto LABEL_87;
        v13 = *(_QWORD *)(v11 + 112);
        v14 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v28);
        if ( v13 >= v14.size_ )
          v13 = v14.size_;
        v15 = v14.size_ - v13;
LABEL_25:
        if ( v28.it_.i_ > 7uLL )
        {
          __asan_handle_no_return(&v28);
          __assert_fail(
            "i < N",
            "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
            0x17Du,
            "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::siz"
            "e_t, F&&) [with long unsigned int N = 8; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<bo"
            "ost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fie"
            "lds<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boos"
            "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asi"
            "o::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::pa"
            "st_end>::destroy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_siz"
            "e_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
        if ( v28.it_.i_ != 1LL )
          goto LABEL_27;
        v26.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v28.it_.buf_.1 + 1);
        if ( *(char *)(((unsigned __int64)(&v28.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
        {
          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
            v28.it_.buf_.__data[16],
            &v26);
LABEL_27:
          *(_QWORD *)(v3 + 40) -= v15;
          continue;
        }
        __asan_report_load1(&v28.it_.buf_.1 + 2);
LABEL_93:
        v26.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 152);
        boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v3 + 176),
          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v26);
        v26.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
        boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v3 + 80),
          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v26);
        if ( v30 == (char *)v3 )
        {
          *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
          *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
          *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
        }
        else
        {
          *(_QWORD *)v3 = 1172321806LL;
          *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
          *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
          *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
          *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
        }
        return os;
      case 2:
        goto LABEL_44;
      case 3:
        goto LABEL_51;
      case 4:
        goto LABEL_58;
      case 5:
        goto LABEL_65;
      case 6:
        goto LABEL_72;
      case 7:
        goto LABEL_79;
      default:
        __asan_handle_no_return(os);
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
};

// Line 44: range 0000000019D10F9F-0000000019D116F4
std::ostream *__fastcall boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        std::ostream *os,
        const boost::beast::detail::make_printable_adaptor<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v)
{
  unsigned __int64 v3; // r13
  _DWORD *v4; // r14
  void *v5; // rdi
  __int64 v6; // rax
  bool v7; // al
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v8; // rax
  const char *data; // rsi
  unsigned __int64 p_it; // rax
  unsigned __int64 v11; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  std::size_t v15; // rbp
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v17; // rax
  __int64 v18; // rbp
  std::size_t size; // rbp
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  char v27; // cl
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v29; // [rsp+10h] [rbp-118h] BYREF
  __int64 v30; // [rsp+28h] [rbp-100h]
  char v31[248]; // [rsp+30h] [rbp-F8h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v3 = v6;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 48 5 it:48 112 48 6 end:49";
  *(_QWORD *)(v3 + 16) = boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    v5 = (void *)v;
    __asan_report_load8(v);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 32),
    v->b_.buffers_);
  v5 = (void *)(v3 + 112);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 112),
    v->b_.buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v3 + 32) == *(_QWORD *)(v3 + 112) )
    {
LABEL_7:
      if ( *(_QWORD *)(v3 + 72) == *(_QWORD *)(v3 + 152) )
      {
        v5 = (void *)(v3 + 48);
        v7 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 128));
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
    v18 = *(_QWORD *)(v3 + 72);
    if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v18 + 104)) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(v18 + 128) >> 3) + 0x7FFF8000) )
      {
        size = *(_QWORD *)(v18 + 128);
        v8 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        if ( size >= v8.size_ )
          size = v8.size_;
        data = (char *)v8.data_ + size;
        v8.size_ -= size;
        goto LABEL_33;
      }
      __asan_report_load8(v18 + 128);
    }
    v8 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
    data = (const char *)v8.data_;
LABEL_33:
    if ( *(_QWORD *)(v3 + 40) < v8.size_ )
      v8.size_ = *(_QWORD *)(v3 + 40);
    std::ostream::write(os, data, v8.size_);
    v29.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v3 + 48);
    v29.it_.i_ = 0;
    p_it = (unsigned __int64)&v29.it_;
    v11 = v3 + 56;
    switch ( *(_BYTE *)(v3 + 64) )
    {
      case 0:
        goto LABEL_18;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_37:
          __asan_report_store8();
          goto LABEL_38;
        }
        p_i = &v29.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v29.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_37;
        v29.it_.buf_ = *(boost::beast::detail::aligned_union_t_5 *)(v3 + 56);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v29.it_.i_;
        if ( *(char *)(((unsigned __int64)&v29.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v29.it_.i_ = 1;
          goto LABEL_18;
        }
LABEL_38:
        p_it = __asan_report_store1(p_i);
LABEL_39:
        v20 = v11;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_44:
          __asan_report_store8();
          goto LABEL_45;
        }
        v20 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_44;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_18;
        }
LABEL_45:
        p_it = __asan_report_store1(v20);
LABEL_46:
        v21 = v11;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_51:
          __asan_report_store8();
          goto LABEL_52;
        }
        v21 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v21 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_18;
        }
LABEL_52:
        p_it = __asan_report_store1(v21);
LABEL_53:
        v22 = v11;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_58:
          __asan_report_store8();
          goto LABEL_59;
        }
        v22 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v22 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_18;
        }
LABEL_59:
        p_it = __asan_report_store1(v22);
LABEL_60:
        v23 = v11;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_65:
          __asan_report_store8();
          goto LABEL_66;
        }
        v23 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_65;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v23 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_18;
        }
LABEL_66:
        p_it = __asan_report_store1(v23);
LABEL_67:
        v24 = v11;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_72:
          __asan_report_store8();
          goto LABEL_73;
        }
        v24 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_72;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v24 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 6;
          goto LABEL_18;
        }
LABEL_73:
        p_it = __asan_report_store1(v24);
LABEL_74:
        v25 = v11;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_79:
          __asan_report_store8();
          goto LABEL_80;
        }
        v25 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_79;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v25 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 7;
          goto LABEL_18;
        }
LABEL_80:
        p_it = __asan_report_store1(v25);
LABEL_81:
        v26 = v11;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v11);
LABEL_86:
          __asan_report_store8();
          goto LABEL_87;
        }
        v26 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_86;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v26 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 8;
          goto LABEL_18;
        }
LABEL_87:
        p_it = __asan_report_store1(v26);
LABEL_88:
        v14 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_94:
          __asan_report_load1(v14);
LABEL_95:
          __asan_report_store1(v14);
LABEL_96:
          __asan_report_load8(v14);
LABEL_97:
          v5 = &v29;
          v17 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v29);
          goto LABEL_23;
        }
        v14 = v11;
        v27 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
        if ( v27 <= (char)(v11 & 7) && v27 )
          goto LABEL_94;
        *(_BYTE *)p_it = *(_BYTE *)(v3 + 56);
        v14 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_95;
        *(_BYTE *)(p_it + 8) = 9;
LABEL_18:
        v30 = *(_QWORD *)(v3 + 72);
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        v13 = v30;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v29,
                (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v30 + 104)) )
          goto LABEL_97;
        v14 = v13 + 128;
        if ( *(_BYTE *)(((unsigned __int64)(v13 + 128) >> 3) + 0x7FFF8000) )
          goto LABEL_96;
        v15 = *(_QWORD *)(v13 + 128);
        v5 = &v29;
        v16 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v29);
        if ( v15 >= v16.size_ )
          v15 = v16.size_;
        v17.size_ = v16.size_ - v15;
LABEL_23:
        if ( v29.it_.i_ > 9u )
        {
          __asan_handle_no_return(&v29);
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
        *(_QWORD *)(v3 + 40) -= v17.size_;
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
        __asan_handle_no_return(os);
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
  if ( *(_BYTE *)(v3 + 144) > 9u )
  {
    __asan_handle_no_return(v5);
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
  if ( *(_BYTE *)(v3 + 64) > 9u )
  {
    __asan_handle_no_return(v5);
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
  if ( v31 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return os;
};

// Line 44: range 0000000019D101A1-0000000019D1078B
std::ostream *__fastcall boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        std::ostream *os,
        const boost::beast::detail::make_printable_adaptor<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > *v)
{
  unsigned __int64 v3; // r13
  _DWORD *v4; // r15
  __int64 v5; // rax
  bool v6; // al
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  const char *data; // rsi
  unsigned __int64 p_it; // rax
  unsigned __int64 v10; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  std::size_t v14; // rbp
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v15; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  __int64 v17; // rbp
  std::size_t size; // rbp
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  char v23; // cl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-120h] BYREF
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v26; // [rsp+20h] [rbp-118h] BYREF
  __int64 v27; // [rsp+38h] [rbp-100h]
  char v28[248]; // [rsp+40h] [rbp-F8h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 48 5 it:48 112 48 6 end:49";
  *(_QWORD *)(v3 + 16) = boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 32),
    v->b_.buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 112),
    v->b_.buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v3 + 32) == *(_QWORD *)(v3 + 112) )
LABEL_7:
      v6 = *(_QWORD *)(v3 + 72) == *(_QWORD *)(v3 + 152)
        && boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
             (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 128));
    else
      v6 = 0;
    if ( v6 )
      break;
    v17 = *(_QWORD *)(v3 + 72);
    if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v17 + 64)) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(v17 + 88) >> 3) + 0x7FFF8000) )
      {
        size = *(_QWORD *)(v17 + 88);
        v7 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        if ( size >= v7.size_ )
          size = v7.size_;
        data = (char *)v7.data_ + size;
        v7.size_ -= size;
        goto LABEL_33;
      }
      __asan_report_load8(v17 + 88);
    }
    v7 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
    data = (const char *)v7.data_;
LABEL_33:
    if ( *(_QWORD *)(v3 + 40) < v7.size_ )
      v7.size_ = *(_QWORD *)(v3 + 40);
    std::ostream::write(os, data, v7.size_);
    v26.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v3 + 48);
    v26.it_.i_ = 0;
    p_it = (unsigned __int64)&v26.it_;
    v10 = v3 + 56;
    switch ( *(_BYTE *)(v3 + 64) )
    {
      case 0:
        goto LABEL_18;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_37:
          __asan_report_store8();
          goto LABEL_38;
        }
        p_i = &v26.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_37;
        v26.it_.buf_ = *(boost::beast::detail::aligned_union_t_4 *)(v3 + 56);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v26.it_.i_ = 1;
          goto LABEL_18;
        }
LABEL_38:
        p_it = __asan_report_store1(p_i);
LABEL_39:
        v19 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_44:
          __asan_report_store8();
          goto LABEL_45;
        }
        v19 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_44;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v19 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_18;
        }
LABEL_45:
        p_it = __asan_report_store1(v19);
LABEL_46:
        v20 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_51:
          __asan_report_store8();
          goto LABEL_52;
        }
        v20 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_18;
        }
LABEL_52:
        p_it = __asan_report_store1(v20);
LABEL_53:
        v21 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_58:
          __asan_report_store8();
          goto LABEL_59;
        }
        v21 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v21 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_18;
        }
LABEL_59:
        p_it = __asan_report_store1(v21);
LABEL_60:
        v22 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_65:
          __asan_report_store8();
          goto LABEL_66;
        }
        v22 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_65;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v22 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_18;
        }
LABEL_66:
        p_it = __asan_report_store1(v22);
LABEL_67:
        v13 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_73:
          __asan_report_load1(v13);
LABEL_74:
          __asan_report_store1(v13);
LABEL_75:
          __asan_report_load8(v13);
LABEL_76:
          v16 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
          goto LABEL_23;
        }
        v13 = v10;
        v23 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
        if ( v23 <= (char)(v10 & 7) && v23 )
          goto LABEL_73;
        *(_BYTE *)p_it = *(_BYTE *)(v3 + 56);
        v13 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_74;
        *(_BYTE *)(p_it + 8) = 6;
LABEL_18:
        v27 = *(_QWORD *)(v3 + 72);
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        v12 = v27;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v26,
                (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v27 + 64)) )
          goto LABEL_76;
        v13 = v12 + 88;
        if ( *(_BYTE *)(((unsigned __int64)(v12 + 88) >> 3) + 0x7FFF8000) )
          goto LABEL_75;
        v14 = *(_QWORD *)(v12 + 88);
        v15 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
        if ( v14 >= v15.size_ )
          v14 = v15.size_;
        v16.size_ = v15.size_ - v14;
LABEL_23:
        if ( v26.it_.i_ > 6u )
        {
          __asan_handle_no_return(&v26);
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
        *(_QWORD *)(v3 + 40) -= v16.size_;
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
        __asan_handle_no_return(os);
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
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 136);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 144),
    &f);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 64),
    &f);
  if ( v28 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return os;
};

// Line 44: range 0000000019D0EAA6-0000000019D0F090
std::ostream *__fastcall boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>(
        std::ostream *os,
        const boost::beast::detail::make_printable_adaptor<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > > *v)
{
  unsigned __int64 v3; // r13
  _DWORD *v4; // r15
  __int64 v5; // rax
  bool v6; // al
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  const char *data; // rsi
  unsigned __int64 p_it; // rax
  unsigned __int64 v10; // rdx
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  std::size_t v14; // rbp
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v15; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  __int64 v17; // rbp
  std::size_t size; // rbp
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  char v23; // cl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-120h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator v26; // [rsp+20h] [rbp-118h] BYREF
  __int64 v27; // [rsp+38h] [rbp-100h]
  char v28[248]; // [rsp+40h] [rbp-F8h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 48 5 it:48 112 48 6 end:49";
  *(_QWORD *)(v3 + 16) = boost::beast::detail::operator<<<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)(v3 + 32),
    v->b_.buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)(v3 + 112),
    v->b_.buffers_);
  while ( 1 )
  {
    if ( *(_QWORD *)(v3 + 32) == *(_QWORD *)(v3 + 112) )
LABEL_7:
      v6 = *(_QWORD *)(v3 + 72) == *(_QWORD *)(v3 + 152)
        && boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 128));
    else
      v6 = 0;
    if ( v6 )
      break;
    v17 = *(_QWORD *)(v3 + 72);
    if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v17 + 8)) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(v17 + 32) >> 3) + 0x7FFF8000) )
      {
        size = *(_QWORD *)(v17 + 32);
        v7 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        if ( size >= v7.size_ )
          size = v7.size_;
        data = (char *)v7.data_ + size;
        v7.size_ -= size;
        goto LABEL_33;
      }
      __asan_report_load8(v17 + 32);
    }
    v7 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
    data = (const char *)v7.data_;
LABEL_33:
    if ( *(_QWORD *)(v3 + 40) < v7.size_ )
      v7.size_ = *(_QWORD *)(v3 + 40);
    std::ostream::write(os, data, v7.size_);
    v26.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> **)(v3 + 48);
    v26.it_.i_ = 0;
    p_it = (unsigned __int64)&v26.it_;
    v10 = v3 + 56;
    switch ( *(_BYTE *)(v3 + 64) )
    {
      case 0:
        goto LABEL_18;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_37:
          __asan_report_store8();
          goto LABEL_38;
        }
        p_i = &v26.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v26.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_37;
        v26.it_.buf_ = *(boost::beast::detail::aligned_union_t_2 *)(v3 + 56);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v26.it_.i_;
        if ( *(char *)(((unsigned __int64)&v26.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v26.it_.i_ = 1;
          goto LABEL_18;
        }
LABEL_38:
        p_it = __asan_report_store1(p_i);
LABEL_39:
        v19 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_44:
          __asan_report_store8();
          goto LABEL_45;
        }
        v19 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_44;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v19 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_18;
        }
LABEL_45:
        p_it = __asan_report_store1(v19);
LABEL_46:
        v20 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_51:
          __asan_report_store8();
          goto LABEL_52;
        }
        v20 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_18;
        }
LABEL_52:
        p_it = __asan_report_store1(v20);
LABEL_53:
        v21 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_58:
          __asan_report_store8();
          goto LABEL_59;
        }
        v21 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v21 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_18;
        }
LABEL_59:
        p_it = __asan_report_store1(v21);
LABEL_60:
        v22 = v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v10);
LABEL_65:
          __asan_report_store8();
          goto LABEL_66;
        }
        v22 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_65;
        *(_QWORD *)p_it = *(_QWORD *)(v3 + 56);
        v22 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_18;
        }
LABEL_66:
        p_it = __asan_report_store1(v22);
LABEL_67:
        v13 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_73:
          __asan_report_load1(v13);
LABEL_74:
          __asan_report_store1(v13);
LABEL_75:
          __asan_report_load8(v13);
LABEL_76:
          v16 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
          goto LABEL_23;
        }
        v13 = v10;
        v23 = *(_BYTE *)((v10 >> 3) + 0x7FFF8000);
        if ( v23 <= (char)(v10 & 7) && v23 )
          goto LABEL_73;
        *(_BYTE *)p_it = *(_BYTE *)(v3 + 56);
        v13 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_74;
        *(_BYTE *)(p_it + 8) = 6;
LABEL_18:
        v27 = *(_QWORD *)(v3 + 72);
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48));
        v12 = v27;
        if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v26,
                (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v27 + 8)) )
          goto LABEL_76;
        v13 = v12 + 32;
        if ( *(_BYTE *)(((unsigned __int64)(v12 + 32) >> 3) + 0x7FFF8000) )
          goto LABEL_75;
        v14 = *(_QWORD *)(v12 + 32);
        v15 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v26);
        if ( v14 >= v15.size_ )
          v14 = v15.size_;
        v16.size_ = v15.size_ - v14;
LABEL_23:
        if ( v26.it_.i_ > 6u )
        {
          __asan_handle_no_return(&v26);
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
        *(_QWORD *)(v3 + 40) -= v16.size_;
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
        __asan_handle_no_return(os);
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
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 136);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 144),
    &f);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v3 + 64),
    &f);
  if ( v28 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return os;
};
