// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/message.hpp

// Line 42: range 0000000019D05688-0000000019D08522
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method(
        boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char> > > *const this,
        boost::beast::http::verb v)
{
  char v2; // cl
  boost::intrusive::rbtree_node<void*> *p_method; // rdi
  boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr v4; // rdx
  _BYTE v5[24]; // [rsp+0h] [rbp-18h] BYREF

  if ( v == unknown_2 )
  {
    std::invalid_argument::invalid_argument((std::invalid_argument *)v5, "unknown method");
    __asan_handle_no_return(v5);
    boost::exception_detail::throw_exception_<std::invalid_argument>(
      (const std::invalid_argument *)v5,
      "void boost::beast::http::header<true, Fields>::method(boost::beast::http::verb) [with Fields = boost::beast::http:"
      ":basic_fields<std::allocator<char> >]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/message.hpp",
      46);
  }
  v2 = *(_BYTE *)(((unsigned __int64)&this->method_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 92) & 7) + 3) >= v2 && v2 )
  {
    p_method = (boost::intrusive::rbtree_node<void*> *)&this->method_;
    __asan_report_store4(p_method);
    boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_erasure_restore_invariants(
      p_method,
      *(boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void*,false> >::node_ptr *)&v,
      v4);
  }
  else
  {
    this->method_ = v;
    boost::beast::http::basic_fields<std::allocator<char>>::realloc_string(
      this,
      (unsigned __int64)&this->boost::beast::http::basic_fields<std::allocator<char> >::method_,
      (boost::beast::string_view)0);
  }
};

// Line 76: range 0000000019D03E74-0000000019D0538F
boost::beast::string_view __fastcall boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(
        const boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char> > > *const this)
{
  const std::string *v1; // rsi
  std::size_t len; // rax
  boost::beast::string_view *p_target_or_reason; // rax
  const char *ptr; // rcx
  boost::beast::string_view result; // rax
  boost::beast::string_param *v6; // rdi
  const std::string *v7; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->target_or_reason_.len_ >> 3) + 0x7FFF8000) )
  {
    p_target_or_reason = (boost::beast::string_view *)__asan_report_load8(&this->target_or_reason_.len_);
  }
  else
  {
    len = this->target_or_reason_.len_;
    if ( len )
      goto LABEL_8;
    p_target_or_reason = &this->target_or_reason_;
    if ( !*(_WORD *)(((unsigned __int64)&this->target_or_reason_ >> 3) + 0x7FFF8000) )
    {
      ptr = this->target_or_reason_.ptr_;
      result.len_ = this->target_or_reason_.len_;
LABEL_5:
      result.ptr_ = ptr;
      return result;
    }
  }
  this = (const boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char> > > *const)p_target_or_reason;
  len = __asan_report_load16(p_target_or_reason);
LABEL_8:
  if ( !*(_BYTE *)(((unsigned __int64)&this->target_or_reason_ >> 3) + 0x7FFF8000) )
  {
    ptr = this->target_or_reason_.ptr_ + 1;
    result.len_ = len - 1;
    goto LABEL_5;
  }
  v6 = (boost::beast::string_param *)&this->target_or_reason_;
  __asan_report_load8(v6);
  boost::beast::string_param::string_param<std::string>(v6, v1, v7);
  return result;
};

// Line 84: range 0000000019D0566C-0000000019D05686
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::target(
        boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char> > > *const this,
        boost::beast::string_view s)
{
  boost::beast::string_view v2; // rdx

  v2.len_ = s.len_;
  v2.ptr_ = s.ptr_;
  boost::beast::http::basic_fields<std::allocator<char>>::realloc_target(
    this,
    (unsigned __int64)&this->target_or_reason_,
    v2);
};

// Line 134: range 0000000019CFECB4-0000000019CFED5A
void __fastcall boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char>>>::result(
        boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char> > > *const this,
        unsigned int v)
{
  char v2; // cl
  _BYTE v3[24]; // [rsp+0h] [rbp-18h] BYREF

  if ( v > 0x3E7 )
  {
    std::invalid_argument::invalid_argument((std::invalid_argument *)v3, "invalid status-code");
    __asan_handle_no_return(v3);
    boost::exception_detail::throw_exception_<std::invalid_argument>(
      (const std::invalid_argument *)v3,
      "void boost::beast::http::header<false, Fields>::result(unsigned int) [with Fields = boost::beast::http::basic_fiel"
      "ds<std::allocator<char> >]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/message.hpp",
      138);
  }
  v2 = *(_BYTE *)(((unsigned __int64)&this->result_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 92) & 7) + 3) >= v2 && v2 )
  {
    __asan_report_store4(&this->result_);
    JUMPOUT(0x19CFED3FLL);
  }
  this->result_ = v;
};

// Line 313: range 0000000019D0D218-0000000019D0D23D
void __fastcall boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::chunked(
        boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this,
        bool value)
{
  boost::optional<long unsigned int> v2; // [rsp+0h] [rbp-18h] BYREF

  boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl(this, value);
  v2.m_initialized = 0;
  boost::beast::http::basic_fields<std::allocator<char>>::set_content_length_impl(this, &v2);
};

// Line 313: range 0000000019D0D014-0000000019D0D039
void __fastcall boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::chunked(
        boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this,
        bool value)
{
  boost::optional<long unsigned int> v2; // [rsp+0h] [rbp-18h] BYREF

  boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl(this, value);
  v2.m_initialized = 0;
  boost::beast::http::basic_fields<std::allocator<char>>::set_content_length_impl(this, &v2);
};

