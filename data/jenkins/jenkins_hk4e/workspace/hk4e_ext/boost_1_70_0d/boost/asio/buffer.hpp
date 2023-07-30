// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/buffer.hpp

// Line 203: range 0000000019BE9599-0000000019BE9A1A
__int64 __fastcall boost::asio::detail::buffer_copy<boost::asio::mutable_buffer const*,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator>(
        unsigned __int64 a1,
        boost::asio::detail::multiple_buffers a2,
        unsigned __int64 target_begin,
        unsigned __int64 a4,
        std::size_t max_bytes_to_copy)
{
  __int64 v5; // r15
  const boost::asio::mutable_buffer *v10; // rdi
  std::size_t v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  bool v14; // al
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v15; // rax
  char *data; // rsi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v18; // rax
  std::size_t v19; // r13
  __int64 v20; // r12
  std::size_t size; // r12
  std::size_t v22; // r12
  unsigned __int64 v23; // r13
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v24; // rax
  unsigned __int64 v25; // [rsp+18h] [rbp-120h]
  unsigned __int64 v26; // [rsp+28h] [rbp-110h]
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v27; // [rsp+38h] [rbp-100h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+40h] [rbp-F8h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v29; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-C0h]
  char v31[184]; // [rsp+80h] [rbp-B8h] BYREF

  v25 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(128LL);
    if ( v12 )
      v25 = v12;
  }
  *(_QWORD *)v25 = 1102416563LL;
  *(_QWORD *)(v25 + 8) = "1 32 64 16 source_iter:2210";
  *(_QWORD *)(v25 + 16) = boost::asio::detail::buffer_copy<boost::asio::mutable_buffer const*,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator>;
  v26 = v25 >> 3;
  *(_DWORD *)(v26 + 2147450880) = -235802127;
  *(_DWORD *)(v26 + 2147450892) = -202116109;
  if ( *(_BYTE *)((target_begin >> 3) + 0x7FFF8000) )
  {
    v10 = (const boost::asio::mutable_buffer *)target_begin;
    __asan_report_load8(target_begin);
    goto LABEL_15;
  }
  *(_QWORD *)(v25 + 32) = *(_QWORD *)target_begin;
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 8);
  if ( *(_BYTE *)(((target_begin + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(v10);
    goto LABEL_16;
  }
  *(_QWORD *)(v25 + 40) = *(_QWORD *)(target_begin + 8);
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 16);
  if ( *(_BYTE *)(((target_begin + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(v10);
    goto LABEL_17;
  }
  *(_QWORD *)(v25 + 48) = *(_QWORD *)(target_begin + 16);
  *(_BYTE *)(v25 + 80) = 0;
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v25 + 56);
  f.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(target_begin + 24);
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 48);
  if ( *(char *)(((target_begin + 48) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_17:
    __asan_report_load1(v10);
    goto LABEL_18;
  }
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    *(unsigned __int8 *)(target_begin + 48),
    &f);
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 56);
  if ( *(_BYTE *)(((target_begin + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v10);
    goto LABEL_19;
  }
  *(_QWORD *)(v25 + 88) = *(_QWORD *)(target_begin + 56);
  v10 = (const boost::asio::mutable_buffer *)(a1 + 8);
  if ( *(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(v10);
LABEL_20:
    v13 = a1;
    __asan_report_load8(a1);
    goto LABEL_21;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( max_bytes_to_copy <= v11 )
    v11 = max_bytes_to_copy;
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  max_bytes_to_copy = *(_QWORD *)a1;
  v5 = 0LL;
  while ( 1 )
  {
    a1 = v11;
    if ( !v11 )
      break;
    v13 = a4;
    if ( *(_BYTE *)((a4 >> 3) + 0x7FFF8000) )
    {
LABEL_21:
      __asan_report_load8(v13);
    }
    else if ( *(_QWORD *)(v25 + 32) != *(_QWORD *)a4 )
    {
      v14 = 0;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(((a4 + 56) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(a4 + 56);
    }
    else if ( *(_QWORD *)(v25 + 88) != *(_QWORD *)(a4 + 56) )
    {
      v14 = 0;
      goto LABEL_39;
    }
    v14 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v25 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(a4 + 16));
LABEL_39:
    if ( v14 )
      break;
    v20 = *(_QWORD *)(v25 + 88);
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v25 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v20 + 112)) )
      goto LABEL_28;
    if ( *(_BYTE *)(((unsigned __int64)(v20 + 152) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v20 + 152);
LABEL_28:
      v15 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v25 + 48));
      data = (char *)v15.data_;
      goto LABEL_45;
    }
    size = *(_QWORD *)(v20 + 152);
    v15 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v25 + 48));
    if ( size >= v15.size_ )
      size = v15.size_;
    data = (char *)v15.data_ + size;
    v15.size_ -= size;
LABEL_45:
    if ( *(_QWORD *)(v25 + 40) < v15.size_ )
      v15.size_ = *(_QWORD *)(v25 + 40);
    v22 = v15.size_;
    if ( a1 < v15.size_ )
      v22 = a1;
    if ( v22 )
      memcpy((void *)max_bytes_to_copy, data, v22);
    v5 += v22;
    if ( a1 <= v22 )
      v22 = a1;
    max_bytes_to_copy += v22;
    v11 = a1 - v22;
    v29.bn_ = *(const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v25 + 48);
    v29.it_.i_ = 0;
    f.self = &v29.it_;
    f.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v25 + 56);
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      *(unsigned __int8 *)(v25 + 80),
      &f);
    v30 = *(_QWORD *)(v25 + 88);
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v25 + 48));
    v23 = v30;
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           &v29,
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v30 + 112)) )
    {
      if ( *(_BYTE *)(((v23 + 152) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v23 + 152);
      }
      else
      {
        v23 = *(_QWORD *)(v23 + 152);
        v18 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v29);
        if ( v23 >= v18.size_ )
          v23 = v18.size_;
      }
      v19 = v18.size_ - v23;
    }
    else
    {
      v24 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v29);
      v19 = v24.size_;
    }
    v27.self = &v29.it_;
    boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
      v29.it_.i_,
      &v27);
    *(_QWORD *)(v25 + 40) -= v19;
  }
  v27.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v25 + 56);
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v25 + 80),
    &v27);
  if ( v31 == (char *)v25 )
  {
    *(_DWORD *)((v25 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v25 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v25 = 1172321806LL;
    *(_QWORD *)((v25 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v25 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 469: range 0000000019BA0457-0000000019BA0A4A
bool __fastcall boost::beast::detail::buffers_empty<boost::asio::mutable_buffer>(
        const boost::asio::mutable_buffer *buffers)
{
  const boost::asio::mutable_buffer *v1; // rax

  v1 = buffers + 1;
  while ( 1 )
  {
    if ( buffers == v1 )
      return 1;
    if ( *(_BYTE *)(((unsigned __int64)&buffers->size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&buffers->size_);
      return 1;
    }
    if ( buffers->size_ )
      break;
    ++buffers;
  }
  return 0;
};

// Line 479: range 0000000019BA513F-0000000019BA6764
bool __fastcall boost::beast::detail::buffers_empty<boost::asio::const_buffers_1>(
        const boost::asio::const_buffers_1 *buffers)
{
  const boost::asio::const_buffers_1 *v1; // rax

  v1 = buffers + 1;
  while ( 1 )
  {
    if ( buffers == v1 )
      return 1;
    if ( *(_WORD *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
    {
      __asan_report_load16(buffers);
      return 1;
    }
    if ( buffers->size_ )
      break;
    ++buffers;
  }
  return 0;
};

// Line 479: range 0000000019BE3780-0000000019BE3828
void __fastcall boost::beast::buffers_suffix<boost::asio::const_buffer>::consume(
        boost::beast::buffers_suffix<boost::asio::const_buffer> *const this,
        std::size_t amount)
{
  boost::beast::buffers_suffix<boost::asio::const_buffer>::iter_type begin; // rax
  std::size_t size; // rcx
  std::size_t *p_skip; // rdx
  std::size_t skip; // rdx

  if ( amount )
  {
    while ( !*(_BYTE *)(((unsigned __int64)&this->begin_ >> 3) + 0x7FFF8000) )
    {
      begin = this->begin_;
      if ( begin == (boost::beast::buffers_suffix<boost::asio::const_buffer>::iter_type)&this->begin_ )
        return;
      if ( *(_WORD *)(((unsigned __int64)begin >> 3) + 0x7FFF8000) )
        goto LABEL_10;
      size = begin->size_;
      p_skip = &this->skip_;
      if ( *(_BYTE *)(((unsigned __int64)&this->skip_ >> 3) + 0x7FFF8000) )
        goto LABEL_11;
      skip = this->skip_;
      if ( amount < size - skip )
        goto LABEL_12;
      amount += skip - size;
      this->skip_ = 0LL;
      this->begin_ = begin + 1;
      if ( !amount )
        return;
    }
    begin = (boost::beast::buffers_suffix<boost::asio::const_buffer>::iter_type)__asan_report_load8(&this->begin_);
LABEL_10:
    __asan_report_load16(begin);
LABEL_11:
    this = (boost::beast::buffers_suffix<boost::asio::const_buffer> *const)p_skip;
    __asan_report_load8(p_skip);
LABEL_12:
    this->skip_ = amount + skip;
  }
};

// Line 594: range 0000000019BEDFBC-0000000019BEE2A5
std::size_t __fastcall boost::asio::buffer_size<boost::beast::buffers_suffix<boost::asio::const_buffer>>(
        const boost::beast::buffers_suffix<boost::asio::const_buffer> *b)
{
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator v1; // rax
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type it; // rbp
  const boost::beast::buffers_suffix<boost::asio::const_buffer> *v3; // r12
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator v4; // rax
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type v5; // r8
  __int64 v6; // rax
  std::size_t v7; // rcx
  std::size_t v9; // rsi
  std::size_t v10; // rdx
  std::size_t size; // rdx
  const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *v12; // rdi

  v1 = boost::beast::buffers_suffix<boost::asio::const_buffer>::end(b);
  it = v1.it_;
  v3 = v1.b_;
  v4 = boost::beast::buffers_suffix<boost::asio::const_buffer>::begin(b);
  v5 = v4.it_;
  v6 = (__int64)v4.b_;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (const boost::beast::buffers_suffix<boost::asio::const_buffer> *)v6 == v3 && v5 == it )
      return v7;
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 16) >> 3) + 0x7FFF8000) )
    {
      v6 = __asan_report_load8(v6 + 16);
      goto LABEL_5;
    }
    if ( *(boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type *)(v6 + 16) != v5 )
      break;
LABEL_5:
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v6 + 24);
LABEL_11:
      v6 = __asan_report_load16(v5);
LABEL_12:
      size = v5->size_;
      goto LABEL_13;
    }
    v9 = *(_QWORD *)(v6 + 24);
    if ( *(_WORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    v10 = v5->size_;
    if ( v9 >= v10 )
      v9 = v5->size_;
    size = v10 - v9;
LABEL_13:
    v7 += size;
    ++v5;
  }
  v12 = (const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *)v5;
  if ( !*(_WORD *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_12;
  __asan_report_load16(v5);
  return boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>(v12);
};

// Line 594: range 0000000019BEE950-0000000019BEEB63
std::size_t __fastcall boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r13
  std::size_t v3; // r14
  __int64 v4; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  std::size_t size; // r15
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v9; // [rsp+18h] [rbp-F0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-E8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v11; // [rsp+30h] [rbp-D8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v12; // [rsp+50h] [rbp-B8h] BYREF
  char v13[152]; // [rsp+70h] [rbp-98h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 8 iter:563";
  *(_QWORD *)(v1 + 16) = boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450888) = -202116109;
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
    &v12,
    b);
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
    &v11,
    b);
  *(_QWORD *)(v1 + 32) = v11.it_.bn_;
  *(_BYTE *)(v1 + 48) = 0;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 40);
  f.other = &v11.it_.it_;
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v11.it_.it_.i_,
    &f);
  *(_QWORD *)(v1 + 56) = v11.b_;
  v3 = 0LL;
  while ( *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v1 + 56) != v12.b_
       || !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32),
             &v12.it_) )
  {
    size = *(_QWORD *)(v1 + 56);
    if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32),
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(size + 40)) )
    {
      if ( *(_BYTE *)(((size + 64) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(size + 64);
      }
      else
      {
        size = *(_QWORD *)(size + 64);
        v6 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
        if ( size >= v6.size_ )
          size = v6.size_;
      }
      v7.size_ = v6.size_ - size;
    }
    else
    {
      v7 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
    }
    v3 += v7.size_;
    boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
  }
  v9.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 40);
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 48),
    &v9);
  v9.self = &v11.it_.it_;
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v11.it_.it_.i_,
    &v9);
  v9.self = &v12.it_.it_;
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v12.it_.it_.i_,
    &v9);
  if ( v13 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v3;
};

// Line 594: range 0000000019BEDB79-0000000019BEDD9F
std::size_t __fastcall boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>>(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > *b)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // r13
  std::size_t v3; // r14
  __int64 v4; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v6; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v7; // rax
  std::size_t size; // r15
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v9; // [rsp+18h] [rbp-130h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-128h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator v11; // [rsp+30h] [rbp-118h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >::const_iterator v12; // [rsp+60h] [rbp-E8h] BYREF
  char v13[184]; // [rsp+90h] [rbp-B8h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 8 iter:563";
  *(_QWORD *)(v1 + 16) = boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>>;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = 61937;
  v2[536862723] = -202116109;
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::end(
    &v12,
    b);
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>::begin(
    &v11,
    b);
  *(_QWORD *)(v1 + 48) = v11.it_.bn_;
  *(_BYTE *)(v1 + 80) = 0;
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
  f.other = &v11.it_.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v11.it_.it_.i_,
    &f);
  *(_QWORD *)(v1 + 88) = v11.b_;
  v3 = 0LL;
  while ( *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > **)(v1 + 88) != v12.b_
       || !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v1 + 48),
             &v12.it_) )
  {
    size = *(_QWORD *)(v1 + 88);
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v1 + 48),
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(size + 24)) )
    {
      if ( *(_BYTE *)(((size + 64) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(size + 64);
      }
      else
      {
        size = *(_QWORD *)(size + 64);
        v6 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v1 + 48));
        if ( size >= v6.size_ )
          size = v6.size_;
      }
      v7.size_ = v6.size_ - size;
    }
    else
    {
      v7 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v1 + 48));
    }
    v3 += v7.size_;
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v1 + 48));
  }
  v9.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 80),
    &v9);
  v9.self = &v11.it_.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v11.it_.it_.i_,
    &v9);
  v9.self = &v12.it_.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v12.it_.it_.i_,
    &v9);
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v3;
};

// Line 594: range 0000000019BEE71F-0000000019BEE94B
std::size_t __fastcall boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b)
{
  unsigned __int64 v1; // rbx
  _DWORD *v2; // r13
  std::size_t v3; // r14
  __int64 v4; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  std::size_t size; // r15
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v9; // [rsp+18h] [rbp-130h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-128h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v11; // [rsp+30h] [rbp-118h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v12; // [rsp+60h] [rbp-E8h] BYREF
  char v13[184]; // [rsp+90h] [rbp-B8h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 8 iter:563";
  *(_QWORD *)(v1 + 16) = boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = 61937;
  v2[536862723] = -202116109;
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
    &v12,
    b);
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
    &v11,
    b);
  *(_QWORD *)(v1 + 48) = v11.it_.bn_;
  *(_BYTE *)(v1 + 80) = 0;
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
  f.other = &v11.it_.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v11.it_.it_.i_,
    &f);
  *(_QWORD *)(v1 + 88) = v11.b_;
  v3 = 0LL;
  while ( *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v1 + 88) != v12.b_
       || !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
             &v12.it_) )
  {
    size = *(_QWORD *)(v1 + 88);
    if ( boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48),
           (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(size + 112)) )
    {
      if ( *(_BYTE *)(((size + 152) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(size + 152);
      }
      else
      {
        size = *(_QWORD *)(size + 152);
        v6 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
        if ( size >= v6.size_ )
          size = v6.size_;
      }
      v7.size_ = v6.size_ - size;
    }
    else
    {
      v7 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
    }
    v3 += v7.size_;
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 48));
  }
  v9.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 56);
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 80),
    &v9);
  v9.self = &v11.it_.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v11.it_.it_.i_,
    &v9);
  v9.self = &v12.it_.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v12.it_.it_.i_,
    &v9);
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v3;
};

