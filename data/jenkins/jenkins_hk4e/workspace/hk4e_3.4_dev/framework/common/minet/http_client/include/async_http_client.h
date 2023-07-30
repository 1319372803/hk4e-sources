// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/http_client/include/async_http_client.h

// Line 107: range 000000000CC4CE76-000000000CC4D608
void __fastcall common::minet::http_client::SslClient::~SslClient(common::minet::http_client::SslClient *const this)
{
  unsigned __int64 *p_pending_write; // rbp
  unsigned __int64 p_implementation; // rsi
  unsigned __int64 p_core; // r14
  boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *M_head_impl; // r15
  common::minet::http_client::SslClient *v5; // rbx
  unsigned __int64 v6; // r13
  std::_Vector_base<unsigned char>::pointer M_start; // rdi
  std::_Vector_base<unsigned char>::pointer v8; // rdi
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *service; // rdi
  unsigned __int64 p_implementation_executor; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rdi
  void (__fastcall *v15)(_QWORD, unsigned __int64, unsigned __int64, _QWORD); // rax
  boost::asio::ssl::context::native_handle_type v16; // rax
  unsigned __int64 p_ssl_ctx; // rbp
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  boost::asio::ssl::detail::openssl_init<true> *v22; // rdi
  void (__fastcall *v23)(_QWORD, unsigned __int64, unsigned __int64, _QWORD); // rax
  boost::asio::ssl::context::native_handle_type v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 default_passwd_cb_userdata; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  unsigned __int64 v37; // [rsp+18h] [rbp-80h]
  char v38[120]; // [rsp+20h] [rbp-78h] BYREF

  v5 = this;
  v6 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v6 = v12;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 2 ec";
  *(_QWORD *)(v6 + 16) = common::minet::http_client::SslClient::~SslClient;
  v37 = v6 >> 3;
  *(_DWORD *)(v37 + 2147450880) = -235802127;
  *(_DWORD *)(v37 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_21;
  }
  this->_vptr_HttpClient = (int (**)(...))(&`vtable for'common::minet::http_client::SslClient + 2);
  this = (common::minet::http_client::SslClient *const)((char *)this + 728);
  if ( *(_BYTE *)(((unsigned __int64)&v5->ssl_stream_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(this);
LABEL_22:
    __asan_report_load8(this);
LABEL_23:
    __asan_report_load8(this);
LABEL_24:
    p_implementation_executor = (unsigned __int64)p_pending_write;
    __asan_report_load8(p_pending_write);
    goto LABEL_25;
  }
  M_head_impl = v5->ssl_stream_.p_._M_t._M_t._M_head_impl;
  if ( !M_head_impl )
    goto LABEL_75;
  boost::beast::basic_flat_buffer<std::allocator<char>>::~basic_flat_buffer(&M_head_impl->buffer_);
  p_core = (unsigned __int64)&M_head_impl->stream_.core_;
  this = (common::minet::http_client::SslClient *const)&M_head_impl->stream_.core_.input_buffer_space_;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->stream_.core_.input_buffer_space_ >> 3) + 0x7FFF8000) )
    goto LABEL_22;
  M_start = M_head_impl->stream_.core_.input_buffer_space_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  this = (common::minet::http_client::SslClient *const)&M_head_impl->stream_.core_.output_buffer_space_;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->stream_.core_.output_buffer_space_ >> 3) + 0x7FFF8000) )
    goto LABEL_23;
  v8 = M_head_impl->stream_.core_.output_buffer_space_._M_impl._M_start;
  if ( v8 )
    operator delete(v8);
  p_pending_write = (unsigned __int64 *)&M_head_impl->stream_.core_.pending_write_;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->stream_.core_.pending_write_ >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  service = M_head_impl->stream_.core_.pending_write_.impl_.service_;
  p_implementation = (unsigned __int64)&M_head_impl->stream_.core_.pending_write_.impl_.implementation_;
  *(_DWORD *)(v6 + 32) = 0;
  *(_BYTE *)(v6 + 36) = 0;
  *(_QWORD *)(v6 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    service,
    &M_head_impl->stream_.core_.pending_write_.impl_.implementation_,
    (boost::system::error_code *)(v6 + 32));
  p_implementation_executor = (unsigned __int64)&M_head_impl->stream_.core_.pending_write_.impl_.implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->stream_.core_.pending_write_.impl_.implementation_executor_ >> 3)
                + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_implementation_executor);
    goto LABEL_26;
  }
  p_implementation_executor = (unsigned __int64)M_head_impl->stream_.core_.pending_write_.impl_.implementation_executor_.executor_.impl_;
  if ( p_implementation_executor )
  {
    if ( !*(_BYTE *)((p_implementation_executor >> 3) + 0x7FFF8000) )
    {
      v11 = *(_QWORD *)p_implementation_executor + 8LL;
      if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)p_implementation_executor + 8LL))();
        goto LABEL_17;
      }
LABEL_27:
      v13 = v11;
      __asan_report_load8(v11);
      goto LABEL_28;
    }
LABEL_26:
    __asan_report_load8(p_implementation_executor);
    goto LABEL_27;
  }
LABEL_17:
  p_pending_write = (unsigned __int64 *)&M_head_impl->stream_.core_.pending_write_.impl_.implementation_.timer_data;
  while ( 1 )
  {
    v13 = (unsigned __int64)p_pending_write;
    if ( *(_BYTE *)(((unsigned __int64)p_pending_write >> 3) + 0x7FFF8000) )
    {
LABEL_28:
      __asan_report_load8(v13);
LABEL_29:
      __asan_report_load8(v13);
LABEL_30:
      p_pending_write[1] = 0LL;
      goto LABEL_31;
    }
    p_implementation = *p_pending_write;
    if ( !*p_pending_write )
      goto LABEL_40;
    v13 = *p_pending_write;
    if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
      goto LABEL_29;
    v16 = *(boost::asio::ssl::context::native_handle_type *)p_implementation;
    *p_pending_write = *(_QWORD *)p_implementation;
    if ( !v16 )
      break;
LABEL_31:
    *(_QWORD *)p_implementation = 0LL;
    v14 = (unsigned __int64 *)(p_implementation + 8);
    if ( *(_BYTE *)(((p_implementation + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_39;
    v15 = *(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, _QWORD))(p_implementation + 8);
    *(_DWORD *)(v6 + 32) = 0;
    *(_BYTE *)(v6 + 36) = 0;
    *(_QWORD *)(v6 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    v15(0LL, p_implementation, v6 + 32, 0LL);
  }
  v14 = p_pending_write + 1;
  if ( !*(_BYTE *)(((unsigned __int64)(p_pending_write + 1) >> 3) + 0x7FFF8000) )
    goto LABEL_30;
  __asan_report_store8();
LABEL_39:
  __asan_report_load8(v14);
LABEL_40:
  p_ssl_ctx = p_core + 16;
  if ( *(_BYTE *)(((p_core + 16) >> 3) + 0x7FFF8000) )
  {
    v19 = p_core + 16;
    __asan_report_load8(p_core + 16);
    goto LABEL_48;
  }
  v18 = *(boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > **)(p_core + 16);
  p_implementation = p_core + 24;
  *(_DWORD *)(v6 + 32) = 0;
  *(_BYTE *)(v6 + 36) = 0;
  *(_QWORD *)(v6 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    v18,
    (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *)(p_core + 24),
    (boost::system::error_code *)(v6 + 32));
  v19 = p_core + 80;
  if ( *(_BYTE *)(((p_core + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(v19);
LABEL_49:
    __asan_report_load8(v19);
    goto LABEL_50;
  }
  v19 = *(_QWORD *)(p_core + 80);
  if ( !v19 )
    goto LABEL_46;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_49;
  v20 = *(_QWORD *)v19 + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    v21 = v20;
    __asan_report_load8(v20);
    goto LABEL_51;
  }
  (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
LABEL_46:
  p_ssl_ctx = p_core + 40;
  while ( 2 )
  {
    v21 = p_ssl_ctx;
    if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    {
LABEL_51:
      __asan_report_load8(v21);
LABEL_52:
      __asan_report_load8(v21);
      goto LABEL_53;
    }
    p_implementation = *(_QWORD *)p_ssl_ctx;
    if ( !*(_QWORD *)p_ssl_ctx )
      goto LABEL_63;
    v21 = *(_QWORD *)p_ssl_ctx;
    if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
      goto LABEL_52;
    v24 = *(boost::asio::ssl::context::native_handle_type *)p_implementation;
    *(_QWORD *)p_ssl_ctx = *(_QWORD *)p_implementation;
    if ( v24 )
      goto LABEL_54;
    v22 = (boost::asio::ssl::detail::openssl_init<true> *)(p_ssl_ctx + 8);
    if ( !*(_BYTE *)(((p_ssl_ctx + 8) >> 3) + 0x7FFF8000) )
    {
LABEL_53:
      *(_QWORD *)(p_ssl_ctx + 8) = 0LL;
LABEL_54:
      *(_QWORD *)p_implementation = 0LL;
      v22 = (boost::asio::ssl::detail::openssl_init<true> *)(p_implementation + 8);
      if ( *(_BYTE *)(((p_implementation + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_62;
      v23 = *(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, _QWORD))(p_implementation + 8);
      *(_DWORD *)(v6 + 32) = 0;
      *(_BYTE *)(v6 + 36) = 0;
      *(_QWORD *)(v6 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
      v23(0LL, p_implementation, v6 + 32, 0LL);
      continue;
    }
    break;
  }
  __asan_report_store8();
LABEL_62:
  __asan_report_load8(v22);
LABEL_63:
  if ( *(_BYTE *)((p_core >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_core);
LABEL_99:
    v26 = p_core;
    __asan_report_load8(p_core);
LABEL_100:
    __asan_report_load8(v26);
    goto LABEL_101;
  }
  if ( !SSL_get_ex_data(M_head_impl->stream_.core_.engine_.ssl_, 0LL) )
    goto LABEL_72;
  if ( *(_BYTE *)((p_core >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  v25 = SSL_get_ex_data(M_head_impl->stream_.core_.engine_.ssl_, 0LL);
  v26 = v25;
  if ( !v25 )
    goto LABEL_70;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_100;
  v27 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(v27);
LABEL_102:
    v28 = p_core;
    __asan_report_load8(p_core);
LABEL_103:
    __asan_report_load8(v28);
    goto LABEL_104;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_70:
  if ( *(_BYTE *)((p_core >> 3) + 0x7FFF8000) )
    goto LABEL_102;
  SSL_set_ex_data(M_head_impl->stream_.core_.engine_.ssl_, 0LL, 0LL);
LABEL_72:
  v28 = p_core + 8;
  if ( *(_BYTE *)(((p_core + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  BIO_free(*(_QWORD *)(p_core + 8));
  if ( *(_BYTE *)((p_core >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_load8(p_core);
LABEL_105:
    v30 = p_ssl_ctx;
    __asan_report_load8(p_ssl_ctx);
LABEL_106:
    __asan_report_load8(v30);
    goto LABEL_107;
  }
  SSL_free(M_head_impl->stream_.core_.engine_.ssl_);
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::~basic_stream(&M_head_impl->stream_.next_layer_);
  operator delete(M_head_impl, 0x150uLL);
LABEL_75:
  p_ssl_ctx = (unsigned __int64)&v5->ssl_ctx_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->ssl_ctx_ >> 3) + 0x7FFF8000) )
    goto LABEL_105;
  if ( !v5->ssl_ctx_.handle_ )
    goto LABEL_93;
  default_passwd_cb_userdata = SSL_CTX_get_default_passwd_cb_userdata();
  v30 = default_passwd_cb_userdata;
  if ( !default_passwd_cb_userdata )
    goto LABEL_82;
  if ( *(_BYTE *)((default_passwd_cb_userdata >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  v31 = *(_QWORD *)default_passwd_cb_userdata + 8LL;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_load8(v31);
    goto LABEL_108;
  }
  (*(void (**)(void))(*(_QWORD *)default_passwd_cb_userdata + 8LL))();
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load8(p_ssl_ctx);
LABEL_109:
    __asan_report_load8(p_ssl_ctx);
LABEL_110:
    v33 = p_ssl_ctx;
    __asan_report_load8(p_ssl_ctx);
LABEL_111:
    __asan_report_load8(v33);
    goto LABEL_112;
  }
  SSL_CTX_set_default_passwd_cb_userdata(v5->ssl_ctx_.handle_, 0LL);
LABEL_82:
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    goto LABEL_109;
  if ( !SSL_CTX_get_ex_data(v5->ssl_ctx_.handle_, 0LL) )
    goto LABEL_91;
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    goto LABEL_110;
  v32 = SSL_CTX_get_ex_data(v5->ssl_ctx_.handle_, 0LL);
  v33 = v32;
  if ( !v32 )
    goto LABEL_89;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
    goto LABEL_111;
  v34 = *(_QWORD *)v32 + 8LL;
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
  {
LABEL_112:
    __asan_report_load8(v34);
LABEL_113:
    __asan_report_load8(p_ssl_ctx);
LABEL_114:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_ssl_ctx;
    __asan_report_load8(p_ssl_ctx);
LABEL_115:
    __asan_report_load8(p_M_refcount);
    goto LABEL_116;
  }
  (*(void (**)(void))(*(_QWORD *)v32 + 8LL))();
LABEL_89:
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    goto LABEL_113;
  SSL_CTX_set_ex_data(v5->ssl_ctx_.handle_, 0LL, 0LL);
LABEL_91:
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    goto LABEL_114;
  SSL_CTX_free(v5->ssl_ctx_.handle_);
LABEL_93:
  p_M_refcount = &v5->ssl_ctx_.init_.ref_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v5->ssl_ctx_.init_.ref_._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_115;
  M_pi = v5->ssl_ctx_.init_.ref_._M_refcount._M_pi;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  common::minet::http_client::HttpClient::~HttpClient(v5);
  if ( v38 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_116:
  *(_QWORD *)v6 = 1172321806LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 107: range 000000000CC4D60E-000000000CC4DDAD
void __fastcall common::minet::http_client::SslClient::~SslClient(common::minet::http_client::SslClient *const this)
{
  unsigned __int64 *p_pending_write; // rbp
  unsigned __int64 p_implementation; // rsi
  unsigned __int64 p_core; // r14
  boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *M_head_impl; // r15
  common::minet::http_client::SslClient *v5; // rbx
  unsigned __int64 v6; // r13
  std::_Vector_base<unsigned char>::pointer M_start; // rdi
  std::_Vector_base<unsigned char>::pointer v8; // rdi
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *service; // rdi
  unsigned __int64 p_implementation_executor; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rdi
  void (__fastcall *v15)(_QWORD, unsigned __int64, unsigned __int64, _QWORD); // rax
  boost::asio::ssl::context::native_handle_type v16; // rax
  unsigned __int64 p_ssl_ctx; // rbp
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > *v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  boost::asio::ssl::detail::openssl_init<true> *v22; // rdi
  void (__fastcall *v23)(_QWORD, unsigned __int64, unsigned __int64, _QWORD); // rax
  boost::asio::ssl::context::native_handle_type v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 default_passwd_cb_userdata; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  unsigned __int64 v37; // [rsp+18h] [rbp-80h]
  char v38[120]; // [rsp+20h] [rbp-78h] BYREF

  v5 = this;
  v6 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_0(64LL);
    if ( v12 )
      v6 = v12;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 2 ec";
  *(_QWORD *)(v6 + 16) = common::minet::http_client::SslClient::~SslClient;
  v37 = v6 >> 3;
  *(_DWORD *)(v37 + 2147450880) = -235802127;
  *(_DWORD *)(v37 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_21;
  }
  this->_vptr_HttpClient = (int (**)(...))(&`vtable for'common::minet::http_client::SslClient + 2);
  this = (common::minet::http_client::SslClient *const)((char *)this + 728);
  if ( *(_BYTE *)(((unsigned __int64)&v5->ssl_stream_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(this);
LABEL_22:
    __asan_report_load8(this);
LABEL_23:
    __asan_report_load8(this);
LABEL_24:
    p_implementation_executor = (unsigned __int64)p_pending_write;
    __asan_report_load8(p_pending_write);
    goto LABEL_25;
  }
  M_head_impl = v5->ssl_stream_.p_._M_t._M_t._M_head_impl;
  if ( !M_head_impl )
    goto LABEL_75;
  boost::beast::basic_flat_buffer<std::allocator<char>>::~basic_flat_buffer(&M_head_impl->buffer_);
  p_core = (unsigned __int64)&M_head_impl->stream_.core_;
  this = (common::minet::http_client::SslClient *const)&M_head_impl->stream_.core_.input_buffer_space_;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->stream_.core_.input_buffer_space_ >> 3) + 0x7FFF8000) )
    goto LABEL_22;
  M_start = M_head_impl->stream_.core_.input_buffer_space_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  this = (common::minet::http_client::SslClient *const)&M_head_impl->stream_.core_.output_buffer_space_;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->stream_.core_.output_buffer_space_ >> 3) + 0x7FFF8000) )
    goto LABEL_23;
  v8 = M_head_impl->stream_.core_.output_buffer_space_._M_impl._M_start;
  if ( v8 )
    operator delete(v8);
  p_pending_write = (unsigned __int64 *)&M_head_impl->stream_.core_.pending_write_;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->stream_.core_.pending_write_ >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  service = M_head_impl->stream_.core_.pending_write_.impl_.service_;
  p_implementation = (unsigned __int64)&M_head_impl->stream_.core_.pending_write_.impl_.implementation_;
  *(_DWORD *)(v6 + 32) = 0;
  *(_BYTE *)(v6 + 36) = 0;
  *(_QWORD *)(v6 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    service,
    &M_head_impl->stream_.core_.pending_write_.impl_.implementation_,
    (boost::system::error_code *)(v6 + 32));
  p_implementation_executor = (unsigned __int64)&M_head_impl->stream_.core_.pending_write_.impl_.implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->stream_.core_.pending_write_.impl_.implementation_executor_ >> 3)
                + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_implementation_executor);
    goto LABEL_26;
  }
  p_implementation_executor = (unsigned __int64)M_head_impl->stream_.core_.pending_write_.impl_.implementation_executor_.executor_.impl_;
  if ( p_implementation_executor )
  {
    if ( !*(_BYTE *)((p_implementation_executor >> 3) + 0x7FFF8000) )
    {
      v11 = *(_QWORD *)p_implementation_executor + 8LL;
      if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)p_implementation_executor + 8LL))();
        goto LABEL_17;
      }
