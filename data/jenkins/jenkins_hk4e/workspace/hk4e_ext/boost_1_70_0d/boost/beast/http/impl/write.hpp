// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/write.hpp

// Line 85: range 0000000019C34236-0000000019C346B4
void __fastcall boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(
        boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this)
{
  boost::system::error_code *v1; // r8
  int *v2; // r9
  unsigned __int64 v4; // r12
  boost::asio::executor *p_ex; // rbx
  _DWORD *v6; // r13
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr; // rdi
  int *p_s; // rdx
  char v9; // al
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > **p_sr; // rdi
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v13; // rax
  char v14; // dl
  unsigned __int64 v15; // rdx
  struct _Unwind_Exception *v16; // rbx
  boost::asio::executor::impl_base *impl; // rdi
  __int64 vptr_impl_base; // rax
  int v19; // [rsp+4h] [rbp-184h] BYREF
  boost::asio::executor ex; // [rsp+8h] [rbp-180h] BYREF
  boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::system::error_code,int> token; // [rsp+10h] [rbp-178h] BYREF
  char v22[136]; // [rsp+100h] [rbp-88h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v4 = v10;
  }
  p_ex = (boost::asio::executor *)(v4 + 96);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 5 ec:87 64 16 4 f:90";
  *(_QWORD *)(v4 + 16) = boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 36) = 0;
  *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->sr_);
LABEL_13:
    sr = (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)p_s;
    __asan_report_load4(p_s);
    goto LABEL_14;
  }
  sr = this->sr_;
  p_s = &sr->s_;
  v9 = *(_BYTE *)(((unsigned __int64)&sr->s_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_13;
  if ( sr->s_ == 120 )
    goto LABEL_28;
  *(_QWORD *)(v4 + 64) = this;
  *(_BYTE *)(v4 + 72) = 0;
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::next<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::lambda &>(
    sr,
    (boost::beast::error_code *)(v4 + 32),
    (boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >::lambda *)(v4 + 64));
  if ( *(_DWORD *)(v4 + 32) )
  {
    if ( !*(_BYTE *)(v4 + 72) )
    {
      v19 = 0;
      boost::beast::bind_front_handler<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code &,int>(
        &token,
        this,
        (boost::system::error_code *)(v4 + 32),
        &v19,
        v1,
        v2);
      if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&this->s_);
      }
      else
      {
        p_ex = &ex;
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::get_executor(this->s_);
        boost::asio::post<boost::asio::executor,boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>(
          &ex,
          &token,
          0LL);
      }
      if ( !ex.impl_ )
        goto LABEL_20;
      if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(ex.impl_);
      }
      else
      {
        v11 = (unsigned __int64)(ex.impl_->_vptr_impl_base + 1);
        if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          (*((void (**)(void))ex.impl_->_vptr_impl_base + 1))();
LABEL_20:
          token.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                    + 2);
          boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&token.h_);
          goto LABEL_39;
        }
      }
      __asan_report_load8(v11);
      goto LABEL_23;
    }
LABEL_14:
    __asan_handle_no_return(sr);
    __assert_fail(
      "! f.invoked",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/write.hpp",
      0x5Eu,
      "void boost::beast::http::detail::write_some_op<Handler, Stream, isRequest, Body, Fields>::operator()() [with Handl"
      "er = boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handl"
      "er<boost::asio::executor_binder<void (*)(), boost::asio::executor>, long unsigned int>, boost::beast::basic_stream"
      "<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy>, true, boost::beast::http::basi"
      "c_string_body<char>, boost::beast::http::basic_fields<std::allocator<char> > >, boost::beast::basic_stream<boost::"
      "asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy>, boost::beast::http::detail::serializer"
      "_is_done, true, boost::beast::http::basic_string_body<char>, boost::beast::http::basic_fields<std::allocator<char>"
      " > >; Stream = boost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rat"
      "e_policy>; bool isRequest = true; Body = boost::beast::http::basic_string_body<char>; Fields = boost::beast::http:"
      ":basic_fields<std::allocator<char> >]");
  }
LABEL_23:
  if ( LOBYTE(p_ex[-3].impl_) )
    goto LABEL_39;
  p_sr = &this->sr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_sr);
LABEL_31:
    __asan_report_load4(p_sr);
LABEL_32:
    __asan_handle_no_return(p_sr);
    __assert_fail(
      "sr_.is_done()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/write.hpp",
      0x6Au,
      "void boost::beast::http::detail::write_some_op<Handler, Stream, isRequest, Body, Fields>::operator()() [with Handl"
      "er = boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handl"
      "er<boost::asio::executor_binder<void (*)(), boost::asio::executor>, long unsigned int>, boost::beast::basic_stream"
      "<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy>, true, boost::beast::http::basi"
      "c_string_body<char>, boost::beast::http::basic_fields<std::allocator<char> > >, boost::beast::basic_stream<boost::"
      "asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy>, boost::beast::http::detail::serializer"
      "_is_done, true, boost::beast::http::basic_string_body<char>, boost::beast::http::basic_fields<std::allocator<char>"
      " > >; Stream = boost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rat"
      "e_policy>; bool isRequest = true; Body = boost::beast::http::basic_string_body<char>; Fields = boost::beast::http:"
      ":basic_fields<std::allocator<char> >]");
  }
  v13 = this->sr_;
  p_sr = (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > **)&v13->s_;
  v14 = *(_BYTE *)(((unsigned __int64)&v13->s_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_31;
  if ( v13->s_ != 120 )
    goto LABEL_32;
LABEL_28:
  v19 = 0;
  boost::beast::bind_front_handler<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code &,int>(
    &token,
    this,
    (boost::system::error_code *)&p_ex[-8],
    &v19,
    v1,
    v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->s_);
  }
  else
  {
    boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::get_executor(this->s_);
    boost::asio::post<boost::asio::executor,boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>(
      &ex,
      &token,
      0LL);
  }
  if ( !ex.impl_ )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(ex.impl_);
LABEL_42:
    v16 = (struct _Unwind_Exception *)__asan_report_load8(v15);
    impl = ex.impl_;
    if ( ex.impl_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(ex.impl_);
      vptr_impl_base = (__int64)impl->_vptr_impl_base;
      if ( *(_BYTE *)(((unsigned __int64)(impl->_vptr_impl_base + 1) >> 3) + 0x7FFF8000) )
        vptr_impl_base = __asan_report_load8(impl->_vptr_impl_base + 1);
      (*(void (**)(void))(vptr_impl_base + 8))();
    }
    token.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                              + 2);
    boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&token.h_);
    __asan_handle_no_return(&token);
    _Unwind_Resume(v16);
  }
  v15 = (unsigned __int64)(ex.impl_->_vptr_impl_base + 1);
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    goto LABEL_42;
  (*((void (**)(void))ex.impl_->_vptr_impl_base + 1))();
LABEL_38:
  token.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                            + 2);
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&token.h_);
LABEL_39:
  if ( v22 == (char *)v4 )
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

// Line 85: range 0000000019C8427A-0000000019C8472C
void __fastcall boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(
        boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this)
{
  boost::system::error_code *v1; // r8
  int *v2; // r9
  unsigned __int64 v4; // r12
  boost::asio::executor *p_ex; // rbx
  _DWORD *v6; // r13
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr; // rdi
  int *p_s; // rdx
  char v9; // al
  boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *const *s; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > **p_sr; // rdi
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v14; // rax
  char v15; // dl
  boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *const *v16; // rdi
  unsigned __int64 v17; // rdx
  struct _Unwind_Exception *v18; // rbx
  boost::asio::executor::impl_base *impl; // rdi
  __int64 vptr_impl_base; // rax
  int v21; // [rsp+4h] [rbp-184h] BYREF
  boost::asio::executor ex; // [rsp+8h] [rbp-180h] BYREF
  boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::system::error_code,int> token; // [rsp+10h] [rbp-178h] BYREF
  char v24[136]; // [rsp+100h] [rbp-88h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v4 = v11;
  }
  p_ex = (boost::asio::executor *)(v4 + 96);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 5 ec:87 64 16 4 f:90";
  *(_QWORD *)(v4 + 16) = boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 36) = 0;
  *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->sr_);