// Line 594: range 0000000019BEE4C2-0000000019BEE71A
std::size_t __fastcall boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r13
  std::size_t v3; // r15
  __int64 v4; // rax
  char *v5; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v8; // rax
  std::size_t size; // r14
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+10h] [rbp-E8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v11; // [rsp+20h] [rbp-D8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v12; // [rsp+40h] [rbp-B8h] BYREF
  char v13[152]; // [rsp+60h] [rbp-98h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 8 iter:563";
  *(_QWORD *)(v1 + 16) = boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450888) = -202116109;
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
    &v12,
    b);
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
    &v11,
    b);
  *(_QWORD *)(v1 + 32) = v11.it_.bn_;
  *(_BYTE *)(v1 + 48) = 0;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 40);
  f.other = &v11.it_.it_;
  boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v11.it_.it_.i_,
    &f);
  *(_QWORD *)(v1 + 56) = v11.b_;
  v3 = 0LL;
  while ( 1 )
  {
    if ( *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v1 + 56) == v12.b_ )
    {
      v5 = (char *)(v1 + 32);
      if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32),
             &v12.it_) )
      {
        break;
      }
    }
    size = *(_QWORD *)(v1 + 56);
    if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32),
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(size + 104)) )
    {
      if ( *(_BYTE *)(((size + 128) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(size + 128);
      }
      else
      {
        size = *(_QWORD *)(size + 128);
        v7 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
        if ( size >= v7.size_ )
          size = v7.size_;
      }
      v8.size_ = v7.size_ - size;
    }
    else
    {
      v8 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
    }
    v3 += v8.size_;
    boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
  }
  if ( *(_BYTE *)(v1 + 48) > 9u )
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
  if ( v11.it_.it_.i_ > 9u )
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
  if ( v12.it_.it_.i_ > 9u )
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
  if ( v13 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v3;
};

// Line 594: range 0000000019BEE2AA-0000000019BEE4BD
std::size_t __fastcall boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>(
        const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > *b)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r13
  std::size_t v3; // r14
  __int64 v4; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  std::size_t size; // r15
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v9; // [rsp+18h] [rbp-F0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-E8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v11; // [rsp+30h] [rbp-D8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v12; // [rsp+50h] [rbp-B8h] BYREF
  char v13[152]; // [rsp+70h] [rbp-98h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 8 iter:563";
  *(_QWORD *)(v1 + 16) = boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450888) = -202116109;
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::end(
    &v12,
    b);
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin(
    &v11,
    b);
  *(_QWORD *)(v1 + 32) = v11.it_.bn_;
  *(_BYTE *)(v1 + 48) = 0;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 40);
  f.other = &v11.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v11.it_.it_.i_,
    &f);
  *(_QWORD *)(v1 + 56) = v11.b_;
  v3 = 0LL;
  while ( *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v1 + 56) != v12.b_
       || !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32),
             &v12.it_) )
  {
    size = *(_QWORD *)(v1 + 56);
    if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32),
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(size + 64)) )
    {
      if ( *(_BYTE *)(((size + 88) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(size + 88);
      }
      else
      {
        size = *(_QWORD *)(size + 88);
        v6 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
        if ( size >= v6.size_ )
          size = v6.size_;
      }
      v7.size_ = v6.size_ - size;
    }
    else
    {
      v7 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
    }
    v3 += v7.size_;
    boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
  }
  v9.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 40);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 48),
    &v9);
  v9.self = &v11.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v11.it_.it_.i_,
    &v9);
  v9.self = &v12.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v12.it_.it_.i_,
    &v9);
  if ( v13 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v3;
};

// Line 594: range 0000000019BEDDA4-0000000019BEDFB7
std::size_t __fastcall boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>>(
        const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > *b)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r13
  std::size_t v3; // r14
  __int64 v4; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v6; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  std::size_t size; // r15
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v9; // [rsp+18h] [rbp-F0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-E8h] BYREF
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator v11; // [rsp+30h] [rbp-D8h] BYREF
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator v12; // [rsp+50h] [rbp-B8h] BYREF
  char v13[152]; // [rsp+70h] [rbp-98h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v1 = v4;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 8 iter:563";
  *(_QWORD *)(v1 + 16) = boost::asio::buffer_size<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>>;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450888) = -202116109;
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::end(
    &v12,
    b);
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::begin(
    &v11,
    b);
  *(_QWORD *)(v1 + 32) = v11.it_.bn_;
  *(_BYTE *)(v1 + 48) = 0;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 40);
  f.other = &v11.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v11.it_.it_.i_,
    &f);
  *(_QWORD *)(v1 + 56) = v11.b_;
  v3 = 0LL;
  while ( *(const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **)(v1 + 56) != v12.b_
       || !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32),
             &v12.it_) )
  {
    size = *(_QWORD *)(v1 + 56);
    if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32),
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(size + 8)) )
    {
      if ( *(_BYTE *)(((size + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(size + 32);
      }
      else
      {
        size = *(_QWORD *)(size + 32);
        v6 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
        if ( size >= v6.size_ )
          size = v6.size_;
      }
      v7.size_ = v6.size_ - size;
    }
    else
    {
      v7 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
    }
    v3 += v7.size_;
    boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v1 + 32));
  }
  v9.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v1 + 40);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v1 + 48),
    &v9);
  v9.self = &v11.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v11.it_.it_.i_,
    &v9);
  v9.self = &v12.it_.it_;
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v12.it_.it_.i_,
    &v9);
  if ( v13 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v3;
};

// Line 594: range 0000000019D0A1BF-0000000019D0A4FD
std::size_t __fastcall boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > *b)
{
  unsigned __int64 v1; // r12
  _DWORD *v2; // rbp
  const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> *v3; // rsi
  std::size_t remain; // rdi
  boost::beast::buffers_suffix<boost::asio::const_buffer>::const_iterator::iter_type it; // rax
  const boost::beast::buffers_suffix<boost::asio::const_buffer> *v6; // rdx
  std::size_t v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator v22; // [rsp+0h] [rbp-158h] BYREF
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator v23; // [rsp+20h] [rbp-138h] BYREF
  char v24[280]; // [rsp+40h] [rbp-118h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(224LL);
    if ( v8 )
      v1 = v8;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 32 9 begin:594 96 32 7 end:594 160 32 8 iter:563";
  *(_QWORD *)(v1 + 16) = boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862722] = -218959118;
  v2[536862724] = -218959118;
  v2[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(b);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::end(
    &v22,
    b->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::begin(
    &v23,
    b->buffers_);
  v3 = v23.b_;
  remain = v23.remain_;
  *(_QWORD *)(v1 + 32) = v23.b_;
  *(_QWORD *)(v1 + 40) = remain;
  it = v23.it_.it_;
  v6 = v23.it_.b_;
  *(_QWORD *)(v1 + 48) = v23.it_.it_;
  *(_QWORD *)(v1 + 56) = v6;
  *(__m128i *)(v1 + 96) = _mm_load_si128((const __m128i *)&v22);
  *(__m128i *)(v1 + 112) = _mm_load_si128((const __m128i *)&v22.it_);
  *(_QWORD *)(v1 + 160) = v3;
  *(_QWORD *)(v1 + 168) = remain;
  *(_QWORD *)(v1 + 176) = it;
  *(_QWORD *)(v1 + 184) = v6;
  v7 = 0LL;
  while ( 1 )
  {
    if ( *(_QWORD *)(v1 + 160) != *(_QWORD *)(v1 + 96) )
      goto LABEL_27;
LABEL_7:
    if ( *(_QWORD *)(v1 + 184) == *(_QWORD *)(v1 + 120) && *(_QWORD *)(v1 + 176) == *(_QWORD *)(v1 + 112) )
      break;
LABEL_27:
    v10 = *(_QWORD *)(v1 + 176);
    v11 = *(_QWORD *)(v1 + 184);
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 16) >> 3) + 0x7FFF8000) )
    {
      v10 = __asan_report_load8(v11 + 16);
    }
    else if ( v10 != *(_QWORD *)(v11 + 16) )
    {
      v12 = *(_QWORD *)(v1 + 176);
      if ( *(_WORD *)((v10 >> 3) + 0x7FFF8000) )
        goto LABEL_20;
      v15 = *(_QWORD *)(v10 + 8);
      goto LABEL_31;
    }
    v12 = v11 + 24;
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v12);
LABEL_19:
      __asan_report_load16(v12);
LABEL_20:
      v15 = __asan_report_load16(v12);
      goto LABEL_21;
    }
    v13 = *(_QWORD *)(v11 + 24);
    v12 = v10;
    if ( *(_WORD *)((v10 >> 3) + 0x7FFF8000) )
      goto LABEL_19;
    v14 = *(_QWORD *)(v10 + 8);
    if ( v13 >= v14 )
      v13 = v14;
    v15 = v14 - v13;
LABEL_31:
    if ( *(_QWORD *)(v1 + 168) < v15 )
      v15 = *(_QWORD *)(v1 + 168);
LABEL_21:
    v7 += v15;
    v16 = *(_QWORD *)(v1 + 176);
    *(_QWORD *)(v1 + 176) = v16 + 16;
    v17 = *(_QWORD *)(v1 + 184);
    if ( *(_BYTE *)(((unsigned __int64)(v17 + 16) >> 3) + 0x7FFF8000) )
    {
      v16 = __asan_report_load8(v17 + 16);
    }
    else if ( v16 != *(_QWORD *)(v17 + 16) )
    {
      v18 = v16;
      if ( *(_WORD *)((v16 >> 3) + 0x7FFF8000) )
        goto LABEL_41;
      v19 = *(_QWORD *)(v16 + 8);
      goto LABEL_25;
    }
    v18 = v17 + 24;
    if ( *(_BYTE *)(((unsigned __int64)(v17 + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v18);
LABEL_40:
      __asan_report_load16(v18);
LABEL_41:
      __asan_report_load16(v18);
      goto LABEL_42;
    }
    v20 = *(_QWORD *)(v17 + 24);
    v18 = v16;
    if ( *(_WORD *)((v16 >> 3) + 0x7FFF8000) )
      goto LABEL_40;
    v21 = *(_QWORD *)(v16 + 8);
    if ( v20 >= v21 )
      v20 = v21;
    v19 = v21 - v20;
LABEL_25:
    *(_QWORD *)(v1 + 168) -= v19;
  }
  if ( v24 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    return v7;
  }
LABEL_42:
  *(_QWORD *)v1 = 1172321806LL;
  *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  return v7;
};

// Line 594: range 0000000019D0AA37-0000000019D0B0D6
std::size_t __fastcall boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *b)
{
  std::size_t v1; // r15
  unsigned __int64 v2; // r12
  _DWORD *v3; // r13
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rcx
  __int64 v5; // rax
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v6; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v7; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v8; // rdx
  char v9; // al
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v10; // rdx
  bool v11; // al
  char *v12; // rdi
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v13; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v15; // r14
  unsigned __int64 v16; // rdi
  std::size_t v17; // r14
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v18; // rax
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v19; // rax
  __int64 v20; // r14
  std::size_t size; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  char v26; // cl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-140h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v29; // [rsp+20h] [rbp-138h] BYREF
  __int64 v30; // [rsp+38h] [rbp-120h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v31; // [rsp+40h] [rbp-118h] BYREF
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v32; // [rsp+70h] [rbp-E8h] BYREF
  char v33[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 8 iter:563";
  *(_QWORD *)(v2 + 16) = boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(b);
LABEL_7:
    __asan_handle_no_return(b);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 5; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boost"
      "::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::pas"
      "t_end>::copy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = s"
      "td::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    &v32,
    b->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v31,
    b->buffers_);
  *(_QWORD *)(v2 + 48) = v31.b_;
  *(_QWORD *)(v2 + 56) = v31.remain_;
  *(_QWORD *)(v2 + 64) = v31.it_.it_.bn_;
  *(_BYTE *)(v2 + 80) = 0;
  b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 72);
  p_it = &v31.it_.it_.it_;
  switch ( v31.it_.it_.it_.i_ )
  {
    case 0u:
      goto LABEL_12;
    case 1u:
      if ( *(_BYTE *)(((unsigned __int64)&v31.it_.it_.it_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&v31.it_.it_.it_);
        goto LABEL_14;
      }
      if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
      {
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
      *(boost::beast::detail::aligned_union_t_7 *)(v2 + 72) = v31.it_.it_.it_.buf_;
      v6 = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) < 0 )
      {
LABEL_15:
        b = v6;
        __asan_report_store1(v6);
LABEL_16:
        if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_it);
        }
        else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
        {
          *(boost::beast::detail::aligned_union_t_7 *)(v2 + 72) = p_it->buf_;
          v7 = b + 1;
          if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
          {
            LOBYTE(b[1].buffers_) = 2;
            goto LABEL_12;
          }
LABEL_22:
          b = v7;
          __asan_report_store1(v7);
LABEL_23:
          if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(p_it);
          }
          else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
          {
            *(boost::beast::detail::aligned_union_t_7 *)(v2 + 72) = p_it->buf_;
            v8 = b + 1;
            if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
            {
              LOBYTE(b[1].buffers_) = 3;
              goto LABEL_12;
            }
LABEL_29:
            b = v8;
            __asan_report_store1(v8);
LABEL_30:
            v9 = *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000);
            if ( v9 <= ((unsigned __int8)b & 7) && v9 )
            {
              __asan_report_store1(b);
            }
            else if ( *(char *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v2 + 72) = p_it->buf_.__data[0];
              v10 = b + 1;
              if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
              {
                LOBYTE(b[1].buffers_) = 4;
                goto LABEL_12;
              }
LABEL_37:
              __asan_report_store1(v10);
              goto LABEL_38;
            }
            __asan_report_load1(p_it);
            goto LABEL_37;
          }
          __asan_report_store8();
          goto LABEL_29;
        }
        __asan_report_store8();
        goto LABEL_22;
      }
      *(_BYTE *)(v2 + 80) = 1;
LABEL_12:
      *(_QWORD *)(v2 + 88) = v31.it_.b_;
      v1 = 0LL;
      while ( 1 )
      {
        if ( *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)(v2 + 48) != v32.b_ )
        {
          v11 = 0;
          goto LABEL_57;
        }
LABEL_38:
        v11 = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v2 + 88) == v32.it_.b_
           && boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64),
                &v32.it_.it_);
LABEL_57:
        if ( v11 )
          break;
        v20 = *(_QWORD *)(v2 + 88);
        if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64),
               (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v20 + 40)) )
        {
          if ( !*(_BYTE *)(((unsigned __int64)(v20 + 64) >> 3) + 0x7FFF8000) )
          {
            size = *(_QWORD *)(v20 + 64);
            v12 = (char *)(v2 + 64);
            v13 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64));
            if ( size >= v13.size_ )
              size = v13.size_;
            v13.size_ -= size;
            goto LABEL_63;
          }
          __asan_report_load8(v20 + 64);
        }
        v12 = (char *)(v2 + 64);
        v13 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64));
LABEL_63:
        if ( *(_QWORD *)(v2 + 56) < v13.size_ )
          v13.size_ = *(_QWORD *)(v2 + 56);
        v1 += v13.size_;
        v29.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v2 + 64);
        v29.it_.i_ = 0;
        v22 = (unsigned __int64)&v29.it_;
        v23 = v2 + 72;
        switch ( *(_BYTE *)(v2 + 80) )
        {
          case 0:
            goto LABEL_48;
          case 1:
            p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 72);
            if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(p_i);
