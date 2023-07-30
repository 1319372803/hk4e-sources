// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/flat_stream.hpp

// Line 41: range 0000000019BF8115-0000000019BF8609
boost::beast::detail::flat_stream_base::flatten_result __fastcall boost::beast::detail::flat_stream_base::flatten<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *buffers,
        std::size_t limit)
{
  unsigned __int64 v2; // r13
  _DWORD *v3; // r12
  std::size_t size; // r14
  __int64 v5; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator::reference v6; // rax
  std::size_t v8; // rdx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v9; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v10; // rax
  bool v11; // [rsp+Fh] [rbp-1F9h]
  bool v12; // [rsp+18h] [rbp-1F0h]
  std::size_t v13; // [rsp+20h] [rbp-1E8h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+38h] [rbp-1D0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v15; // [rsp+40h] [rbp-1C8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v16; // [rsp+50h] [rbp-1B8h] BYREF
  char v17[408]; // [rsp+70h] [rbp-198h] BYREF
  boost::beast::detail::flat_stream_base::flatten_result result; // 0:rax.9

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 48 8 first:45 112 48 7 last:46 192 48 5 it:52 272 48 7 prev:53";
  *(_QWORD *)(v2 + 16) = boost::beast::detail::flat_stream_base::flatten<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862725] = -218959118;
  v3[536862727] = -219021312;
  v3[536862728] = 62194;
  v3[536862730] = -202116109;
  size = 0LL;
  v12 = 0;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
  }
  else
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
      (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v2 + 32),
      buffers->buffers_);
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
      (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v2 + 112),
      buffers->buffers_);
    if ( *(_QWORD *)(v2 + 32) != *(_QWORD *)(v2 + 112) )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  v11 = *(_QWORD *)(v2 + 72) == *(_QWORD *)(v2 + 152)
     && boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
          (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48),
          (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v2 + 128));
LABEL_5:
  if ( !v11 )
  {
    v6 = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator*((const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)(v2 + 32));
    size = v6.size_;
    if ( v6.size_ < limit )
    {
      *(_QWORD *)(v2 + 192) = *(_QWORD *)(v2 + 32);
      *(_QWORD *)(v2 + 200) = *(_QWORD *)(v2 + 40);
      *(_QWORD *)(v2 + 208) = *(_QWORD *)(v2 + 48);
      *(_BYTE *)(v2 + 224) = 0;
      v15.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
      v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
      boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        *(unsigned __int8 *)(v2 + 64),
        &v15);
      *(_QWORD *)(v2 + 232) = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(v2 + 272) = *(_QWORD *)(v2 + 32);
      *(_QWORD *)(v2 + 280) = *(_QWORD *)(v2 + 40);
      *(_QWORD *)(v2 + 288) = *(_QWORD *)(v2 + 48);
      *(_BYTE *)(v2 + 304) = 0;
      v15.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
      v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
      boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        *(unsigned __int8 *)(v2 + 64),
        &v15);
      for ( *(_QWORD *)(v2 + 312) = *(_QWORD *)(v2 + 72); ; *(_QWORD *)(v2 + 312) = *(_QWORD *)(v2 + 232) )
      {
        v16.it_.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v2 + 208);
        v16.it_.it_.i_ = 0;
        v15.self = &v16.it_.it_;
        v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
        boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v2 + 224),
          &v15);
        v16.b_ = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v2 + 232);
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 208));
        v9 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v16);
        v13 = v9.size_;
        f.self = &v16.it_.it_;
        boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v16.it_.it_.i_,
          &f);
        *(_QWORD *)(v2 + 200) -= v13;
        if ( *(_QWORD *)(v2 + 192) == *(_QWORD *)(v2 + 112)
          && *(_QWORD *)(v2 + 232) == *(_QWORD *)(v2 + 152)
          && boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 208),
               (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v2 + 128)) )
        {
          break;
        }
        v10 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const)(v2 + 208));
        if ( *(_QWORD *)(v2 + 200) < v10.size_ )
          v10.size_ = *(_QWORD *)(v2 + 200);
        v8 = size + v10.size_;
        if ( v8 > limit )
          break;
        size = v8;
        *(_QWORD *)(v2 + 272) = *(_QWORD *)(v2 + 192);
        *(_QWORD *)(v2 + 280) = *(_QWORD *)(v2 + 200);
        *(_QWORD *)(v2 + 288) = *(_QWORD *)(v2 + 208);
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
        boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v2 + 304),
          &f);
        *(_BYTE *)(v2 + 304) = 0;
        v15.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
        v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
        boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v2 + 224),
          &v15);
      }
      v12 = !boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
               (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)(v2 + 272),
               (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v2 + 32));
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
      boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        *(unsigned __int8 *)(v2 + 304),
        &f);
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
      boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        *(unsigned __int8 *)(v2 + 224),
        &f);
    }
  }
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 136);
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v2 + 144),
    &f);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v2 + 64),
    &f);
  result.size = size;
  result.flatten = v12;
  if ( v17 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 41: range 0000000019BF556B-0000000019BF5A88
boost::beast::detail::flat_stream_base::flatten_result __fastcall boost::beast::detail::flat_stream_base::flatten<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *buffers,
        std::size_t limit)
{
  const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *v2; // r15
  unsigned __int64 v3; // r13
  _DWORD *v4; // rbp
  std::size_t size; // r14
  bool v6; // r15
  __int64 v7; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator::reference v8; // rax
  unsigned __int64 v9; // rax
  bool v10; // al
  std::size_t v11; // rdx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v12; // rax
  bool v13; // [rsp+10h] [rbp-1C8h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy f; // [rsp+30h] [rbp-1A8h] BYREF
  char v15[408]; // [rsp+40h] [rbp-198h] BYREF
  boost::beast::detail::flat_stream_base::flatten_result result; // 0:rax.9

  v2 = buffers;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(352LL);
    if ( v7 )
      v3 = v7;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 48 8 first:45 112 48 7 last:46 192 48 5 it:52 272 48 7 prev:53";
  *(_QWORD *)(v3 + 16) = boost::beast::detail::flat_stream_base::flatten<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -218959118;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862730] = -202116109;
  size = 0LL;
  v13 = 0;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