LABEL_14:
    sr = (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)p_s;
    __asan_report_load4(p_s);
    goto LABEL_15;
  }
  sr = this->sr_;
  p_s = &sr->s_;
  v9 = *(_BYTE *)(((unsigned __int64)&sr->s_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_14;
  if ( sr->s_ == 120 )
    goto LABEL_30;
  *(_QWORD *)(v4 + 64) = this;
  *(_BYTE *)(v4 + 72) = 0;
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::next<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::lambda &>(
    sr,
    (boost::beast::error_code *)(v4 + 32),
    (boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >::lambda *)(v4 + 64));
  if ( *(_DWORD *)(v4 + 32) )
  {
    if ( !*(_BYTE *)(v4 + 72) )
    {
      v21 = 0;
      boost::beast::bind_front_handler<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code &,int>(
        &token,
        this,
        (boost::system::error_code *)(v4 + 32),
        &v21,
        v1,
        v2);
      s = (boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *const *)&this->s_;
      if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(s);
      }
      else
      {
        s = (boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *const *)this->s_;
        if ( !*(_BYTE *)(((unsigned __int64)s >> 3) + 0x7FFF8000) )
        {
          p_ex = &ex;
          boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>::get_executor(*s);
          boost::asio::post<boost::asio::executor,boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>(
            &ex,
            &token,
            0LL);
LABEL_18:
          if ( !ex.impl_ )
          {
LABEL_22:
            token.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                                      + 2);
            boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&token.h_);
            goto LABEL_43;
          }
          if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(ex.impl_);
          }
          else
          {
            v12 = (unsigned __int64)(ex.impl_->_vptr_impl_base + 1);
            if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            {
              (*((void (**)(void))ex.impl_->_vptr_impl_base + 1))();
              goto LABEL_22;
            }
          }
          __asan_report_load8(v12);
          goto LABEL_25;
        }
      }
      __asan_report_load8(s);
      goto LABEL_18;
    }
LABEL_15:
    __asan_handle_no_return(sr);
    __assert_fail(
      "! f.invoked",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/write.hpp",
      0x5Eu,
      "void boost::beast::http::detail::write_some_op<Handler, Stream, isRequest, Body, Fields>::operator()() [with Handl"
      "er = boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handl"
      "er<boost::asio::executor_binder<void (*)(), boost::asio::executor>, long unsigned int>, boost::beast::ssl_stream<b"
      "oost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy> >, tru"
      "e, boost::beast::http::basic_string_body<char>, boost::beast::http::basic_fields<std::allocator<char> > >, boost::"
      "beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_"
      "rate_policy> >, boost::beast::http::detail::serializer_is_done, true, boost::beast::http::basic_string_body<char>,"
      " boost::beast::http::basic_fields<std::allocator<char> > >; Stream = boost::beast::ssl_stream<boost::beast::basic_"
      "stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy> >; bool isRequest = true;"
      " Body = boost::beast::http::basic_string_body<char>; Fields = boost::beast::http::basic_fields<std::allocator<char> >]");
  }
LABEL_25:
  if ( LOBYTE(p_ex[-3].impl_) )
    goto LABEL_43;
  p_sr = &this->sr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_sr);
LABEL_34:
    __asan_report_load4(p_sr);
LABEL_35:
    __asan_handle_no_return(p_sr);
    __assert_fail(
      "sr_.is_done()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/write.hpp",
      0x6Au,
      "void boost::beast::http::detail::write_some_op<Handler, Stream, isRequest, Body, Fields>::operator()() [with Handl"
      "er = boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handl"
      "er<boost::asio::executor_binder<void (*)(), boost::asio::executor>, long unsigned int>, boost::beast::ssl_stream<b"
      "oost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy> >, tru"
      "e, boost::beast::http::basic_string_body<char>, boost::beast::http::basic_fields<std::allocator<char> > >, boost::"
      "beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_"
      "rate_policy> >, boost::beast::http::detail::serializer_is_done, true, boost::beast::http::basic_string_body<char>,"
      " boost::beast::http::basic_fields<std::allocator<char> > >; Stream = boost::beast::ssl_stream<boost::beast::basic_"
      "stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy> >; bool isRequest = true;"
      " Body = boost::beast::http::basic_string_body<char>; Fields = boost::beast::http::basic_fields<std::allocator<char> >]");
  }
  v14 = this->sr_;
  p_sr = (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > **)&v14->s_;
  v15 = *(_BYTE *)(((unsigned __int64)&v14->s_ >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_34;
  if ( v14->s_ != 120 )
    goto LABEL_35;
LABEL_30:
  v21 = 0;
  boost::beast::bind_front_handler<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code &,int>(
    &token,
    this,
    (boost::system::error_code *)&p_ex[-8],
    &v21,
    v1,
    v2);
  v16 = (boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *const *)&this->s_;
  if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v16);
  }
  else
  {
    v16 = (boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *const *)this->s_;
    if ( !*(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>::get_executor(*v16);
      boost::asio::post<boost::asio::executor,boost::beast::detail::bind_front_wrapper<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::system::error_code,int>>(
        &ex,
        &token,
        0LL);
      goto LABEL_38;
    }
  }
  __asan_report_load8(v16);
LABEL_38:
  if ( ex.impl_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(ex.impl_);
    }
    else
    {
      v17 = (unsigned __int64)(ex.impl_->_vptr_impl_base + 1);
      if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))ex.impl_->_vptr_impl_base + 1))();
        goto LABEL_42;
      }
    }
    v18 = (struct _Unwind_Exception *)__asan_report_load8(v17);
    impl = ex.impl_;
    if ( ex.impl_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(ex.impl_);
      vptr_impl_base = (__int64)impl->_vptr_impl_base;
      if ( *(_BYTE *)(((unsigned __int64)(impl->_vptr_impl_base + 1) >> 3) + 0x7FFF8000) )
        vptr_impl_base = __asan_report_load8(impl->_vptr_impl_base + 1);
      (*(void (**)(void))(vptr_impl_base + 8))();
    }
    token.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                              + 2);
    boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&token.h_);
    __asan_handle_no_return(&token);
    _Unwind_Resume(v18);
  }
LABEL_42:
  token.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                            + 2);
  boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&token.h_);
LABEL_43:
  if ( v24 == (char *)v4 )
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

