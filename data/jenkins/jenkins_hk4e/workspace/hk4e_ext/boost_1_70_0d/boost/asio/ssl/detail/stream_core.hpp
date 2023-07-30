// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ssl/detail/stream_core.hpp

// Line 42: range 000000000CBD6F48-000000000CBD7963
void __fastcall boost::asio::ssl::detail::stream_core::stream_core<boost::asio::executor>(
        boost::asio::ssl::detail::stream_core *const this,
        SSL_CTX *context,
        const boost::asio::executor *ex)
{
  unsigned __int8 *v4; // r15
  unsigned __int64 v6; // r13
  boost::date_time::int_adapter<long int>::int_type v7; // r12
  _DWORD *v8; // r14
  boost::asio::error::detail::ssl_category *v9; // rdi
  SSL *v10; // rax
  __int64 v11; // rax
  __int64 error; // rsi
  boost::ulong_long_type id; // rax
  char v14; // al
  char *p_d; // rsi
  unsigned __int64 p_output_buffer_space; // rbp
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // rax
  std::_Vector_base<unsigned char>::pointer M_start; // rdi
  std::vector<unsigned char> *p_M_finish; // rdi
  std::_Vector_base<unsigned char>::pointer M_finish; // rdx
  std::_Vector_base<unsigned char>::pointer v22; // rax
  std::size_t v23; // rcx
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // rax
  std::_Vector_base<unsigned char>::pointer v26; // rdi
  std::vector<unsigned char> *p_input_buffer_space; // rdi
  std::_Vector_base<unsigned char>::pointer v28; // rdx
  std::_Vector_base<unsigned char>::pointer v29; // rax
  std::size_t v30; // rcx
  void *p_input_buffer; // rdi
  void *p_implementation; // rdi
  boost::asio::detail::epoll_reactor *v33; // rdi
  char *v34; // rdi
  struct _Unwind_Exception *v35; // rbp
  std::_Vector_base<unsigned char>::pointer v36; // rdi
  struct _Unwind_Exception *v37; // rax
  unsigned __int64 v38; // rax
  __int64 *v39; // rdi
  __int64 v40; // rax
  SSL *ssl; // rdi
  boost::asio::deadline_timer *p_pending_read; // [rsp+10h] [rbp-B8h]
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::date_type d; // [rsp+24h] [rbp-A4h] BYREF
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::time_duration_type time_of_day; // [rsp+28h] [rbp-A0h] BYREF
  char v45[152]; // [rsp+30h] [rbp-98h] BYREF

  v4 = (unsigned __int8 *)context;
  v6 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v6 = v11;
  }
  v7 = v6 + 96;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 7 int_bio 64 16 2 ec";
  *(_QWORD *)(v6 + 16) = boost::asio::ssl::detail::stream_core::stream_core<boost::asio::executor>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -202178560;
  v9 = (boost::asio::error::detail::ssl_category *)context;
  v10 = (SSL *)SSL_new(context);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v9 = (boost::asio::error::detail::ssl_category *)this;
    __asan_report_store8();
  }
  else
  {
    this->engine_.ssl_ = v10;
    if ( v10 )
      goto LABEL_4;
  }
  error = ERR_get_error(v9);
  *(_DWORD *)(v6 + 64) = error;
  id = boost::asio::error::get_ssl_category(void)::instance.id_;
  if ( id == 0x8FAFD21E25C5E09BLL || id == 0xB2AB117A257EDF0DLL )
  {
    v14 = (_DWORD)error != 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)(boost::asio::error::get_ssl_category(void)::instance._vptr_error_category + 6) >> 3)
                  + 0x7FFF8000) )
    {
      __asan_report_load8(boost::asio::error::get_ssl_category(void)::instance._vptr_error_category + 6);
      goto LABEL_20;
    }
    v9 = &boost::asio::error::get_ssl_category(void)::instance;
    v14 = (*((__int64 (__fastcall **)(boost::asio::error::detail::ssl_category *, __int64))boost::asio::error::get_ssl_category(void)::instance._vptr_error_category
           + 6))(
            &boost::asio::error::get_ssl_category(void)::instance,
            error);
  }
  *(_BYTE *)(v6 + 68) = v14;
  *(_QWORD *)(v6 + 72) = &boost::asio::error::get_ssl_category(void)::instance;
  if ( *(_DWORD *)(v6 + 64) )
  {
    __asan_handle_no_return(v9);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v6 + 64), "engine");
  }