LABEL_67:
              __asan_report_store8();
              goto LABEL_68;
            }
            p_i = &v29.it_;
            if ( *(_BYTE *)(((unsigned __int64)&v29.it_ >> 3) + 0x7FFF8000) )
              goto LABEL_67;
            v29.it_.buf_ = *(boost::beast::detail::aligned_union_t_7 *)(v2 + 72);
            p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v29.it_.i_;
            if ( *(char *)(((unsigned __int64)&v29.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v29.it_.i_ = 1;
              goto LABEL_48;
            }
LABEL_68:
            v22 = __asan_report_store1(p_i);
LABEL_69:
            v24 = v23;
            if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v23);
LABEL_74:
              __asan_report_store8();
              goto LABEL_75;
            }
            v24 = v22;
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              goto LABEL_74;
            *(_QWORD *)v22 = *(_QWORD *)(v2 + 72);
            v24 = v22 + 8;
            if ( *(char *)(((v22 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v22 + 8) = 2;
              goto LABEL_48;
            }
LABEL_75:
            v22 = __asan_report_store1(v24);
LABEL_76:
            v25 = v23;
            if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v23);
LABEL_81:
              __asan_report_store8();
              goto LABEL_82;
            }
            v25 = v22;
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              goto LABEL_81;
            *(_QWORD *)v22 = *(_QWORD *)(v2 + 72);
            v25 = v22 + 8;
            if ( *(char *)(((v22 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v22 + 8) = 3;
              goto LABEL_48;
            }
LABEL_82:
            v22 = __asan_report_store1(v25);
LABEL_83:
            v16 = v22;
            if ( *(char *)((v22 >> 3) + 0x7FFF8000) < 0 )
            {
              __asan_report_store1(v22);
LABEL_89:
              __asan_report_load1(v16);
LABEL_90:
              __asan_report_store1(v16);
LABEL_91:
              __asan_report_load8(v16);
LABEL_92:
              v19 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v29);
              goto LABEL_53;
            }
            v16 = v23;
            v26 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
            if ( v26 <= (char)(v23 & 7) && v26 )
              goto LABEL_89;
            *(_BYTE *)v22 = *(_BYTE *)(v2 + 72);
            v16 = v22 + 8;
            if ( *(char *)(((v22 + 8) >> 3) + 0x7FFF8000) < 0 )
              goto LABEL_90;
            *(_BYTE *)(v22 + 8) = 4;
LABEL_48:
            v30 = *(_QWORD *)(v2 + 88);
            boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64));
            v15 = v30;
            if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                    &v29,
                    (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v30 + 40)) )
              goto LABEL_92;
            v16 = v15 + 64;
            if ( *(_BYTE *)(((unsigned __int64)(v15 + 64) >> 3) + 0x7FFF8000) )
              goto LABEL_91;
            v17 = *(_QWORD *)(v15 + 64);
            v18 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v29);
            if ( v17 >= v18.size_ )
              v17 = v18.size_;
            v19.size_ = v18.size_ - v17;
LABEL_53:
            if ( v29.it_.i_ > 4u )
            {
              __asan_handle_no_return(&v29);
              __assert_fail(
                "i < N",
                "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/m"
                "p_with_index.hpp",
                0x17Du,
                "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std:"
                ":size_t, F&&) [with long unsigned int N = 5; F = boost::beast::detail::variant<const boost::asio::const_"
                "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffe"
                "rs_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> "
                ">())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = lo"
                "ng unsigned int]");
            }
            *(_QWORD *)(v2 + 56) -= v19.size_;
            break;
          case 2:
            goto LABEL_69;
          case 3:
            goto LABEL_76;
          case 4:
            goto LABEL_83;
          default:
            __asan_handle_no_return(v12);
            __assert_fail(
              "i < N",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
              0x17Du,
              "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::s"
              "ize_t, F&&) [with long unsigned int N = 5; F = boost::beast::detail::variant<const boost::asio::const_buff"
              "er*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat"
              "_view_iterator_base::past_end>::copy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = voi"
              "d; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
      }
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 72);
      boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        *(unsigned __int8 *)(v2 + 80),
        &f);
      f.self = &v31.it_.it_.it_;
      boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        v31.it_.it_.it_.i_,
        &f);
      f.self = &v32.it_.it_.it_;
      boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        v32.it_.it_.it_.i_,
        &f);
      if ( v33 == (char *)v2 )
      {
        *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
        *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
      }
      else
      {
        *(_QWORD *)v2 = 1172321806LL;
        *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return v1;
    case 2u:
      goto LABEL_16;
    case 3u:
      goto LABEL_23;
    case 4u:
      goto LABEL_30;
    default:
      goto LABEL_7;
  }
};

// Line 594: range 0000000019D0E0FA-0000000019D0EAA4
std::size_t __fastcall boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *b)
{
  std::size_t v1; // r15
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbp
  char *v5; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *v6; // rdx
  __int64 v7; // rax
  char v8; // al
  bool v9; // al
  char *v10; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v11; // rax
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v12; // r8
  char *v13; // r8
  char *v14; // rdi
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v15; // rdi
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v16; // rdi
  unsigned __int64 p_it; // rax
  unsigned __int64 v18; // rdx
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v19; // rcx
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v20; // rdi
  __int64 v21; // rdx
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v22; // rdi
  __int64 v23; // rdx
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v24; // rdi
  __int64 v25; // rdx
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v26; // rdi
  __int64 v27; // rdx
  std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *v28; // r8
  char v29; // di
  unsigned __int64 v30; // rdi
  __int64 v31; // rbp
  unsigned __int64 v32; // rdi
  std::size_t v33; // rbp
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v34; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator::reference v35; // rax
  std::size_t v36; // rbp
  __int64 v37; // rbp
  std::size_t size; // rbp
  unsigned __int64 v39; // rcx
  char v40; // cl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v42; // [rsp+18h] [rbp-180h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-178h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator v44; // [rsp+30h] [rbp-168h] BYREF
  __int64 v45; // [rsp+58h] [rbp-140h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator v46; // [rsp+60h] [rbp-138h] BYREF
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>::const_iterator v47; // [rsp+A0h] [rbp-F8h] BYREF
  char v48[184]; // [rsp+E0h] [rbp-B8h] BYREF

  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v2 = v7;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 8 iter:563";
  *(_QWORD *)(v2 + 16) = boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(b);
LABEL_17:
    __asan_handle_no_return(b);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 4; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::c"
      "onst_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator"
      "<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()(declval<boost::mp11:"
      ":mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t "
      "= long unsigned int]");
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::end(
    &v47,
    b->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>::begin(
    &v46,
    b->buffers_);
  *(_QWORD *)(v2 + 32) = v46.b_;
  *(_QWORD *)(v2 + 40) = v46.remain_;
  *(_QWORD *)(v2 + 48) = v46.it_.it_.bn_;
  *(_BYTE *)(v2 + 80) = 0;
  v4 = v2 + 56;
  b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *)&v46.it_.it_.it_;
  if ( v46.it_.it_.it_.i_ > 3uLL )
    goto LABEL_17;
  if ( v46.it_.it_.it_.i_ == 2LL )
    goto LABEL_23;
  if ( v46.it_.it_.it_.i_ > 2uLL )
  {
LABEL_30:
    v8 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
    if ( v8 <= (char)(v4 & 7) && v8 )
    {
      b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *)(v2 + 56);
      __asan_report_store1(v2 + 56);
    }
    else if ( *(char *)(((unsigned __int64)b >> 3) + 0x7FFF8000) >= 0 )
    {
      *(_BYTE *)(v2 + 56) = b->buffers_;
      b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) >= 0 )
      {
        *(_BYTE *)(v2 + 80) = 3;
        goto LABEL_13;
      }
LABEL_37:
      __asan_report_store1(b);
      goto LABEL_38;
    }
    __asan_report_load1(b);
    goto LABEL_37;
  }
  if ( v46.it_.it_.it_.i_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v46.it_.it_.it_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v46.it_.it_.it_);
    }
    else if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v2 + 56) = *(_QWORD *)v46.it_.it_.it_.buf_.__data;
      v5 = (char *)(v2 + 72);
      if ( *(char *)(((v2 + 72) >> 3) + 0x7FFF8000) >= 0 )
      {
        *(_BYTE *)(v2 + 72) = 0;
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 64);
        f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v46.it_.it_.it_.buf_.1 + 1);
        v6 = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *)(&v46.it_.it_.it_.buf_.1 + 2);
        if ( *(char *)(((unsigned __int64)(&v46.it_.it_.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
        {
          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
            v46.it_.it_.it_.buf_.__data[16],
            &f);
          b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *)(v2 + 80);
          if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) >= 0 )
          {
            *(_BYTE *)(v2 + 80) = 1;
            goto LABEL_13;
          }
          goto LABEL_22;
        }
LABEL_21:
        b = v6;
        __asan_report_load1(v6);
LABEL_22:
        __asan_report_store1(b);
LABEL_23:
        if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(b);
        }
        else if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        {
          *(boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *)(v2 + 56) = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> >)b->buffers_;
          b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *)(v2 + 80);
          if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) >= 0 )
          {
            *(_BYTE *)(v2 + 80) = 2;
            goto LABEL_13;
          }
          goto LABEL_29;
        }
        b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > *)(v2 + 56);
        __asan_report_store8();
LABEL_29:
        __asan_report_store1(b);
        goto LABEL_30;
      }
LABEL_20:
      __asan_report_store1(v5);
      goto LABEL_21;
    }
    __asan_report_store8();
    goto LABEL_20;
  }
LABEL_13:
  *(_QWORD *)(v2 + 88) = v46.it_.b_;
  v1 = 0LL;
  while ( 1 )
  {
    if ( *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> **)(v2 + 32) == v47.b_ )
LABEL_38:
      v9 = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> > **)(v2 + 88) == v47.it_.b_
        && boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v2 + 48),
             &v47.it_.it_);
    else
      v9 = 0;
    if ( v9 )
      break;
    v37 = *(_QWORD *)(v2 + 88);
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v2 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(v37 + 24)) )
      goto LABEL_42;
    if ( *(_BYTE *)(((unsigned __int64)(v37 + 64) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v37 + 64);
LABEL_42:
      v10 = (char *)(v2 + 48);
      v11 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v2 + 48));
      goto LABEL_115;
    }
    size = *(_QWORD *)(v37 + 64);
    v10 = (char *)(v2 + 48);
    v11 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v2 + 48));
    if ( size >= v11.size_ )
      size = v11.size_;
    v11.size_ -= size;