// Line 184: range 0000000019C34CE6-0000000019C353B6
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(
        boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this,
        boost::beast::error_code ec,
        __int64 bytes_transferred)
{
  std::size_t p_ex; // r15
  const boost::system::error_category *cat; // rbp
  __m128i *v6; // r12
  _DWORD *v7; // r14
  __int64 v8; // rsi
  unsigned __int64 p_h; // rbp
  char v10; // dl
  int value; // eax
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > **p_sr; // rdi
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr; // rax
  char v14; // dl
  char v15; // dl
  __int64 v16; // rax
  __m128i *p_bytes_transferred; // rdi
  char v18; // al
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v19; // rax
  char v20; // dl
  int (**vptr_async_base)(...); // rax
  boost::asio::coroutine *v22; // rdx
  boost::asio::coroutine *v23; // rdi
  char v24; // dl
  char v25; // dl
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rax
  unsigned __int64 v31; // rax
  char v32; // dl
  struct _Unwind_Exception *v33; // rbx
  unsigned __int64 impl; // rdi
  __int64 v35; // rax
  char v36; // dl
  __m128i bytes_transferreda; // [rsp+10h] [rbp-B8h] BYREF
  boost::asio::executor ex; // [rsp+28h] [rbp-A0h] BYREF
  char v39[152]; // [rsp+30h] [rbp-98h] BYREF

  p_ex = *(_QWORD *)&ec.val_;
  cat = ec.cat_;
  bytes_transferreda.m128i_i64[0] = bytes_transferred;
  v6 = (__m128i *)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_1(96LL);
    if ( v16 )
      v6 = (__m128i *)v16;
  }
  v6->m128i_i64[0] = 1102416563LL;
  v6->m128i_i64[1] = (__int64)"2 32 16 15 _coro_value:188 64 16 6 ec:185";
  v6[1].m128i_i64[0] = (__int64)boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator();
  v7 = (_DWORD *)((unsigned __int64)v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -202178560;
  v6[4].m128i_i64[0] = v8;
  v6[4].m128i_i64[1] = (__int64)cat;
  p_h = (unsigned __int64)&this->boost::asio::coroutine;
  v6[2].m128i_i64[0] = (__int64)&this->boost::asio::coroutine;
  v6[2].m128i_i8[8] = 0;
  v10 = *(_BYTE *)(((unsigned __int64)&this->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 120) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(&this->boost::asio::coroutine);
  }
  else
  {
    value = this->value_;
    if ( value == 192 )
      goto upcall;
    if ( value <= 192 )
    {
      if ( value == -1 )
      {
        v6[2].m128i_i8[8] = 1;
        this->value_ = -1;
        goto bail_out_of_coroutine;
      }
      if ( value )
        goto bail_out_of_coroutine;
      p_sr = &this->sr_;
      if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_sr);
      }
      else
      {
        sr = this->sr_;
        p_sr = (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > **)&sr->s_;
        v14 = *(_BYTE *)(((unsigned __int64)&sr->s_ >> 3) + 0x7FFF8000);
        if ( !v14 || v14 > 3 )
        {
          if ( sr->s_ != 120 )
            goto LABEL_12;
LABEL_33:
          v6[2].m128i_i8[8] = 1;
          this->value_ = 192;
          while ( 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(&this->s_);
            }
            else
            {
              p_ex = (std::size_t)&ex;
              boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::get_executor(this->s_);
              boost::asio::post<boost::asio::executor,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
                &ex,
                this,
                0LL);
            }
            if ( ex.impl_ )
            {
              if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(ex.impl_);
LABEL_45:
                v23 = v22;
                __asan_report_load8(v22);
LABEL_46:
                __asan_report_load4(v23);
LABEL_47:
                __asan_report_store4(p_h);
                goto LABEL_48;
              }
              v22 = (boost::asio::coroutine *)(ex.impl_->_vptr_impl_base + 1);
              if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                goto LABEL_45;
              (*((void (**)(void))ex.impl_->_vptr_impl_base + 1))();
            }
            v23 = &this->boost::asio::coroutine;
            v24 = *(_BYTE *)((p_h >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)this - 120) & 7) + 3) >= v24 && v24 )
              goto LABEL_46;
            if ( *(_DWORD *)p_h )
              goto bail_out_of_coroutine;
          }
        }
      }
      __asan_report_load4(p_sr);
      goto LABEL_33;
    }
  }
  if ( value != 200 )
    goto bail_out_of_coroutine;
  p_bytes_transferred = (__m128i *)&this->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  this->bytes_transferred_ += bytes_transferreda.m128i_i64[0];
  p_bytes_transferred = v6 + 4;
  v18 = *(_BYTE *)(((unsigned __int64)&v6[4] >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_58;
  if ( !v6[4].m128i_i32[0] )
  {
    p_bytes_transferred = (__m128i *)&this->sr_;
    if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
    {
LABEL_59:
      __asan_report_load8(p_bytes_transferred);
LABEL_60:
      __asan_report_load4(p_bytes_transferred);
      goto LABEL_61;
    }
    v19 = this->sr_;
    p_bytes_transferred = (__m128i *)&v19->s_;
    v20 = *(_BYTE *)(((unsigned __int64)&v19->s_ >> 3) + 0x7FFF8000);
    if ( v20 && v20 <= 3 )
      goto LABEL_60;
    if ( v19->s_ != 120 )
    {
LABEL_12:
      v6[2].m128i_i8[8] = 1;
      p_h = v6[2].m128i_u64[0];
      v15 = *(_BYTE *)((p_h >> 3) + 0x7FFF8000);
      if ( (char)((p_h & 7) + 3) >= v15 && v15 )
        goto LABEL_47;
      *(_DWORD *)p_h = 200;
      while ( 1 )
      {
        p_bytes_transferred = (__m128i *)&this->sr_;
        if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
          break;
        p_bytes_transferred = (__m128i *)&this->s_;
        if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
          goto LABEL_56;
        boost::beast::http::async_write_some<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
          this->s_,
          this->sr_,
          this);
LABEL_48:
        p_bytes_transferred = (__m128i *)p_h;
        v25 = *(_BYTE *)((p_h >> 3) + 0x7FFF8000);
        if ( (char)((p_h & 7) + 3) >= v25 && v25 )
        {
          __asan_report_load4(p_h);
          break;
        }
        if ( *(_DWORD *)p_h )
          goto bail_out_of_coroutine;
      }
      __asan_report_load8(p_bytes_transferred);
LABEL_56:
      __asan_report_load8(p_bytes_transferred);
LABEL_57:
      __asan_report_load8(p_bytes_transferred);
LABEL_58:
      __asan_report_load4(p_bytes_transferred);
      goto LABEL_59;
    }
  }
upcall:
  p_h = (unsigned __int64)&this->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    vptr_async_base = (int (**)(...))__asan_report_load8(this);
    goto LABEL_62;
  }
  vptr_async_base = this->_vptr_async_base;
  if ( !*(_BYTE *)(((unsigned __int64)this->_vptr_async_base >> 3) + 0x7FFF8000) )
  {
    (*vptr_async_base)(this);
    goto LABEL_63;
  }
LABEL_62:
  __asan_report_load8(vptr_async_base);
LABEL_63:
  boost::asio::executor_work_guard<boost::asio::executor>::reset(&this->wg1_);
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_h);
    goto LABEL_68;
  }
  p_ex = this->bytes_transferred_;
  bytes_transferreda = _mm_load_si128(v6 + 4);
  p_h = (unsigned __int64)&this->h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_ >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    v26 = __asan_report_load8(p_h);
    goto LABEL_69;
  }
  v26 = (unsigned __int64)this->h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base;
  if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *))v26)(&this->h_);
    goto LABEL_70;
  }
LABEL_69:
  __asan_report_load8(v26);
LABEL_70:
  boost::asio::executor_work_guard<boost::asio::executor>::reset((boost::asio::executor_work_guard<boost::asio::executor> *const)(p_h + 72));
  v27 = p_h + 8;
  if ( *(_BYTE *)(((p_h + 56) >> 3) + 0x7FFF8000) )
  {
    v28 = __asan_report_load8(p_h + 56);
    goto LABEL_84;
  }
  v28 = *(_QWORD *)(p_h + 56);
  if ( *(_WORD *)((v28 >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    v29 = __asan_report_store16(v28);
    goto LABEL_85;
  }
  *(__m128i *)v28 = _mm_load_si128(&bytes_transferreda);
  v29 = p_h + 64;
  if ( *(_BYTE *)(((p_h + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8(v29);
    goto LABEL_86;
  }
  if ( *(_BYTE *)((*(_QWORD *)(p_h + 64) >> 3) + 0x7FFF8000LL) )
  {
LABEL_86:
    __asan_report_store8();
    goto LABEL_87;
  }
  **(_QWORD **)(p_h + 64) = p_ex;
  v30 = (char *)(p_h + 48);
  if ( *(_BYTE *)(((p_h + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    v31 = __asan_report_load8(v30);
    goto LABEL_88;
  }
  v31 = *(_QWORD *)(p_h + 48);
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    v27 = v31;
    __asan_report_store8();
    goto LABEL_89;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFLL) != 1 )
    goto bail_out_of_coroutine;
LABEL_89:
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v27);
    goto LABEL_93;
  }
  v27 = *(_QWORD *)(p_h + 8);
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_load8(v27);
    goto LABEL_94;
  }
  boost::coroutines2::detail::push_coroutine<void>::control_block::resume(*(boost::coroutines2::detail::push_coroutine<void>::control_block *const *)v27);
bail_out_of_coroutine:
  if ( v6[2].m128i_i8[8] )
    goto LABEL_81;
  v27 = v6[2].m128i_u64[0];
  v32 = *(_BYTE *)((v27 >> 3) + 0x7FFF8000);
  if ( (char)((v27 & 7) + 3) >= v32 && v32 )
  {
LABEL_94:
    v33 = (struct _Unwind_Exception *)__asan_report_store4(v27);
    impl = (unsigned __int64)ex.impl_;
    if ( ex.impl_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(ex.impl_);
      v35 = *(_QWORD *)impl;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)impl + 8LL) >> 3) + 0x7FFF8000) )
      {
        impl = *(_QWORD *)impl + 8LL;
        v35 = __asan_report_load8(impl);
      }
      (*(void (**)(void))(v35 + 8))();
    }
    while ( 1 )
    {
      if ( v6[2].m128i_i8[8] )
        goto LABEL_105;
      impl = v6[2].m128i_u64[0];
      v36 = *(_BYTE *)((impl >> 3) + 0x7FFF8000);
      if ( (char)((impl & 7) + 3) < v36 || !v36 )
        break;
      v33 = (struct _Unwind_Exception *)__asan_report_store4(impl);
    }
    *(_DWORD *)impl = -1;