LABEL_4:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(this);
    goto LABEL_21;
  }
  SSL_ctrl(this->engine_.ssl_, 33LL, 1LL, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(this);
    goto LABEL_22;
  }
  SSL_ctrl(this->engine_.ssl_, 33LL, 2LL, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(this);
    goto LABEL_23;
  }
  SSL_ctrl(this->engine_.ssl_, 33LL, 16LL, 0LL);
  *(_QWORD *)(v6 + 32) = 0LL;
  BIO_new_bio_pair(v6 + 32, 0LL, &this->engine_.ext_bio_, 0LL);
  if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    SSL_set_bio(this->engine_.ssl_, *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 32));
    p_pending_read = &this->pending_read_;
    boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::io_object_impl(
      &this->pending_read_.impl_,
      ex);
    goto LABEL_24;
  }
LABEL_23:
  __asan_report_load8(this);
LABEL_24:
  p_d = (char *)ex;
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::io_object_impl(
    &this->pending_write_.impl_,
    ex);
  p_output_buffer_space = (unsigned __int64)&this->output_buffer_space_;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_buffer_space_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_29;
  }
  this->output_buffer_space_._M_impl._M_start = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_buffer_space_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8();
    goto LABEL_30;
  }
  this->output_buffer_space_._M_impl._M_finish = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)&this->output_buffer_space_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
    this->output_buffer_space_._M_impl._M_end_of_storage = 0LL;
    v17 = (unsigned __int8 *)operator new(0x4400uLL);
    goto LABEL_31;
  }
LABEL_30:
  v17 = (unsigned __int8 *)__asan_report_store8();
LABEL_31:
  if ( *(_BYTE *)((p_output_buffer_space >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_45;
  }
  this->output_buffer_space_._M_impl._M_start = v17;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_buffer_space_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  this->output_buffer_space_._M_impl._M_finish = v17;
  v18 = v17 + 17408;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_buffer_space_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_store8();
    goto LABEL_47;
  }
  this->output_buffer_space_._M_impl._M_end_of_storage = v18;
  if ( *(_BYTE *)((p_output_buffer_space >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    p_M_finish = &this->output_buffer_space_;
    __asan_report_load8(&this->output_buffer_space_);
    goto LABEL_48;
  }
  M_start = this->output_buffer_space_._M_impl._M_start;
  v4 = M_start + 17408;
  p_d = 0LL;
  memset(M_start, 0, 0x4400uLL);
  p_M_finish = (std::vector<unsigned char> *)&this->output_buffer_space_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_buffer_space_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  this->output_buffer_space_._M_impl._M_finish = v4;
  p_M_finish = (std::vector<unsigned char> *)&this->output_buffer_space_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->output_buffer_space_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(p_M_finish);
    goto LABEL_50;
  }
  M_finish = this->output_buffer_space_._M_impl._M_finish;
  p_M_finish = &this->output_buffer_space_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->output_buffer_space_ >> 3) + 0x7FFF8000) )
  {
    v22 = this->output_buffer_space_._M_impl._M_start;
    v23 = M_finish - v22;
    if ( M_finish != v22 )
      goto LABEL_39;
    goto LABEL_51;
  }
LABEL_50:
  __asan_report_load8(p_M_finish);
LABEL_51:
  v22 = 0LL;
LABEL_39:
  if ( *(_WORD *)(((unsigned __int64)&this->output_buffer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(&this->output_buffer_, p_d);
    goto LABEL_53;
  }
  this->output_buffer_.data_ = v22;
  this->output_buffer_.size_ = v23;
  p_output_buffer_space = (unsigned __int64)&this->input_buffer_space_;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_buffer_space_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  this->input_buffer_space_._M_impl._M_start = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_buffer_space_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
  this->input_buffer_space_._M_impl._M_finish = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)&this->input_buffer_space_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
    this->input_buffer_space_._M_impl._M_end_of_storage = 0LL;
    v24 = (unsigned __int8 *)operator new(0x4400uLL);
    goto LABEL_56;
  }