LABEL_13:
    if ( *(_QWORD *)(v3 + 72) == *(_QWORD *)(v3 + 152) )
    {
      buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v3 + 48);
      v6 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
             (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v3 + 48),
             (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 128));
    }
    else
    {
      v6 = 0;
    }
    goto LABEL_5;
  }
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 32),
    buffers->buffers_);
  buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v3 + 112);
  boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
    (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 112),
    v2->buffers_);
  if ( *(_QWORD *)(v3 + 32) == *(_QWORD *)(v3 + 112) )
    goto LABEL_13;
  v6 = 0;
LABEL_5:
  if ( v6 )
    goto LABEL_6;
  buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v3 + 32);
  v8 = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator*((const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)(v3 + 32));
  size = v8.size_;
  if ( v8.size_ >= limit )
    goto LABEL_6;
  *(_QWORD *)(v3 + 192) = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 200) = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(v3 + 208) = *(_QWORD *)(v3 + 48);
  *(_BYTE *)(v3 + 224) = 0;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 216);
  f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
  boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    *(unsigned __int8 *)(v3 + 64),
    &f);
  *(_QWORD *)(v3 + 232) = *(_QWORD *)(v3 + 72);
  *(_QWORD *)(v3 + 272) = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 280) = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(v3 + 288) = *(_QWORD *)(v3 + 48);
  *(_BYTE *)(v3 + 304) = 0;
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 296);
  f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 56);
  boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    *(unsigned __int8 *)(v3 + 64),
    &f);
  for ( *(_QWORD *)(v3 + 312) = *(_QWORD *)(v3 + 72); ; *(_QWORD *)(v3 + 312) = *(_QWORD *)(v3 + 232) )
  {
    v9 = (unsigned __int64)boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator++((boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)(v3 + 192));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      v9 = __asan_report_load8(v9);
    }
    else if ( *(_QWORD *)v9 != *(_QWORD *)(v3 + 112) )
    {
      v10 = 0;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((v9 + 40) >> 3) + 0x7FFF8000) )
    {
      v9 = __asan_report_load8(v9 + 40);
LABEL_23:
      v10 = boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
              (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v9 + 16),
              (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v3 + 128));
      goto LABEL_30;
    }
    if ( *(_QWORD *)(v9 + 40) == *(_QWORD *)(v3 + 152) )
      goto LABEL_23;
    v10 = 0;