LABEL_27:
      v13 = v11;
      __asan_report_load8(v11);
      goto LABEL_28;
    }
LABEL_26:
    __asan_report_load8(p_implementation_executor);
    goto LABEL_27;
  }
LABEL_17:
  p_pending_write = (unsigned __int64 *)&M_head_impl->stream_.core_.pending_write_.impl_.implementation_.timer_data;
  while ( 1 )
  {
    v13 = (unsigned __int64)p_pending_write;
    if ( *(_BYTE *)(((unsigned __int64)p_pending_write >> 3) + 0x7FFF8000) )
    {
LABEL_28:
      __asan_report_load8(v13);
LABEL_29:
      __asan_report_load8(v13);
LABEL_30:
      p_pending_write[1] = 0LL;
      goto LABEL_31;
    }
    p_implementation = *p_pending_write;
    if ( !*p_pending_write )
      goto LABEL_40;
    v13 = *p_pending_write;
    if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
      goto LABEL_29;
    v16 = *(boost::asio::ssl::context::native_handle_type *)p_implementation;
    *p_pending_write = *(_QWORD *)p_implementation;
    if ( !v16 )
      break;
LABEL_31:
    *(_QWORD *)p_implementation = 0LL;
    v14 = (unsigned __int64 *)(p_implementation + 8);
    if ( *(_BYTE *)(((p_implementation + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_39;
    v15 = *(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, _QWORD))(p_implementation + 8);
    *(_DWORD *)(v6 + 32) = 0;
    *(_BYTE *)(v6 + 36) = 0;
    *(_QWORD *)(v6 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    v15(0LL, p_implementation, v6 + 32, 0LL);
  }
  v14 = p_pending_write + 1;
  if ( !*(_BYTE *)(((unsigned __int64)(p_pending_write + 1) >> 3) + 0x7FFF8000) )
    goto LABEL_30;
  __asan_report_store8();
LABEL_39:
  __asan_report_load8(v14);
LABEL_40:
  p_ssl_ctx = p_core + 16;
  if ( *(_BYTE *)(((p_core + 16) >> 3) + 0x7FFF8000) )
  {
    v19 = p_core + 16;
    __asan_report_load8(p_core + 16);
    goto LABEL_48;
  }
  v18 = *(boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> > **)(p_core + 16);
  p_implementation = p_core + 24;
  *(_DWORD *)(v6 + 32) = 0;
  *(_BYTE *)(v6 + 36) = 0;
  *(_QWORD *)(v6 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    v18,
    (boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >::implementation_type *)(p_core + 24),
    (boost::system::error_code *)(v6 + 32));
  v19 = p_core + 80;
  if ( *(_BYTE *)(((p_core + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(v19);
LABEL_49:
    __asan_report_load8(v19);
    goto LABEL_50;
  }
  v19 = *(_QWORD *)(p_core + 80);
  if ( !v19 )
    goto LABEL_46;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    goto LABEL_49;
  v20 = *(_QWORD *)v19 + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    v21 = v20;
    __asan_report_load8(v20);
    goto LABEL_51;
  }
  (*(void (**)(void))(*(_QWORD *)v19 + 8LL))();
LABEL_46:
  p_ssl_ctx = p_core + 40;
  while ( 2 )
  {
    v21 = p_ssl_ctx;
    if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    {
LABEL_51:
      __asan_report_load8(v21);
LABEL_52:
      __asan_report_load8(v21);
      goto LABEL_53;
    }
    p_implementation = *(_QWORD *)p_ssl_ctx;
    if ( !*(_QWORD *)p_ssl_ctx )
      goto LABEL_63;
    v21 = *(_QWORD *)p_ssl_ctx;
    if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
      goto LABEL_52;
    v24 = *(boost::asio::ssl::context::native_handle_type *)p_implementation;
    *(_QWORD *)p_ssl_ctx = *(_QWORD *)p_implementation;
    if ( v24 )
      goto LABEL_54;
    v22 = (boost::asio::ssl::detail::openssl_init<true> *)(p_ssl_ctx + 8);
    if ( !*(_BYTE *)(((p_ssl_ctx + 8) >> 3) + 0x7FFF8000) )
    {
LABEL_53:
      *(_QWORD *)(p_ssl_ctx + 8) = 0LL;
LABEL_54:
      *(_QWORD *)p_implementation = 0LL;
      v22 = (boost::asio::ssl::detail::openssl_init<true> *)(p_implementation + 8);
      if ( *(_BYTE *)(((p_implementation + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_62;
      v23 = *(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, _QWORD))(p_implementation + 8);
      *(_DWORD *)(v6 + 32) = 0;
      *(_BYTE *)(v6 + 36) = 0;
      *(_QWORD *)(v6 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
      v23(0LL, p_implementation, v6 + 32, 0LL);
      continue;
    }
    break;
  }
  __asan_report_store8();
LABEL_62:
  __asan_report_load8(v22);
LABEL_63:
  if ( *(_BYTE *)((p_core >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_core);
LABEL_99:
    v26 = p_core;
    __asan_report_load8(p_core);
LABEL_100:
    __asan_report_load8(v26);
    goto LABEL_101;
  }
  if ( !SSL_get_ex_data(M_head_impl->stream_.core_.engine_.ssl_, 0LL) )
    goto LABEL_72;
  if ( *(_BYTE *)((p_core >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  v25 = SSL_get_ex_data(M_head_impl->stream_.core_.engine_.ssl_, 0LL);
  v26 = v25;
  if ( !v25 )
    goto LABEL_70;
  if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
    goto LABEL_100;
  v27 = *(_QWORD *)v25 + 8LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(v27);
LABEL_102:
    v28 = p_core;
    __asan_report_load8(p_core);
LABEL_103:
    __asan_report_load8(v28);
    goto LABEL_104;
  }
  (*(void (**)(void))(*(_QWORD *)v25 + 8LL))();
LABEL_70:
  if ( *(_BYTE *)((p_core >> 3) + 0x7FFF8000) )
    goto LABEL_102;
  SSL_set_ex_data(M_head_impl->stream_.core_.engine_.ssl_, 0LL, 0LL);
LABEL_72:
  v28 = p_core + 8;
  if ( *(_BYTE *)(((p_core + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  BIO_free(*(_QWORD *)(p_core + 8));
  if ( *(_BYTE *)((p_core >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_load8(p_core);
LABEL_105:
    v30 = p_ssl_ctx;
    __asan_report_load8(p_ssl_ctx);
LABEL_106:
    __asan_report_load8(v30);
    goto LABEL_107;
  }
  SSL_free(M_head_impl->stream_.core_.engine_.ssl_);
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::~basic_stream(&M_head_impl->stream_.next_layer_);
  operator delete(M_head_impl, 0x150uLL);
LABEL_75:
  p_ssl_ctx = (unsigned __int64)&v5->ssl_ctx_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->ssl_ctx_ >> 3) + 0x7FFF8000) )
    goto LABEL_105;
  if ( !v5->ssl_ctx_.handle_ )
    goto LABEL_93;
  default_passwd_cb_userdata = SSL_CTX_get_default_passwd_cb_userdata();
  v30 = default_passwd_cb_userdata;
  if ( !default_passwd_cb_userdata )
    goto LABEL_82;
  if ( *(_BYTE *)((default_passwd_cb_userdata >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  v31 = *(_QWORD *)default_passwd_cb_userdata + 8LL;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_load8(v31);
    goto LABEL_108;
  }
  (*(void (**)(void))(*(_QWORD *)default_passwd_cb_userdata + 8LL))();
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load8(p_ssl_ctx);
LABEL_109:
    __asan_report_load8(p_ssl_ctx);
LABEL_110:
    v33 = p_ssl_ctx;
    __asan_report_load8(p_ssl_ctx);
LABEL_111:
    __asan_report_load8(v33);
    goto LABEL_112;
  }
  SSL_CTX_set_default_passwd_cb_userdata(v5->ssl_ctx_.handle_, 0LL);
LABEL_82:
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    goto LABEL_109;
  if ( !SSL_CTX_get_ex_data(v5->ssl_ctx_.handle_, 0LL) )
    goto LABEL_91;
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    goto LABEL_110;
  v32 = SSL_CTX_get_ex_data(v5->ssl_ctx_.handle_, 0LL);
  v33 = v32;
  if ( !v32 )
    goto LABEL_89;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
    goto LABEL_111;
  v34 = *(_QWORD *)v32 + 8LL;
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
  {
LABEL_112:
    __asan_report_load8(v34);
LABEL_113:
    __asan_report_load8(p_ssl_ctx);
LABEL_114:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_ssl_ctx;
    __asan_report_load8(p_ssl_ctx);
LABEL_115:
    __asan_report_load8(p_M_refcount);
    goto LABEL_116;
  }
  (*(void (**)(void))(*(_QWORD *)v32 + 8LL))();
LABEL_89:
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    goto LABEL_113;
  SSL_CTX_set_ex_data(v5->ssl_ctx_.handle_, 0LL, 0LL);
LABEL_91:
  if ( *(_BYTE *)((p_ssl_ctx >> 3) + 0x7FFF8000) )
    goto LABEL_114;
  SSL_CTX_free(v5->ssl_ctx_.handle_);
LABEL_93:
  p_M_refcount = &v5->ssl_ctx_.init_.ref_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v5->ssl_ctx_.init_.ref_._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_115;
  M_pi = v5->ssl_ctx_.init_.ref_._M_refcount._M_pi;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  common::minet::http_client::HttpClient::~HttpClient(v5);
  operator delete(v5, 0x2E0uLL);
  if ( v38 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_116:
  *(_QWORD *)v6 = 1172321806LL;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 111: range 000000000CBD7AFE-000000000CBD8FD5
void __fastcall common::minet::http_client::SslClient::SslClient(
        common::minet::http_client::SslClient *const this,
        common::minet::http_client::HttpClientMgr *client_mgr,
        boost::asio::io_context *ioc,
        uint32_t thread_idx,
        uint32_t work_thread_index,
        uint32_t type)
{
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_implementation; // r15
  boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *p_impl; // r13
  unsigned __int64 v10; // r12
  _DWORD *v11; // r14
  boost::asio::detail::resolver_service<boost::asio::ip::tcp> *v12; // rax
  __int64 v13; // rax
  boost::asio::executor::impl_base *impl; // rdi
  int (**vptr_impl_base)(...); // rax
  __int64 p_implementation_executor; // rax
  boost::asio::executor::impl_base *p_has_native_impl; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  char v20; // al
  unsigned __int64 v21; // rdx
  char v22; // cl
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  void *v25; // rdi
  boost::intrusive::rbtree_node<void*>::color *p_color; // rcx
  char v27; // dl
  boost::beast::http::basic_fields<std::allocator<char> >::list_t *p_list; // rax
  unsigned int *p_version; // rdx
  char v30; // al
  boost::beast::http::verb *p_method; // rdx
  char v32; // cl
  __int64 p_M_allocated_capacity; // rax
  char v34; // dl
  boost::intrusive::rbtree_node<void*>::color *v35; // rcx
  char v36; // dl
  boost::beast::http::basic_fields<std::allocator<char> >::list_t *v37; // rax
  unsigned int *v38; // rdx
  char v39; // al
  boost::beast::http::status *p_result; // rdx
  char v41; // cl
  void *p_anon_0; // rax
  char v43; // dl
  void *p_retcode; // rdi
  char v45; // al
  char v46; // al
  char v47; // al
  char v48; // al
  char v49; // al
  std::_Rb_tree_header *v50; // rax
  char v51; // al
  std::_Rb_tree_header *v52; // rax
  char v53; // al
  char v54; // al
  char v55; // dl
  char v56; // al
  char v57; // al
  char v58; // al
  char v59; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v60; // rax
  volatile signed __int32 *p_init; // rdi
  char v62; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v63; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v64; // rax
  _Atomic_word *p_M_use_count; // rdi
  char v66; // dl
  char v67; // cl
  void *v68; // rdi
  char v69; // cl
  __int64 v70; // rax
  SSL_CTX *p_ssl_ctx; // rdi
  int error; // esi
  boost::ulong_long_type id; // rax
  char v74; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v75; // rdi
  boost::asio::ssl::context *v76; // rcx
  boost::asio::ssl::context *v77; // r8
  boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *v78; // [rsp+0h] [rbp-D8h]
  std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *thread_idxb; // [rsp+8h] [rbp-D0h]
  boost::asio::executor v83; // [rsp+28h] [rbp-B0h] BYREF
  std::__shared_ptr<void,(__gnu_cxx::_Lock_policy)2>::element_type *v84; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v85; // [rsp+38h] [rbp-A0h]
  char v86[152]; // [rsp+40h] [rbp-98h] BYREF

  p_impl = (boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *)client_mgr;
  v10 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v10 = v13;
  }
  *(_QWORD *)v10 = 1102416563LL;
  *(_QWORD *)(v10 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v10 + 16) = common::minet::http_client::SslClient::SslClient;
  v11 = (_DWORD *)(v10 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -234753551;
  v11[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_12;
  }
  this->_M_weak_this._M_ptr = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store8();
    goto LABEL_13;
  }
  this->_M_weak_this._M_refcount._M_pi = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8();
    goto LABEL_14;
  }
  this->_vptr_HttpClient = (int (**)(...))(&`vtable for'common::minet::http_client::HttpClient + 2);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_mgr_ >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_store8();
    goto LABEL_15;
  }
  this->client_mgr_ = client_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->ioc_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8();
    goto LABEL_16;
  }
  this->ioc_ = ioc;
  p_impl = &this->resolver_.impl_;
  if ( !*(_BYTE *)(((unsigned __int64)ioc >> 3) + 0x7FFF8000) )
  {
    v12 = boost::asio::detail::service_registry::use_service<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>(
            ioc->service_registry_,
            ioc);
    goto LABEL_17;
  }
LABEL_16:
  v12 = (boost::asio::detail::resolver_service<boost::asio::ip::tcp> *)__asan_report_load8(ioc);
LABEL_17:
  if ( *(_BYTE *)(((unsigned __int64)p_impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_22;
  }
  this->resolver_.impl_.service_ = v12;
  if ( *(_BYTE *)(((unsigned __int64)&p_impl->implementation_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  p_impl->implementation_._M_ptr = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)&p_impl->implementation_._M_refcount >> 3) + 0x7FFF8000) )
  {
    p_impl->implementation_._M_refcount._M_pi = 0LL;
    boost::asio::executor::executor<boost::asio::io_context::executor_type>(
      &v83,
      (boost::asio::io_context::executor_type)ioc);
    goto LABEL_24;
  }
LABEL_23:
  __asan_report_store8();
LABEL_24:
  impl = v83.impl_;
  if ( !v83.impl_ )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)v83.impl_ >> 3) + 0x7FFF8000) )
  {
    vptr_impl_base = (int (**)(...))__asan_report_load8(v83.impl_);
    goto LABEL_36;
  }
  vptr_impl_base = v83.impl_->_vptr_impl_base;
  if ( *(_BYTE *)(((unsigned __int64)v83.impl_->_vptr_impl_base >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    p_implementation_executor = __asan_report_load8(vptr_impl_base);
    goto LABEL_37;
  }
  impl = (boost::asio::executor::impl_base *)((__int64 (*)(void))*vptr_impl_base)();
LABEL_28:
  p_implementation_executor = (__int64)&p_impl->implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&p_impl->implementation_executor_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    p_has_native_impl = (boost::asio::executor::impl_base *)p_implementation_executor;
    __asan_report_store8();
    goto LABEL_38;
  }
  p_impl->implementation_executor_.executor_.impl_ = impl;
  p_has_native_impl = (boost::asio::executor::impl_base *)&p_impl->implementation_executor_.has_native_impl_;
  if ( *(char *)(((unsigned __int64)&p_impl->implementation_executor_.has_native_impl_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_38:
    __asan_report_store1(p_has_native_impl);
    goto LABEL_39;
  }
  p_impl->implementation_executor_.has_native_impl_ = 1;
  p_has_native_impl = v83.impl_;
  if ( v83.impl_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)v83.impl_ >> 3) + 0x7FFF8000) )
    {
      v18 = (unsigned __int64)(v83.impl_->_vptr_impl_base + 1);
      if ( !*(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      {
        (*((void (**)(void))v83.impl_->_vptr_impl_base + 1))();
        goto LABEL_34;
      }
LABEL_40:
      __asan_report_load8(v18);
      goto LABEL_41;
    }
LABEL_39:
    __asan_report_load8(p_has_native_impl);
    goto LABEL_40;
  }
LABEL_34:
  p_implementation = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&p_impl->implementation_;
  v84 = 0LL;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_deleter<void *,boost::asio::detail::socket_ops::noop_deleter,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_deleter<void*,boost::asio::detail::socket_ops::noop_deleter,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> > *)(v10 + 48));
LABEL_41:
  v19 = *(_QWORD *)(v10 + 72);
  v20 = *(_BYTE *)(((v19 + 8) >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
  {
    __asan_report_store4(v19 + 8);
LABEL_53:
    __asan_report_store4(v21);
    goto LABEL_54;
  }
  *(_DWORD *)(v19 + 8) = 1;
  v21 = v19 + 12;
  v22 = *(_BYTE *)(((v19 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 12) & 7) + 3) >= v22 && v22 )
    goto LABEL_53;
  *(_DWORD *)(v19 + 12) = 1;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
  *(_QWORD *)v19 = &`vtable for'std::_Sp_counted_deleter<void *,boost::asio::detail::socket_ops::noop_deleter,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  if ( *(_BYTE *)(((v19 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  *(_QWORD *)(v19 + 16) = 0LL;
  v85 = v19;
  if ( *(_BYTE *)(((unsigned __int64)p_implementation >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    v23 = p_implementation;
    __asan_report_store8();
LABEL_57:
    v25 = (void *)__asan_report_load8(v23);
    __cxa_begin_catch(v25);
    __asan_handle_no_return(v25);
    __cxa_rethrow();
  }
  p_impl->implementation_._M_ptr = v84;
  v23 = p_implementation + 1;
  if ( *(_BYTE *)(((unsigned __int64)&p_implementation[1] >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  M_pi = p_implementation[1]._M_pi;
  p_implementation[1]._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v85;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  ZN5boost5beast12basic_streamINS_4asio2ip3tcpENS2_8executorENS0_21unlimited_rate_policyEEC2IRNS2_10io_contextEJEvEEOT_DpOT0_(
    &this->tcp_stream_,
    ioc);
  while ( 1 )
  {
    boost::beast::basic_flat_buffer<std::allocator<char>>::basic_flat_buffer(&this->buffer_);
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> >> 3)
                  + 0x7FFF8000) )
    {
      __asan_report_store8();
LABEL_156:
      __asan_report_store4(p_color);
LABEL_157:
      __asan_report_store8();
LABEL_158:
      __asan_report_store8();
LABEL_159:
      __asan_report_store8();
LABEL_160:
      __asan_report_store8();
LABEL_161:
      __asan_report_store8();
LABEL_162:
      __asan_report_store8();
LABEL_163:
      __asan_report_store8();
LABEL_164:
      __asan_report_store8();
LABEL_165:
      __asan_report_store8();
LABEL_166:
      __asan_report_store4(p_version);
LABEL_167:
      __asan_report_store4(p_method);
LABEL_168:
      __asan_report_store8();
LABEL_169:
      p_M_allocated_capacity = __asan_report_store8();
LABEL_170:
      __asan_report_store1(p_M_allocated_capacity);
LABEL_171:
      __asan_report_store8();
LABEL_172:
      __asan_report_store4(v35);
LABEL_173:
      __asan_report_store8();
LABEL_174:
      __asan_report_store8();
LABEL_175:
      __asan_report_store8();
LABEL_176:
      __asan_report_store8();
LABEL_177:
      __asan_report_store8();
LABEL_178:
      __asan_report_store8();
LABEL_179:
      __asan_report_store8();
LABEL_180:
      __asan_report_store8();
LABEL_181:
      __asan_report_store8();
LABEL_182:
      __asan_report_store4(v38);
LABEL_183:
      __asan_report_store4(p_result);
LABEL_184:
      __asan_report_store8();
LABEL_185:
      p_anon_0 = (void *)__asan_report_store8();
LABEL_186:
      p_retcode = p_anon_0;
      __asan_report_store1(p_anon_0);
LABEL_187:
      __asan_report_store4(p_retcode);
LABEL_188:
      __asan_report_store8();
LABEL_189:
      __asan_report_store8();
LABEL_190:
      __asan_report_store8();
LABEL_191:
      __asan_report_store1(p_retcode);
LABEL_192:
      __asan_report_store8();
LABEL_193:
      __asan_report_store8();
LABEL_194:
      __asan_report_store1(p_retcode);
LABEL_195:
      __asan_report_store8();
LABEL_196:
      __asan_report_store8();
LABEL_197:
      __asan_report_store1(p_retcode);
LABEL_198:
      __asan_report_store4(p_retcode);
LABEL_199:
      __asan_report_store8();
LABEL_200:
      __asan_report_store8();
LABEL_201:
      __asan_report_store8();
LABEL_202:
      __asan_report_store8();
LABEL_203:
      __asan_report_store4(p_retcode);
LABEL_204:
      __asan_report_store8();
LABEL_205:
      __asan_report_store8();
LABEL_206:
      __asan_report_store8();
LABEL_207:
      __asan_report_store8();
LABEL_208:
      __asan_report_store8();
LABEL_209:
      __asan_report_store8();
LABEL_210:
      __asan_report_store1(p_retcode);
LABEL_211:
      __asan_report_store4(p_retcode);
LABEL_212:
      __asan_report_store4(p_retcode);
LABEL_213:
      __asan_report_store1(p_retcode);
LABEL_214:
      __asan_report_store4(p_retcode);
LABEL_215:
      __asan_report_store1(p_retcode);
LABEL_216:
      __asan_report_store4(p_retcode);
LABEL_217:
      __asan_report_store4(p_retcode);
LABEL_218:
      __asan_report_store8();
      goto LABEL_219;
    }
    this->beast_req_.set_.holder.root.parent_ = 0LL;
    p_color = &this->beast_req_.set_.holder.root.color_;
    v27 = *(_BYTE *)(((unsigned __int64)&this->beast_req_.set_.holder.root.color_ >> 3) + 0x7FFF8000);
    if ( v27 && v27 <= 3 )
      goto LABEL_156;
    this->beast_req_.set_.holder.root.color_ = red_t;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.set_.holder.root.left_ >> 3) + 0x7FFF8000) )
      goto LABEL_157;
    this->beast_req_.set_.holder.root.left_ = &this->beast_req_.set_.holder.root;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.set_.holder.root.right_ >> 3) + 0x7FFF8000) )
      goto LABEL_158;
    this->beast_req_.set_.holder.root.right_ = &this->beast_req_.set_.holder.root;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_ >> 3) + 0x7FFF8000) )
      goto LABEL_159;
    this->beast_req_.set_.size_ = 0LL;
    p_list = &this->beast_req_.list_;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.list_ >> 3) + 0x7FFF8000) )
      goto LABEL_160;
    this->beast_req_.list_.data_.root_plus_size_.m_header.next_ = &p_list->data_.root_plus_size_.m_header;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.list_.data_.root_plus_size_.m_header.prev_ >> 3) + 0x7FFF8000) )
      goto LABEL_161;
    this->beast_req_.list_.data_.root_plus_size_.m_header.prev_ = &p_list->data_.root_plus_size_.m_header;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.method_ >> 3) + 0x7FFF8000) )
      goto LABEL_162;
    this->beast_req_.method_.ptr_ = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.method_.len_ >> 3) + 0x7FFF8000) )
      goto LABEL_163;
    this->beast_req_.method_.len_ = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.target_or_reason_ >> 3) + 0x7FFF8000) )
      goto LABEL_164;
    this->beast_req_.target_or_reason_.ptr_ = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.target_or_reason_.len_ >> 3) + 0x7FFF8000) )
      goto LABEL_165;
    this->beast_req_.target_or_reason_.len_ = 0LL;
    p_version = &this->beast_req_.version_;
    v30 = *(_BYTE *)(((unsigned __int64)&this->beast_req_.version_ >> 3) + 0x7FFF8000);
    if ( v30 && v30 <= 3 )
      goto LABEL_166;
    this->beast_req_.version_ = 11;
    p_method = &this->beast_req_.method_;
    v32 = *(_BYTE *)(((unsigned __int64)&this->beast_req_.method_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 112 + 92) & 7) + 3) >= v32 && v32 )
      goto LABEL_167;
    this->beast_req_.method_ = unknown_2;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.boost::empty_::empty_value<std::string,0,false> >> 3)
                  + 0x7FFF8000) )
      goto LABEL_168;
    this->beast_req_.value_._M_dataplus._M_p = this->beast_req_.value_._anon_0._M_local_buf;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_req_.value_._M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_169;
    this->beast_req_.value_._M_string_length = 0LL;
    p_M_allocated_capacity = (__int64)&this->beast_req_.value_._anon_0._M_allocated_capacity;
    v34 = *(_BYTE *)(((unsigned __int64)&this->beast_req_.value_._anon_0 >> 3) + 0x7FFF8000);
    if ( v34 <= ((unsigned __int8)this & 7) && v34 )
      goto LABEL_170;
    this->beast_req_.value_._anon_0._M_local_buf[0] = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.set_.boost::intrusive::bstbase2<boost::intrusive::bhtraits<boost::beast::http::basic_fields<std::allocator<char> >::element,boost::intrusive::rbtree_node_traits<void*,false>,(boost::intrusive::link_mode_type)0,boost::intrusive::dft_tag,3>,void,boost::beast::http::basic_fields<std::allocator<char> >::key_compare,(boost::intrusive::algo_types)5,void> >> 3)
                  + 0x7FFF8000) )
      goto LABEL_171;
    this->beast_res_.set_.holder.root.parent_ = 0LL;
    v35 = &this->beast_res_.set_.holder.root.color_;
    v36 = *(_BYTE *)(((unsigned __int64)&this->beast_res_.set_.holder.root.color_ >> 3) + 0x7FFF8000);
    if ( v36 && v36 <= 3 )
      goto LABEL_172;
    this->beast_res_.set_.holder.root.color_ = red_t;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.set_.holder.root.left_ >> 3) + 0x7FFF8000) )
      goto LABEL_173;
    this->beast_res_.set_.holder.root.left_ = &this->beast_res_.set_.holder.root;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.set_.holder.root.right_ >> 3) + 0x7FFF8000) )
      goto LABEL_174;
    this->beast_res_.set_.holder.root.right_ = &this->beast_res_.set_.holder.root;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_ >> 3) + 0x7FFF8000) )
      goto LABEL_175;
    this->beast_res_.set_.size_ = 0LL;
    v37 = &this->beast_res_.list_;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.list_ >> 3) + 0x7FFF8000) )
      goto LABEL_176;
    this->beast_res_.list_.data_.root_plus_size_.m_header.next_ = &v37->data_.root_plus_size_.m_header;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.list_.data_.root_plus_size_.m_header.prev_ >> 3) + 0x7FFF8000) )
      goto LABEL_177;
    this->beast_res_.list_.data_.root_plus_size_.m_header.prev_ = &v37->data_.root_plus_size_.m_header;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.method_ >> 3) + 0x7FFF8000) )
      goto LABEL_178;
    this->beast_res_.method_.ptr_ = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.method_.len_ >> 3) + 0x7FFF8000) )
      goto LABEL_179;
    this->beast_res_.method_.len_ = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.target_or_reason_ >> 3) + 0x7FFF8000) )
      goto LABEL_180;
    this->beast_res_.target_or_reason_.ptr_ = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.target_or_reason_.len_ >> 3) + 0x7FFF8000) )
      goto LABEL_181;
    this->beast_res_.target_or_reason_.len_ = 0LL;
    v38 = &this->beast_res_.version_;
    v39 = *(_BYTE *)(((unsigned __int64)&this->beast_res_.version_ >> 3) + 0x7FFF8000);
    if ( v39 && v39 <= 3 )
      goto LABEL_182;
    this->beast_res_.version_ = 11;
    p_result = &this->beast_res_.result_;
    v41 = *(_BYTE *)(((unsigned __int64)&this->beast_res_.result_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 108) & 7) + 3) >= v41 && v41 )
      goto LABEL_183;
    this->beast_res_.result_ = ok;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.boost::empty_::empty_value<std::string,0,false> >> 3)
                  + 0x7FFF8000) )
      goto LABEL_184;
    this->beast_res_.value_._M_dataplus._M_p = this->beast_res_.value_._anon_0._M_local_buf;
    if ( *(_BYTE *)(((unsigned __int64)&this->beast_res_.value_._M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_185;
    this->beast_res_.value_._M_string_length = 0LL;
    p_anon_0 = &this->beast_res_.value_._anon_0;
    v43 = *(_BYTE *)(((unsigned __int64)&this->beast_res_.value_._anon_0 >> 3) + 0x7FFF8000);
    if ( v43 <= (((unsigned __int8)this + 0x80) & 7) && v43 )
      goto LABEL_186;
    this->beast_res_.value_._anon_0._M_local_buf[0] = 0;
    p_retcode = &this->retcode_;
    v45 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
    if ( v45 && v45 <= 3 )
      goto LABEL_187;
    this->retcode_ = HTTP_SUCCESS;
    p_retcode = &this->func_._M_manager;
    if ( *(_BYTE *)(((unsigned __int64)&this->func_._M_manager >> 3) + 0x7FFF8000) )
      goto LABEL_188;
    this->func_._M_manager = 0LL;
    p_retcode = &this->req_;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_ >> 3) + 0x7FFF8000) )
      goto LABEL_189;
    this->req_.host._M_dataplus._M_p = this->req_.host._anon_0._M_local_buf;
    p_retcode = &this->req_.host._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.host._M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_190;
    this->req_.host._M_string_length = 0LL;
    p_retcode = &this->req_.host._anon_0;
    v46 = *(_BYTE *)(((unsigned __int64)&this->req_.host._anon_0 >> 3) + 0x7FFF8000);
    if ( v46 <= (((unsigned __int8)this - 48) & 7) && v46 )
      goto LABEL_191;
    this->req_.host._anon_0._M_local_buf[0] = 0;
    p_retcode = &this->req_.port;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.port >> 3) + 0x7FFF8000) )
      goto LABEL_192;
    this->req_.port._M_dataplus._M_p = this->req_.port._anon_0._M_local_buf;
    p_retcode = &this->req_.port._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.port._M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_193;
    this->req_.port._M_string_length = 0LL;
    p_retcode = &this->req_.port._anon_0;
    v47 = *(_BYTE *)(((unsigned __int64)&this->req_.port._anon_0 >> 3) + 0x7FFF8000);
    if ( v47 <= (((unsigned __int8)this - 16) & 7) && v47 )
      goto LABEL_194;
    this->req_.port._anon_0._M_local_buf[0] = 0;
    p_retcode = &this->req_.uri;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.uri >> 3) + 0x7FFF8000) )
      goto LABEL_195;
    this->req_.uri._M_dataplus._M_p = this->req_.uri._anon_0._M_local_buf;
    p_retcode = &this->req_.uri._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.uri._M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_196;
    this->req_.uri._M_string_length = 0LL;
    p_retcode = &this->req_.uri._anon_0;
    v48 = *(_BYTE *)(((unsigned __int64)&this->req_.uri._anon_0 >> 3) + 0x7FFF8000);
    if ( v48 <= (((unsigned __int8)this + 16) & 7) && v48 )
      goto LABEL_197;
    this->req_.uri._anon_0._M_local_buf[0] = 0;
    p_retcode = &this->req_.head_map._M_t._M_impl.std::_Rb_tree_header;
    v49 = *(_BYTE *)(((unsigned __int64)&this->req_.head_map._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
    if ( v49 && v49 <= 3 )
      goto LABEL_198;
    this->req_.head_map._M_t._M_impl._M_header._M_color = _S_red;
    p_retcode = &this->req_.head_map._M_t._M_impl._M_header._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.head_map._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      goto LABEL_199;
    this->req_.head_map._M_t._M_impl._M_header._M_parent = 0LL;
    v50 = &this->req_.head_map._M_t._M_impl.std::_Rb_tree_header;
    p_retcode = &this->req_.head_map._M_t._M_impl._M_header._M_left;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.head_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
      goto LABEL_200;
    this->req_.head_map._M_t._M_impl._M_header._M_left = &v50->_M_header;
    p_retcode = &this->req_.head_map._M_t._M_impl._M_header._M_right;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.head_map._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
      goto LABEL_201;
    this->req_.head_map._M_t._M_impl._M_header._M_right = &v50->_M_header;
    p_retcode = &this->req_.head_map._M_t._M_impl._M_node_count;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.head_map._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
      goto LABEL_202;
    this->req_.head_map._M_t._M_impl._M_node_count = 0LL;
    p_retcode = &this->req_.param_map._M_t._M_impl.std::_Rb_tree_header;
    v51 = *(_BYTE *)(((unsigned __int64)&this->req_.param_map._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
    if ( v51 && v51 <= 3 )
      goto LABEL_203;
    this->req_.param_map._M_t._M_impl._M_header._M_color = _S_red;
    p_retcode = &this->req_.param_map._M_t._M_impl._M_header._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.param_map._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      goto LABEL_204;
    this->req_.param_map._M_t._M_impl._M_header._M_parent = 0LL;
    v52 = &this->req_.param_map._M_t._M_impl.std::_Rb_tree_header;
    p_retcode = &this->req_.param_map._M_t._M_impl._M_header._M_left;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.param_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
      goto LABEL_205;
    this->req_.param_map._M_t._M_impl._M_header._M_left = &v52->_M_header;
    p_retcode = &this->req_.param_map._M_t._M_impl._M_header._M_right;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.param_map._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
      goto LABEL_206;
    this->req_.param_map._M_t._M_impl._M_header._M_right = &v52->_M_header;
    p_retcode = &this->req_.param_map._M_t._M_impl._M_node_count;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.param_map._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
      goto LABEL_207;
    this->req_.param_map._M_t._M_impl._M_node_count = 0LL;
    p_retcode = &this->req_.body;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.body >> 3) + 0x7FFF8000) )
      goto LABEL_208;
    this->req_.body._M_dataplus._M_p = this->req_.body._anon_0._M_local_buf;
    p_retcode = &this->req_.body._M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&this->req_.body._M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_209;
    this->req_.body._M_string_length = 0LL;
    p_retcode = &this->req_.body._anon_0;
    v53 = *(_BYTE *)(((unsigned __int64)&this->req_.body._anon_0 >> 3) + 0x7FFF8000);
    if ( v53 <= (((unsigned __int8)this - 112) & 7) && v53 )
      goto LABEL_210;
    this->req_.body._anon_0._M_local_buf[0] = 0;
    p_retcode = &this->req_.method;
    v54 = *(_BYTE *)(((unsigned __int64)&this->req_.method >> 3) + 0x7FFF8000);
    if ( v54 && v54 <= 3 )
      goto LABEL_211;
    this->req_.method = HTTP_GET;
    p_retcode = &this->req_.version;
    v55 = *(_BYTE *)(((unsigned __int64)&this->req_.version >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 92) & 7) + 3) >= v55 && v55 )
      goto LABEL_212;
    this->req_.version = HTTP_VER_1_0;
    p_retcode = &this->req_.is_ssl;
    if ( *(char *)(((unsigned __int64)&this->req_.is_ssl >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_213;
    this->req_.is_ssl = 0;
    p_retcode = &this->thread_idx_;
    v56 = *(_BYTE *)(((unsigned __int64)&this->thread_idx_ >> 3) + 0x7FFF8000);
    if ( v56 && v56 <= 3 )
      goto LABEL_214;
    this->thread_idx_ = thread_idx;
    p_retcode = &this->is_timeout_;
    v57 = *(_BYTE *)(((unsigned __int64)&this->is_timeout_ >> 3) + 0x7FFF8000);
    if ( v57 <= (((unsigned __int8)this - 76) & 7) && v57 )
      goto LABEL_215;
    this->is_timeout_ = 0;
    p_retcode = &this->work_thread_index_;
    v58 = *(_BYTE *)(((unsigned __int64)&this->work_thread_index_ >> 3) + 0x7FFF8000);
    if ( v58 && v58 <= 3 )
      goto LABEL_216;
    this->work_thread_index_ = work_thread_index;
    p_retcode = &this->type_;
    v59 = *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v59 && v59 )
      goto LABEL_217;
    this->type_ = type;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      goto LABEL_218;
    this->_vptr_HttpClient = (int (**)(...))(&`vtable for'common::minet::http_client::SslClient + 2);
    p_impl = (boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *)&this->ssl_ctx_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->ssl_ctx_ >> 3) + 0x7FFF8000) )
      break;
LABEL_219:
    ioc = (boost::asio::io_context *)__asan_report_store8();
    boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl(p_impl);
    if ( !*(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
    {
      v63 = this->_M_weak_this._M_refcount._M_pi;
      if ( v63 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v63);
      __asan_handle_no_return(v63);
      _Unwind_Resume((struct _Unwind_Exception *)ioc);
    }
    __asan_report_load8(&this->_M_weak_this._M_refcount);
  }
  this->ssl_ctx_.handle_ = 0LL;
  if ( !(_BYTE)`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init
    && __cxa_guard_acquire(&`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init) )
  {
    thread_idxb = (std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *)operator new(1uLL);
    boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_ptr = thread_idxb;
    boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_refcount._M_pi = 0LL;
    v64 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator new(0x18uLL);
    p_M_use_count = &v64->_M_use_count;
    v66 = *(_BYTE *)(((unsigned __int64)&v64->_M_use_count >> 3) + 0x7FFF8000);
    if ( v66 && v66 <= 3 )
    {
      __asan_report_store4(p_M_use_count);
    }
    else
    {
      v64->_M_use_count = 1;
      p_M_use_count = &v64->_M_weak_count;
      v67 = *(_BYTE *)(((unsigned __int64)&v64->_M_weak_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v64 + 12) & 7) + 3) < v67 || !v67 )
      {
        v64->_M_weak_count = 1;
        if ( !*(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
        {
          v64->_vptr__Sp_counted_base = (int (**)(...))(&`vtable for'std::_Sp_counted_ptr<boost::asio::ssl::detail::openssl_init_base::do_init *,(__gnu_cxx::_Lock_policy)2>
                                                      + 2);
          if ( !*(_BYTE *)(((unsigned __int64)&v64[1] >> 3) + 0x7FFF8000) )
          {
            v64[1]._vptr__Sp_counted_base = (int (**)(...))thread_idxb;
            boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_refcount._M_pi = v64;
            __cxa_guard_release(&`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init);
            __cxa_atexit(
              (void (__fastcall *)(void *))std::shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init>::~shared_ptr,
              &boost::asio::ssl::detail::openssl_init_base::instance(void)::init,
              &_dso_handle);
            goto LABEL_147;
          }
LABEL_234:
          v68 = (void *)__asan_report_store8();
          __cxa_begin_catch(v68);
          if ( thread_idxb )
          {
            CONF_modules_unload(1LL);
            v68 = thread_idxb;
            operator delete(thread_idxb, 1uLL);
          }
          __asan_handle_no_return(v68);
          __cxa_rethrow();
        }
LABEL_233:
        __asan_report_store8();
        goto LABEL_234;
      }
    }
    __asan_report_store4(p_M_use_count);
    goto LABEL_233;
  }
LABEL_147:
  if ( *(_BYTE *)(((unsigned __int64)&this->ssl_ctx_.init_ >> 3) + 0x7FFF8000) )
  {
    p_init = (volatile signed __int32 *)&this->ssl_ctx_.init_;
    __asan_report_store8();
    goto LABEL_239;
  }
  this->ssl_ctx_.init_.ref_._M_ptr = boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_ptr;
  v60 = boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_refcount._M_pi;
  p_init = (volatile signed __int32 *)&this->ssl_ctx_.init_.ref_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->ssl_ctx_.init_.ref_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_239:
    __asan_report_store8();
    goto LABEL_240;
  }
  this->ssl_ctx_.init_.ref_._M_refcount._M_pi = v60;
  if ( v60 )
  {
    p_init = &v60->_M_use_count;
    if ( &_pthread_key_create )
    {
      v62 = *(_BYTE *)(((unsigned __int64)p_init >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_init & 7) + 3) < v62 || !v62 )
      {
        _InterlockedAdd(p_init, 1u);
        goto LABEL_154;
      }
LABEL_240:
      v60 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_init);
    }
    v69 = *(_BYTE *)(((unsigned __int64)&v60->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v60 + 8) & 7) + 3) < v69 || !v69 )
    {
      ++v60->_M_use_count;
      goto LABEL_154;
    }
    ioc = (boost::asio::io_context *)__asan_report_load4(&v60->_M_use_count);
    __cxa_guard_abort(&`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init);
LABEL_237:
    common::minet::http_client::HttpClient::~HttpClient(this);
    __asan_handle_no_return(this);
    _Unwind_Resume((struct _Unwind_Exception *)ioc);
  }
LABEL_154:
  ERR_clear_error();
  v70 = TLS_client_method();
  p_ssl_ctx = (SSL_CTX *)SSL_CTX_new(v70);
  if ( *(_BYTE *)(((unsigned __int64)p_impl >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_249;
  }
  this->ssl_ctx_.handle_ = p_ssl_ctx;
  if ( p_ssl_ctx )
  {
    SSL_CTX_ctrl(p_ssl_ctx, 123LL, 771LL, 0LL);
LABEL_249:
    if ( *(_BYTE *)(((unsigned __int64)p_impl >> 3) + 0x7FFF8000) )
    {
      p_ssl_ctx = (SSL_CTX *)&this->ssl_ctx_;
      __asan_report_load8(&this->ssl_ctx_);
    }
    else
    {
      p_ssl_ctx = this->ssl_ctx_.handle_;
      SSL_CTX_ctrl(p_ssl_ctx, 124LL, 771LL, 0LL);
    }
  }
  if ( !this->ssl_ctx_.handle_ )
  {
    error = ERR_get_error();
    *(_DWORD *)(v10 + 64) = error;
    id = boost::asio::error::get_ssl_category(void)::instance.id_;
    if ( id == 0x8FAFD21E25C5E09BLL || id == 0xB2AB117A257EDF0DLL )
    {
      v74 = error != 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)(boost::asio::error::get_ssl_category(void)::instance._vptr_error_category + 6) >> 3)
                    + 0x7FFF8000) )
      {
        __asan_report_load8(boost::asio::error::get_ssl_category(void)::instance._vptr_error_category + 6);
LABEL_263:
        __asan_report_load8(&this->ssl_ctx_);
        v75 = this->ssl_ctx_.init_.ref_._M_refcount._M_pi;
        if ( v75 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v75);
        goto LABEL_237;
      }
      p_ssl_ctx = (SSL_CTX *)&boost::asio::error::get_ssl_category(void)::instance;
      v74 = (*((__int64 (__fastcall **)(boost::asio::error::detail::ssl_category *))boost::asio::error::get_ssl_category(void)::instance._vptr_error_category
             + 6))(&boost::asio::error::get_ssl_category(void)::instance);
    }
    *(_BYTE *)(v10 + 68) = v74;
    *(_QWORD *)(v10 + 72) = &boost::asio::error::get_ssl_category(void)::instance;
    if ( *(_DWORD *)(v10 + 64) )
    {
      __asan_handle_no_return(p_ssl_ctx);
      boost::asio::detail::do_throw_error((const boost::system::error_code *)(v10 + 64), "context");
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)p_impl >> 3) + 0x7FFF8000) )
    goto LABEL_263;
  SSL_CTX_set_options(this->ssl_ctx_.handle_, 0x20000LL);
  v78 = (boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *)operator new(0x150uLL);
  boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::flat_stream<boost::asio::io_context &,boost::asio::ssl::context &>(
    v78,
    ioc,
    (boost::asio::io_context *)&this->ssl_ctx_,
    v76,
    v77);
  if ( *(_BYTE *)(((unsigned __int64)&this->ssl_stream_ >> 3) + 0x7FFF8000) )
  {
    ioc = (boost::asio::io_context *)__asan_report_store8();
    operator delete(v78, 0x150uLL);
    boost::asio::ssl::context::~context(&this->ssl_ctx_);
    goto LABEL_237;
  }
  this->ssl_stream_.p_._M_t._M_t._M_head_impl = v78;
  if ( v86 == (char *)v10 )
  {
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v10 = 1172321806LL;
    *(_QWORD *)((v10 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v10 >> 3) + 0x7FFF8008) = -168430091;
  }
};