LABEL_115:
    if ( *(_QWORD *)(v2 + 40) < v11.size_ )
      v11.size_ = *(_QWORD *)(v2 + 40);
    v1 += v11.size_;
    v44.bn_ = *(const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> **)(v2 + 48);
    v44.it_.i_ = 0;
    p_it = (unsigned __int64)&v44.it_;
    v18 = v2 + 56;
    v39 = *(unsigned __int8 *)(v2 + 80);
    if ( v39 > 3 )
    {
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
    if ( v39 == 2 )
      goto LABEL_95;
    if ( v39 <= 2 )
    {
      if ( !*(_BYTE *)(v2 + 80) )
        goto LABEL_99;
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v2 + 56);
LABEL_45:
        __asan_report_store8();
LABEL_46:
        __asan_report_store1(v12);
LABEL_47:
        v14 = v13;
        __asan_report_load1(v13);
LABEL_48:
        __asan_handle_no_return(v14);
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
      if ( *(_BYTE *)(((unsigned __int64)&v44.it_ >> 3) + 0x7FFF8000) )
        goto LABEL_45;
      *(_QWORD *)v44.it_.buf_.__data = *(_QWORD *)(v2 + 56);
      v19 = (std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *)(v2 + 64);
      v12 = &v44.it_.buf_.1 + 2;
      if ( *(char *)(((unsigned __int64)(&v44.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_46;
      v44.it_.buf_.__data[16] = 0;
      v13 = (char *)(v2 + 72);
      if ( *(char *)(((v2 + 72) >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_47;
      v14 = (char *)*(unsigned __int8 *)(v2 + 72);
      switch ( *(_BYTE *)(v2 + 72) )
      {
        case 0:
          goto LABEL_53;
        case 1:
          v15 = (std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *)(v2 + 64);
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v15);
LABEL_56:
            __asan_report_store8();
            goto LABEL_57;
          }
          v15 = &v44.it_.buf_.1 + 1;
          if ( *(_BYTE *)(((unsigned __int64)(&v44.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
            goto LABEL_56;
          *((_QWORD *)&v44.it_.buf_.1 + 1) = *(_QWORD *)(v2 + 64);
          v15 = &v44.it_.buf_.1 + 2;
          if ( *(char *)(((unsigned __int64)(&v44.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
          {
            v44.it_.buf_.__data[16] = 1;
            goto LABEL_53;
          }
LABEL_57:
          p_it = __asan_report_store1(v15);
LABEL_58:
          v20 = v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v19);
LABEL_63:
            __asan_report_store8();
            goto LABEL_64;
          }
          v21 = *(_QWORD *)(v18 + 8);
          v20 = &v44.it_.buf_.1 + 1;
          if ( *(_BYTE *)(((unsigned __int64)(&v44.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
            goto LABEL_63;
          *(_QWORD *)(p_it + 8) = v21;
          v20 = &v44.it_.buf_.1 + 2;
          if ( *(char *)(((unsigned __int64)(&v44.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
          {
            v44.it_.buf_.__data[16] = 2;
            goto LABEL_53;
          }
LABEL_64:
          p_it = __asan_report_store1(v20);
LABEL_65:
          v22 = v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v19);
LABEL_70:
            __asan_report_store8();
            goto LABEL_71;
          }
          v23 = *(_QWORD *)(v18 + 8);
          v22 = &v44.it_.buf_.1 + 1;
          if ( *(_BYTE *)(((unsigned __int64)(&v44.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
            goto LABEL_70;
          *(_QWORD *)(p_it + 8) = v23;
          v22 = &v44.it_.buf_.1 + 2;
          if ( *(char *)(((unsigned __int64)(&v44.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
          {
            v44.it_.buf_.__data[16] = 3;
            goto LABEL_53;
          }
LABEL_71:
          p_it = __asan_report_store1(v22);
LABEL_72:
          v24 = v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v19);
LABEL_77:
            __asan_report_store8();
            goto LABEL_78;
          }
          v25 = *(_QWORD *)(v18 + 8);
          v24 = &v44.it_.buf_.1 + 1;
          if ( *(_BYTE *)(((unsigned __int64)(&v44.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
            goto LABEL_77;
          *(_QWORD *)(p_it + 8) = v25;
          v24 = &v44.it_.buf_.1 + 2;
          if ( *(char *)(((unsigned __int64)(&v44.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
          {
            v44.it_.buf_.__data[16] = 4;
            goto LABEL_53;
          }
LABEL_78:
          p_it = __asan_report_store1(v24);
LABEL_79:
          v26 = v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v19);
LABEL_84:
            __asan_report_store8();
            goto LABEL_85;
          }
          v27 = *(_QWORD *)(v18 + 8);
          v26 = &v44.it_.buf_.1 + 1;
          if ( *(_BYTE *)(((unsigned __int64)(&v44.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) )
            goto LABEL_84;
          *(_QWORD *)(p_it + 8) = v27;
          v26 = &v44.it_.buf_.1 + 2;
          if ( *(char *)(((unsigned __int64)(&v44.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
          {
            v44.it_.buf_.__data[16] = 5;
            goto LABEL_53;
          }
LABEL_85:
          p_it = __asan_report_store1(v26);
LABEL_86:
          if ( *(char *)(((unsigned __int64)(&v44.it_.buf_.1 + 1) >> 3) + 0x7FFF8000) < 0 )
          {
            __asan_report_store1(&v44.it_.buf_.1 + 1);
LABEL_92:
            v16 = v28;
            __asan_report_load1(v28);
LABEL_93:
            __asan_report_store1(v16);
            goto LABEL_94;
          }
          v28 = v19;
          v29 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
          if ( v29 <= ((unsigned __int8)v19 & 7) && v29 )
            goto LABEL_92;
          *(_BYTE *)(p_it + 8) = *(_BYTE *)(v18 + 8);
          v16 = &v44.it_.buf_.1 + 2;
          if ( *(char *)(((unsigned __int64)(&v44.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
            goto LABEL_93;
          v44.it_.buf_.__data[16] = 6;
LABEL_53:
          v16 = (std::aligned_storage<24,8>::type::$D589DDFB164CF82465A306A7B637BAB7 *)(p_it + 24);
          if ( *(char *)(((p_it + 24) >> 3) + 0x7FFF8000) >= 0 )
          {
            *(_BYTE *)(p_it + 24) = 1;
            goto LABEL_99;
          }
LABEL_94:
          p_it = __asan_report_store1(v16);
          break;
        case 2:
          goto LABEL_58;
        case 3:
          goto LABEL_65;
        case 4:
          goto LABEL_72;
        case 5:
          goto LABEL_79;
        case 6:
          goto LABEL_86;
        default:
          goto LABEL_48;
      }
LABEL_95:
      v30 = v18;
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v18);
      }
      else
      {
        v30 = p_it;
        if ( !*(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)p_it = *(_QWORD *)(v2 + 56);
          v30 = p_it + 24;
          if ( *(char *)(((p_it + 24) >> 3) + 0x7FFF8000) >= 0 )
          {
            *(_BYTE *)(p_it + 24) = 2;
            goto LABEL_99;
          }
          goto LABEL_128;
        }
      }
      __asan_report_store8();
LABEL_128:
      p_it = __asan_report_store1(v30);
    }
    v32 = p_it;
    if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store1(p_it);
LABEL_135:
      __asan_report_load1(v32);
LABEL_136:
      __asan_report_store1(v32);
LABEL_137:
      __asan_report_load8(v32);
LABEL_138:
      v35 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&v44);
      goto LABEL_104;
    }
    v32 = v18;
    v40 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
    if ( v40 <= (char)(v18 & 7) && v40 )
      goto LABEL_135;
    *(_BYTE *)p_it = *(_BYTE *)(v2 + 56);
    v32 = p_it + 24;
    if ( *(char *)(((p_it + 24) >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_136;
    *(_BYTE *)(p_it + 24) = 3;
LABEL_99:
    v45 = *(_QWORD *)(v2 + 88);
    boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *const)(v2 + 48));
    v31 = v45;
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator==(
            &v44,
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer>::const_iterator *)(v45 + 24)) )
      goto LABEL_138;
    v32 = v31 + 64;
    if ( *(_BYTE *)(((unsigned __int64)(v31 + 64) >> 3) + 0x7FFF8000) )
      goto LABEL_137;
    v33 = *(_QWORD *)(v31 + 64);
    v34 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>::const_iterator::operator*(&v44);
    if ( v33 >= v34.size_ )
      v33 = v34.size_;
    v35.size_ = v34.size_ - v33;
LABEL_104:
    v36 = v35.size_;
    if ( v44.it_.i_ > 3uLL )
    {
      __asan_handle_no_return(&v44);
      __assert_fail(
        "i < N",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
        0x17Du,
        "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t,"
        " F&&) [with long unsigned int N = 4; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asi"
        "o::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::all"
        "ocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_b"
        "uffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval"
        "<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0"
        ">; std::size_t = long unsigned int]");
    }
    if ( v44.it_.i_ == 1LL )
    {
      v42.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v44.it_.buf_.1 + 1);
      if ( *(char *)(((unsigned __int64)(&v44.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
      {
        __asan_report_load1(&v44.it_.buf_.1 + 2);
        break;
      }
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        v44.it_.buf_.__data[16],
        &v42);
    }
    *(_QWORD *)(v2 + 40) -= v36;
  }
  v42.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v2 + 80),
    (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v42);
  v42.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v46.it_.it_.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v46.it_.it_.it_.i_,
    (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v42);
  v42.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v47.it_.it_.it_;
  boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    v47.it_.it_.it_.i_,
    (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v42);
  if ( v48 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v1;
};

// Line 594: range 0000000019D1520C-0000000019D159F9
std::size_t __fastcall boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *b)
{
  std::size_t v1; // r15
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  bool v5; // al
  char *v6; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v7; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rdi
  __int64 v9; // rbx
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v10; // rdi
  std::size_t v11; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v12; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v13; // rax
  std::size_t v14; // rbx
  __int64 v15; // rbx
  std::size_t size; // rbx
  unsigned __int64 v17; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v19; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v20; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v21; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v22; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v23; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v24; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v25; // rdi
  char v26; // dl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v28; // [rsp+18h] [rbp-180h] BYREF
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-178h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v30; // [rsp+30h] [rbp-168h] BYREF
  __int64 v31; // [rsp+58h] [rbp-140h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v32; // [rsp+60h] [rbp-138h] BYREF
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v33; // [rsp+A0h] [rbp-F8h] BYREF
  char v34[184]; // [rsp+E0h] [rbp-B8h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v2 = v4;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 8 iter:563";
  *(_QWORD *)(v2 + 16) = boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(b);
    goto LABEL_7;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    &v33,
    b->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v32,
    b->buffers_);
  *(_QWORD *)(v2 + 32) = v32.b_;
  *(_QWORD *)(v2 + 40) = v32.remain_;
  *(_QWORD *)(v2 + 48) = v32.it_.it_.bn_;
  *(_BYTE *)(v2 + 80) = 0;
  f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
  f.other = &v32.it_.it_.it_;
  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v32.it_.it_.it_.i_,
    &f);
  *(_QWORD *)(v2 + 88) = v32.it_.b_;
  v1 = 0LL;
  while ( 2 )
  {
    if ( *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)(v2 + 32) == v33.b_ )
LABEL_7:
      v5 = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v2 + 88) == v33.it_.b_
        && boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48),
             &v33.it_.it_);
    else
      v5 = 0;
    if ( v5 )
      goto LABEL_113;
    v15 = *(_QWORD *)(v2 + 88);
    if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48),
            (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v15 + 112)) )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)(v15 + 152) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v15 + 152);
LABEL_11:
      v6 = (char *)(v2 + 48);
      v7 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48));
      goto LABEL_35;
    }
    size = *(_QWORD *)(v15 + 152);
    v6 = (char *)(v2 + 48);
    v7 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48));
    if ( size >= v7.size_ )
      size = v7.size_;
    v7.size_ -= size;
LABEL_35:
    if ( *(_QWORD *)(v2 + 40) < v7.size_ )
      v7.size_ = *(_QWORD *)(v2 + 40);
    v1 += v7.size_;
    v30.bn_ = *(const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v2 + 48);
    v30.it_.i_ = 0;
    v17 = v2 + 56;
    switch ( *(_BYTE *)(v2 + 80) )
    {
      case 0:
        goto LABEL_19;
      case 1:
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_it);
LABEL_39:
          __asan_report_store8();
LABEL_40:
          __asan_report_store1(p_it);
LABEL_41:
          __asan_report_load1(p_it);
          goto LABEL_42;
        }
        p_it = &v30.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_39;
        *(_QWORD *)v30.it_.buf_.__data = *(_QWORD *)(v2 + 56);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v30.it_.buf_.1 + 2);
        if ( *(char *)(((unsigned __int64)(&v30.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_40;
        v30.it_.buf_.__data[16] = 0;
        f.self = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v30.it_.buf_.1 + 1);
        f.other = (const boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 64);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 72);
        if ( *(char *)(((v2 + 72) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_41;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v2 + 72),
          (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy *)&f);
        p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v30.it_.i_ = 1;
          goto LABEL_19;
        }
LABEL_42:
        v17 = __asan_report_store1(p_it);
LABEL_43:
        p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v17;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v17);
LABEL_48:
          __asan_report_store8();
          goto LABEL_49;
        }
        p_i = &v30.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_48;
        *(_QWORD *)v30.it_.buf_.__data = *(_QWORD *)(v2 + 56);
        p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v30.it_.i_ = 2;
          goto LABEL_19;
        }
LABEL_49:
        v17 = __asan_report_store1(p_i);
LABEL_50:
        v19 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v17;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v17);
LABEL_55:
          __asan_report_store8();
          goto LABEL_56;
        }
        v19 = &v30.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_55;
        *(_QWORD *)v30.it_.buf_.__data = *(_QWORD *)(v2 + 56);
        v19 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v30.it_.i_ = 3;
          goto LABEL_19;
        }
LABEL_56:
        v17 = __asan_report_store1(v19);
LABEL_57:
        v20 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v17;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v17);
LABEL_62:
          __asan_report_store8();
          goto LABEL_63;
        }
        v20 = &v30.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_62;
        *(_QWORD *)v30.it_.buf_.__data = *(_QWORD *)(v2 + 56);
        v20 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v30.it_.i_ = 4;
          goto LABEL_19;
        }
LABEL_63:
        v17 = __asan_report_store1(v20);
LABEL_64:
        v21 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v17;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v17);
LABEL_69:
          __asan_report_store8();
          goto LABEL_70;
        }
        v21 = &v30.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_69;
        *(_QWORD *)v30.it_.buf_.__data = *(_QWORD *)(v2 + 56);
        v21 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v30.it_.i_ = 5;
          goto LABEL_19;
        }
LABEL_70:
        v17 = __asan_report_store1(v21);
LABEL_71:
        v22 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v17;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v17);
LABEL_76:
          __asan_report_store8();
          goto LABEL_77;
        }
        v22 = &v30.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_76;
        *(_QWORD *)v30.it_.buf_.__data = *(_QWORD *)(v2 + 56);
        v22 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v30.it_.i_ = 6;
          goto LABEL_19;
        }
LABEL_77:
        v17 = __asan_report_store1(v22);
LABEL_78:
        v23 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v17;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v17);
LABEL_83:
          __asan_report_store8();
          goto LABEL_84;
        }
        v23 = &v30.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_83;
        *(_QWORD *)v30.it_.buf_.__data = *(_QWORD *)(v2 + 56);
        v23 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v30.it_.i_ = 7;
          goto LABEL_19;
        }
LABEL_84:
        v17 = __asan_report_store1(v23);
LABEL_85:
        v24 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v17;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v17);
LABEL_90:
          __asan_report_store8();
          goto LABEL_91;
        }
        v24 = &v30.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_90;
        *(_QWORD *)v30.it_.buf_.__data = *(_QWORD *)(v2 + 56);
        v24 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v30.it_.i_ = 8;
          goto LABEL_19;
        }
LABEL_91:
        v17 = __asan_report_store1(v24);
LABEL_92:
        v25 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v17;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v17);
LABEL_97:
          __asan_report_store8();
          goto LABEL_98;
        }
        v25 = &v30.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_97;
        *(_QWORD *)v30.it_.buf_.__data = *(_QWORD *)(v2 + 56);
        v25 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v30.it_.i_ = 9;
          goto LABEL_19;
        }
LABEL_98:
        v17 = __asan_report_store1(v25);
LABEL_99:
        v10 = &v30.it_;
        if ( *(char *)(((unsigned __int64)&v30.it_ >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(&v30.it_);
LABEL_105:
          __asan_report_load1(v10);
LABEL_106:
          __asan_report_store1(v10);
LABEL_107:
          __asan_report_load8(v10);
LABEL_108:
          v13 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v30);
          goto LABEL_24;
        }
        v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v17;
        v26 = *(_BYTE *)((v17 >> 3) + 0x7FFF8000);
        if ( v26 <= (char)(v17 & 7) && v26 )
          goto LABEL_105;
        v30.it_.buf_.__data[0] = *(_BYTE *)(v2 + 56);
        v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v30.it_.i_;
        if ( *(char *)(((unsigned __int64)&v30.it_.i_ >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_106;
        v30.it_.i_ = 10;
LABEL_19:
        v31 = *(_QWORD *)(v2 + 88);
        boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48));
        v9 = v31;
        if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v30,
                (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v31 + 112)) )
          goto LABEL_108;
        v10 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v9 + 152);
        if ( *(_BYTE *)(((unsigned __int64)(v9 + 152) >> 3) + 0x7FFF8000) )
          goto LABEL_107;
        v11 = *(_QWORD *)(v9 + 152);
        v12 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v30);
        if ( v11 >= v12.size_ )
          v11 = v12.size_;
        v13.size_ = v12.size_ - v11;
LABEL_24:
        v14 = v13.size_;
        if ( v30.it_.i_ > 0xAuLL )
        {
          __asan_handle_no_return(&v30);
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
        if ( v30.it_.i_ != 1LL )
          goto LABEL_26;
        v28.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v30.it_.buf_.1 + 1);
        if ( *(char *)(((unsigned __int64)(&v30.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
        {
          boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
            v30.it_.buf_.__data[16],
            &v28);
LABEL_26:
          *(_QWORD *)(v2 + 40) -= v14;
          continue;
        }
        __asan_report_load1(&v30.it_.buf_.1 + 2);
LABEL_113:
        v28.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
        boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v2 + 80),
          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v28);
        v28.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v32.it_.it_.it_;
        boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v32.it_.it_.it_.i_,
          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v28);
        v28.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v33.it_.it_.it_;
        boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v33.it_.it_.it_.i_,
          (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v28);
        if ( v34 == (char *)v2 )
        {
          *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
          *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
        }
        else
        {
          *(_QWORD *)v2 = 1172321806LL;
          *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
          *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
        }
        return v1;
      case 2:
        goto LABEL_43;
      case 3:
        goto LABEL_50;
      case 4:
        goto LABEL_57;
      case 5:
        goto LABEL_64;
      case 6:
        goto LABEL_71;
      case 7:
        goto LABEL_78;
      case 8:
        goto LABEL_85;
      case 9:
        goto LABEL_92;
      case 0xA:
        goto LABEL_99;
      default:
        __asan_handle_no_return(v6);
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

// Line 594: range 0000000019D0F7B5-0000000019D1019F
std::size_t __fastcall boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *b)
{
  std::size_t v1; // r15
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v7; // rdx
  char v8; // al
  bool v9; // al
  char *v10; // rdi
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v11; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rdi
  __int64 v13; // rbx
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v14; // rdi
  std::size_t v15; // rbx
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v17; // rax
  std::size_t v18; // rbx
  __int64 v19; // rbx
  std::size_t size; // rbx
  unsigned __int64 v21; // rax
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v23; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v24; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v25; // rdi
  boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *v26; // rdi
  char v27; // dl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v29; // [rsp+18h] [rbp-180h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+20h] [rbp-178h] BYREF
  boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v31; // [rsp+30h] [rbp-168h] BYREF
  __int64 v32; // [rsp+58h] [rbp-140h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v33; // [rsp+60h] [rbp-138h] BYREF
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v34; // [rsp+A0h] [rbp-F8h] BYREF
  char v35[184]; // [rsp+E0h] [rbp-B8h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 8 iter:563";
  *(_QWORD *)(v2 + 16) = boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(b);
LABEL_7:
    __asan_handle_no_return(b);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 8; F = boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::c"
      "onst_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator"
      "<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, const boost::asio::const_buffer*, "
      "const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost:"
      ":asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>("
      ")(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned"
      " int, 0>; std::size_t = long unsigned int]");
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    &v34,
    b->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v33,
    b->buffers_);
  *(_QWORD *)(v2 + 32) = v33.b_;
  *(_QWORD *)(v2 + 40) = v33.remain_;
  *(_QWORD *)(v2 + 48) = v33.it_.it_.bn_;
  *(_BYTE *)(v2 + 80) = 0;
  v4 = v2 + 56;
  b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)&v33.it_.it_.it_;
  switch ( v33.it_.it_.it_.i_ )
  {
    case 0u:
      goto LABEL_14;
    case 1u:
      if ( *(_BYTE *)(((unsigned __int64)&v33.it_.it_.it_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&v33.it_.it_.it_);
        goto LABEL_16;
      }
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      {
LABEL_16:
        __asan_report_store8();
        goto LABEL_17;
      }
      *(_QWORD *)(v2 + 56) = *(_QWORD *)v33.it_.it_.it_.buf_.__data;
      v6 = (char *)(v2 + 72);
      if ( *(char *)(((v2 + 72) >> 3) + 0x7FFF8000) < 0 )
      {
LABEL_17:
        __asan_report_store1(v6);
        goto LABEL_18;
      }
      *(_BYTE *)(v2 + 72) = 0;
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 64);
      f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v33.it_.it_.it_.buf_.1 + 1);
      v7 = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(&v33.it_.it_.it_.buf_.1 + 2);
      if ( *(char *)(((unsigned __int64)(&v33.it_.it_.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
      {
LABEL_18:
        b = v7;
        __asan_report_load1(v7);
        goto LABEL_19;
      }
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        v33.it_.it_.it_.buf_.__data[16],
        &f);
      b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) >= 0 )
      {
        *(_BYTE *)(v2 + 80) = 1;
        goto LABEL_14;
      }
LABEL_19:
      __asan_report_store1(b);
LABEL_20:
      if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(b);
        goto LABEL_25;
      }
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      {
LABEL_25:
        b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56);
        __asan_report_store8();
        goto LABEL_26;
      }
      *(boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56) = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)b->buffers_;
      b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) >= 0 )
      {
        *(_BYTE *)(v2 + 80) = 2;
        goto LABEL_14;
      }