LABEL_105:
    __asan_handle_no_return(impl);
    _Unwind_Resume(v33);
  }
  *(_DWORD *)v27 = -1;
LABEL_81:
  if ( v39 == (char *)v6 )
  {
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v6->m128i_i64[0] = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 184: range 0000000019C84D78-0000000019C8546F
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(
        boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this,
        boost::beast::error_code ec,
        __int64 bytes_transferred)
{
  std::size_t p_ex; // r15
  const boost::system::error_category *cat; // rbp
  __m128i *v6; // r12
  _DWORD *v7; // r14
  __int64 v8; // rsi
  unsigned __int64 p_h; // rbp
  char v10; // dl
  int value; // eax
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > **p_sr; // rdi
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr; // rax
  char v14; // dl
  char v15; // dl
  __int64 v16; // rax
  __m128i *p_bytes_transferred; // rdi
  char v18; // al
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v19; // rax
  char v20; // dl
  int (**vptr_async_base)(...); // rax
  boost::asio::coroutine *v22; // rdx
  boost::asio::coroutine *v23; // rdi
  char v24; // dl
  unsigned __int64 p_s; // rdi
  char v26; // dl
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // rax
  unsigned __int64 v32; // rax
  char v33; // dl
  struct _Unwind_Exception *v34; // rbx
  unsigned __int64 impl; // rdi
  __int64 v36; // rax
  char v37; // dl
  __m128i bytes_transferreda; // [rsp+10h] [rbp-B8h] BYREF
  boost::asio::executor ex; // [rsp+28h] [rbp-A0h] BYREF
  char v40[152]; // [rsp+30h] [rbp-98h] BYREF

  p_ex = *(_QWORD *)&ec.val_;
  cat = ec.cat_;
  bytes_transferreda.m128i_i64[0] = bytes_transferred;
  v6 = (__m128i *)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_1(96LL);
    if ( v16 )
      v6 = (__m128i *)v16;
  }
  v6->m128i_i64[0] = 1102416563LL;
  v6->m128i_i64[1] = (__int64)"2 32 16 15 _coro_value:188 64 16 6 ec:185";
  v6[1].m128i_i64[0] = (__int64)boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator();
  v7 = (_DWORD *)((unsigned __int64)v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -202178560;
  v6[4].m128i_i64[0] = v8;
  v6[4].m128i_i64[1] = (__int64)cat;
  p_h = (unsigned __int64)&this->boost::asio::coroutine;
  v6[2].m128i_i64[0] = (__int64)&this->boost::asio::coroutine;
  v6[2].m128i_i8[8] = 0;
  v10 = *(_BYTE *)(((unsigned __int64)&this->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 120) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(&this->boost::asio::coroutine);
  }
  else
  {
    value = this->value_;
    if ( value == 192 )
      goto upcall;
    if ( value <= 192 )
    {
      if ( value == -1 )
      {
        v6[2].m128i_i8[8] = 1;
        this->value_ = -1;
        goto bail_out_of_coroutine;
      }
      if ( value )
        goto bail_out_of_coroutine;
      p_sr = &this->sr_;
      if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_sr);
      }
      else
      {
        sr = this->sr_;
        p_sr = (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > **)&sr->s_;
        v14 = *(_BYTE *)(((unsigned __int64)&sr->s_ >> 3) + 0x7FFF8000);
        if ( !v14 || v14 > 3 )
        {
          if ( sr->s_ != 120 )
            goto LABEL_12;
          goto LABEL_33;
        }
      }
      __asan_report_load4(p_sr);
LABEL_33:
      v6[2].m128i_i8[8] = 1;
      this->value_ = 192;
      while ( 1 )
      {
        p_s = (unsigned __int64)&this->s_;
        if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
          break;
        p_s = (unsigned __int64)this->s_;
        if ( *(_BYTE *)((p_s >> 3) + 0x7FFF8000) )
          goto LABEL_35;
        p_ex = (std::size_t)&ex;
        boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>::get_executor((boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *const)this->s_->p_._M_t._M_t._M_head_impl);
        boost::asio::post<boost::asio::executor,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
          &ex,
          this,
          0LL);
LABEL_36:
        if ( ex.impl_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(ex.impl_);
LABEL_47:
            v23 = v22;
            __asan_report_load8(v22);
LABEL_48:
            __asan_report_load4(v23);
LABEL_49:
            __asan_report_store4(p_h);
            goto LABEL_50;
          }
          v22 = (boost::asio::coroutine *)(ex.impl_->_vptr_impl_base + 1);
          if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
            goto LABEL_47;
          (*((void (**)(void))ex.impl_->_vptr_impl_base + 1))();
        }
        v23 = &this->boost::asio::coroutine;
        v24 = *(_BYTE *)((p_h >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this - 120) & 7) + 3) >= v24 && v24 )
          goto LABEL_48;
        if ( *(_DWORD *)p_h )
          goto bail_out_of_coroutine;
      }
      __asan_report_load8(p_s);
LABEL_35:
      __asan_report_load8(p_s);
      goto LABEL_36;
    }
  }
  if ( value != 200 )
    goto bail_out_of_coroutine;
  p_bytes_transferred = (__m128i *)&this->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bytes_transferred_ >> 3) + 0x7FFF8000) )
    goto LABEL_59;
  this->bytes_transferred_ += bytes_transferreda.m128i_i64[0];
  p_bytes_transferred = v6 + 4;
  v18 = *(_BYTE *)(((unsigned __int64)&v6[4] >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_60;
  if ( !v6[4].m128i_i32[0] )
  {
    p_bytes_transferred = (__m128i *)&this->sr_;
    if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
    {
LABEL_61:
      __asan_report_load8(p_bytes_transferred);
LABEL_62:
      __asan_report_load4(p_bytes_transferred);
      goto LABEL_63;
    }
    v19 = this->sr_;
    p_bytes_transferred = (__m128i *)&v19->s_;
    v20 = *(_BYTE *)(((unsigned __int64)&v19->s_ >> 3) + 0x7FFF8000);
    if ( v20 && v20 <= 3 )
      goto LABEL_62;
    if ( v19->s_ != 120 )
    {
LABEL_12:
      v6[2].m128i_i8[8] = 1;
      p_h = v6[2].m128i_u64[0];
      v15 = *(_BYTE *)((p_h >> 3) + 0x7FFF8000);
      if ( (char)((p_h & 7) + 3) >= v15 && v15 )
        goto LABEL_49;
      *(_DWORD *)p_h = 200;
      while ( 1 )
      {
        p_bytes_transferred = (__m128i *)&this->sr_;
        if ( *(_BYTE *)(((unsigned __int64)&this->sr_ >> 3) + 0x7FFF8000) )
          break;
        p_bytes_transferred = (__m128i *)&this->s_;
        if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        boost::beast::http::async_write_some<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
          this->s_,
          this->sr_,
          this);
LABEL_50:
        p_bytes_transferred = (__m128i *)p_h;
        v26 = *(_BYTE *)((p_h >> 3) + 0x7FFF8000);
        if ( (char)((p_h & 7) + 3) >= v26 && v26 )
        {
          __asan_report_load4(p_h);
          break;
        }
        if ( *(_DWORD *)p_h )
          goto bail_out_of_coroutine;
      }
      __asan_report_load8(p_bytes_transferred);
LABEL_58:
      __asan_report_load8(p_bytes_transferred);
LABEL_59:
      __asan_report_load8(p_bytes_transferred);
LABEL_60:
      __asan_report_load4(p_bytes_transferred);
      goto LABEL_61;
    }
  }
upcall:
  p_h = (unsigned __int64)&this->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    vptr_async_base = (int (**)(...))__asan_report_load8(this);
    goto LABEL_64;
  }
  vptr_async_base = this->_vptr_async_base;
  if ( !*(_BYTE *)(((unsigned __int64)this->_vptr_async_base >> 3) + 0x7FFF8000) )
  {
    (*vptr_async_base)(this);
    goto LABEL_65;
  }
LABEL_64:
  __asan_report_load8(vptr_async_base);