// Line 322: range 0000000019D0D200-0000000019D0D217
void __fastcall boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::content_length(
        boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this,
        const boost::optional<long unsigned int> *value)
{
  boost::beast::http::basic_fields<std::allocator<char>>::set_content_length_impl(this, value);
  boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl(this, 0);
};

// Line 322: range 0000000019D0CFFC-0000000019D0D013
void __fastcall boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::content_length(
        boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this,
        const boost::optional<long unsigned int> *value)
{
  boost::beast::http::basic_fields<std::allocator<char>>::set_content_length_impl(this, value);
  boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl(this, 0);
};

// Line 356: range 0000000019D0D03A-0000000019D0D1FB
void __fastcall boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload(
        boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this)
{
  boost::optional<long unsigned int> *v2; // rbx
  unsigned __int64 v3; // r13
  boost::optional<long unsigned int> v4; // rax
  boost::beast::http::verb v5; // eax
  __int64 v6; // rax
  unsigned int *p_version; // rdi
  char v8; // al
  _BYTE v9[16]; // [rsp+0h] [rbp-78h] BYREF
  char v10[104]; // [rsp+10h] [rbp-68h] BYREF

  v2 = (boost::optional<long unsigned int> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v2 = (boost::optional<long unsigned int> *)v6;
  }
  *(_QWORD *)&v2->m_initialized = 1102416563LL;
  v2->m_storage = (unsigned __int64)"1 32 16 5 n:359";
  *(_QWORD *)&v2[1].m_initialized = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload;
  v3 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::payload_size(this);
  *(_DWORD *)&v2[2].m_initialized = *(_DWORD *)&v4.m_initialized;
  v2[2].m_storage = v4.m_storage;
  v5 = boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method(this);
  if ( v5 == trace && (!v2[2].m_initialized || v2[2].m_storage) )
  {
    std::invalid_argument::invalid_argument((std::invalid_argument *)v9, "invalid request body");
    __asan_handle_no_return(v9);
    boost::exception_detail::throw_exception_<std::invalid_argument>(
      (const std::invalid_argument *)v9,
      "void boost::beast::http::message<<anonymous>, <template-parameter-1-2>, <template-parameter-1-3> >::prepare_payloa"
      "d(std::true_type) [with bool isRequest = true; Body = boost::beast::http::basic_string_body<char>; Fields = boost:"
      ":beast::http::basic_fields<std::allocator<char> >; std::true_type = std::integral_constant<bool, true>]",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/message.hpp",
      361);
  }
  if ( v2[2].m_initialized )
  {
    if ( v2[2].m_storage || v5 == options || v5 == put || v5 == post )
    {
      boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::content_length(
        this,
        v2 + 2);
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  p_version = &this->version_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->version_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_load4(p_version);
  }
  else if ( this->version_ != 11 )
  {
LABEL_20:
    boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::chunked(
      this,
      0);
    goto LABEL_9;
  }
  boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::chunked(
    this,
    1);
LABEL_9:
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)&v2->m_initialized = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 389: range 0000000019D0D23E-0000000019D0D3ED
void __fastcall boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload(
        boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this)
{
  boost::optional<long unsigned int> *v2; // rbx
  unsigned __int64 v3; // r13
  boost::optional<long unsigned int> v4; // rax
  bool m_initialized; // r15
  boost::beast::http::status v6; // eax
  unsigned int *p_version; // rdi
  char v8; // al
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+0h] [rbp-88h] BYREF
  char v11[120]; // [rsp+10h] [rbp-78h] BYREF

  v2 = (boost::optional<long unsigned int> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v2 = (boost::optional<long unsigned int> *)v9;
  }
  *(_QWORD *)&v2->m_initialized = 1102416563LL;
  v2->m_storage = (unsigned __int64)"1 32 16 5 n:392";
  *(_QWORD *)&v2[1].m_initialized = boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::prepare_payload;
  v3 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::payload_size(this);
  *(_DWORD *)&v2[2].m_initialized = *(_DWORD *)&v4.m_initialized;
  v2[2].m_storage = v4.m_storage;
  m_initialized = v4.m_initialized;
  if ( !v4.m_initialized || v4.m_storage )
  {
    v6 = boost::beast::http::header<false,boost::beast::http::basic_fields<std::allocator<char>>>::result(this);
    if ( v6 == 1 || v6 == no_content || v6 == not_modified )
    {
      std::invalid_argument::invalid_argument((std::invalid_argument *)v10, "invalid response body");
      __asan_handle_no_return(v10);
      boost::exception_detail::throw_exception_<std::invalid_argument>(
        (const std::invalid_argument *)v10,
        "void boost::beast::http::message<<anonymous>, <template-parameter-1-2>, <template-parameter-1-3> >::prepare_payl"
        "oad(std::false_type) [with bool isRequest = false; Body = boost::beast::http::basic_string_body<char>; Fields = "
        "boost::beast::http::basic_fields<std::allocator<char> >; std::false_type = std::integral_constant<bool, false>]",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/message.hpp",
        399);
    }
  }
  if ( m_initialized )
  {
    boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::content_length(
      this,
      v2 + 2);
  }
  else
  {
    p_version = &this->version_;
    v8 = *(_BYTE *)(((unsigned __int64)&this->version_ >> 3) + 0x7FFF8000);
    if ( v8 && v8 <= 3 )
    {
      __asan_report_load4(p_version);
    }
    else if ( this->version_ != 11 )
    {
      boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::chunked(
        this,
        0);
      goto LABEL_12;
    }
    boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::chunked(
      this,
      1);
  }
LABEL_12:
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)&v2->m_initialized = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