LABEL_26:
      __asan_report_store1(b);
LABEL_27:
      if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(b);
        goto LABEL_32;
      }
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      {
LABEL_32:
        b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56);
        __asan_report_store8();
        goto LABEL_33;
      }
      *(boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56) = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)b->buffers_;
      b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) >= 0 )
      {
        *(_BYTE *)(v2 + 80) = 3;
        goto LABEL_14;
      }
LABEL_33:
      __asan_report_store1(b);
LABEL_34:
      if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(b);
        goto LABEL_39;
      }
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      {
LABEL_39:
        b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56);
        __asan_report_store8();
        goto LABEL_40;
      }
      *(boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56) = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)b->buffers_;
      b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) >= 0 )
      {
        *(_BYTE *)(v2 + 80) = 4;
        goto LABEL_14;
      }
LABEL_40:
      __asan_report_store1(b);
LABEL_41:
      if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(b);
        goto LABEL_46;
      }
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      {
LABEL_46:
        b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56);
        __asan_report_store8();
        goto LABEL_47;
      }
      *(boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56) = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)b->buffers_;
      b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) >= 0 )
      {
        *(_BYTE *)(v2 + 80) = 5;
        goto LABEL_14;
      }
LABEL_47:
      __asan_report_store1(b);
LABEL_48:
      if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(b);
        goto LABEL_53;
      }
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      {
LABEL_53:
        b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56);
        __asan_report_store8();
        goto LABEL_54;
      }
      *(boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56) = (boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >)b->buffers_;
      b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) >= 0 )
      {
        *(_BYTE *)(v2 + 80) = 6;
        goto LABEL_14;
      }
LABEL_54:
      __asan_report_store1(b);
LABEL_55:
      v8 = *(_BYTE *)((v4 >> 3) + 0x7FFF8000);
      if ( v8 <= (char)(v4 & 7) && v8 )
      {
        b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 56);
        __asan_report_store1(v2 + 56);
        goto LABEL_61;
      }
      if ( *(char *)(((unsigned __int64)b >> 3) + 0x7FFF8000) < 0 )
      {
LABEL_61:
        __asan_report_load1(b);
        goto LABEL_62;
      }
      *(_BYTE *)(v2 + 56) = b->buffers_;
      b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) < 0 )
      {
LABEL_62:
        __asan_report_store1(b);
        goto LABEL_63;
      }
      *(_BYTE *)(v2 + 80) = 7;
LABEL_14:
      *(_QWORD *)(v2 + 88) = v33.it_.b_;
      v1 = 0LL;
      while ( 2 )
      {
        if ( *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)(v2 + 32) != v34.b_ )
        {
          v9 = 0;
          goto LABEL_85;
        }
LABEL_63:
        v9 = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v2 + 88) == v34.it_.b_
          && boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48),
               &v34.it_.it_);
LABEL_85:
        if ( v9 )
          goto LABEL_148;
        v19 = *(_QWORD *)(v2 + 88);
        if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48),
                (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v19 + 72)) )
          goto LABEL_67;
        if ( *(_BYTE *)(((unsigned __int64)(v19 + 112) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v19 + 112);
LABEL_67:
          v10 = (char *)(v2 + 48);
          v11 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48));
          goto LABEL_91;
        }
        size = *(_QWORD *)(v19 + 112);
        v10 = (char *)(v2 + 48);
        v11 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48));
        if ( size >= v11.size_ )
          size = v11.size_;
        v11.size_ -= size;
LABEL_91:
        if ( *(_QWORD *)(v2 + 40) < v11.size_ )
          v11.size_ = *(_QWORD *)(v2 + 40);
        v1 += v11.size_;
        v31.bn_ = *(const boost::beast::detail::tuple<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v2 + 48);
        v31.it_.i_ = 0;
        v21 = v2 + 56;
        switch ( *(_BYTE *)(v2 + 80) )
        {
          case 0:
            goto LABEL_75;
          case 1:
            p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(p_it);
LABEL_95:
              __asan_report_store8();
LABEL_96:
              __asan_report_store1(p_it);
LABEL_97:
              __asan_report_load1(p_it);
              goto LABEL_98;
            }
            p_it = &v31.it_;
            if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
              goto LABEL_95;
            *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v2 + 56);
            p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v31.it_.buf_.1 + 2);
            if ( *(char *)(((unsigned __int64)(&v31.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) < 0 )
              goto LABEL_96;
            v31.it_.buf_.__data[16] = 0;
            f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v31.it_.buf_.1 + 1);
            f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 64);
            p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 72);
            if ( *(char *)(((v2 + 72) >> 3) + 0x7FFF8000) < 0 )
              goto LABEL_97;
            boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
              *(unsigned __int8 *)(v2 + 72),
              &f);
            p_it = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
            if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v31.it_.i_ = 1;
              goto LABEL_75;
            }
LABEL_98:
            v21 = __asan_report_store1(p_it);
LABEL_99:
            p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v21;
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v21);
LABEL_104:
              __asan_report_store8();
              goto LABEL_105;
            }
            p_i = &v31.it_;
            if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
              goto LABEL_104;
            *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v2 + 56);
            p_i = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
            if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v31.it_.i_ = 2;
              goto LABEL_75;
            }
LABEL_105:
            v21 = __asan_report_store1(p_i);
LABEL_106:
            v23 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v21;
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v21);
LABEL_111:
              __asan_report_store8();
              goto LABEL_112;
            }
            v23 = &v31.it_;
            if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
              goto LABEL_111;
            *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v2 + 56);
            v23 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
            if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v31.it_.i_ = 3;
              goto LABEL_75;
            }
LABEL_112:
            v21 = __asan_report_store1(v23);
LABEL_113:
            v24 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v21;
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v21);
LABEL_118:
              __asan_report_store8();
              goto LABEL_119;
            }
            v24 = &v31.it_;
            if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
              goto LABEL_118;
            *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v2 + 56);
            v24 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
            if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v31.it_.i_ = 4;
              goto LABEL_75;
            }
LABEL_119:
            v21 = __asan_report_store1(v24);
LABEL_120:
            v25 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v21;
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v21);
LABEL_125:
              __asan_report_store8();
              goto LABEL_126;
            }
            v25 = &v31.it_;
            if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
              goto LABEL_125;
            *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v2 + 56);
            v25 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
            if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v31.it_.i_ = 5;
              goto LABEL_75;
            }
LABEL_126:
            v21 = __asan_report_store1(v25);
LABEL_127:
            v26 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v21;
            if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v21);
LABEL_132:
              __asan_report_store8();
              goto LABEL_133;
            }
            v26 = &v31.it_;
            if ( *(_BYTE *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) )
              goto LABEL_132;
            *(_QWORD *)v31.it_.buf_.__data = *(_QWORD *)(v2 + 56);
            v26 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
            if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v31.it_.i_ = 6;
              goto LABEL_75;
            }
LABEL_133:
            v21 = __asan_report_store1(v26);
LABEL_134:
            v14 = &v31.it_;
            if ( *(char *)(((unsigned __int64)&v31.it_ >> 3) + 0x7FFF8000) < 0 )
            {
              __asan_report_store1(&v31.it_);
LABEL_140:
              __asan_report_load1(v14);
LABEL_141:
              __asan_report_store1(v14);
LABEL_142:
              __asan_report_load8(v14);
LABEL_143:
              v17 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v31);
              goto LABEL_80;
            }
            v14 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)v21;
            v27 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
            if ( v27 <= (char)(v21 & 7) && v27 )
              goto LABEL_140;
            v31.it_.buf_.__data[0] = *(_BYTE *)(v2 + 56);
            v14 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v31.it_.i_;
            if ( *(char *)(((unsigned __int64)&v31.it_.i_ >> 3) + 0x7FFF8000) < 0 )
              goto LABEL_141;
            v31.it_.i_ = 7;
LABEL_75:
            v32 = *(_QWORD *)(v2 + 88);
            boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48));
            v13 = v32;
            if ( !boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                    &v31,
                    (const boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v32 + 72)) )
              goto LABEL_143;
            v14 = (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v13 + 112);
            if ( *(_BYTE *)(((unsigned __int64)(v13 + 112) >> 3) + 0x7FFF8000) )
              goto LABEL_142;
            v15 = *(_QWORD *)(v13 + 112);
            v16 = boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v31);
            if ( v15 >= v16.size_ )
              v15 = v16.size_;
            v17.size_ = v16.size_ - v15;
LABEL_80:
            v18 = v17.size_;
            if ( v31.it_.i_ > 7uLL )
            {
              __asan_handle_no_return(&v31);
              __assert_fail(
                "i < N",
                "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/m"
                "p_with_index.hpp",
                0x17Du,
                "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std:"
                ":size_t, F&&) [with long unsigned int N = 8; F = boost::beast::detail::variant<boost::beast::buffers_cat"
                "_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::htt"
                "p::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iter"
                "ator, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffe"
                "r*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_ca"
                "t_view_iterator_base::past_end>::destroy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >()))"
                " = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
            }
            if ( v31.it_.i_ != 1LL )
              goto LABEL_82;
            v29.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(&v31.it_.buf_.1 + 1);
            if ( *(char *)(((unsigned __int64)(&v31.it_.buf_.1 + 2) >> 3) + 0x7FFF8000) >= 0 )
            {
              boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                v31.it_.buf_.__data[16],
                &v29);
LABEL_82:
              *(_QWORD *)(v2 + 40) -= v18;
              continue;
            }
            __asan_report_load1(&v31.it_.buf_.1 + 2);
LABEL_148:
            v29.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
            boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
              *(unsigned __int8 *)(v2 + 80),
              (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v29);
            v29.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v33.it_.it_.it_;
            boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
              v33.it_.it_.it_.i_,
              (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v29);
            v29.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v34.it_.it_.it_;
            boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
              v34.it_.it_.it_.i_,
              (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&v29);
            if ( v35 == (char *)v2 )
            {
              *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
              *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
            }
            else
            {
              *(_QWORD *)v2 = 1172321806LL;
              *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
              *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
            }
            return v1;
          case 2:
            goto LABEL_99;
          case 3:
            goto LABEL_106;
          case 4:
            goto LABEL_113;
          case 5:
            goto LABEL_120;
          case 6:
            goto LABEL_127;
          case 7:
            goto LABEL_134;
          default:
            __asan_handle_no_return(v10);
            __assert_fail(
              "i < N",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
              0x17Du,
              "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::s"
              "ize_t, F&&) [with long unsigned int N = 8; F = boost::beast::detail::variant<boost::beast::buffers_cat_vie"
              "w<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::bas"
              "ic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf>::const_iterator, co"
              "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const "
              "boost::asio::const_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_itera"
              "tor_base::past_end>::copy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::m"
              "p11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
      }
    case 2u:
      goto LABEL_20;
    case 3u:
      goto LABEL_27;
    case 4u:
      goto LABEL_34;
    case 5u:
      goto LABEL_41;
    case 6u:
      goto LABEL_48;
    case 7u:
      goto LABEL_55;
    default:
      goto LABEL_7;
  }
};

// Line 594: range 0000000019D116F9-0000000019D1216D
std::size_t __fastcall boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *b)
{
  std::size_t v1; // r15
  unsigned __int64 v2; // r12
  _DWORD *v3; // r13
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rcx
  __int64 v5; // rax
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v6; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v7; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v8; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v9; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v10; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v11; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v12; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v13; // rdx
  char v14; // al
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v15; // rdx
  bool v16; // al
  char *v17; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v18; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  std::size_t v22; // r14
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v23; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v24; // rax
  __int64 v25; // r14
  std::size_t size; // r14
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rdi
  char v36; // cl
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v38; // [rsp+10h] [rbp-138h] BYREF
  __int64 v39; // [rsp+28h] [rbp-120h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v40; // [rsp+30h] [rbp-118h] BYREF
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v41; // [rsp+60h] [rbp-E8h] BYREF
  char v42[184]; // [rsp+90h] [rbp-B8h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 8 iter:563";
  *(_QWORD *)(v2 + 16) = boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(b);
LABEL_7:
    __asan_handle_no_return(b);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boos"
      "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::con"
      "st_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, "
      "boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()(declval<boost::mp11:"
      ":mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t "
      "= long unsigned int]");
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    &v41,
    b->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v40,
    b->buffers_);
  *(_QWORD *)(v2 + 48) = v40.b_;
  *(_QWORD *)(v2 + 56) = v40.remain_;
  *(_QWORD *)(v2 + 64) = v40.it_.it_.bn_;
  *(_BYTE *)(v2 + 80) = 0;
  b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 72);
  p_it = &v40.it_.it_.it_;
  switch ( v40.it_.it_.it_.i_ )
  {
    case 0u:
      goto LABEL_12;
    case 1u:
      if ( *(_BYTE *)(((unsigned __int64)&v40.it_.it_.it_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&v40.it_.it_.it_);
        goto LABEL_14;
      }
      if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
      {
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
      *(boost::beast::detail::aligned_union_t_5 *)(v2 + 72) = v40.it_.it_.it_.buf_;
      v6 = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) < 0 )
      {
LABEL_15:
        b = v6;
        __asan_report_store1(v6);
LABEL_16:
        if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_it);
        }
        else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
        {
          *(boost::beast::detail::aligned_union_t_5 *)(v2 + 72) = p_it->buf_;
          v7 = b + 1;
          if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
          {
            LOBYTE(b[1].buffers_) = 2;
            goto LABEL_12;
          }
LABEL_22:
          b = v7;
          __asan_report_store1(v7);
LABEL_23:
          if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(p_it);
          }
          else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
          {
            *(boost::beast::detail::aligned_union_t_5 *)(v2 + 72) = p_it->buf_;
            v8 = b + 1;
            if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
            {
              LOBYTE(b[1].buffers_) = 3;
              goto LABEL_12;
            }
LABEL_29:
            b = v8;
            __asan_report_store1(v8);
LABEL_30:
            if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(p_it);
            }
            else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
            {
              *(boost::beast::detail::aligned_union_t_5 *)(v2 + 72) = p_it->buf_;
              v9 = b + 1;
              if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
              {
                LOBYTE(b[1].buffers_) = 4;
                goto LABEL_12;
              }
LABEL_36:
              b = v9;
              __asan_report_store1(v9);
LABEL_37:
              if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_it);
              }
              else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
              {
                *(boost::beast::detail::aligned_union_t_5 *)(v2 + 72) = p_it->buf_;
                v10 = b + 1;
                if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
                {
                  LOBYTE(b[1].buffers_) = 5;
                  goto LABEL_12;
                }
LABEL_43:
                b = v10;
                __asan_report_store1(v10);
LABEL_44:
                if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_it);
                }
                else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
                {
                  *(boost::beast::detail::aligned_union_t_5 *)(v2 + 72) = p_it->buf_;
                  v11 = b + 1;
                  if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
                  {
                    LOBYTE(b[1].buffers_) = 6;
                    goto LABEL_12;
                  }
LABEL_50:
                  b = v11;
                  __asan_report_store1(v11);
LABEL_51:
                  if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8(p_it);
                  }
                  else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
                  {
                    *(boost::beast::detail::aligned_union_t_5 *)(v2 + 72) = p_it->buf_;
                    v12 = b + 1;
                    if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
                    {
                      LOBYTE(b[1].buffers_) = 7;
                      goto LABEL_12;
                    }
LABEL_57:
                    b = v12;
                    __asan_report_store1(v12);
LABEL_58:
                    if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(p_it);
                    }
                    else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
                    {
                      *(boost::beast::detail::aligned_union_t_5 *)(v2 + 72) = p_it->buf_;
                      v13 = b + 1;
                      if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
                      {
                        LOBYTE(b[1].buffers_) = 8;
                        goto LABEL_12;
                      }
LABEL_64:
                      b = v13;
                      __asan_report_store1(v13);
LABEL_65:
                      v14 = *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000);
                      if ( v14 <= ((unsigned __int8)b & 7) && v14 )
                      {
                        __asan_report_store1(b);
                      }
                      else if ( *(char *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) >= 0 )
                      {
                        *(_BYTE *)(v2 + 72) = p_it->buf_.__data[0];
                        v15 = b + 1;
                        if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
                        {
                          LOBYTE(b[1].buffers_) = 9;
                          goto LABEL_12;
                        }
LABEL_72:
                        b = v15;
                        __asan_report_store1(v15);
                        goto LABEL_73;
                      }
                      __asan_report_load1(p_it);
                      goto LABEL_72;
                    }
                    __asan_report_store8();
                    goto LABEL_64;
                  }
                  __asan_report_store8();
                  goto LABEL_57;
                }
                __asan_report_store8();
                goto LABEL_50;
              }
              __asan_report_store8();
              goto LABEL_43;
            }
            __asan_report_store8();
            goto LABEL_36;
          }
          __asan_report_store8();
          goto LABEL_29;
        }
        __asan_report_store8();
        goto LABEL_22;
      }
      *(_BYTE *)(v2 + 80) = 1;