LABEL_65:
  boost::asio::executor_work_guard<boost::asio::executor>::reset(&this->wg1_);
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_h);
    goto LABEL_70;
  }
  p_ex = this->bytes_transferred_;
  bytes_transferreda = _mm_load_si128(v6 + 4);
  p_h = (unsigned __int64)&this->h_;
  if ( *(_BYTE *)(((unsigned __int64)&this->h_ >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    v27 = __asan_report_load8(p_h);
    goto LABEL_71;
  }
  v27 = (unsigned __int64)this->h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base;
  if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
    (*(void (__fastcall **)(boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *))v27)(&this->h_);
    goto LABEL_72;
  }
LABEL_71:
  __asan_report_load8(v27);
LABEL_72:
  boost::asio::executor_work_guard<boost::asio::executor>::reset((boost::asio::executor_work_guard<boost::asio::executor> *const)(p_h + 72));
  v28 = p_h + 8;
  if ( *(_BYTE *)(((p_h + 56) >> 3) + 0x7FFF8000) )
  {
    v29 = __asan_report_load8(p_h + 56);
    goto LABEL_86;
  }
  v29 = *(_QWORD *)(p_h + 56);
  if ( *(_WORD *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    v30 = __asan_report_store16(v29);
    goto LABEL_87;
  }
  *(__m128i *)v29 = _mm_load_si128(&bytes_transferreda);
  v30 = p_h + 64;
  if ( *(_BYTE *)(((p_h + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_load8(v30);
    goto LABEL_88;
  }
  if ( *(_BYTE *)((*(_QWORD *)(p_h + 64) >> 3) + 0x7FFF8000LL) )
  {
LABEL_88:
    __asan_report_store8();
    goto LABEL_89;
  }
  **(_QWORD **)(p_h + 64) = p_ex;
  v31 = (char *)(p_h + 48);
  if ( *(_BYTE *)(((p_h + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    v32 = __asan_report_load8(v31);
    goto LABEL_90;
  }
  v32 = *(_QWORD *)(p_h + 48);
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
LABEL_90:
    v28 = v32;
    __asan_report_store8();
    goto LABEL_91;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFLL) != 1 )
    goto bail_out_of_coroutine;
LABEL_91:
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v28);
    goto LABEL_95;
  }
  v28 = *(_QWORD *)(p_h + 8);
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_load8(v28);
    goto LABEL_96;
  }
  boost::coroutines2::detail::push_coroutine<void>::control_block::resume(*(boost::coroutines2::detail::push_coroutine<void>::control_block *const *)v28);
bail_out_of_coroutine:
  if ( v6[2].m128i_i8[8] )
    goto LABEL_83;
  v28 = v6[2].m128i_u64[0];
  v33 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
  if ( (char)((v28 & 7) + 3) >= v33 && v33 )
  {
LABEL_96:
    v34 = (struct _Unwind_Exception *)__asan_report_store4(v28);
    impl = (unsigned __int64)ex.impl_;
    if ( ex.impl_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)ex.impl_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(ex.impl_);
      v36 = *(_QWORD *)impl;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)impl + 8LL) >> 3) + 0x7FFF8000) )
      {
        impl = *(_QWORD *)impl + 8LL;
        v36 = __asan_report_load8(impl);
      }
      (*(void (**)(void))(v36 + 8))();
    }
    while ( 1 )
    {
      if ( v6[2].m128i_i8[8] )
        goto LABEL_107;
      impl = v6[2].m128i_u64[0];
      v37 = *(_BYTE *)((impl >> 3) + 0x7FFF8000);
      if ( (char)((impl & 7) + 3) < v37 || !v37 )
        break;
      v34 = (struct _Unwind_Exception *)__asan_report_store4(impl);
    }
    *(_DWORD *)impl = -1;
LABEL_107:
    __asan_handle_no_return(impl);
    _Unwind_Resume(v34);
  }
  *(_DWORD *)v28 = -1;
LABEL_83:
  if ( v40 == (char *)v6 )
  {
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v6->m128i_i64[0] = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 467: range 0000000019C346B9-0000000019C34CD7
void __fastcall boost::beast::http::detail::async_write_some_impl<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream,
        boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr,
        boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *handler)
{
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *p_h; // rbp
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v8)(void); // rax
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *p_handler; // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base *list; // rax
  char v12; // al
  unsigned __int64 v13; // rdx
  struct _Unwind_Exception *v14; // rbx
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+8h] [rbp-110h] BYREF
  boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > v16; // [rsp+10h] [rbp-108h] BYREF

  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::get_executor(stream);
  v16._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>> + 2);
  v16.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                             + 2);
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&handler->h_.h_);
    goto LABEL_39;
  }
  p_h = &v16.h_.h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&v16.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    p_M_refcount = (unsigned __int64)p_h;
    __asan_report_store8();
    goto LABEL_40;
  }
  v16.h_.h_.h_.coro_._M_ptr = handler->h_.h_.coro_._M_ptr;
  p_M_refcount = (unsigned __int64)&v16.h_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v16.h_.h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_store8();
    goto LABEL_41;
  }
  v16.h_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_M_refcount);
    goto LABEL_42;
  }
  M_pi = handler->h_.h_.coro_._M_refcount._M_pi;
  handler->h_.h_.coro_._M_refcount._M_pi = 0LL;
  v16.h_.h_.h_.coro_._M_refcount._M_pi = M_pi;
  handler->h_.h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_M_refcount);
    goto LABEL_43;
  }
  p_M_refcount = (unsigned __int64)&v16.h_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&v16.h_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_store8();
    goto LABEL_44;
  }
  v16.h_.h_.h_.ca_ = handler->h_.h_.ca_;
  p_M_refcount = (unsigned __int64)&handler->h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(p_M_refcount);
LABEL_45:
    v8 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_46;
  }
  p_M_refcount = (unsigned __int64)handler->h_.h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_12;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_45;
  v8 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_46:
    p_handler = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)__asan_report_load8(v8);
    goto LABEL_47;
  }
  p_M_refcount = (*v8)();
LABEL_12:
  p_handler = &v16.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&v16.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    p_target = p_handler;
    __asan_report_store8();
    goto LABEL_48;
  }
  v16.h_.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &handler->h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(p_target);
    goto LABEL_49;
  }
  p_target = &v16.h_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&v16.h_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_store8();
    goto LABEL_50;
  }
  v16.h_.h_.h_.handler_.target_ = handler->h_.h_.handler_.target_;
  p_target = &handler->h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(p_target);
    goto LABEL_51;
  }
  p_target = &v16.h_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&v16.h_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_store8();
    goto LABEL_52;
  }
  v16.h_.h_.h_.ready_ = handler->h_.h_.ready_;
  p_target = &handler->h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(p_target);
    goto LABEL_53;
  }
  p_target = &v16.h_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&v16.h_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  v16.h_.h_.h_.ec_ = handler->h_.h_.ec_;
  p_target = &handler->h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(p_target);
    goto LABEL_55;
  }
  p_target = &v16.h_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v16.h_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  v16.h_.h_.h_.value_ = handler->h_.h_.value_;
  p_target = &handler->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_load8(p_target);
    goto LABEL_57;
  }
  v16.h_.h_.wg1_.executor_.impl_ = handler->h_.wg1_.executor_.impl_;
  handler->h_.wg1_.executor_.impl_ = 0LL;
  p_target = &handler->h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_57:
    __asan_report_load1(p_target);
    goto LABEL_58;
  }
  v16.h_.h_.wg1_.owns_ = handler->h_.wg1_.owns_;
  handler->h_.wg1_.owns_ = 0;
  v16.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                             + 2);
  p_target = &handler->h_.list_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(p_target);
    goto LABEL_59;
  }
  list = handler->h_.list_;
  handler->h_.list_ = 0LL;
  v16.h_.h_.list_ = list;
  v16.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                             + 2);
  p_target = &handler->h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    __asan_report_load8(p_target);
    goto LABEL_60;
  }
  v16.h_.h_.s_ = handler->h_.s_;
  p_target = &handler->h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(p_target);
    goto LABEL_61;
  }
  v16.h_.h_.sr_ = handler->h_.sr_;
  p_target = &handler->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_load8(p_target);
    goto LABEL_62;
  }
  v16.h_.wg1_.executor_.impl_ = handler->wg1_.executor_.impl_;
  handler->wg1_.executor_.impl_ = 0LL;
  p_target = &handler->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_62:
    __asan_report_load1(p_target);
