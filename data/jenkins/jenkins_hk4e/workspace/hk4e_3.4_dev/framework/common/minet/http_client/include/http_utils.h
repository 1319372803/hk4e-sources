// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/http_client/include/http_utils.h

// Line 51: range 0000000019D1B34A-0000000019D1BB53
int32_t __fastcall common::minet::http_client::HttpUtils::serializeMessage<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>(
        const boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *m,
        std::string *msg_str)
{
  unsigned __int64 v2; // r13
  char *v3; // rbx
  _DWORD *v4; // r12
  char *v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int32_t v12; // r14d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  void *p_v; // rsi
  char *v18; // rdi
  char *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  char *v22; // rax
  struct _Unwind_Exception *v24; // rbp
  boost::beast::detail::variant<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >::destroy f; // [rsp+18h] [rbp-470h] BYREF
  common::minet::http_client::HttpUtils::serializeMessage<false,boost::beast::http::basic_string_body<char>,boost::beast::http::basic_fields<std::allocator<char> > >::<lambda(boost::system::error_code&, const auto:1&)> visit; // [rsp+20h] [rbp-468h] BYREF
  std::string v; // [rsp+30h] [rbp-458h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-438h] BYREF
  char v30[1048]; // [rsp+70h] [rbp-418h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_4(992LL);
    if ( v11 )
      v2 = v11;
  }
  v3 = (char *)(v2 + 992);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 5 ec:53 80 376 5 os:55 528 392 5 sr:54";
  *(_QWORD *)(v2 + 16) = common::minet::http_client::HttpUtils::serializeMessage<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862734] = -218959360;
  v4[536862735] = -218959118;
  v4[536862736] = 62194;
  v4[536862748] = -218103808;
  v4[536862749] = -202116109;
  v4[536862750] = -202116109;
  *(_DWORD *)(v2 + 48) = 0;
  *(_BYTE *)(v2 + 52) = 0;
  *(_QWORD *)(v2 + 56) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::serializer(
    (boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v2 + 528),
    (boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >::value_type *)m);
  std::ios_base::ios_base((std::ios_base *)(v2 + 192));
  *(_QWORD *)(v2 + 192) = (char *)&`vtable for'std::ios + 16;
  *(_QWORD *)(v2 + 408) = 0LL;
  *(_BYTE *)(v2 + 416) = 0;
  *(_BYTE *)(v2 + 417) = 0;
  *(_QWORD *)(v2 + 424) = 0LL;
  *(_QWORD *)(v2 + 432) = 0LL;
  *(_QWORD *)(v2 + 440) = 0LL;
  *(_QWORD *)(v2 + 448) = 0LL;
  v6 = (char *)&`VTT for'std::ostringstream + 8;
  if ( *(_BYTE *)((((unsigned __int64)&`VTT for'std::ostringstream + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v6);
    goto LABEL_11;
  }
  v7 = *((_QWORD *)&`VTT for'std::ostringstream + 1);
  *(_QWORD *)(v2 + 80) = v7;
  v6 = (char *)(v7 - 24);
  if ( *(_BYTE *)(((unsigned __int64)(v7 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    v9 = (char *)__asan_report_load8(v6);
    goto LABEL_12;
  }
  v8 = (unsigned __int64)&v3[*(_QWORD *)(v7 - 24) - 912];
  v9 = (char *)&`VTT for'std::ostringstream + 16;
  if ( *(_BYTE *)((((unsigned __int64)&`VTT for'std::ostringstream + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    v8 = (unsigned __int64)v9;
    __asan_report_load8(v9);
    goto LABEL_13;
  }
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8(v8, m);
    goto LABEL_14;
  }
  *(_QWORD *)v8 = *((_QWORD *)&`VTT for'std::ostringstream + 2);
  v10 = *(_QWORD *)(v2 + 80);
  v8 = v10 - 24;
  if ( *(_BYTE *)(((unsigned __int64)(v10 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(v8);
    goto LABEL_15;
  }
  std::ios::init(&v3[*(_QWORD *)(v10 - 24) - 912], 0LL);
LABEL_15:
  *(_QWORD *)(v2 + 80) = (char *)&`vtable for'std::ostringstream + 24;
  *(_QWORD *)(v2 + 192) = (char *)&`vtable for'std::ostringstream + 64;
  *(_QWORD *)(v2 + 88) = (char *)&`vtable for'std::streambuf + 16;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  std::locale::locale((std::locale *)(v2 + 144));
  *(_QWORD *)(v2 + 88) = (char *)&`vtable for'std::stringbuf + 16;
  *(_DWORD *)(v2 + 152) = 16;
  *(_QWORD *)(v2 + 160) = v2 + 176;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_BYTE *)(v2 + 176) = 0;
  std::ios::init(v2 + 192, v2 + 88);
  do
  {
    visit.__sr = (boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v2 + 528);
    visit.__os = (std::ostringstream *)(v2 + 80);
    ZN5boost5beast4http10serializerILb0ENS1_17basic_string_bodyIcSt11char_traitsIcESaIcEEENS1_12basic_fieldsIS6_EEE4nextIZN6common5minet11http_client9HttpUtils16serializeMessageILb0ES7_S9_EEiRKNS1_7messageIXT_ET0_T1_EERNSt7__cxx1112basic_stringIcS5_S6_EEEUlRNS_6system10error_codeERKT_E_EEvST_OSU_(
      (boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v2 + 528),
      (boost::beast::error_code *)(v2 + 48),
      &visit);
    v12 = *(_DWORD *)(v2 + 48);
  }
  while ( !v12 && *(_DWORD *)(v2 + 912) != 120 );
  if ( !v12 )
  {
    v29.log_ = (common::milog::MiLog *)&v29.ostr_ptr_._M_refcount;
    v29.ostr_ptr_._M_ptr = 0LL;
    LOBYTE(v29.ostr_ptr_._M_refcount._M_pi) = 0;
    v13 = *(_QWORD *)(v2 + 128);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v2 + 112);
      if ( v13 <= v14 )
        std::string::_M_replace(
          &v29,
          0LL,
          v29.ostr_ptr_._M_ptr,
          *(const char **)(v2 + 120),
          v14 - *(_QWORD *)(v2 + 120));
      else
        std::string::_M_replace(&v29, 0LL, 0LL, *(const char **)(v2 + 120), v13 - *(_QWORD *)(v2 + 120));
    }
    else
    {
      std::string::_M_assign(&v29, v2 + 160);
    }
    p_v = &v29;
    std::string::operator=(msg_str, &v29);
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v29.log_ != &v29.ostr_ptr_._M_refcount )
      operator delete(v29.log_);
    goto LABEL_35;
  }
  common::milog::MiLogStream::MiLogStream(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./include/http_utils.h",
    "serializeMessage",
    68);
  v15 = *(_QWORD *)(v2 + 56);
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
    v16 = *(_QWORD *)(v2 + 56);
    __asan_report_load8(v16);
    goto LABEL_27;
  }
  v16 = *(_QWORD *)v15 + 32LL;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(v16);
    goto LABEL_28;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 32LL))(
    &v,
    v15,
    *(unsigned int *)(v2 + 48));
LABEL_28:
  p_v = &v;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v29.ostr_, &v);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v._M_dataplus._M_p != &v._anon_0 )
    operator delete(v._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v29);
  v12 = -1;
LABEL_35:
  *(_QWORD *)(v2 + 80) = (char *)&`vtable for'std::ostringstream + 24;
  *(_QWORD *)(v2 + 192) = (char *)&`vtable for'std::ostringstream + 64;
  *(_QWORD *)(v2 + 88) = (char *)&`vtable for'std::stringbuf + 16;
  v18 = *(char **)(v2 + 160);
  if ( v18 != (char *)(v2 + 176) )
    operator delete(v18);
  *(_QWORD *)(v2 + 88) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)(v2 + 144));
  v19 = (char *)&`VTT for'std::ostringstream + 8;
  if ( *(_BYTE *)((((unsigned __int64)&`VTT for'std::ostringstream + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v19);
    goto LABEL_45;
  }
  v20 = *((_QWORD *)&`VTT for'std::ostringstream + 1);
  *(_QWORD *)(v2 + 80) = v20;
  v19 = (char *)(v20 - 24);
  if ( *(_BYTE *)(((unsigned __int64)(v20 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    v22 = (char *)__asan_report_load8(v19);
    goto LABEL_46;
  }
  v21 = (unsigned __int64)&v3[*(_QWORD *)(v20 - 24) - 912];
  v22 = (char *)&`VTT for'std::ostringstream + 16;
  if ( *(_BYTE *)((((unsigned __int64)&`VTT for'std::ostringstream + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    v21 = (unsigned __int64)v22;
    __asan_report_load8(v22);
LABEL_47:
    v24 = (struct _Unwind_Exception *)__asan_report_store8(v21, p_v);
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::ostringstream::~ostringstream(v2 + 80);
    boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~serializer((boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v2 + 528));
    __asan_handle_no_return(v2 + 528);
    _Unwind_Resume(v24);
  }
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_47;
  *(_QWORD *)v21 = *((_QWORD *)&`VTT for'std::ostringstream + 2);
  *(_QWORD *)(v2 + 192) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)(v2 + 192));
  f.self = (boost::beast::detail::variant<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 824);
  boost::mp11::mp_with_index<9ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
    *(unsigned __int8 *)(v2 + 896),
    &f);
  f.self = (boost::beast::detail::variant<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 656);
  boost::mp11::mp_with_index<9ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
    *(unsigned __int8 *)(v2 + 816),
    (boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > >::destroy *)&f);
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = -168430091;
  }
  return v12;
};

// Line 51: range 0000000019D1829C-0000000019D18AA5
int32_t __fastcall common::minet::http_client::HttpUtils::serializeMessage<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>(
        const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *m,
        std::string *msg_str)
{
  unsigned __int64 v2; // r13
  char *v3; // rbx
  _DWORD *v4; // r12
  char *v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int32_t v12; // r14d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  void *p_v; // rsi
  char *v18; // rdi
  char *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  char *v22; // rax
  struct _Unwind_Exception *v24; // rbp
  boost::beast::detail::variant<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> >::destroy f; // [rsp+18h] [rbp-470h] BYREF
  common::minet::http_client::HttpUtils::serializeMessage<true,boost::beast::http::basic_string_body<char>,boost::beast::http::basic_fields<std::allocator<char> > >::<lambda(boost::system::error_code&, const auto:1&)> visit; // [rsp+20h] [rbp-468h] BYREF
  std::string v; // [rsp+30h] [rbp-458h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-438h] BYREF
  char v30[1048]; // [rsp+70h] [rbp-418h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_4(992LL);
    if ( v11 )
      v2 = v11;
  }
  v3 = (char *)(v2 + 992);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 16 5 ec:53 80 376 5 os:55 528 392 5 sr:54";
  *(_QWORD *)(v2 + 16) = common::minet::http_client::HttpUtils::serializeMessage<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862734] = -218959360;
  v4[536862735] = -218959118;
  v4[536862736] = 62194;
  v4[536862748] = -218103808;
  v4[536862749] = -202116109;
  v4[536862750] = -202116109;
  *(_DWORD *)(v2 + 48) = 0;
  *(_BYTE *)(v2 + 52) = 0;
  *(_QWORD *)(v2 + 56) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::serializer(
    (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v2 + 528),
    (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >::value_type *)m);
  std::ios_base::ios_base((std::ios_base *)(v2 + 192));
  *(_QWORD *)(v2 + 192) = (char *)&`vtable for'std::ios + 16;
  *(_QWORD *)(v2 + 408) = 0LL;
  *(_BYTE *)(v2 + 416) = 0;
  *(_BYTE *)(v2 + 417) = 0;
  *(_QWORD *)(v2 + 424) = 0LL;
  *(_QWORD *)(v2 + 432) = 0LL;
  *(_QWORD *)(v2 + 440) = 0LL;
  *(_QWORD *)(v2 + 448) = 0LL;
  v6 = (char *)&`VTT for'std::ostringstream + 8;
  if ( *(_BYTE *)((((unsigned __int64)&`VTT for'std::ostringstream + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v6);
    goto LABEL_11;
  }
  v7 = *((_QWORD *)&`VTT for'std::ostringstream + 1);
  *(_QWORD *)(v2 + 80) = v7;
  v6 = (char *)(v7 - 24);
  if ( *(_BYTE *)(((unsigned __int64)(v7 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    v9 = (char *)__asan_report_load8(v6);
    goto LABEL_12;
  }
  v8 = (unsigned __int64)&v3[*(_QWORD *)(v7 - 24) - 912];
  v9 = (char *)&`VTT for'std::ostringstream + 16;
  if ( *(_BYTE *)((((unsigned __int64)&`VTT for'std::ostringstream + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    v8 = (unsigned __int64)v9;
    __asan_report_load8(v9);
    goto LABEL_13;
  }
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8(v8, m);
    goto LABEL_14;
  }
  *(_QWORD *)v8 = *((_QWORD *)&`VTT for'std::ostringstream + 2);
  v10 = *(_QWORD *)(v2 + 80);
  v8 = v10 - 24;
  if ( *(_BYTE *)(((unsigned __int64)(v10 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(v8);
    goto LABEL_15;
  }
  std::ios::init(&v3[*(_QWORD *)(v10 - 24) - 912], 0LL);
LABEL_15:
  *(_QWORD *)(v2 + 80) = (char *)&`vtable for'std::ostringstream + 24;
  *(_QWORD *)(v2 + 192) = (char *)&`vtable for'std::ostringstream + 64;
  *(_QWORD *)(v2 + 88) = (char *)&`vtable for'std::streambuf + 16;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  std::locale::locale((std::locale *)(v2 + 144));
  *(_QWORD *)(v2 + 88) = (char *)&`vtable for'std::stringbuf + 16;
  *(_DWORD *)(v2 + 152) = 16;
  *(_QWORD *)(v2 + 160) = v2 + 176;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_BYTE *)(v2 + 176) = 0;
  std::ios::init(v2 + 192, v2 + 88);
  do
  {
    visit.__sr = (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v2 + 528);
    visit.__os = (std::ostringstream *)(v2 + 80);
    ZN5boost5beast4http10serializerILb1ENS1_17basic_string_bodyIcSt11char_traitsIcESaIcEEENS1_12basic_fieldsIS6_EEE4nextIZN6common5minet11http_client9HttpUtils16serializeMessageILb1ES7_S9_EEiRKNS1_7messageIXT_ET0_T1_EERNSt7__cxx1112basic_stringIcS5_S6_EEEUlRNS_6system10error_codeERKT_E_EEvST_OSU_(
      (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v2 + 528),
      (boost::beast::error_code *)(v2 + 48),
      &visit);
    v12 = *(_DWORD *)(v2 + 48);
  }
  while ( !v12 && *(_DWORD *)(v2 + 912) != 120 );
  if ( !v12 )
  {
    v29.log_ = (common::milog::MiLog *)&v29.ostr_ptr_._M_refcount;
    v29.ostr_ptr_._M_ptr = 0LL;
    LOBYTE(v29.ostr_ptr_._M_refcount._M_pi) = 0;
    v13 = *(_QWORD *)(v2 + 128);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v2 + 112);
      if ( v13 <= v14 )
        std::string::_M_replace(
          &v29,
          0LL,
          v29.ostr_ptr_._M_ptr,
          *(const char **)(v2 + 120),
          v14 - *(_QWORD *)(v2 + 120));
      else
        std::string::_M_replace(&v29, 0LL, 0LL, *(const char **)(v2 + 120), v13 - *(_QWORD *)(v2 + 120));
    }
    else
    {
      std::string::_M_assign(&v29, v2 + 160);
    }
    p_v = &v29;
    std::string::operator=(msg_str, &v29);
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v29.log_ != &v29.ostr_ptr_._M_refcount )
      operator delete(v29.log_);
    goto LABEL_35;
  }
  common::milog::MiLogStream::MiLogStream(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./include/http_utils.h",
    "serializeMessage",
    68);
  v15 = *(_QWORD *)(v2 + 56);
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
    v16 = *(_QWORD *)(v2 + 56);
    __asan_report_load8(v16);
    goto LABEL_27;
  }
  v16 = *(_QWORD *)v15 + 32LL;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(v16);
    goto LABEL_28;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 32LL))(
    &v,
    v15,
    *(unsigned int *)(v2 + 48));
LABEL_28:
  p_v = &v;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v29.ostr_, &v);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v._M_dataplus._M_p != &v._anon_0 )
    operator delete(v._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v29);
  v12 = -1;
LABEL_35:
  *(_QWORD *)(v2 + 80) = (char *)&`vtable for'std::ostringstream + 24;
  *(_QWORD *)(v2 + 192) = (char *)&`vtable for'std::ostringstream + 64;
  *(_QWORD *)(v2 + 88) = (char *)&`vtable for'std::stringbuf + 16;
  v18 = *(char **)(v2 + 160);
  if ( v18 != (char *)(v2 + 176) )
    operator delete(v18);
  *(_QWORD *)(v2 + 88) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)(v2 + 144));
  v19 = (char *)&`VTT for'std::ostringstream + 8;
  if ( *(_BYTE *)((((unsigned __int64)&`VTT for'std::ostringstream + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v19);
    goto LABEL_45;
  }
  v20 = *((_QWORD *)&`VTT for'std::ostringstream + 1);
  *(_QWORD *)(v2 + 80) = v20;
  v19 = (char *)(v20 - 24);
  if ( *(_BYTE *)(((unsigned __int64)(v20 - 24) >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    v22 = (char *)__asan_report_load8(v19);
    goto LABEL_46;
  }
  v21 = (unsigned __int64)&v3[*(_QWORD *)(v20 - 24) - 912];
  v22 = (char *)&`VTT for'std::ostringstream + 16;
  if ( *(_BYTE *)((((unsigned __int64)&`VTT for'std::ostringstream + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    v21 = (unsigned __int64)v22;
    __asan_report_load8(v22);
LABEL_47:
    v24 = (struct _Unwind_Exception *)__asan_report_store8(v21, p_v);
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::ostringstream::~ostringstream(v2 + 80);
    boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~serializer((boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v2 + 528));
    __asan_handle_no_return(v2 + 528);
    _Unwind_Resume(v24);
  }
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_47;
  *(_QWORD *)v21 = *((_QWORD *)&`VTT for'std::ostringstream + 2);
  *(_QWORD *)(v2 + 192) = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)(v2 + 192));
  f.self = (boost::beast::detail::variant<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 824);
  boost::mp11::mp_with_index<9ul,boost::beast::detail::variant<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>,boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>::destroy>(
    *(unsigned __int8 *)(v2 + 896),
    &f);
  f.self = (boost::beast::detail::variant<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&>,boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > *)(v2 + 656);
  boost::mp11::mp_with_index<9ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
    *(unsigned __int8 *)(v2 + 816),
    (boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > >::destroy *)&f);
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = -168430091;
  }
  return v12;
};