LABEL_55:
  v24 = (unsigned __int8 *)__asan_report_store8();
LABEL_56:
  if ( *(_BYTE *)((p_output_buffer_space >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_78;
  }
  this->input_buffer_space_._M_impl._M_start = v24;
  if ( *(_BYTE *)(((p_output_buffer_space + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_store8();
    goto LABEL_79;
  }
  *(_QWORD *)(p_output_buffer_space + 8) = v24;
  v25 = v24 + 17408;
  if ( *(_BYTE *)(((p_output_buffer_space + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_store8();
    goto LABEL_80;
  }
  *(_QWORD *)(p_output_buffer_space + 16) = v25;
  if ( *(_BYTE *)((p_output_buffer_space >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    p_input_buffer_space = (std::vector<unsigned char> *)p_output_buffer_space;
    __asan_report_load8(p_output_buffer_space);
    goto LABEL_81;
  }
  v26 = this->input_buffer_space_._M_impl._M_start;
  v4 = v26 + 17408;
  p_d = 0LL;
  memset(v26, 0, 0x4400uLL);
  p_input_buffer_space = (std::vector<unsigned char> *)(p_output_buffer_space + 8);
  if ( *(_BYTE *)(((p_output_buffer_space + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8();
    goto LABEL_82;
  }
  *(_QWORD *)(p_output_buffer_space + 8) = v4;
  p_input_buffer_space = (std::vector<unsigned char> *)&this->input_buffer_space_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_buffer_space_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_load8(p_input_buffer_space);
    goto LABEL_83;
  }
  v28 = this->input_buffer_space_._M_impl._M_finish;
  p_input_buffer_space = &this->input_buffer_space_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->input_buffer_space_ >> 3) + 0x7FFF8000) )
  {
    v29 = this->input_buffer_space_._M_impl._M_start;
    v30 = v28 - v29;
    if ( v28 != v29 )
      goto LABEL_64;
    goto LABEL_84;
  }
LABEL_83:
  __asan_report_load8(p_input_buffer_space);
LABEL_84:
  v29 = 0LL;
LABEL_64:
  p_input_buffer = (void *)&this->input_buffer_;
  if ( *(_WORD *)(((unsigned __int64)&this->input_buffer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16(p_input_buffer, p_d);
    goto LABEL_86;
  }
  this->input_buffer_.data_ = v29;
  this->input_buffer_.size_ = v30;
  p_input_buffer = &this->input_;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_ >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_store8();
    goto LABEL_87;
  }
  this->input_.data_ = 0LL;
  p_input_buffer = &this->input_.size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_.size_ >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_store8();
    goto LABEL_88;
  }
  this->input_.size_ = 0LL;
  time_of_day.ticks_.value_ = 0x8000000000000000LL;
  d.days_ = 0;
  p_d = (char *)&d;
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(
    (boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *const)(v6 + 32),
    &d,
    &time_of_day);
  v4 = *(unsigned __int8 **)(v6 + 32);
  p_input_buffer = &this->pending_read_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pending_read_ >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    __asan_report_load8(p_input_buffer);
    goto LABEL_89;
  }
  p_d = (char *)this->pending_read_.impl_.service_;
  p_output_buffer_space = (unsigned __int64)&this->pending_read_.impl_.implementation_;
  p_input_buffer = &this->pending_read_.impl_.implementation_.might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&this->pending_read_.impl_.implementation_.might_have_pending_waits >> 3)
               + 0x7FFF8000) < 0 )
  {
LABEL_89:
    __asan_report_load1(p_input_buffer);
    goto LABEL_90;
  }
  if ( !this->pending_read_.impl_.implementation_.might_have_pending_waits )
    goto LABEL_70;
LABEL_90:
  p_implementation = p_d + 104;
  if ( *(_BYTE *)(((unsigned __int64)(p_d + 104) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_implementation);
    goto LABEL_94;
  }
  v33 = (boost::asio::detail::epoll_reactor *)*((_QWORD *)p_d + 13);
  p_d += 40;
  boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    v33,
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *)p_d,
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *)(p_output_buffer_space + 16),
    0xFFFFFFFFFFFFFFFFLL);
  p_implementation = (void *)(p_output_buffer_space + 8);
  if ( *(char *)(((p_output_buffer_space + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_94:
    __asan_report_store1(p_implementation);
    goto LABEL_95;
  }
  *(_BYTE *)(p_output_buffer_space + 8) = 0;
LABEL_70:
  p_implementation = &this->pending_read_.impl_.implementation_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pending_read_.impl_.implementation_ >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    __asan_report_store8();
    goto LABEL_96;
  }
  this->pending_read_.impl_.implementation_.expiry.time_.time_count_.value_ = (boost::date_time::int_adapter<long int>::int_type)v4;
  time_of_day.ticks_.value_ = 0x8000000000000000LL;
  d.days_ = 0;
  p_d = (char *)&d;
  boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>::counted_time_rep(
    (boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *const)(v6 + 32),
    &d,
    &time_of_day);
  v7 = *(_QWORD *)(v6 + 32);
  p_implementation = &this->pending_write_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pending_write_ >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8(p_implementation);
    goto LABEL_97;
  }
  p_d = (char *)this->pending_write_.impl_.service_;
  p_output_buffer_space = (unsigned __int64)&this->pending_write_.impl_.implementation_;
  p_implementation = &this->pending_write_.impl_.implementation_.might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&this->pending_write_.impl_.implementation_.might_have_pending_waits >> 3)
               + 0x7FFF8000) < 0 )
  {
LABEL_97:
    __asan_report_load1(p_implementation);
    goto LABEL_98;
  }
  if ( !this->pending_write_.impl_.implementation_.might_have_pending_waits )
    goto LABEL_74;
LABEL_98:
  v34 = p_d + 104;
  if ( *(_BYTE *)(((unsigned __int64)(p_d + 104) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v34);
    goto LABEL_102;
  }
  boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    *((boost::asio::detail::epoll_reactor *const *)p_d + 13),
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *)(p_d + 40),
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *)(p_output_buffer_space + 16),
    0xFFFFFFFFFFFFFFFFLL);
  v34 = (char *)(p_output_buffer_space + 8);
  if ( *(char *)(((p_output_buffer_space + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_102:
    __asan_report_store1(v34);
LABEL_103:
    v35 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( *(_BYTE *)(((unsigned __int64)&this->output_buffer_space_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->output_buffer_space_);
    v36 = this->output_buffer_space_._M_impl._M_start;
    if ( v36 )
      operator delete(v36);
    while ( 1 )
    {
      boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::~io_object_impl(&this->pending_write_.impl_);
      boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>,boost::asio::executor>::~io_object_impl(&p_pending_read->impl_);
      if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        break;
      __asan_report_load8(this);
      v35 = v37;
    }
    if ( SSL_get_ex_data(this->engine_.ssl_, 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v38 = SSL_get_ex_data(this->engine_.ssl_, 0LL);
      v39 = (__int64 *)v38;
      if ( v38 )
      {
        if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v38);
        v40 = *v39;
        if ( *(_BYTE *)(((unsigned __int64)(*v39 + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*v39 + 8);
        (*(void (**)(void))(v40 + 8))();
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      SSL_set_ex_data(this->engine_.ssl_, 0LL, 0LL);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->engine_.ext_bio_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->engine_.ext_bio_);
    BIO_free(this->engine_.ext_bio_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    ssl = this->engine_.ssl_;
    SSL_free(this->engine_.ssl_);
    __asan_handle_no_return(ssl);
    _Unwind_Resume(v35);
  }
  *(_BYTE *)(p_output_buffer_space + 8) = 0;
LABEL_74:
  if ( *(_BYTE *)(((unsigned __int64)&this->pending_write_.impl_.implementation_ >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  this->pending_write_.impl_.implementation_.expiry.time_.time_count_.value_ = v7;
  if ( v45 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
};