LABEL_63:
    __asan_report_load4(p_target);
    goto LABEL_64;
  }
  v16.h_.wg1_.owns_ = handler->wg1_.owns_;
  handler->wg1_.owns_ = 0;
  p_target = &handler->boost::asio::coroutine;
  v12 = *(_BYTE *)(((unsigned __int64)&handler->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_63;
  v16.h_.value_ = handler->value_;
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> + 2);
  p_target = &handler->s_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->s_ >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(p_target);
    goto LABEL_65;
  }
  v16.h_.s_ = handler->s_;
  p_target = &handler->sr_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(p_target);
    goto LABEL_66;
  }
  v16.h_.sr_ = handler->sr_;
  p_target = &handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(p_target);
    goto LABEL_67;
  }
  v16.h_.bytes_transferred_ = handler->bytes_transferred_;
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v16.wg1_, &e);
  p_target = e.impl_;
  if ( e.impl_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    {
      v13 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
        goto LABEL_37;
      }
LABEL_68:
      v14 = (struct _Unwind_Exception *)__asan_report_load8(v13);
      boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&v16);
      __asan_handle_no_return(&v16);
      _Unwind_Resume(v14);
    }
LABEL_67:
    __asan_report_load8(p_target);
    goto LABEL_68;
  }
LABEL_37:
  v16._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                       + 2);
  v16.s_ = stream;
  v16.sr_ = sr;
  boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(&v16);
  v16._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v16.wg1_);
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>> + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v16.h_.wg1_);
  v16.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                             + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v16.h_.h_);
};

// Line 467: range 0000000019C84731-0000000019C84D68
void __fastcall boost::beast::http::detail::async_write_some_impl<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
        boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *stream,
        boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr,
        boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *handler)
{
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *p_h; // rbp
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *v4; // r12
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v9)(void); // rax
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *p_handler; // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base *list; // rax
  char v13; // al
  unsigned __int64 v14; // rdx
  struct _Unwind_Exception *v15; // rbx
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+8h] [rbp-110h] BYREF
  boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > v17; // [rsp+10h] [rbp-108h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)stream >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(stream);
    goto LABEL_40;
  }
  boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>::get_executor(&stream->p_._M_t._M_t._M_head_impl->stream_);
  v17._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  v17.h_.boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>> + 2);
  v17.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                             + 2);
  p_h = &v17.h_.h_.h_;
  v4 = &handler->h_.h_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(v4);
    goto LABEL_41;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v17.h_.h_.h_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    p_M_refcount = (unsigned __int64)p_h;
    __asan_report_store8();
    goto LABEL_42;
  }
  v17.h_.h_.h_.coro_._M_ptr = handler->h_.h_.coro_._M_ptr;
  p_M_refcount = (unsigned __int64)&v17.h_.h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v17.h_.h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  v17.h_.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(p_M_refcount);
    goto LABEL_44;
  }
  M_pi = handler->h_.h_.coro_._M_refcount._M_pi;
  handler->h_.h_.coro_._M_refcount._M_pi = 0LL;
  v17.h_.h_.h_.coro_._M_refcount._M_pi = M_pi;
  handler->h_.h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(p_M_refcount);
    goto LABEL_45;
  }
  p_M_refcount = (unsigned __int64)&v17.h_.h_.h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&v17.h_.h_.h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  v17.h_.h_.h_.ca_ = handler->h_.h_.ca_;
  p_M_refcount = (unsigned __int64)&handler->h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8(p_M_refcount);
LABEL_47:
    v9 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_48;
  }
  p_M_refcount = (unsigned __int64)handler->h_.h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_13;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_47;
  v9 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_48:
    p_handler = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)__asan_report_load8(v9);
    goto LABEL_49;
  }
  p_M_refcount = (*v9)();
LABEL_13:
  p_handler = &v17.h_.h_.h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&v17.h_.h_.h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    p_target = p_handler;
    __asan_report_store8();
    goto LABEL_50;
  }
  v17.h_.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &handler->h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(p_target);
    goto LABEL_51;
  }
  p_target = &v17.h_.h_.h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&v17.h_.h_.h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_store8();
    goto LABEL_52;
  }
  v17.h_.h_.h_.handler_.target_ = handler->h_.h_.handler_.target_;
  p_target = &handler->h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(p_target);
    goto LABEL_53;
  }
  p_target = &v17.h_.h_.h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&v17.h_.h_.h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  v17.h_.h_.h_.ready_ = handler->h_.h_.ready_;
  p_target = &handler->h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8(p_target);
    goto LABEL_55;
  }
  p_target = &v17.h_.h_.h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&v17.h_.h_.h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  v17.h_.h_.h_.ec_ = handler->h_.h_.ec_;
  p_target = &handler->h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_load8(p_target);
    goto LABEL_57;
  }
  p_target = &v17.h_.h_.h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&v17.h_.h_.h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  v17.h_.h_.h_.value_ = handler->h_.h_.value_;
  p_target = &handler->h_.wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(p_target);
    goto LABEL_59;
  }
  v17.h_.h_.wg1_.executor_.impl_ = handler->h_.wg1_.executor_.impl_;
  handler->h_.wg1_.executor_.impl_ = 0LL;
  p_target = &handler->h_.wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->h_.wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_59:
    __asan_report_load1(p_target);
    goto LABEL_60;
  }
  v17.h_.h_.wg1_.owns_ = handler->h_.wg1_.owns_;
  handler->h_.wg1_.owns_ = 0;
  v17.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                             + 2);
  p_target = &handler->h_.list_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.list_ >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(p_target);
    goto LABEL_61;
  }
  list = handler->h_.list_;
  handler->h_.list_ = 0LL;
  v17.h_.h_.list_ = list;
  v17.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                             + 2);
  p_target = &handler->h_.s_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.s_ >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_load8(p_target);
    goto LABEL_62;
  }
  v17.h_.h_.s_ = handler->h_.s_;
  p_target = &handler->h_.sr_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(p_target);
    goto LABEL_63;
  }
  v17.h_.h_.sr_ = handler->h_.sr_;
  p_target = &handler->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_target);
    goto LABEL_64;
  }
  v17.h_.wg1_.executor_.impl_ = handler->wg1_.executor_.impl_;
  handler->wg1_.executor_.impl_ = 0LL;
  p_target = &handler->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_64:
    __asan_report_load1(p_target);
LABEL_65:
    __asan_report_load4(p_target);
    goto LABEL_66;
  }
  v17.h_.wg1_.owns_ = handler->wg1_.owns_;
  handler->wg1_.owns_ = 0;
  p_target = &handler->boost::asio::coroutine;
  v13 = *(_BYTE *)(((unsigned __int64)&handler->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_65;
  v17.h_.value_ = handler->value_;
  v17.h_.boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> + 2);
  p_target = &handler->s_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->s_ >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(p_target);
    goto LABEL_67;
  }
  v17.h_.s_ = handler->s_;
  p_target = &handler->sr_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(p_target);
    goto LABEL_68;
  }
  v17.h_.sr_ = handler->sr_;
  p_target = &handler->bytes_transferred_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->bytes_transferred_ >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(p_target);
    goto LABEL_69;
  }
  v17.h_.bytes_transferred_ = handler->bytes_transferred_;
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v17.wg1_, &e);
  p_target = e.impl_;
  if ( e.impl_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    {
      v14 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
      if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
        goto LABEL_38;
      }
LABEL_70:
      v15 = (struct _Unwind_Exception *)__asan_report_load8(v14);
      boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>::~async_base(&v17);
      __asan_handle_no_return(&v17);
      _Unwind_Resume(v15);
    }
LABEL_69:
    __asan_report_load8(p_target);
    goto LABEL_70;
  }
LABEL_38:
  v17._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                       + 2);
  v17.s_ = stream;
  v17.sr_ = sr;
  boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(&v17);
  v17._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v17.wg1_);
  v17.h_.boost::beast::async_base<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>> + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v17.h_.wg1_);
  v17.h_.h_._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                             + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v17.h_.h_);
};

// Line 530: range 0000000019C34CD8-0000000019C34CE5
void __fastcall boost::beast::http::async_write_some<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream,
        boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr,
        boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *handler)
{
  boost::beast::http::detail::async_write_some_impl<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
    stream,
    sr,
    handler);
};

// Line 530: range 0000000019C84D69-0000000019C84D76
void __fastcall boost::beast::http::async_write_some<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
        boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *stream,
        boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr,
        boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *handler)
{
  boost::beast::http::detail::async_write_some_impl<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
    stream,
    sr,
    handler);
};