LABEL_30:
    if ( v10 )
      break;
    v12 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const)(v3 + 208));
    if ( *(_QWORD *)(v3 + 200) < v12.size_ )
      v12.size_ = *(_QWORD *)(v3 + 200);
    v11 = size + v12.size_;
    if ( v11 > limit )
      break;
    size = v11;
    *(_QWORD *)(v3 + 272) = *(_QWORD *)(v3 + 192);
    *(_QWORD *)(v3 + 280) = *(_QWORD *)(v3 + 200);
    *(_QWORD *)(v3 + 288) = *(_QWORD *)(v3 + 208);
    if ( *(_BYTE *)(v3 + 304) > 9u )
    {
      __asan_handle_no_return(v3 + 208);
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
    *(_BYTE *)(v3 + 304) = 0;
    f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 296);
    f.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v3 + 216);
    boost::mp11::mp_with_index<10ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
      *(unsigned __int8 *)(v3 + 224),
      &f);
  }
  buffers = (const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v3 + 272);
  v13 = !boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
           (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)(v3 + 272),
           (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v3 + 32));
  if ( *(_BYTE *)(v3 + 304) > 9u )
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
  if ( *(_BYTE *)(v3 + 224) > 9u )
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
LABEL_6:
  result.size = size;
  result.flatten = v13;
  if ( *(_BYTE *)(v3 + 144) > 9u )
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
  if ( *(_BYTE *)(v3 + 64) > 9u )
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
  if ( v15 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 41: range 0000000019BF3955-0000000019BF3E49
boost::beast::detail::flat_stream_base::flatten_result __fastcall boost::beast::detail::flat_stream_base::flatten<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *buffers,
        std::size_t limit)
{
  unsigned __int64 v2; // r13
  _DWORD *v3; // r12
  std::size_t size; // r14
  __int64 v5; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator::reference v6; // rax
  std::size_t v8; // rdx
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v9; // rax
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator::reference v10; // rax
  bool v11; // [rsp+Fh] [rbp-1F9h]
  bool v12; // [rsp+18h] [rbp-1F0h]
  std::size_t v13; // [rsp+20h] [rbp-1E8h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+38h] [rbp-1D0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v15; // [rsp+40h] [rbp-1C8h] BYREF
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator v16; // [rsp+50h] [rbp-1B8h] BYREF
  char v17[408]; // [rsp+70h] [rbp-198h] BYREF
  boost::beast::detail::flat_stream_base::flatten_result result; // 0:rax.9

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 48 8 first:45 112 48 7 last:46 192 48 5 it:52 272 48 7 prev:53";
  *(_QWORD *)(v2 + 16) = boost::beast::detail::flat_stream_base::flatten<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862725] = -218959118;
  v3[536862727] = -219021312;
  v3[536862728] = 62194;
  v3[536862730] = -202116109;
  size = 0LL;
  v12 = 0;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
  }
  else
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::begin(
      (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v2 + 32),
      buffers->buffers_);
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::end(
      (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v2 + 112),
      buffers->buffers_);
    if ( *(_QWORD *)(v2 + 32) != *(_QWORD *)(v2 + 112) )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  v11 = *(_QWORD *)(v2 + 72) == *(_QWORD *)(v2 + 152)
     && boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
          (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48),
          (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v2 + 128));
