// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/parser.hpp

// Line 379: range 0000000019B74C7C-0000000019B74CDE
void __fastcall boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_request_impl(
        boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const this,
        boost::beast::http::verb method,
        boost::beast::string_view method_str,
        boost::beast::string_view target,
        int version,
        boost::beast::error_code *ec)
{
  ;
};

// Line 416: range 0000000019CFED5C-0000000019CFF4C8
void __fastcall boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_response_impl(
        boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const this,
        int code,
        boost::beast::string_view reason,
        int version,
        boost::beast::error_code *ec)
{
  const char *ptr; // r14
  std::size_t len; // r12
  bool *p_used; // rdi
  char v10; // al
  char v11; // al

  ptr = reason.ptr_;
  len = reason.len_;
  p_used = &this->used_;
  v10 = *(_BYTE *)(((unsigned __int64)p_used >> 3) + 0x7FFF8000);
  if ( v10 <= ((unsigned __int8)p_used & 7) && v10 )
  {
    __asan_report_load1(p_used);
LABEL_9:
    __asan_handle_no_return(p_used);
    __assert_fail(
      "! used_",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/parser.hpp",
      0x18Bu,
      "void boost::beast::http::parser<isRequest, Body, Fields>::on_response_impl(int, boost::beast::string_view, int, bo"
      "ost::beast::error_code&, std::true_type) [with bool isRequest = false; Body = boost::beast::http::basic_string_bod"
      "y<char>; Allocator = std::allocator<char>; boost::beast::string_view = boost::basic_string_view<char, std::char_tr"
      "aits<char> >; boost::beast::error_code = boost::system::error_code; std::true_type = std::integral_constant<bool, true>]");
  }
  if ( this->used_ )
    goto LABEL_9;
  this->used_ = 1;
  boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char>>>::result(&this->m_, code);
  if ( (unsigned int)(version - 1) > 0x62 )
  {
    __asan_handle_no_return(&this->m_);
    __assert_fail(
      "value > 0 && value < 100",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/message.hpp",
      0x156u,
      "void boost::beast::http::header<false, Fields>::version(unsigned int) [with Fields = boost::beast::http::basic_fie"
      "lds<std::allocator<char> >]");
  }
  v11 = *(_BYTE *)(((unsigned __int64)&this->m_.version_ >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
  {
    __asan_report_store4(&this->m_.version_);
    JUMPOUT(0x19CFEE43LL);
  }
  this->m_.version_ = version;
  boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char>>>::reason(
    &this->m_,
    (boost::beast::string_view)__PAIR128__(len, (unsigned __int64)ptr));
};

// Line 428: range 0000000019D0135A-0000000019D015C2
void __fastcall boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_field_impl(
        boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const this,
        unsigned __int16 name,
        boost::beast::string_view name_string,
        boost::beast::string_view value)
{
  const char *ptr; // r12
  std::size_t len; // r13
  const char *v6; // r14
  std::size_t v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  boost::beast::string_view v10; // rdx
  __int64 v11; // rax
  boost::beast::string_param valuea; // [rsp+20h] [rbp-298h] BYREF
  char v13[120]; // [rsp+240h] [rbp-78h] BYREF

  ptr = name_string.ptr_;
  len = name_string.len_;
  v6 = value.ptr_;
  v7 = value.len_;
  v8 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_0(64LL);
    if ( v11 )
      v8 = v11;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "1 32 16 9 value:431";
  *(_QWORD *)(v8 + 16) = boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_field_impl;
  v9 = v8 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202178560;
  *(_QWORD *)(v8 + 32) = v6;
  *(_QWORD *)(v8 + 40) = v7;
  boost::beast::string_param::string_param<boost::basic_string_view<char,std::char_traits<char>>>(
    &valuea,
    (boost::beast::string_param *)(v8 + 32),
    (const boost::basic_string_view<char,std::char_traits<char> > *)name_string.ptr_);
  v10.ptr_ = ptr;
  v10.len_ = len;
  boost::beast::http::basic_fields<std::allocator<char>>::insert(&this->m_, name, v10, (unsigned __int64)&valuea);
  if ( valuea.os_.m_initialized )
  {
    *(_QWORD *)valuea.os_.m_storage.dummy_.data = (char *)&`vtable for'boost::beast::detail::static_ostream + 24;
    *((_QWORD *)&valuea.os_.m_storage.dummy_.aligner_ + 16) = (char *)&`vtable for'boost::beast::detail::static_ostream
                                                            + 64;
    *((_QWORD *)&valuea.os_.m_storage.dummy_.aligner_ + 1) = &`vtable for'boost::beast::detail::static_ostream_buffer
                                                           + 2;
    if ( *((boost::beast::string_param **)&valuea.os_.m_storage.dummy_.aligner_ + 12) != (boost::beast::string_param *)(&valuea.os_.m_storage.dummy_.aligner_ + 14) )
      operator delete(*((void **)&valuea.os_.m_storage.dummy_.aligner_ + 12));
    *((_QWORD *)&valuea.os_.m_storage.dummy_.aligner_ + 1) = (char *)&`vtable for'std::streambuf + 16;
    std::locale::~locale((std::locale *)&valuea.os_.m_storage.dummy_.aligner_ + 8);
    *(_QWORD *)valuea.os_.m_storage.dummy_.data = &unk_1E968FD0;
    *((_QWORD *)&valuea.os_.m_storage.dummy_.aligner_ + 16) = (char *)&`vtable for'std::ios + 16;
    std::ios_base::~ios_base((std::ios_base *)(&valuea.os_.m_storage.dummy_.aligner_ + 16));
  }
  if ( v13 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 453: range 0000000019D00106-0000000019D0037B
// local variable allocation has failed, the output may be wrong!
std::size_t __fastcall boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_impl(
        boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const this,
        boost::beast::string_view body,
        unsigned __int64 ec)
{
  unsigned __int64 b; // r12
  std::size_t len; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::reader *p_rd; // r15
  char *v10; // rdi
  std::size_t v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  char *v14; // rbp
  char *v15; // rsi
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  std::size_t v19; // [rsp+0h] [rbp-A8h]
  boost::asio::const_buffers_1 buffers; // [rsp+20h] [rbp-88h] BYREF
  char v21[120]; // [rsp+30h] [rbp-78h] BYREF

  b = (unsigned __int64)this;
  len = body.len_;
  v6 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_0(64LL);
    if ( v17 )
      v6 = v17;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 8 body:454";
  *(_QWORD *)(v6 + 16) = boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_body_impl;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  *(_QWORD *)(v6 + 32) = v8;
  *(_QWORD *)(v6 + 40) = len;
  p_rd = &this->rd_;
  v10 = (char *)(v6 + 40);
  if ( *(_BYTE *)(((v6 + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(v6 + 40);
  v10 = (char *)(v6 + 32);
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(v10);
    goto LABEL_15;
  }
  buffers.data_ = *(const void **)(v6 + 32);
  buffers.size_ = v11;
  v19 = v11;
  if ( *(_BYTE *)(((unsigned __int64)p_rd >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v13 = __asan_report_load8(b + 200);
    goto LABEL_16;
  }
  v12 = *(_QWORD *)(b + 200);
  v13 = v12 + 8;
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(v13);
    goto LABEL_17;
  }
  v14 = *(char **)(v12 + 8);
  if ( v11 <= 0x3FFFFFFFFFFFFFFFLL - (__int64)v14 )
  {
    v15 = &v14[v11];
    std::string::resize(v12, v15, 0LL);
    if ( *(_WORD *)((ec >> 3) + 0x7FFF8000) )
    {
      __asan_report_store16(ec);
    }
    else
    {
      *(_QWORD *)ec = 0LL;
      *(_QWORD *)(ec + 8) = &boost::system::detail::cat_holder<void>::system_category_instance;
      if ( !*(_BYTE *)(((unsigned __int64)p_rd >> 3) + 0x7FFF8000) )
      {
        v16 = *(_QWORD *)(b + 200);
        if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          v14 += *(_QWORD *)v16;
          b = (unsigned __int64)boost::beast::buffers_range_ref<boost::asio::const_buffers_1>(&buffers).b_;
          p_rd = (boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::reader *)(b + 16);
          while ( 1 )
          {
            if ( p_rd == (boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >::reader *)b )
              goto LABEL_18;
            v16 = b;
            if ( *(_WORD *)((b >> 3) + 0x7FFF8000) )
              break;
            v15 = *(char **)b;
            ec = *(_QWORD *)(b + 8);
            if ( ec )
              goto LABEL_25;
LABEL_26:
            v14 += ec;
            b += 16LL;
          }
LABEL_24:
          __asan_report_load16(v16);
LABEL_25:
          memcpy(v14, v15, ec);
          goto LABEL_26;
        }
LABEL_23:
        __asan_report_load8(v16);
        goto LABEL_24;
      }
    }
    v16 = b + 200;
    __asan_report_load8(b + 200);
    goto LABEL_23;
  }
LABEL_17:
  boost::system::error_code::operator=<boost::beast::http::error>((boost::system::error_code *const)ec, buffer_overflow);
  v19 = 0LL;
LABEL_18:
  if ( v21 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v19;
};

// Line 462: range 0000000019CFE484-0000000019CFE4C3
void __fastcall boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_chunk_header_impl(
        boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const this,
        uint64_t size,
        boost::beast::string_view extensions,
        boost::beast::error_code *ec)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cb_h_._M_manager >> 3) + 0x7FFF8000) )
  {
    this = (boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const)((char *)this + 232);
    __asan_report_load8(this);
    goto LABEL_5;
  }
  if ( this->cb_h_._M_manager )
LABEL_5:
    std::function<void ()(unsigned long,boost::basic_string_view<char,std::char_traits<char>>,boost::system::error_code &)>::operator()(
      &this->cb_h_,
      size,
      extensions,
      ec);
};

// Line 472: range 0000000019CFFF80-0000000019D00101
std::size_t __fastcall boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_chunk_body_impl(
        boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char> > *const this,
        uint64_t remain,
        boost::beast::string_view body,
        boost::beast::error_code *ec)
{
  const char *ptr; // r12
  std::size_t len; // r13
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  std::size_t result; // rax
  __int64 v10; // rax
  std::size_t v11; // rcx
  __int64 v12; // rdx
  boost::asio::const_buffers_1 buffers; // [rsp+10h] [rbp-88h] BYREF
  char v15[120]; // [rsp+20h] [rbp-78h] BYREF

  ptr = body.ptr_;
  len = body.len_;
  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v6 = v10;
  }
  v7 = v6 + 64;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 8 body:474";
  *(_QWORD *)(v6 + 16) = boost::beast::http::parser<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>>::on_chunk_body_impl;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  *(_QWORD *)(v6 + 32) = ptr;
  *(_QWORD *)(v6 + 40) = len;
  if ( *(_BYTE *)(((unsigned __int64)&this->cb_b_._M_manager >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load8(&this->cb_b_._M_manager);
  }
  else if ( this->cb_b_._M_manager )
  {
    result = std::function<unsigned long ()(unsigned long,boost::basic_string_view<char,std::char_traits<char>>,boost::system::error_code &)>::operator()(
               &this->cb_b_,
               remain,
               *(boost::basic_string_view<char,std::char_traits<char> > *)(v6 + 32),
               ec);
    goto LABEL_5;
  }
  if ( *(_BYTE *)(((unsigned __int64)(v7 - 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7 - 24);
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(v7 - 24);
  v12 = v7 - 32;
  if ( *(_BYTE *)(((unsigned __int64)(v7 - 32) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    result = __asan_report_load8(v12);
    goto LABEL_15;
  }
  buffers.data_ = *(const void **)(v7 - 32);
  buffers.size_ = v11;
  result = boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>::reader::put<boost::asio::const_buffers_1>(
             &this->rd_,
             &buffers,
             ec);
LABEL_5:
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    return result;
  }
LABEL_15:
  *(_QWORD *)v6 = 1172321806LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  return result;
};