// Line 685: range 0000000019C353BB-0000000019C357EF
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::async_write<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream,
        boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr,
        boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *handler)
{
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *p_h; // rbp
  char v6; // al
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v9)(void); // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base *list; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi OVERLAPPED
  const boost::system::detail::system_error_category *v14; // rdx
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+8h] [rbp-E0h] BYREF
  boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > v16; // [rsp+10h] [rbp-D8h] BYREF

  v6 = *(_BYTE *)(((unsigned __int64)&sr->split_ >> 3) + 0x7FFF8000);
  if ( v6 <= (((unsigned __int8)sr - 124) & 7) && v6 )
  {
    __asan_report_store1(&sr->split_);
    goto LABEL_26;
  }
  sr->split_ = 0;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::get_executor(stream);
  v16._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>> + 2);
  p_h = &handler->h_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    p_M_refcount = (unsigned __int64)p_h;
    __asan_report_load8(p_h);
    goto LABEL_27;
  }
  v16.h_.h_.coro_._M_ptr = handler->h_.coro_._M_ptr;
  v16.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_M_refcount);
    goto LABEL_28;
  }
  M_pi = handler->h_.coro_._M_refcount._M_pi;
  handler->h_.coro_._M_refcount._M_pi = 0LL;
  v16.h_.h_.coro_._M_refcount._M_pi = M_pi;
  handler->h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_M_refcount);
    goto LABEL_29;
  }
  v16.h_.h_.ca_ = handler->h_.ca_;
  p_M_refcount = (unsigned __int64)&handler->h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_M_refcount);
LABEL_30:
    v9 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_31;
  }
  p_M_refcount = (unsigned __int64)handler->h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_11;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_30;
  v9 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_31:
    p_target = v9;
    __asan_report_load8(v9);
    goto LABEL_32;
  }
  p_M_refcount = (*v9)();
LABEL_11:
  v16.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &handler->h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_target);
    goto LABEL_33;
  }
  v16.h_.h_.handler_.target_ = handler->h_.handler_.target_;
  p_target = &handler->h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_target);
    goto LABEL_34;
  }
  v16.h_.h_.ready_ = handler->h_.ready_;
  p_target = &handler->h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_target);
    goto LABEL_35;
  }
  v16.h_.h_.ec_ = handler->h_.ec_;
  p_target = &handler->h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_target);
    goto LABEL_36;
  }
  v16.h_.h_.value_ = handler->h_.value_;
  p_target = &handler->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_target);
    goto LABEL_37;
  }
  v16.h_.wg1_.executor_.impl_ = handler->wg1_.executor_.impl_;
  handler->wg1_.executor_.impl_ = 0LL;
  p_target = &handler->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_37:
    __asan_report_load1(p_target);
    goto LABEL_38;
  }
  v16.h_.wg1_.owns_ = handler->wg1_.owns_;
  handler->wg1_.owns_ = 0;
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>> + 2);
  p_target = &handler->list_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->list_ >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_target);
    goto LABEL_39;
  }
  list = handler->list_;
  handler->list_ = 0LL;
  v16.h_.list_ = list;
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> + 2);
  p_target = &handler->s_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->s_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(p_target);
    goto LABEL_40;
  }
  v16.h_.s_ = handler->s_;
  p_target = &handler->sr_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(p_target);
    goto LABEL_41;
  }
  v16.h_.sr_ = handler->sr_;
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v16.wg1_, &e);
  p_target = e.impl_;
  if ( e.impl_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    {
      v12 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
      if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
        goto LABEL_24;
      }
LABEL_42:
      __asan_report_load8(v12);
      goto LABEL_43;
    }
LABEL_41:
    __asan_report_load8(p_target);
    goto LABEL_42;
  }
LABEL_24:
  v16.value_ = 0;
  v16._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                       + 2);
  v16.s_ = stream;
  v16.sr_ = sr;
  v16.bytes_transferred_ = 0LL;
  v13 = 0LL;
  v14 = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(
    &v16,
    *(boost::beast::error_code *)&v13,
    0LL);
LABEL_43:
  v16._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v16.wg1_);
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v16.h_);
};

// Line 685: range 0000000019C85474-0000000019C858C4
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::http::async_write<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
        boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *stream,
        boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *sr,
        boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *handler)
{
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *p_h; // rbp
  char v6; // al
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v9)(void); // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base *list; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi OVERLAPPED
  const boost::system::detail::system_error_category *v14; // rdx
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+8h] [rbp-E0h] BYREF
  boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > v16; // [rsp+10h] [rbp-D8h] BYREF

  v6 = *(_BYTE *)(((unsigned __int64)&sr->split_ >> 3) + 0x7FFF8000);
  if ( v6 <= (((unsigned __int8)sr - 124) & 7) && v6 )
  {
    __asan_report_store1(&sr->split_);
    goto LABEL_27;
  }
  sr->split_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)stream >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(stream);
    goto LABEL_28;
  }
  boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>::get_executor(&stream->p_._M_t._M_t._M_head_impl->stream_);
  v16._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>> + 2);
  p_h = &handler->h_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    p_M_refcount = (unsigned __int64)p_h;
    __asan_report_load8(p_h);
    goto LABEL_29;
  }
  v16.h_.h_.coro_._M_ptr = handler->h_.coro_._M_ptr;
  v16.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_M_refcount);
    goto LABEL_30;
  }
  M_pi = handler->h_.coro_._M_refcount._M_pi;
  handler->h_.coro_._M_refcount._M_pi = 0LL;
  v16.h_.h_.coro_._M_refcount._M_pi = M_pi;
  handler->h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_M_refcount);
    goto LABEL_31;
  }
  v16.h_.h_.ca_ = handler->h_.ca_;
  p_M_refcount = (unsigned __int64)&handler->h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(p_M_refcount);
LABEL_32:
    v9 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_33;
  }
  p_M_refcount = (unsigned __int64)handler->h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_12;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_32;
  v9 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_33:
    p_target = v9;
    __asan_report_load8(v9);
    goto LABEL_34;
  }
  p_M_refcount = (*v9)();
LABEL_12:
  v16.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &handler->h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_target);
    goto LABEL_35;
  }
  v16.h_.h_.handler_.target_ = handler->h_.handler_.target_;
  p_target = &handler->h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_target);
    goto LABEL_36;
  }
  v16.h_.h_.ready_ = handler->h_.ready_;
  p_target = &handler->h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_target);
    goto LABEL_37;
  }
  v16.h_.h_.ec_ = handler->h_.ec_;
  p_target = &handler->h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_target);
    goto LABEL_38;
  }
  v16.h_.h_.value_ = handler->h_.value_;
  p_target = &handler->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(p_target);
    goto LABEL_39;
  }
  v16.h_.wg1_.executor_.impl_ = handler->wg1_.executor_.impl_;
  handler->wg1_.executor_.impl_ = 0LL;
  p_target = &handler->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_39:
    __asan_report_load1(p_target);
    goto LABEL_40;
  }
  v16.h_.wg1_.owns_ = handler->wg1_.owns_;
  handler->wg1_.owns_ = 0;
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>> + 2);
  p_target = &handler->list_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->list_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(p_target);
    goto LABEL_41;
  }
  list = handler->list_;
  handler->list_ = 0LL;
  v16.h_.list_ = list;
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> + 2);
  p_target = &handler->s_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->s_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_target);
    goto LABEL_42;
  }
  v16.h_.s_ = handler->s_;
  p_target = &handler->sr_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->sr_ >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(p_target);
    goto LABEL_43;
  }
  v16.h_.sr_ = handler->sr_;
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v16.wg1_, &e);
  p_target = e.impl_;
  if ( e.impl_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    {
      v12 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
      if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
        goto LABEL_25;
      }
LABEL_44:
      __asan_report_load8(v12);
      goto LABEL_45;
    }
LABEL_43:
    __asan_report_load8(p_target);
    goto LABEL_44;
  }
LABEL_25:
  v16.value_ = 0;
  v16._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                       + 2);
  v16.s_ = stream;
  v16.sr_ = sr;
  v16.bytes_transferred_ = 0LL;
  v13 = 0LL;
  v14 = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::operator()(
    &v16,
    *(boost::beast::error_code *)&v13,
    0LL);
LABEL_45:
  v16._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v16.wg1_);
  v16.h_.boost::beast::async_base<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v16.h_);
};