LABEL_5:
  if ( !v11 )
  {
    v6 = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator*((const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)(v2 + 32));
    size = v6.size_;
    if ( v6.size_ < limit )
    {
      *(_QWORD *)(v2 + 192) = *(_QWORD *)(v2 + 32);
      *(_QWORD *)(v2 + 200) = *(_QWORD *)(v2 + 40);
      *(_QWORD *)(v2 + 208) = *(_QWORD *)(v2 + 48);
      *(_BYTE *)(v2 + 224) = 0;
      v15.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
      v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        *(unsigned __int8 *)(v2 + 64),
        &v15);
      *(_QWORD *)(v2 + 232) = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(v2 + 272) = *(_QWORD *)(v2 + 32);
      *(_QWORD *)(v2 + 280) = *(_QWORD *)(v2 + 40);
      *(_QWORD *)(v2 + 288) = *(_QWORD *)(v2 + 48);
      *(_BYTE *)(v2 + 304) = 0;
      v15.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
      v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        *(unsigned __int8 *)(v2 + 64),
        &v15);
      for ( *(_QWORD *)(v2 + 312) = *(_QWORD *)(v2 + 72); ; *(_QWORD *)(v2 + 312) = *(_QWORD *)(v2 + 232) )
      {
        v16.it_.bn_ = *(const boost::beast::detail::tuple<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> **)(v2 + 208);
        v16.it_.it_.i_ = 0;
        v15.self = &v16.it_.it_;
        v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v2 + 224),
          &v15);
        v16.b_ = *(const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > **)(v2 + 232);
        boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 208));
        v9 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*(&v16);
        v13 = v9.size_;
        f.self = &v16.it_.it_;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v16.it_.it_.i_,
          &f);
        *(_QWORD *)(v2 + 200) -= v13;
        if ( *(_QWORD *)(v2 + 192) == *(_QWORD *)(v2 + 112)
          && *(_QWORD *)(v2 + 232) == *(_QWORD *)(v2 + 152)
          && boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 208),
               (const boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>::const_iterator *)(v2 + 128)) )
        {
          break;
        }
        v10 = boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >::const_iterator *const)(v2 + 208));
        if ( *(_QWORD *)(v2 + 200) < v10.size_ )
          v10.size_ = *(_QWORD *)(v2 + 200);
        v8 = size + v10.size_;
        if ( v8 > limit )
          break;
        size = v8;
        *(_QWORD *)(v2 + 272) = *(_QWORD *)(v2 + 192);
        *(_QWORD *)(v2 + 280) = *(_QWORD *)(v2 + 200);
        *(_QWORD *)(v2 + 288) = *(_QWORD *)(v2 + 208);
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v2 + 304),
          &f);
        *(_BYTE *)(v2 + 304) = 0;
        v15.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
        v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v2 + 224),
          &v15);
      }
      v12 = !boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>::const_iterator::operator==(
               (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *const)(v2 + 272),
               (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>::const_iterator *)(v2 + 32));
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        *(unsigned __int8 *)(v2 + 304),
        &f);
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        *(unsigned __int8 *)(v2 + 224),
        &f);
    }
  }
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 136);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v2 + 144),
    &f);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v2 + 64),
    &f);
  result.size = size;
  result.flatten = v12;
  if ( v17 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 41: range 0000000019BF079B-0000000019BF0C8F
boost::beast::detail::flat_stream_base::flatten_result __fastcall boost::beast::detail::flat_stream_base::flatten<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>(
        const boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&> > *buffers,
        std::size_t limit)
{
  unsigned __int64 v2; // r13
  _DWORD *v3; // r12
  std::size_t size; // r14
  __int64 v5; // rax
  boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator::reference v6; // rax
  std::size_t v8; // rdx
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator::reference v9; // rax
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator::reference v10; // rax
  bool v11; // [rsp+Fh] [rbp-1F9h]
  bool v12; // [rsp+18h] [rbp-1F0h]
  std::size_t v13; // [rsp+20h] [rbp-1E8h]
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+38h] [rbp-1D0h] BYREF
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy v15; // [rsp+40h] [rbp-1C8h] BYREF
  boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator v16; // [rsp+50h] [rbp-1B8h] BYREF
  char v17[408]; // [rsp+70h] [rbp-198h] BYREF
  boost::beast::detail::flat_stream_base::flatten_result result; // 0:rax.9

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 48 8 first:45 112 48 7 last:46 192 48 5 it:52 272 48 7 prev:53";
  *(_QWORD *)(v2 + 16) = boost::beast::detail::flat_stream_base::flatten<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>>>;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862725] = -218959118;
  v3[536862727] = -219021312;
  v3[536862728] = 62194;
  v3[536862730] = -202116109;
  size = 0LL;
  v12 = 0;
  if ( *(_BYTE *)(((unsigned __int64)buffers >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(buffers);
  }
  else
  {
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::begin(
      (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)(v2 + 32),
      buffers->buffers_);
    boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::end(
      (boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)(v2 + 112),
      buffers->buffers_);
    if ( *(_QWORD *)(v2 + 32) != *(_QWORD *)(v2 + 112) )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  v11 = *(_QWORD *)(v2 + 72) == *(_QWORD *)(v2 + 152)
     && boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
          (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 48),
          (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v2 + 128));
LABEL_5:
  if ( !v11 )
  {
    v6 = boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::const_iterator::operator*((const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *const)(v2 + 32));
    size = v6.size_;
    if ( v6.size_ < limit )
    {
      *(_QWORD *)(v2 + 192) = *(_QWORD *)(v2 + 32);
      *(_QWORD *)(v2 + 200) = *(_QWORD *)(v2 + 40);
      *(_QWORD *)(v2 + 208) = *(_QWORD *)(v2 + 48);
      *(_BYTE *)(v2 + 224) = 0;
      v15.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
      v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        *(unsigned __int8 *)(v2 + 64),
        &v15);
      *(_QWORD *)(v2 + 232) = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(v2 + 272) = *(_QWORD *)(v2 + 32);
      *(_QWORD *)(v2 + 280) = *(_QWORD *)(v2 + 40);
      *(_QWORD *)(v2 + 288) = *(_QWORD *)(v2 + 48);
      *(_BYTE *)(v2 + 304) = 0;
      v15.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
      v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
        *(unsigned __int8 *)(v2 + 64),
        &v15);
      for ( *(_QWORD *)(v2 + 312) = *(_QWORD *)(v2 + 72); ; *(_QWORD *)(v2 + 312) = *(_QWORD *)(v2 + 232) )
      {
        v16.it_.bn_ = *(const boost::beast::detail::tuple<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> **)(v2 + 208);
        v16.it_.it_.i_ = 0;
        v15.self = &v16.it_.it_;
        v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v2 + 224),
          &v15);
        v16.b_ = *(const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > > **)(v2 + 232);
        boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator++((boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 208));
        v9 = boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::const_iterator::operator*(&v16);
        v13 = v9.size_;
        f.self = &v16.it_.it_;
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          v16.it_.it_.i_,
          &f);
        *(_QWORD *)(v2 + 200) -= v13;
        if ( *(_QWORD *)(v2 + 192) == *(_QWORD *)(v2 + 112)
          && *(_QWORD *)(v2 + 232) == *(_QWORD *)(v2 + 152)
          && boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator::operator==(
               (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *const)(v2 + 208),
               (const boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator *)(v2 + 128)) )
        {
          break;
        }
        v10 = boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>::const_iterator::operator*((const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >::const_iterator *const)(v2 + 208));
        if ( *(_QWORD *)(v2 + 200) < v10.size_ )
          v10.size_ = *(_QWORD *)(v2 + 200);
        v8 = size + v10.size_;
        if ( v8 > limit )
          break;
        size = v8;
        *(_QWORD *)(v2 + 272) = *(_QWORD *)(v2 + 192);
        *(_QWORD *)(v2 + 280) = *(_QWORD *)(v2 + 200);
        *(_QWORD *)(v2 + 288) = *(_QWORD *)(v2 + 208);
        f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          *(unsigned __int8 *)(v2 + 304),
          &f);
        *(_BYTE *)(v2 + 304) = 0;
        v15.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
        v15.other = (const boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
          *(unsigned __int8 *)(v2 + 224),
          &v15);
      }
      v12 = !boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>::const_iterator::operator==(
               (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *const)(v2 + 272),
               (const boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>::const_iterator *)(v2 + 32));
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 296);
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        *(unsigned __int8 *)(v2 + 304),
        &f);
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 216);
      boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
        *(unsigned __int8 *)(v2 + 224),
        &f);
    }
  }
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 136);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v2 + 144),
    &f);
  f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)(v2 + 56);
  boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
    *(unsigned __int8 *)(v2 + 64),
    &f);
  result.size = size;
  result.flatten = v12;
  if ( v17 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};