LABEL_12:
      *(_QWORD *)(v2 + 88) = v40.it_.b_;
      v1 = 0LL;
      while ( 1 )
      {
        if ( *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)(v2 + 48) != v41.b_ )
        {
          v16 = 0;
          goto LABEL_92;
        }
LABEL_73:
        if ( *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v2 + 88) == v41.it_.b_ )
        {
          b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 64);
          v16 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                  (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64),
                  &v41.it_.it_);
        }
        else
        {
          v16 = 0;
        }
LABEL_92:
        if ( v16 )
          break;
        v25 = *(_QWORD *)(v2 + 88);
        if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64),
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v25 + 104)) )
        {
          if ( !*(_BYTE *)(((unsigned __int64)(v25 + 128) >> 3) + 0x7FFF8000) )
          {
            size = *(_QWORD *)(v25 + 128);
            v17 = (char *)(v2 + 64);
            v18 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64));
            if ( size >= v18.size_ )
              size = v18.size_;
            v18.size_ -= size;
            goto LABEL_98;
          }
          __asan_report_load8(v25 + 128);
        }
        v17 = (char *)(v2 + 64);
        v18 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64));
LABEL_98:
        if ( *(_QWORD *)(v2 + 56) < v18.size_ )
          v18.size_ = *(_QWORD *)(v2 + 56);
        v1 += v18.size_;
        v38.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v2 + 64);
        v38.it_.i_ = 0;
        v27 = (unsigned __int64)&v38.it_;
        v28 = v2 + 72;
        switch ( *(_BYTE *)(v2 + 80) )
        {
          case 0:
            goto LABEL_83;
          case 1:
            p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 72);
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(p_i);
LABEL_102:
              __asan_report_store8();
              goto LABEL_103;
            }
            p_i = &v38.it_;
            if ( *(_BYTE *)(((unsigned __int64)&v38.it_ >> 3) + 0x7FFF8000) )
              goto LABEL_102;
            v38.it_.buf_ = *(boost::beast::detail::aligned_union_t_5 *)(v2 + 72);
            p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v38.it_.i_;
            if ( *(char *)(((unsigned __int64)&v38.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v38.it_.i_ = 1;
              goto LABEL_83;
            }
LABEL_103:
            v27 = __asan_report_store1(p_i);
LABEL_104:
            v29 = v28;
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v28);
LABEL_109:
              __asan_report_store8();
              goto LABEL_110;
            }
            v29 = v27;
            if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
              goto LABEL_109;
            *(_QWORD *)v27 = *(_QWORD *)(v2 + 72);
            v29 = v27 + 8;
            if ( *(char *)(((v27 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v27 + 8) = 2;
              goto LABEL_83;
            }
LABEL_110:
            v27 = __asan_report_store1(v29);
LABEL_111:
            v30 = v28;
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v28);
LABEL_116:
              __asan_report_store8();
              goto LABEL_117;
            }
            v30 = v27;
            if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
              goto LABEL_116;
            *(_QWORD *)v27 = *(_QWORD *)(v2 + 72);
            v30 = v27 + 8;
            if ( *(char *)(((v27 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v27 + 8) = 3;
              goto LABEL_83;
            }
LABEL_117:
            v27 = __asan_report_store1(v30);
LABEL_118:
            v31 = v28;
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v28);
LABEL_123:
              __asan_report_store8();
              goto LABEL_124;
            }
            v31 = v27;
            if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
              goto LABEL_123;
            *(_QWORD *)v27 = *(_QWORD *)(v2 + 72);
            v31 = v27 + 8;
            if ( *(char *)(((v27 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v27 + 8) = 4;
              goto LABEL_83;
            }
LABEL_124:
            v27 = __asan_report_store1(v31);
LABEL_125:
            v32 = v28;
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v28);
LABEL_130:
              __asan_report_store8();
              goto LABEL_131;
            }
            v32 = v27;
            if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
              goto LABEL_130;
            *(_QWORD *)v27 = *(_QWORD *)(v2 + 72);
            v32 = v27 + 8;
            if ( *(char *)(((v27 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v27 + 8) = 5;
              goto LABEL_83;
            }
LABEL_131:
            v27 = __asan_report_store1(v32);
LABEL_132:
            v33 = v28;
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v28);
LABEL_137:
              __asan_report_store8();
              goto LABEL_138;
            }
            v33 = v27;
            if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
              goto LABEL_137;
            *(_QWORD *)v27 = *(_QWORD *)(v2 + 72);
            v33 = v27 + 8;
            if ( *(char *)(((v27 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v27 + 8) = 6;
              goto LABEL_83;
            }
LABEL_138:
            v27 = __asan_report_store1(v33);
LABEL_139:
            v34 = v28;
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v28);
LABEL_144:
              __asan_report_store8();
              goto LABEL_145;
            }
            v34 = v27;
            if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
              goto LABEL_144;
            *(_QWORD *)v27 = *(_QWORD *)(v2 + 72);
            v34 = v27 + 8;
            if ( *(char *)(((v27 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v27 + 8) = 7;
              goto LABEL_83;
            }
LABEL_145:
            v27 = __asan_report_store1(v34);
LABEL_146:
            v35 = v28;
            if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v28);
LABEL_151:
              __asan_report_store8();
              goto LABEL_152;
            }
            v35 = v27;
            if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
              goto LABEL_151;
            *(_QWORD *)v27 = *(_QWORD *)(v2 + 72);
            v35 = v27 + 8;
            if ( *(char *)(((v27 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v27 + 8) = 8;
              goto LABEL_83;
            }
LABEL_152:
            v27 = __asan_report_store1(v35);
LABEL_153:
            v21 = v27;
            if ( *(char *)((v27 >> 3) + 0x7FFF8000) < 0 )
            {
              __asan_report_store1(v27);
LABEL_159:
              __asan_report_load1(v21);
LABEL_160:
              __asan_report_store1(v21);
LABEL_161:
              __asan_report_load8(v21);
LABEL_162:
              b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)&v38;
              v24 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v38);
              goto LABEL_88;
            }
            v21 = v28;
            v36 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
            if ( v36 <= (char)(v28 & 7) && v36 )
              goto LABEL_159;
            *(_BYTE *)v27 = *(_BYTE *)(v2 + 72);
            v21 = v27 + 8;
            if ( *(char *)(((v27 + 8) >> 3) + 0x7FFF8000) < 0 )
              goto LABEL_160;
            *(_BYTE *)(v27 + 8) = 9;
LABEL_83:
            v39 = *(_QWORD *)(v2 + 88);
            boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64));
            v20 = v39;
            if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                    &v38,
                    (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v39 + 104)) )
              goto LABEL_162;
            v21 = v20 + 128;
            if ( *(_BYTE *)(((unsigned __int64)(v20 + 128) >> 3) + 0x7FFF8000) )
              goto LABEL_161;
            v22 = *(_QWORD *)(v20 + 128);
            b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)&v38;
            v23 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v38);
            if ( v22 >= v23.size_ )
              v22 = v23.size_;
            v24.size_ = v23.size_ - v22;
LABEL_88:
            if ( v38.it_.i_ > 9u )
            {
              __asan_handle_no_return(&v38);
              __assert_fail(
                "i < N",
                "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/m"
                "p_with_index.hpp",
                0x17Du,
                "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std:"
                ":size_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const"
                "_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_b"
                "uffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buf"
                "fer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>:"
                ":destroy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<"
                "0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
            }
            *(_QWORD *)(v2 + 56) -= v24.size_;
            break;
          case 2:
            goto LABEL_104;
          case 3:
            goto LABEL_111;
          case 4:
            goto LABEL_118;
          case 5:
            goto LABEL_125;
          case 6:
            goto LABEL_132;
          case 7:
            goto LABEL_139;
          case 8:
            goto LABEL_146;
          case 9:
            goto LABEL_153;
          default:
            __asan_handle_no_return(v17);
            __assert_fail(
              "i < N",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
              0x17Du,
              "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::s"
              "ize_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buf"
              "fer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*"
              ", const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, co"
              "nst boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; dec"
              "ltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integ"
              "ral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
      }
      if ( *(_BYTE *)(v2 + 80) > 9u )
      {
        __asan_handle_no_return(b);
        __assert_fail(
          "i < N",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
          0x17Du,
          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_"
          "t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio:"
          ":const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>"
          "()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long uns"
          "igned int, 0>; std::size_t = long unsigned int]");
      }
      if ( v40.it_.it_.it_.i_ > 9u )
      {
        __asan_handle_no_return(b);
        __assert_fail(
          "i < N",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
          0x17Du,
          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_"
          "t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio:"
          ":const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>"
          "()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long uns"
          "igned int, 0>; std::size_t = long unsigned int]");
      }
      if ( v41.it_.it_.it_.i_ > 9u )
      {
        __asan_handle_no_return(b);
        __assert_fail(
          "i < N",
          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
          0x17Du,
          "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_"
          "t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::const_buffer*, co"
          "nst boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boos"
          "t::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio:"
          ":const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy; decltype (declval<F>"
          "()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long uns"
          "igned int, 0>; std::size_t = long unsigned int]");
      }
      if ( v42 == (char *)v2 )
      {
        *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
        *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
      }
      else
      {
        *(_QWORD *)v2 = 1172321806LL;
        *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return v1;
    case 2u:
      goto LABEL_16;
    case 3u:
      goto LABEL_23;
    case 4u:
      goto LABEL_30;
    case 5u:
      goto LABEL_37;
    case 6u:
      goto LABEL_44;
    case 7u:
      goto LABEL_51;
    case 8u:
      goto LABEL_58;
    case 9u:
      goto LABEL_65;
    default:
      goto LABEL_7;
  }
};

// Line 594: range 0000000019D10790-0000000019D10F9D
std::size_t __fastcall boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *b)
{
  std::size_t v1; // r15
  unsigned __int64 v2; // r12
  _DWORD *v3; // r13
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_it; // rcx
  __int64 v5; // rax
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v6; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v7; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v8; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v9; // rdx
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v10; // rdx
  char v11; // al
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v12; // rdx
  bool v13; // al
  char *v14; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v15; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v17; // r14
  unsigned __int64 v18; // rdi
  std::size_t v19; // r14
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v20; // rax
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v21; // rax
  __int64 v22; // r14
  std::size_t size; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdi
  char v30; // cl
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+18h] [rbp-140h] BYREF
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v33; // [rsp+20h] [rbp-138h] BYREF
  __int64 v34; // [rsp+38h] [rbp-120h]
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v35; // [rsp+40h] [rbp-118h] BYREF
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator v36; // [rsp+70h] [rbp-E8h] BYREF
  char v37[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 8 iter:563";
  *(_QWORD *)(v2 + 16) = boost::asio::buffer_size<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(b);
LABEL_7:
    __asan_handle_no_return(b);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_buffer*, const boost"
      "::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::cons"
      "t_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; decltype (declval<F>()(declval<b"
      "oost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; s"
      "td::size_t = long unsigned int]");
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    &v36,
    b->buffers_);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    &v35,
    b->buffers_);
  *(_QWORD *)(v2 + 48) = v35.b_;
  *(_QWORD *)(v2 + 56) = v35.remain_;
  *(_QWORD *)(v2 + 64) = v35.it_.it_.bn_;
  *(_BYTE *)(v2 + 80) = 0;
  b = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 72);
  p_it = &v35.it_.it_.it_;
  switch ( v35.it_.it_.it_.i_ )
  {
    case 0u:
      goto LABEL_12;
    case 1u:
      if ( *(_BYTE *)(((unsigned __int64)&v35.it_.it_.it_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&v35.it_.it_.it_);
        goto LABEL_14;
      }
      if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
      {
LABEL_14:
        __asan_report_store8();
        goto LABEL_15;
      }
      *(boost::beast::detail::aligned_union_t_4 *)(v2 + 72) = v35.it_.it_.it_.buf_;
      v6 = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 80);
      if ( *(char *)(((v2 + 80) >> 3) + 0x7FFF8000) < 0 )
      {
LABEL_15:
        b = v6;
        __asan_report_store1(v6);
LABEL_16:
        if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_it);
        }
        else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
        {
          *(boost::beast::detail::aligned_union_t_4 *)(v2 + 72) = p_it->buf_;
          v7 = b + 1;
          if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
          {
            LOBYTE(b[1].buffers_) = 2;
            goto LABEL_12;
          }
LABEL_22:
          b = v7;
          __asan_report_store1(v7);
LABEL_23:
          if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(p_it);
          }
          else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
          {
            *(boost::beast::detail::aligned_union_t_4 *)(v2 + 72) = p_it->buf_;
            v8 = b + 1;
            if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
            {
              LOBYTE(b[1].buffers_) = 3;
              goto LABEL_12;
            }
LABEL_29:
            b = v8;
            __asan_report_store1(v8);
LABEL_30:
            if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(p_it);
            }
            else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
            {
              *(boost::beast::detail::aligned_union_t_4 *)(v2 + 72) = p_it->buf_;
              v9 = b + 1;
              if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
              {
                LOBYTE(b[1].buffers_) = 4;
                goto LABEL_12;
              }
LABEL_36:
              b = v9;
              __asan_report_store1(v9);
LABEL_37:
              if ( *(_BYTE *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_it);
              }
              else if ( !*(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
              {
                *(boost::beast::detail::aligned_union_t_4 *)(v2 + 72) = p_it->buf_;
                v10 = b + 1;
                if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
                {
                  LOBYTE(b[1].buffers_) = 5;
                  goto LABEL_12;
                }
LABEL_43:
                b = v10;
                __asan_report_store1(v10);
LABEL_44:
                v11 = *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000);
                if ( v11 <= ((unsigned __int8)b & 7) && v11 )
                {
                  __asan_report_store1(b);
                }
                else if ( *(char *)(((unsigned __int64)p_it >> 3) + 0x7FFF8000) >= 0 )
                {
                  *(_BYTE *)(v2 + 72) = p_it->buf_.__data[0];
                  v12 = b + 1;
                  if ( *(char *)(((unsigned __int64)&b[1] >> 3) + 0x7FFF8000) >= 0 )
                  {
                    LOBYTE(b[1].buffers_) = 6;
                    goto LABEL_12;
                  }
LABEL_51:
                  __asan_report_store1(v12);
                  goto LABEL_52;
                }
                __asan_report_load1(p_it);
                goto LABEL_51;
              }
              __asan_report_store8();
              goto LABEL_43;
            }
            __asan_report_store8();
            goto LABEL_36;
          }
          __asan_report_store8();
          goto LABEL_29;
        }
        __asan_report_store8();
        goto LABEL_22;
      }
      *(_BYTE *)(v2 + 80) = 1;