// Line 836: range 0000000019C357F4-0000000019C35B2A
std::enable_if<true,long unsigned int>::type __fastcall boost::beast::http::async_write<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream,
        const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *msg,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *handler)
{
  unsigned __int64 v5; // rbp
  char *v6; // rbx
  _DWORD *v7; // r12
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rax
  unsigned __int64 v9; // rdi
  __int64 (**v10)(void); // rax
  const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v11; // rdx
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v13; // rdx
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v14; // rax
  __int64 v15; // rax
  std::enable_if<true,long unsigned int>::type v16; // r13
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // rdi
  struct _Unwind_Exception *v21; // rbp
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+18h] [rbp-170h] BYREF
  boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > base; // [rsp+20h] [rbp-168h] BYREF
  char v24[248]; // [rsp+90h] [rbp-F8h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_2(192LL);
    if ( v15 )
      v5 = v15;
  }
  v6 = (char *)(v5 + 192);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 120 10 completion";
  *(_QWORD *)(v5 + 16) = boost::beast::http::async_write<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  boost::asio::async_completion<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void ()(boost::system::error_code,unsigned long)>::async_completion(
    (boost::asio::async_completion<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,void(boost::system::error_code,long unsigned int)> *const)(v5 + 32),
    handler);
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::get_executor(stream);
  base._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                        + 2);
  base.h_.coro_._M_ptr = *(std::__shared_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 32);
  v8 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = 0LL;
  base.h_.coro_._M_refcount._M_pi = v8;
  *(_QWORD *)(v5 + 32) = 0LL;
  base.h_.ca_ = *(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type **)(v5 + 48);
  v9 = *(_QWORD *)(v5 + 56);
  if ( v9 )
  {
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      v10 = (__int64 (**)(void))__asan_report_load8(v9);
    }
    else
    {
      v10 = *(__int64 (***)(void))v9;
      if ( !*(_BYTE *)((*(_QWORD *)v9 >> 3) + 0x7FFF8000LL) )
      {
        v9 = (*v10)();
        goto LABEL_6;
      }
    }
    impl = (boost::asio::executor::impl_base *)v10;
    __asan_report_load8(v10);
LABEL_15:
    __asan_report_load8(impl);
    goto LABEL_16;
  }
LABEL_6:
  base.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)v9;
  base.h_.handler_.target_ = *(void (**)(void))(v5 + 64);
  base.h_.ready_ = *(boost::asio::detail::atomic_count **)(v5 + 72);
  base.h_.ec_ = *(boost::system::error_code **)(v5 + 80);
  base.h_.value_ = *(unsigned __int64 **)(v5 + 88);
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&base.wg1_, &e);
  base._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                        + 2);
  base.list_ = 0LL;
  impl = e.impl_;
  if ( !e.impl_ )
  {
LABEL_10:
    base._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                          + 2);
    base.s_ = stream;
    v14 = boost::beast::allocate_stable<boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>,boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> const&>(
            &base,
            msg,
            v11);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_15;
  v13 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
  if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
    goto LABEL_10;
  }
LABEL_16:
  v14 = (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)__asan_report_load8(v13);
LABEL_17:
  base.sr_ = v14;
  boost::beast::http::async_write<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
    base.s_,
    v14,
    &base);
  base._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                        + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&base);
  v16 = boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>::get((boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *const)(v5 + 96));
  v17 = *(_QWORD *)(v5 + 56);
  if ( !v17 )
    goto LABEL_21;
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v17);
LABEL_27:
    v21 = (struct _Unwind_Exception *)__asan_report_load8(v18);
    boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *const)(v6 - 160));
    __asan_handle_no_return(v6 - 160);
    _Unwind_Resume(v21);
  }
  v18 = *(_QWORD *)v17 + 8LL;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    goto LABEL_27;
  (*(void (**)(void))(*(_QWORD *)v17 + 8LL))();
LABEL_21:
  v19 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 40);
  if ( v19 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v19);
  if ( v24 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v16;
};

// Line 836: range 0000000019C858C9-0000000019C85C14
std::enable_if<true,long unsigned int>::type __fastcall boost::beast::http::async_write<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
        boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *stream,
        const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *msg,
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *handler)
{
  boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *v3; // r12
  unsigned __int64 v5; // rbp
  char *v6; // rbx
  _DWORD *v7; // r13
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v8; // rax
  boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *M_head_impl; // rax
  const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v10; // rdx
  boost::asio::executor::impl_base *impl; // rdi
  unsigned __int64 v12; // rdx
  boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *v13; // rax
  __int64 v14; // rax
  std::enable_if<true,long unsigned int>::type v15; // r12
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rdi
  struct _Unwind_Exception *v20; // rbp
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+18h] [rbp-170h] BYREF
  boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > base; // [rsp+20h] [rbp-168h] BYREF
  char v23[248]; // [rsp+90h] [rbp-F8h] BYREF

  v3 = stream;
  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_2(192LL);
    if ( v14 )
      v5 = v14;
  }
  v6 = (char *)(v5 + 192);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 120 10 completion";
  *(_QWORD *)(v5 + 16) = boost::beast::http::async_write<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  boost::asio::async_completion<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void ()(boost::system::error_code,unsigned long)>::async_completion(
    (boost::asio::async_completion<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,void(boost::system::error_code,long unsigned int)> *const)(v5 + 32),
    handler);
  if ( *(_BYTE *)(((unsigned __int64)stream >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(stream);
LABEL_15:
    M_head_impl = (boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *)__asan_report_load8(stream);
    goto LABEL_16;
  }
  boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>::get_executor(&stream->p_._M_t._M_t._M_head_impl->stream_);
  base._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                        + 2);
  base.h_.coro_._M_ptr = *(std::__shared_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 32);
  v8 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = 0LL;
  base.h_.coro_._M_refcount._M_pi = v8;
  *(_QWORD *)(v5 + 32) = 0LL;
  base.h_.ca_ = *(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type **)(v5 + 48);
  stream = *(boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > **)(v5 + 56);
  if ( !stream )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)stream >> 3) + 0x7FFF8000) )
    goto LABEL_15;
  M_head_impl = stream->p_._M_t._M_t._M_head_impl;
  if ( *(_BYTE *)(((unsigned __int64)stream->p_._M_t._M_t._M_head_impl >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    impl = (boost::asio::executor::impl_base *)M_head_impl;
    __asan_report_load8(M_head_impl);
LABEL_17:
    __asan_report_load8(impl);
    goto LABEL_18;
  }
  stream = (boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)((__int64 (*)(void))M_head_impl->stream_.next_layer_.impl_.px)();
LABEL_7:
  base.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)stream;
  base.h_.handler_.target_ = *(void (**)(void))(v5 + 64);
  base.h_.ready_ = *(boost::asio::detail::atomic_count **)(v5 + 72);
  base.h_.ec_ = *(boost::system::error_code **)(v5 + 80);
  base.h_.value_ = *(unsigned __int64 **)(v5 + 88);
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&base.wg1_, &e);
  base._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>
                                        + 2);
  base.list_ = 0LL;
  impl = e.impl_;
  if ( !e.impl_ )
  {
LABEL_11:
    base._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                          + 2);
    base.s_ = v3;
    v13 = boost::beast::allocate_stable<boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>,boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>> const&>(
            &base,
            msg,
            v10);
    goto LABEL_19;
  }
  if ( *(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v12 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
  if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
    (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
    goto LABEL_11;
  }
LABEL_18:
  v13 = (boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)__asan_report_load8(v12);
LABEL_19:
  base.sr_ = v13;
  boost::beast::http::async_write<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>(
    base.s_,
    v13,
    &base);
  base._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>
                                        + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&base);
  v15 = boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>::get((boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *const)(v5 + 96));
  v16 = *(_QWORD *)(v5 + 56);
  if ( !v16 )
    goto LABEL_23;
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v16);
LABEL_29:
    v20 = (struct _Unwind_Exception *)__asan_report_load8(v17);
    boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *const)(v6 - 160));
    __asan_handle_no_return(v6 - 160);
    _Unwind_Resume(v20);
  }
  v17 = *(_QWORD *)v16 + 8LL;
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    goto LABEL_29;
  (*(void (**)(void))(*(_QWORD *)v16 + 8LL))();
LABEL_23:
  v18 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 40);
  if ( v18 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v18);
  if ( v23 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};