LABEL_12:
      *(_QWORD *)(v2 + 88) = v35.it_.b_;
      v1 = 0LL;
      while ( 1 )
      {
        if ( *(const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> **)(v2 + 48) != v36.b_ )
        {
          v13 = 0;
          goto LABEL_71;
        }
LABEL_52:
        v13 = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v2 + 88) == v36.it_.b_
           && boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64),
                &v36.it_.it_);
LABEL_71:
        if ( v13 )
          break;
        v22 = *(_QWORD *)(v2 + 88);
        if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64),
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v22 + 64)) )
        {
          if ( !*(_BYTE *)(((unsigned __int64)(v22 + 88) >> 3) + 0x7FFF8000) )
          {
            size = *(_QWORD *)(v22 + 88);
            v14 = (char *)(v2 + 64);
            v15 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64));
            if ( size >= v15.size_ )
              size = v15.size_;
            v15.size_ -= size;
            goto LABEL_77;
          }
          __asan_report_load8(v22 + 88);
        }
        v14 = (char *)(v2 + 64);
        v15 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64));
LABEL_77:
        if ( *(_QWORD *)(v2 + 56) < v15.size_ )
          v15.size_ = *(_QWORD *)(v2 + 56);
        v1 += v15.size_;
        v33.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v2 + 64);
        v33.it_.i_ = 0;
        v24 = (unsigned __int64)&v33.it_;
        v25 = v2 + 72;
        switch ( *(_BYTE *)(v2 + 80) )
        {
          case 0:
            goto LABEL_62;
          case 1:
            p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 72);
            if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(p_i);
LABEL_81:
              __asan_report_store8();
              goto LABEL_82;
            }
            p_i = &v33.it_;
            if ( *(_BYTE *)(((unsigned __int64)&v33.it_ >> 3) + 0x7FFF8000) )
              goto LABEL_81;
            v33.it_.buf_ = *(boost::beast::detail::aligned_union_t_4 *)(v2 + 72);
            p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v33.it_.i_;
            if ( *(char *)(((unsigned __int64)&v33.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
            {
              v33.it_.i_ = 1;
              goto LABEL_62;
            }
LABEL_82:
            v24 = __asan_report_store1(p_i);
LABEL_83:
            v26 = v25;
            if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v25);
LABEL_88:
              __asan_report_store8();
              goto LABEL_89;
            }
            v26 = v24;
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              goto LABEL_88;
            *(_QWORD *)v24 = *(_QWORD *)(v2 + 72);
            v26 = v24 + 8;
            if ( *(char *)(((v24 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v24 + 8) = 2;
              goto LABEL_62;
            }
LABEL_89:
            v24 = __asan_report_store1(v26);
LABEL_90:
            v27 = v25;
            if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v25);
LABEL_95:
              __asan_report_store8();
              goto LABEL_96;
            }
            v27 = v24;
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              goto LABEL_95;
            *(_QWORD *)v24 = *(_QWORD *)(v2 + 72);
            v27 = v24 + 8;
            if ( *(char *)(((v24 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v24 + 8) = 3;
              goto LABEL_62;
            }
LABEL_96:
            v24 = __asan_report_store1(v27);
LABEL_97:
            v28 = v25;
            if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v25);
LABEL_102:
              __asan_report_store8();
              goto LABEL_103;
            }
            v28 = v24;
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              goto LABEL_102;
            *(_QWORD *)v24 = *(_QWORD *)(v2 + 72);
            v28 = v24 + 8;
            if ( *(char *)(((v24 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v24 + 8) = 4;
              goto LABEL_62;
            }
LABEL_103:
            v24 = __asan_report_store1(v28);
LABEL_104:
            v29 = v25;
            if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v25);
LABEL_109:
              __asan_report_store8();
              goto LABEL_110;
            }
            v29 = v24;
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              goto LABEL_109;
            *(_QWORD *)v24 = *(_QWORD *)(v2 + 72);
            v29 = v24 + 8;
            if ( *(char *)(((v24 + 8) >> 3) + 0x7FFF8000) >= 0 )
            {
              *(_BYTE *)(v24 + 8) = 5;
              goto LABEL_62;
            }
LABEL_110:
            v24 = __asan_report_store1(v29);
LABEL_111:
            v18 = v24;
            if ( *(char *)((v24 >> 3) + 0x7FFF8000) < 0 )
            {
              __asan_report_store1(v24);
LABEL_117:
              __asan_report_load1(v18);
LABEL_118:
              __asan_report_store1(v18);
LABEL_119:
              __asan_report_load8(v18);
LABEL_120:
              v21 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v33);
              goto LABEL_67;
            }
            v18 = v25;
            v30 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
            if ( v30 <= (char)(v25 & 7) && v30 )
              goto LABEL_117;
            *(_BYTE *)v24 = *(_BYTE *)(v2 + 72);
            v18 = v24 + 8;
            if ( *(char *)(((v24 + 8) >> 3) + 0x7FFF8000) < 0 )
              goto LABEL_118;
            *(_BYTE *)(v24 + 8) = 6;
LABEL_62:
            v34 = *(_QWORD *)(v2 + 88);
            boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 64));
            v17 = v34;
            if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                    &v33,
                    (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v34 + 64)) )
              goto LABEL_120;
            v18 = v17 + 88;
            if ( *(_BYTE *)(((unsigned __int64)(v17 + 88) >> 3) + 0x7FFF8000) )
              goto LABEL_119;
            v19 = *(_QWORD *)(v17 + 88);
            v20 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v33);
            if ( v19 >= v20.size_ )
              v19 = v20.size_;
            v21.size_ = v20.size_ - v19;
LABEL_67:
            if ( v33.it_.i_ > 6u )
            {
              __asan_handle_no_return(&v33);
              __assert_fail(
                "i < N",
                "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/m"
                "p_with_index.hpp",
                0x17Du,
                "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std:"
                ":size_t, F&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_"
                "buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_bu"
                "ffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>"
                "::destroy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t"
                "<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
            }
            *(_QWORD *)(v2 + 56) -= v21.size_;
            break;
          case 2:
            goto LABEL_83;
          case 3:
            goto LABEL_90;
          case 4:
            goto LABEL_97;
          case 5:
            goto LABEL_104;
          case 6:
            goto LABEL_111;
          default:
            __asan_handle_no_return(v14);
            __assert_fail(
              "i < N",
              "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
              0x17Du,
              "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::s"
              "ize_t, F&&) [with long unsigned int N = 7; F = boost::beast::detail::variant<const boost::asio::const_buff"
              "er*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*,"
              " const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy; "
              "decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::in"
              "tegral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
        }
      }
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 72);
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        *(unsigned __int8 *)(v2 + 80),
        &f);
      f.self = &v35.it_.it_.it_;
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        v35.it_.it_.it_.i_,
        &f);
      f.self = &v36.it_.it_.it_;
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        v36.it_.it_.it_.i_,
        &f);
      if ( v37 == (char *)v2 )
      {
        *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
        *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
      }
      else
      {
        *(_QWORD *)v2 = 1172321806LL;
        *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return v1;
    case 2u:
      goto LABEL_16;
    case 3u:
      goto LABEL_23;
    case 4u:
      goto LABEL_30;
    case 5u:
      goto LABEL_37;
    case 6u:
      goto LABEL_44;
    default:
      goto LABEL_7;
  }
};

// Line 2203: range 0000000019BD9C5F-0000000019BDA011
__int64 __fastcall boost::asio::detail::buffer_copy<boost::asio::mutable_buffer const*,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::const_iterator>(
        unsigned __int64 a1,
        _BYTE *a2,
        const boost::asio::mutable_buffer *target_begin,
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator source_begin,
        boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>::const_iterator source_end)
{
  char *v7; // r13
  __int64 v8; // r14
  unsigned __int64 v10; // r15
  const boost::asio::mutable_buffer *v11; // rcx
  __int64 v12; // rax
  __m128i *v13; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  _BYTE *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  size_t v22; // rbp
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _DWORD *v29; // [rsp+0h] [rbp-E8h]
  char v30[216]; // [rsp+10h] [rbp-D8h] BYREF

  v10 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(160LL);
    if ( v12 )
      v10 = v12;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 32 32 16 source_iter:2210 96 32 15 source_end:2205";
  *(_QWORD *)(v10 + 16) = boost::asio::detail::buffer_copy<boost::asio::mutable_buffer const*,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>::const_iterator>;
  v29 = (_DWORD *)(v10 >> 3);
  v29[536862720] = -235802127;
  v29[536862722] = -218959118;
  v29[536862724] = -202116109;
  *(__m128i *)(v10 + 96) = _mm_loadu_si128((const __m128i *)&source_end);
  *(__m128i *)(v10 + 112) = _mm_loadu_si128((const __m128i *)&source_end.it_);
  *(__m128i *)(v10 + 32) = _mm_loadu_si128((const __m128i *)&source_begin);
  *(__m128i *)(v10 + 48) = _mm_loadu_si128((const __m128i *)&source_begin.it_);
  if ( *(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(a1 + 8);
LABEL_10:
    __asan_report_load8(a1);
    goto LABEL_11;
  }
  v11 = *(const boost::asio::mutable_buffer **)(a1 + 8);
  if ( target_begin <= v11 )
    v11 = target_begin;
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    goto LABEL_10;
  v7 = *(char **)a1;
  v8 = 0LL;
  while ( 1 )
  {
    target_begin = v11;
    if ( !v11 )
      break;
    a1 = v10 + 96;
    if ( *(_BYTE *)(((v10 + 96) >> 3) + 0x7FFF8000) )
    {
LABEL_11:
      __asan_report_load8(a1);
    }
    else if ( *(_QWORD *)(v10 + 32) != *(_QWORD *)(v10 + 96) )
    {
      goto LABEL_44;
    }
    v13 = (__m128i *)(v10 + 120);
    if ( *(_BYTE *)(((v10 + 120) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13);
LABEL_20:
      __asan_report_load8(v13);
LABEL_21:
      v15 = __asan_report_load8(v13);
      goto LABEL_22;
    }
    if ( *(_QWORD *)(v10 + 56) == *(_QWORD *)(v10 + 120) )
    {
      v13 = (__m128i *)(v10 + 112);
      if ( *(_BYTE *)(((v10 + 112) >> 3) + 0x7FFF8000) )
        goto LABEL_20;
      if ( *(_QWORD *)(v10 + 48) == *(_QWORD *)(v10 + 112) )
        break;
    }
LABEL_44:
    v15 = *(_QWORD *)(v10 + 48);
    v16 = *(_QWORD *)(v10 + 56);
    v13 = (__m128i *)(v16 + 16);
    if ( *(_BYTE *)(((unsigned __int64)(v16 + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_21;
    if ( v15 != *(_QWORD *)(v16 + 16) )
    {
      v17 = *(_QWORD *)(v10 + 48);
      if ( *(_WORD *)((v15 >> 3) + 0x7FFF8000) )
        goto LABEL_29;
      a2 = *(_BYTE **)v15;
      v21 = *(_QWORD *)(v15 + 8);
      goto LABEL_48;
    }
LABEL_22:
    v17 = v16 + 24;
    if ( *(_BYTE *)(((unsigned __int64)(v16 + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
LABEL_28:
      __asan_report_load16(v17);
LABEL_29:
      v21 = __asan_report_load16(v17);
      goto LABEL_30;
    }
    v18 = *(_QWORD *)(v16 + 24);
    v17 = v15;
    if ( *(_WORD *)((v15 >> 3) + 0x7FFF8000) )
      goto LABEL_28;
    v19 = *(_BYTE **)v15;
    v20 = *(_QWORD *)(v15 + 8);
    if ( v18 >= v20 )
      v18 = v20;
    a2 = &v19[v18];
    v21 = v20 - v18;
LABEL_48:
    if ( *(_QWORD *)(v10 + 40) < v21 )
      v21 = *(_QWORD *)(v10 + 40);
LABEL_30:
    v22 = v21;
    if ( (unsigned __int64)target_begin < v21 )
      v22 = (size_t)target_begin;
    if ( v22 )
      memcpy(v7, a2, v22);
    v8 += v22;
    if ( (unsigned __int64)target_begin <= v22 )
      v22 = (size_t)target_begin;
    v7 += v22;
    v11 = (const boost::asio::mutable_buffer *)((char *)target_begin - v22);
    v23 = *(_QWORD *)(v10 + 48);
    *(_QWORD *)(v10 + 48) = v23 + 16;
    v24 = *(_QWORD *)(v10 + 56);
    a2 = (_BYTE *)((unsigned __int64)(v24 + 16) >> 3);
    if ( a2[2147450880] )
    {
      v23 = __asan_report_load8(v24 + 16);
    }
    else if ( v23 != *(_QWORD *)(v24 + 16) )
    {
      v25 = v23;
      if ( *(_WORD *)((v23 >> 3) + 0x7FFF8000) )
        goto LABEL_58;
      v26 = *(_QWORD *)(v23 + 8);
      goto LABEL_40;
    }
    v25 = v24 + 24;
    if ( *(_BYTE *)(((unsigned __int64)(v24 + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v25);
LABEL_57:
      __asan_report_load16(v25);
LABEL_58:
      __asan_report_load16(v25);
      goto LABEL_59;
    }
    v27 = *(_QWORD *)(v24 + 24);
    v25 = v23;
    a2 = (_BYTE *)(v23 >> 3);
    if ( *(_WORD *)((v23 >> 3) + 0x7FFF8000) )
      goto LABEL_57;
    v28 = *(_QWORD *)(v23 + 8);
    if ( v27 >= v28 )
      v27 = v28;
    v26 = v28 - v27;
LABEL_40:
    *(_QWORD *)(v10 + 40) -= v26;
  }
  if ( v30 == (char *)v10 )
  {
    *(_DWORD *)((v10 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8010) = 0;
    return v8;
  }
LABEL_59:
  *(_QWORD *)v10 = 1172321806LL;
  *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v10 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v10 >> 3) + 0x7FFF8010) = -168430091;
  return v8;
};

// Line 2203: range 0000000019BDA6D4-0000000019BDACDC
__int64 __fastcall boost::asio::detail::buffer_copy<boost::asio::mutable_buffer const*,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator>(
        unsigned __int64 a1,
        boost::asio::detail::multiple_buffers a2,
        unsigned __int64 target_begin,
        unsigned __int64 a4,
        std::size_t max_bytes_to_copy)
{
  __int64 v5; // r15
  const boost::asio::mutable_buffer *v10; // rdi
  std::size_t v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  bool v14; // al
  std::size_t v15; // rdi
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v19; // r12
  unsigned __int64 v20; // rdi
  std::size_t v21; // r12
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v22; // rax
  std::size_t v23; // r12
  __int64 v24; // rbp
  std::size_t size; // rbp
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v26; // rax
  std::size_t v27; // rbp
  unsigned __int64 p_it; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  char v32; // dl
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v33; // rax
  unsigned __int64 v34; // [rsp+8h] [rbp-110h]
  _DWORD *v35; // [rsp+10h] [rbp-108h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v36; // [rsp+28h] [rbp-F0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+30h] [rbp-E8h] BYREF
  boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v38; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-C0h]
  char v40[184]; // [rsp+60h] [rbp-B8h] BYREF

  v34 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(128LL);
    if ( v12 )
      v34 = v12;
  }
  *(_QWORD *)v34 = 1102416563LL;
  *(_QWORD *)(v34 + 8) = "1 48 48 16 source_iter:2210";
  *(_QWORD *)(v34 + 16) = boost::asio::detail::buffer_copy<boost::asio::mutable_buffer const*,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator>;
  v35 = (_DWORD *)(v34 >> 3);
  v35[536862720] = -235802127;
  v35[536862721] = 61937;
  v35[536862723] = -202116109;
  if ( *(_BYTE *)((target_begin >> 3) + 0x7FFF8000) )
  {
    v10 = (const boost::asio::mutable_buffer *)target_begin;
    __asan_report_load8(target_begin);
    goto LABEL_15;
  }
  *(_QWORD *)(v34 + 48) = *(_QWORD *)target_begin;
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 8);
  if ( *(_BYTE *)(((target_begin + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(v10);
    goto LABEL_16;
  }
  *(_QWORD *)(v34 + 56) = *(_QWORD *)(target_begin + 8);
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 16);
  if ( *(_BYTE *)(((target_begin + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(v10);
    goto LABEL_17;
  }
  *(_QWORD *)(v34 + 64) = *(_QWORD *)(target_begin + 16);
  *(_BYTE *)(v34 + 80) = 0;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v34 + 72);
  f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(target_begin + 24);
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 32);
  if ( *(char *)(((target_begin + 32) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_17:
    __asan_report_load1(v10);
    goto LABEL_18;
  }
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    *(unsigned __int8 *)(target_begin + 32),
    &f);
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 40);
  if ( *(_BYTE *)(((target_begin + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v10);
    goto LABEL_19;
  }
  *(_QWORD *)(v34 + 88) = *(_QWORD *)(target_begin + 40);
  v10 = (const boost::asio::mutable_buffer *)(a1 + 8);
  if ( *(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(v10);
LABEL_20:
    v13 = a1;
    __asan_report_load8(a1);
    goto LABEL_21;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( max_bytes_to_copy <= v11 )
    v11 = max_bytes_to_copy;
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  max_bytes_to_copy = *(_QWORD *)a1;
  v5 = 0LL;
  while ( 1 )
  {
    a1 = v11;
    if ( !v11 )
      break;
    v13 = a4;
    if ( *(_BYTE *)((a4 >> 3) + 0x7FFF8000) )
    {
LABEL_21:
      __asan_report_load8(v13);
    }
    else if ( *(_QWORD *)(v34 + 48) != *(_QWORD *)a4 )
    {
      v14 = 0;
      goto LABEL_47;
    }
    if ( *(_BYTE *)(((a4 + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(a4 + 40);
    }
    else if ( *(_QWORD *)(v34 + 88) != *(_QWORD *)(a4 + 40) )
    {
      v14 = 0;
      goto LABEL_47;
    }
    v14 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v34 + 64),
            (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(a4 + 16));
LABEL_47:
    if ( v14 )
      break;
    v24 = *(_QWORD *)(v34 + 88);
    if ( boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v34 + 64),
           (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v24 + 40)) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(v24 + 64) >> 3) + 0x7FFF8000) )
      {
        size = *(_QWORD *)(v24 + 64);
        v15 = v34 + 64;
        v26 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v34 + 64));
        if ( size >= v26.size_ )
          size = v26.size_;
        v16.data_ = (char *)v26.data_ + size;
        v16.size_ = v26.size_ - size;
        goto LABEL_53;
      }
      __asan_report_load8(v24 + 64);
    }
    v15 = v34 + 64;
    v16 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v34 + 64));
LABEL_53:
    if ( *(_QWORD *)(v34 + 56) < v16.size_ )
      v16.size_ = *(_QWORD *)(v34 + 56);
    v27 = v16.size_;
    if ( a1 < v16.size_ )
      v27 = a1;
    if ( v27 )
    {
      v15 = max_bytes_to_copy;
      memcpy((void *)max_bytes_to_copy, v16.data_, v27);
    }
    v5 += v27;
    if ( a1 <= v27 )
      v27 = a1;
    max_bytes_to_copy += v27;
    v11 = a1 - v27;
    v38.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v34 + 64);
    v38.it_.i_ = 0;
    p_it = (unsigned __int64)&v38.it_;
    v29 = v34 + 72;
    switch ( *(_BYTE *)(v34 + 80) )
    {
      case 0:
        goto LABEL_37;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v34 + 72);
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_63:
          __asan_report_store8();
          goto LABEL_64;
        }
        p_i = &v38.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v38.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_63;
        v38.it_.buf_ = *(boost::beast::detail::aligned_union_t_7 *)(v34 + 72);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v38.it_.i_;
        if ( *(char *)(((unsigned __int64)&v38.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v38.it_.i_ = 1;
          goto LABEL_37;
        }
LABEL_64:
        p_it = __asan_report_store1(p_i);
LABEL_65:
        v30 = v29;
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v29);
LABEL_70:
          __asan_report_store8();
          goto LABEL_71;
        }
        v30 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_70;
        *(_QWORD *)p_it = *(_QWORD *)(v34 + 72);
        v30 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_37;
        }
LABEL_71:
        p_it = __asan_report_store1(v30);
LABEL_72:
        v31 = v29;
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v29);
LABEL_77:
          __asan_report_store8();
          goto LABEL_78;
        }
        v31 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_77;
        *(_QWORD *)p_it = *(_QWORD *)(v34 + 72);
        v31 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_37;
        }
LABEL_78:
        p_it = __asan_report_store1(v31);
LABEL_79:
        v20 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_85:
          __asan_report_load1(v20);
LABEL_86:
          __asan_report_store1(v20);
LABEL_87:
          __asan_report_load8(v20);
LABEL_88:
          v33 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v38);
          v23 = v33.size_;
          goto LABEL_42;
        }
        v20 = v29;
        v32 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
        if ( v32 <= (char)(v29 & 7) && v32 )
          goto LABEL_85;
        *(_BYTE *)p_it = *(_BYTE *)(v34 + 72);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_86;
        *(_BYTE *)(p_it + 8) = 4;
LABEL_37:
        v39 = *(_QWORD *)(v34 + 88);
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v34 + 64));
        v19 = v39;
        if ( !boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v38,
                (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v39 + 40)) )
          goto LABEL_88;
        v20 = v19 + 64;
        if ( *(_BYTE *)(((unsigned __int64)(v19 + 64) >> 3) + 0x7FFF8000) )
          goto LABEL_87;
        v21 = *(_QWORD *)(v19 + 64);
        v22 = boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v38);
        if ( v21 >= v22.size_ )
          v21 = v22.size_;
        v23 = v22.size_ - v21;
LABEL_42:
        v36.self = &v38.it_;
        boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v38.it_.i_,
          &v36);
        *(_QWORD *)(v34 + 56) -= v23;
        break;
      case 2:
        goto LABEL_65;
      case 3:
        goto LABEL_72;
      case 4:
        goto LABEL_79;
      default:
        __asan_handle_no_return(v15);
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
  v36.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v34 + 72);
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v34 + 80),
    &v36);
  if ( v40 == (char *)v34 )
  {
    *(_QWORD *)((v34 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v34 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v34 = 1172321806LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v34 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};

// Line 2203: range 0000000019BDA016-0000000019BDA6CF
__int64 __fastcall boost::asio::detail::buffer_copy<boost::asio::mutable_buffer const*,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator>(
        unsigned __int64 a1,
        boost::asio::detail::multiple_buffers a2,
        unsigned __int64 target_begin,
        unsigned __int64 a4,
        std::size_t max_bytes_to_copy)
{
  __int64 v5; // r15
  const boost::asio::mutable_buffer *v10; // rdi
  std::size_t v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  bool v14; // al
  std::size_t v15; // rdi
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v16; // rax
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_i; // rdi
  __int64 v19; // r12
  unsigned __int64 v20; // rdi
  std::size_t v21; // r12
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v22; // rax
  std::size_t v23; // r12
  __int64 v24; // rbp
  std::size_t size; // rbp
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v26; // rax
  std::size_t v27; // rbp
  unsigned __int64 p_it; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdi
  char v34; // cl
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::reference v35; // rax
  unsigned __int64 v36; // [rsp+8h] [rbp-110h]
  _DWORD *v37; // [rsp+10h] [rbp-108h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy v38; // [rsp+28h] [rbp-F0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+30h] [rbp-E8h] BYREF
  boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator v40; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-C0h]
  char v42[184]; // [rsp+60h] [rbp-B8h] BYREF

  v36 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_1(128LL);
    if ( v12 )
      v36 = v12;
  }
  *(_QWORD *)v36 = 1102416563LL;
  *(_QWORD *)(v36 + 8) = "1 48 48 16 source_iter:2210";
  *(_QWORD *)(v36 + 16) = boost::asio::detail::buffer_copy<boost::asio::mutable_buffer const*,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator>;
  v37 = (_DWORD *)(v36 >> 3);
  v37[536862720] = -235802127;
  v37[536862721] = 61937;
  v37[536862723] = -202116109;
  if ( *(_BYTE *)((target_begin >> 3) + 0x7FFF8000) )
  {
    v10 = (const boost::asio::mutable_buffer *)target_begin;
    __asan_report_load8(target_begin);
    goto LABEL_15;
  }
  *(_QWORD *)(v36 + 48) = *(_QWORD *)target_begin;
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 8);
  if ( *(_BYTE *)(((target_begin + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(v10);
    goto LABEL_16;
  }
  *(_QWORD *)(v36 + 56) = *(_QWORD *)(target_begin + 8);
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 16);
  if ( *(_BYTE *)(((target_begin + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(v10);
    goto LABEL_17;
  }
  *(_QWORD *)(v36 + 64) = *(_QWORD *)(target_begin + 16);
  *(_BYTE *)(v36 + 80) = 0;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v36 + 72);
  f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(target_begin + 24);
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 32);
  if ( *(char *)(((target_begin + 32) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_17:
    __asan_report_load1(v10);
    goto LABEL_18;
  }
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    *(unsigned __int8 *)(target_begin + 32),
    &f);
  v10 = (const boost::asio::mutable_buffer *)(target_begin + 40);
  if ( *(_BYTE *)(((target_begin + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v10);
    goto LABEL_19;
  }
  *(_QWORD *)(v36 + 88) = *(_QWORD *)(target_begin + 40);
  v10 = (const boost::asio::mutable_buffer *)(a1 + 8);
  if ( *(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(v10);
LABEL_20:
    v13 = a1;
    __asan_report_load8(a1);
    goto LABEL_21;
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( max_bytes_to_copy <= v11 )
    v11 = max_bytes_to_copy;
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
    goto LABEL_20;
  max_bytes_to_copy = *(_QWORD *)a1;
  v5 = 0LL;
  while ( 1 )
  {
    a1 = v11;
    if ( !v11 )
      break;
    v13 = a4;
    if ( *(_BYTE *)((a4 >> 3) + 0x7FFF8000) )
    {
LABEL_21:
      __asan_report_load8(v13);
    }
    else if ( *(_QWORD *)(v36 + 48) != *(_QWORD *)a4 )
    {
      v14 = 0;
      goto LABEL_47;
    }
    if ( *(_BYTE *)(((a4 + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(a4 + 40);
    }
    else if ( *(_QWORD *)(v36 + 88) != *(_QWORD *)(a4 + 40) )
    {
      v14 = 0;
      goto LABEL_47;
    }
    v14 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
            (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v36 + 64),
            (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(a4 + 16));
LABEL_47:
    if ( v14 )
      break;
    v24 = *(_QWORD *)(v36 + 88);
    if ( boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v36 + 64),
           (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v24 + 64)) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(v24 + 88) >> 3) + 0x7FFF8000) )
      {
        size = *(_QWORD *)(v24 + 88);
        v15 = v36 + 64;
        v26 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v36 + 64));
        if ( size >= v26.size_ )
          size = v26.size_;
        v16.data_ = (char *)v26.data_ + size;
        v16.size_ = v26.size_ - size;
        goto LABEL_53;
      }
      __asan_report_load8(v24 + 88);
    }
    v15 = v36 + 64;
    v16 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*((const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v36 + 64));
LABEL_53:
    if ( *(_QWORD *)(v36 + 56) < v16.size_ )
      v16.size_ = *(_QWORD *)(v36 + 56);
    v27 = v16.size_;
    if ( a1 < v16.size_ )
      v27 = a1;
    if ( v27 )
    {
      v15 = max_bytes_to_copy;
      memcpy((void *)max_bytes_to_copy, v16.data_, v27);
    }
    v5 += v27;
    if ( a1 <= v27 )
      v27 = a1;
    max_bytes_to_copy += v27;
    v11 = a1 - v27;
    v40.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v36 + 64);
    v40.it_.i_ = 0;
    p_it = (unsigned __int64)&v40.it_;
    v29 = v36 + 72;
    switch ( *(_BYTE *)(v36 + 80) )
    {
      case 0:
        goto LABEL_37;
      case 1:
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v36 + 72);
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_i);
LABEL_63:
          __asan_report_store8();
          goto LABEL_64;
        }
        p_i = &v40.it_;
        if ( *(_BYTE *)(((unsigned __int64)&v40.it_ >> 3) + 0x7FFF8000) )
          goto LABEL_63;
        v40.it_.buf_ = *(boost::beast::detail::aligned_union_t_4 *)(v36 + 72);
        p_i = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&v40.it_.i_;
        if ( *(char *)(((unsigned __int64)&v40.it_.i_ >> 3) + 0x7FFF8000) >= 0 )
        {
          v40.it_.i_ = 1;
          goto LABEL_37;
        }
LABEL_64:
        p_it = __asan_report_store1(p_i);
LABEL_65:
        v30 = v29;
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v29);
LABEL_70:
          __asan_report_store8();
          goto LABEL_71;
        }
        v30 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_70;
        *(_QWORD *)p_it = *(_QWORD *)(v36 + 72);
        v30 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 2;
          goto LABEL_37;
        }
LABEL_71:
        p_it = __asan_report_store1(v30);
LABEL_72:
        v31 = v29;
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v29);
LABEL_77:
          __asan_report_store8();
          goto LABEL_78;
        }
        v31 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_77;
        *(_QWORD *)p_it = *(_QWORD *)(v36 + 72);
        v31 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 3;
          goto LABEL_37;
        }
LABEL_78:
        p_it = __asan_report_store1(v31);
LABEL_79:
        v32 = v29;
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v29);
LABEL_84:
          __asan_report_store8();
          goto LABEL_85;
        }
        v32 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_84;
        *(_QWORD *)p_it = *(_QWORD *)(v36 + 72);
        v32 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 4;
          goto LABEL_37;
        }
LABEL_85:
        p_it = __asan_report_store1(v32);
LABEL_86:
        v33 = v29;
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v29);
LABEL_91:
          __asan_report_store8();
          goto LABEL_92;
        }
        v33 = p_it;
        if ( *(_BYTE *)((p_it >> 3) + 0x7FFF8000) )
          goto LABEL_91;
        *(_QWORD *)p_it = *(_QWORD *)(v36 + 72);
        v33 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) >= 0 )
        {
          *(_BYTE *)(p_it + 8) = 5;
          goto LABEL_37;
        }
LABEL_92:
        p_it = __asan_report_store1(v33);
LABEL_93:
        v20 = p_it;
        if ( *(char *)((p_it >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_store1(p_it);
LABEL_99:
          __asan_report_load1(v20);
LABEL_100:
          __asan_report_store1(v20);
LABEL_101:
          __asan_report_load8(v20);
LABEL_102:
          v35 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v40);
          v23 = v35.size_;
          goto LABEL_42;
        }
        v20 = v29;
        v34 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
        if ( v34 <= (char)(v29 & 7) && v34 )
          goto LABEL_99;
        *(_BYTE *)p_it = *(_BYTE *)(v36 + 72);
        v20 = p_it + 8;
        if ( *(char *)(((p_it + 8) >> 3) + 0x7FFF8000) < 0 )
          goto LABEL_100;
        *(_BYTE *)(p_it + 8) = 6;
LABEL_37:
        v41 = *(_QWORD *)(v36 + 88);
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v36 + 64));
        v19 = v41;
        if ( !boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
                &v40,
                (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v41 + 64)) )
          goto LABEL_102;
        v20 = v19 + 88;
        if ( *(_BYTE *)(((unsigned __int64)(v19 + 88) >> 3) + 0x7FFF8000) )
          goto LABEL_101;
        v21 = *(_QWORD *)(v19 + 88);
        v22 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator*(&v40);
        if ( v21 >= v22.size_ )
          v21 = v22.size_;
        v23 = v22.size_ - v21;
LABEL_42:
        v38.self = &v40.it_;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v40.it_.i_,
          &v38);
        *(_QWORD *)(v36 + 56) -= v23;
        break;
      case 2:
        goto LABEL_65;
      case 3:
        goto LABEL_72;
      case 4:
        goto LABEL_79;
      case 5:
        goto LABEL_86;
      case 6:
        goto LABEL_93;
      default:
        __asan_handle_no_return(v15);
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
  v38.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v36 + 72);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v36 + 80),
    &v38);
  if ( v42 == (char *)v36 )
  {
    *(_QWORD *)((v36 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v36 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v36 = 1172321806LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v36 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};
