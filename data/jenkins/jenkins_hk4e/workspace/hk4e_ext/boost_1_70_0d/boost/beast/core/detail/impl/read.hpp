// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/core/detail/impl/read.hpp

// Line 71: range 0000000019BD887A-0000000019BD9459
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>::operator()(
        boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > *const this,
        boost::beast::error_code ec,
        std::size_t bytes_transferred,
        int cont)
{
  unsigned __int64 s; // r14
  const boost::system::error_category *cat; // rbp
  unsigned __int64 v7; // r15
  _DWORD *v8; // r13
  __int64 v9; // rsi
  boost::asio::coroutine *v10; // rbp
  char v11; // dl
  int value; // eax
  void *p_b; // rdi
  boost::beast::http::basic_parser<false> *parser; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  void *p_ec; // rdi
  int (**vptr_async_base)(...); // rax
  boost::beast::basic_flat_buffer<std::allocator<char> > *b; // rdi
  std::size_t max; // rdx
  char **p_out; // rcx
  unsigned __int64 v22; // rsi
  char **p_in; // rsi
  signed __int64 v24; // rcx
  __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 *v27; // rdi
  char v28; // dl
  boost::beast::basic_flat_buffer<std::allocator<char> > *v29; // rsi
  void *p_s; // rdi
  boost::asio::mutable_buffer v31; // rax
  boost::asio::mutable_buffer *p_buffers; // rsi
  char v33; // dl
  boost::beast::basic_flat_buffer<std::allocator<char> > **p_last; // rdi
  boost::beast::basic_flat_buffer<std::allocator<char> > *v35; // rax
  char *last; // rcx
  char *out; // rdx
  std::size_t *p_total; // rdi
  char v39; // dl
  void *v40; // rdi
  boost::asio::mutable_buffer v41; // rax
  char v42; // dl
  char *v43; // rdi
  unsigned __int64 v44; // rax
  boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data **p_d; // rdi
  char v46; // al
  char v47; // dl
  unsigned __int64 p_anon_0; // rax
  char *M_local_buf; // rdi
  char v50; // al
  boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data *v51; // rax
  boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::message_type *m; // r14
  char v53; // al
  char v54; // dl
  unsigned __int64 p_h; // rdi
  unsigned __int64 v56; // rax
  __int64 p_value; // rax
  boost::asio::detail::atomic_count **p_ready; // rax
  unsigned __int64 ready; // rax
  char v60; // dl
  struct _Unwind_Exception *v61; // rbx
  char v62; // dl
  __int64 v64; // [rsp+18h] [rbp-190h]
  const boost::system::error_category *v65; // [rsp+20h] [rbp-188h]
  boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data *d; // [rsp+28h] [rbp-180h]
  __int64 v67; // [rsp+30h] [rbp-178h] BYREF
  __int64 v68; // [rsp+38h] [rbp-170h] BYREF
  boost::asio::mutable_buffer buffers; // [rsp+40h] [rbp-168h] BYREF
  boost::beast::http::basic_fields<std::allocator<char> > other; // [rsp+50h] [rbp-158h] BYREF
  unsigned int version; // [rsp+A8h] [rbp-100h]
  boost::beast::http::status result; // [rsp+ACh] [rbp-FCh]
  void *v73[2]; // [rsp+B0h] [rbp-F8h] BYREF
  __m128i v74; // [rsp+C0h] [rbp-E8h] BYREF
  char v75[216]; // [rsp+D0h] [rbp-D8h] BYREF

  s = *(_QWORD *)&ec.val_;
  cat = ec.cat_;
  LODWORD(v64) = cont;
  v7 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_2(160LL);
    if ( v16 )
      v7 = v16;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 32 8 11 max_size:76 64 8 4 n:71 96 16 14 _coro_value:78 128 16 5 ec:72";
  *(_QWORD *)(v7 + 16) = boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>::operator();
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -219021312;
  v8[536862724] = -202178560;
  *(_QWORD *)(v7 + 128) = v9;
  *(_QWORD *)(v7 + 136) = cat;
  v10 = &this->boost::asio::coroutine;
  *(_QWORD *)(v7 + 96) = &this->boost::asio::coroutine;
  *(_BYTE *)(v7 + 104) = 0;
  v11 = *(_BYTE *)(((unsigned __int64)&this->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 120) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(&this->boost::asio::coroutine);
  }
  else
  {
    value = this->value_;
    if ( value == 90 )
      goto LABEL_61;
    if ( value <= 90 )
    {
      if ( value == -1 )
      {
        *(_BYTE *)(v7 + 104) = 1;
        this->value_ = -1;
        goto bail_out_of_coroutine;
      }
      if ( value )
        goto bail_out_of_coroutine;
      while ( 1 )
      {
        p_b = &this->b_;
        if ( *(_BYTE *)(((unsigned __int64)&this->b_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_b);
        }
        else
        {
          p_b = &this->cond_;
          if ( !*(_BYTE *)(((unsigned __int64)&this->cond_ >> 3) + 0x7FFF8000) )
          {
            parser = this->cond_.parser;
            v15 = boost::beast::http::detail::parse_until<boost::beast::basic_flat_buffer<std::allocator<char>>,false,unsigned long boost::beast::http::detail::read_all_condition<false>::operator()<boost::beast::basic_flat_buffer<std::allocator<char>>>(boost::system::error_code &,unsigned long,boost::beast::basic_flat_buffer<std::allocator<char>> &)::{lambda(void)#1}>(
                    this->b_,
                    parser,
                    (boost::beast::error_code *)(v7 + 128),
                    (boost::beast::http::detail::read_all_condition<false>::operator()<boost::beast::basic_flat_buffer<std::allocator<char> > >::<lambda()>)&this->cond_);
            goto LABEL_23;
          }
        }
        v15 = __asan_report_load8(p_b);
LABEL_23:
        *(_QWORD *)(v7 + 32) = v15;
        b = this->b_;
        if ( *(_BYTE *)(((unsigned __int64)&b->max_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&b->max_);
LABEL_42:
          __asan_report_load8(p_out);
LABEL_43:
          b = v29;
          __asan_report_load8(v29);
          goto LABEL_44;
        }
        max = b->max_;
        p_out = &b->out_;
        v22 = (unsigned __int64)&b->out_ >> 3;
        if ( *(_BYTE *)(v22 + 0x7FFF8000) )
          goto LABEL_42;
        p_in = &b->in_;
        if ( *(_BYTE *)(((unsigned __int64)&b->in_ >> 3) + 0x7FFF8000) )
          goto LABEL_43;
        v24 = b->out_ - b->in_;
        v68 = max - v24;
        if ( max - v24 >= v15 )
        {
          v25 = (__int64 *)(v7 + 32);
          goto LABEL_28;
        }
LABEL_44:
        v25 = &v68;
LABEL_28:
        if ( *(_BYTE *)(((unsigned __int64)&b->end_ >> 3) + 0x7FFF8000) )
        {
          b = (boost::beast::basic_flat_buffer<std::allocator<char> > *)((char *)b + 32);
          __asan_report_load8(b);
LABEL_46:
          __asan_report_load8(b);
          goto LABEL_47;
        }
        if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
          goto LABEL_46;
        v26 = b->end_ - b->begin_ - v24;
        *(_QWORD *)(v7 + 64) = v26;
        v67 = 512LL;
        if ( v26 <= 0x200 )
        {
          v27 = &v67;
          goto LABEL_32;
        }
LABEL_47:
        v27 = (__int64 *)(v7 + 64);
LABEL_32:
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          v27 = v25;
          __asan_report_load8(v25);
LABEL_49:
          __asan_report_load8(v27);
LABEL_50:
          __asan_report_load8(v25);
          goto LABEL_51;
        }
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          goto LABEL_49;
        if ( *v27 <= (unsigned __int64)*v25 )
          v25 = v27;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          goto LABEL_50;
        bytes_transferred = *v25;
        if ( !*v25 )
          goto LABEL_75;
        *(_BYTE *)(v7 + 104) = 1;
        v28 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this - 120) & 7) + 3) < v28 || !v28 )
        {
          this->value_ = 90;
          goto LABEL_57;
        }
LABEL_51:
        p_s = &this->boost::asio::coroutine;
        __asan_report_store4(&this->boost::asio::coroutine);
LABEL_52:
        __asan_report_load8(p_s);
LABEL_53:
        v31.data_ = (void *)__asan_report_load8(p_s);
        while ( 1 )
        {
          buffers = v31;
          p_buffers = &buffers;
          boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffer,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>(
            (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *const)s,
            &buffers,
            this);
          v33 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)this - 120) & 7) + 3) >= v33 )
          {
            if ( v33 )
              break;
          }
          if ( v10->value_ )
            goto bail_out_of_coroutine;
LABEL_57:
          p_s = &this->s_;
          if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
            goto LABEL_52;
          s = (unsigned __int64)this->s_;
          p_s = &this->b_;
          if ( *(_BYTE *)(((unsigned __int64)&this->b_ >> 3) + 0x7FFF8000) )
            goto LABEL_53;
          v31 = boost::beast::basic_flat_buffer<std::allocator<char>>::prepare(this->b_, bytes_transferred);
        }
        __asan_report_load4(&this->boost::asio::coroutine);
LABEL_61:
        p_last = &this->b_;
        if ( *(_BYTE *)(((unsigned __int64)&this->b_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_last);
LABEL_70:
          __asan_report_load8(p_last);
LABEL_71:
          v35 = (boost::beast::basic_flat_buffer<std::allocator<char> > *)__asan_report_load8(p_last);
          goto LABEL_72;
        }
        v35 = this->b_;
        *(_QWORD *)(v7 + 64) = bytes_transferred;
        p_last = (boost::beast::basic_flat_buffer<std::allocator<char> > **)&v35->last_;
        if ( *(_BYTE *)(((unsigned __int64)&v35->last_ >> 3) + 0x7FFF8000) )
          goto LABEL_70;
        last = v35->last_;
        p_last = (boost::beast::basic_flat_buffer<std::allocator<char> > **)&v35->out_;
        if ( *(_BYTE *)(((unsigned __int64)&v35->out_ >> 3) + 0x7FFF8000) )
          goto LABEL_71;
        out = v35->out_;
        v68 = last - out;
        if ( bytes_transferred <= last - out )
        {
          p_total = (std::size_t *)(v7 + 64);
          goto LABEL_66;
        }
LABEL_72:
        p_total = (std::size_t *)&v68;
LABEL_66:
        if ( *(_BYTE *)(((unsigned __int64)p_total >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_total);
LABEL_74:
          __asan_report_load8(p_total);
LABEL_75:
          if ( !(_BYTE)v64 )
          {
            if ( *(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
            {
              __asan_report_store16(&this->ec_);
            }
            else
            {
              this->ec_ = (boost::beast::error_code)_mm_load_si128((const __m128i *)(v7 + 128));
              *(_BYTE *)(v7 + 104) = 1;
              v39 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
              if ( (char)((((_BYTE)this - 120) & 7) + 3) < v39 || !v39 )
              {
                this->value_ = 101;
                while ( 1 )
                {
                  v40 = &this->s_;
                  if ( *(_BYTE *)(((unsigned __int64)&this->s_ >> 3) + 0x7FFF8000) )
                  {
LABEL_82:
                    __asan_report_load8(v40);
                  }
                  else
                  {
                    s = (unsigned __int64)this->s_;
                    v40 = &this->b_;
                    if ( !*(_BYTE *)(((unsigned __int64)&this->b_ >> 3) + 0x7FFF8000) )
                    {
                      v41 = boost::beast::basic_flat_buffer<std::allocator<char>>::prepare(this->b_, 0LL);
                      goto LABEL_84;
                    }
                  }
                  v41.data_ = (void *)__asan_report_load8(v40);
LABEL_84:
                  buffers = v41;
                  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_read_some<boost::asio::mutable_buffer,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>(
                    (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *const)s,
                    &buffers,
                    this);
                  p_ec = &this->boost::asio::coroutine;
                  v42 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
                  if ( (char)((((_BYTE)this - 120) & 7) + 3) >= v42 && v42 )
                  {
                    __asan_report_load4(p_ec);
LABEL_91:
                    __asan_report_load16(p_ec);
LABEL_92:
                    vptr_async_base = (int (**)(...))__asan_report_load8(this);
                    goto LABEL_93;
                  }
                  if ( v10->value_ )
                    goto bail_out_of_coroutine;
                }
              }
            }
            v40 = &this->boost::asio::coroutine;
            __asan_report_store4(&this->boost::asio::coroutine);
            goto LABEL_82;
          }
LABEL_17:
          s = (unsigned __int64)&this->total_;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            goto LABEL_92;
          vptr_async_base = this->_vptr_async_base;
          if ( *(_BYTE *)(((unsigned __int64)this->_vptr_async_base >> 3) + 0x7FFF8000) )
LABEL_93:
            __asan_report_load8(vptr_async_base);
          else
            (*vptr_async_base)(this);
          boost::asio::executor_work_guard<boost::asio::executor>::reset(&this->wg1_);
          if ( *(_BYTE *)((s >> 3) + 0x7FFF8000) )
          {
            v43 = (char *)s;
            __asan_report_load8(s);
          }
          else
          {
            bytes_transferred = this->total_;
            v43 = (char *)(v7 + 128);
            if ( !*(_WORD *)(((v7 + 128) >> 3) + 0x7FFF8000) )
            {
              v64 = *(_QWORD *)(v7 + 128);
              v65 = *(const boost::system::error_category **)(v7 + 136);
              if ( (_DWORD)v64 )
                goto LABEL_97;
LABEL_102:
              p_d = &this->h_.d_;
              if ( *(_BYTE *)(((unsigned __int64)&this->h_.d_ >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_d);
              }
              else
              {
                d = this->h_.d_;
                s = (unsigned __int64)&d->p.m_;
                boost::beast::http::basic_fields<std::allocator<char>>::basic_fields(&other, &d->p.m_);
                p_d = (boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data **)&d->p.m_.version_;
                v46 = *(_BYTE *)(((unsigned __int64)&d->p.m_.version_ >> 3) + 0x7FFF8000);
                if ( !v46 || v46 > 3 )
                {
                  version = d->p.m_.version_;
                  p_d = (boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data **)&d->p.m_.result_;
                  v47 = *(_BYTE *)(((unsigned __int64)&d->p.m_.result_ >> 3) + 0x7FFF8000);
                  if ( (char)((((_BYTE)d - 76) & 7) + 3) < v47 || !v47 )
                  {
                    result = d->p.m_.result_;
                    v73[0] = &v74;
                    p_d = (boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >::data **)&d->p.m_.boost::empty_::empty_value<std::string,0,false>;
                    if ( !*(_BYTE *)(((unsigned __int64)&d->p.m_.boost::empty_::empty_value<std::string,0,false> >> 3)
                                   + 0x7FFF8000) )
                    {
                      p_anon_0 = (unsigned __int64)&d->p.m_.value_._anon_0;
                      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)d->p.m_.value_._M_dataplus._M_p != &d->p.m_.value_._anon_0 )
                      {
                        v73[0] = d->p.m_.value_._M_dataplus._M_p;
                        M_local_buf = d->p.m_.value_._anon_0._M_local_buf;
                        if ( !*(_BYTE *)(((unsigned __int64)&d->p.m_.value_._anon_0 >> 3) + 0x7FFF8000) )
                        {
                          v74.m128i_i64[0] = d->p.m_.value_._anon_0._M_allocated_capacity;
                          goto LABEL_111;
                        }
LABEL_130:
                        __asan_report_load8(M_local_buf);
                        goto LABEL_131;
                      }
LABEL_126:
                      M_local_buf = (char *)p_anon_0;
                      if ( *(_BYTE *)((p_anon_0 >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)((p_anon_0 >> 3) + 0x7FFF8000) <= (unsigned __int8)(p_anon_0 & 7)
                        || *(_BYTE *)(((s + 127) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((s + 127) >> 3) + 0x7FFF8000) <= (unsigned __int8)((s + 127) & 7) )
                      {
                        __asan_report_load_n(p_anon_0, 16LL);
                        goto LABEL_130;
                      }
                      v74 = _mm_loadu_si128((const __m128i *)(s + 112));
LABEL_111:
                      M_local_buf = (char *)(s + 104);
                      if ( *(_BYTE *)(((s + 104) >> 3) + 0x7FFF8000) )
                      {
LABEL_131:
                        __asan_report_load8(M_local_buf);
                      }
                      else
                      {
                        v73[1] = *(void **)(s + 104);
                        *(_QWORD *)(s + 96) = p_anon_0;
                        *(_QWORD *)(s + 104) = 0LL;
                        M_local_buf = (char *)(s + 112);
                        v50 = *(_BYTE *)(((s + 112) >> 3) + 0x7FFF8000);
                        if ( v50 > (char)((s + 112) & 7) || !v50 )
                        {
                          *(_BYTE *)(s + 112) = 0;
                          v51 = this->h_.d_;
                          M_local_buf = (char *)&v51->m;
                          if ( !*(_BYTE *)(((unsigned __int64)&v51->m >> 3) + 0x7FFF8000) )
                          {
                            m = v51->m;
                            boost::beast::http::basic_fields<std::allocator<char>>::operator=(m, &other);
                            M_local_buf = (char *)&m->version_;
                            v53 = *(_BYTE *)(((unsigned __int64)&m->version_ >> 3) + 0x7FFF8000);
                            if ( !v53 || v53 > 3 )
                            {
                              m->version_ = version;
                              M_local_buf = (char *)&m->result_;
                              v54 = *(_BYTE *)(((unsigned __int64)&m->result_ >> 3) + 0x7FFF8000);
                              if ( (char)((((_BYTE)m + 92) & 7) + 3) < v54 || !v54 )
                              {
                                m->result_ = result;
                                std::string::operator=(&m->boost::empty_::empty_value<std::string,0,false>, v73);
                                if ( v73[0] != &v74 )
                                  operator delete(v73[0]);
                                boost::beast::http::basic_fields<std::allocator<char>>::~basic_fields(&other);
LABEL_97:
                                if ( !*(_BYTE *)(((unsigned __int64)&this->h_ >> 3) + 0x7FFF8000) )
                                {
                                  v44 = (unsigned __int64)this->h_.boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> >::_vptr_async_base;
                                  if ( !*(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
                                  {
                                    (*(void (__fastcall **)(boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > *))v44)(&this->h_);
                                    goto LABEL_138;
                                  }
LABEL_137:
                                  __asan_report_load8(v44);
LABEL_138:
                                  boost::asio::executor_work_guard<boost::asio::executor>::reset(&this->h_.wg1_);
                                  p_h = (unsigned __int64)&this->h_.h_;
                                  if ( *(_BYTE *)(((unsigned __int64)&this->h_.h_.ec_ >> 3) + 0x7FFF8000) )
                                  {
                                    v56 = __asan_report_load8(&this->h_.h_.ec_);
                                  }
                                  else
                                  {
                                    v56 = (unsigned __int64)this->h_.h_.ec_;
                                    if ( !*(_WORD *)((v56 >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)v56 = v64;
                                      *(_QWORD *)(v56 + 8) = v65;
                                      p_value = (__int64)&this->h_.h_.value_;
                                      if ( !*(_BYTE *)(((unsigned __int64)&this->h_.h_.value_ >> 3) + 0x7FFF8000) )
                                      {
                                        if ( !*(_BYTE *)(((unsigned __int64)this->h_.h_.value_ >> 3) + 0x7FFF8000) )
                                        {
                                          *this->h_.h_.value_ = bytes_transferred;
                                          p_ready = &this->h_.h_.ready_;
                                          if ( !*(_BYTE *)(((unsigned __int64)&this->h_.h_.ready_ >> 3) + 0x7FFF8000) )
                                          {
                                            ready = (unsigned __int64)this->h_.h_.ready_;
                                            if ( !*(_BYTE *)((ready >> 3) + 0x7FFF8000) )
                                            {
                                              if ( _InterlockedExchangeAdd64(
                                                     (volatile signed __int64 *)ready,
                                                     0xFFFFFFFFFFFFFFFFLL) != 1 )
                                                goto bail_out_of_coroutine;
LABEL_157:
                                              if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_load8(p_h);
                                              }
                                              else
                                              {
                                                p_h = (unsigned __int64)this->h_.h_.coro_._M_ptr;
                                                if ( !*(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
                                                {
                                                  boost::coroutines2::detail::push_coroutine<void>::control_block::resume(*(boost::coroutines2::detail::push_coroutine<void>::control_block *const *)p_h);
                                                  goto bail_out_of_coroutine;
                                                }
                                              }
                                              __asan_report_load8(p_h);
LABEL_162:
                                              v61 = (struct _Unwind_Exception *)__asan_report_store4(p_h);
                                              if ( !*(_BYTE *)(v7 + 104) )
                                              {
                                                p_h = *(_QWORD *)(v7 + 96);
                                                v62 = *(_BYTE *)((p_h >> 3) + 0x7FFF8000);
                                                if ( (char)((p_h & 7) + 3) >= v62 && v62 )
                                                  __asan_report_store4(p_h);
                                                *(_DWORD *)p_h = -1;
                                              }
                                              __asan_handle_no_return(p_h);
                                              _Unwind_Resume(v61);
                                            }
LABEL_156:
                                            p_h = ready;
                                            __asan_report_store8();
                                            goto LABEL_157;
                                          }
LABEL_155:
                                          ready = __asan_report_load8(p_ready);
                                          goto LABEL_156;
                                        }
LABEL_154:
                                        __asan_report_store8();
                                        goto LABEL_155;
                                      }
LABEL_153:
                                      __asan_report_load8(p_value);
                                      goto LABEL_154;
                                    }
                                  }
                                  p_value = __asan_report_store16(v56);
                                  goto LABEL_153;
                                }
LABEL_136:
                                v44 = __asan_report_load8(&this->h_);
                                goto LABEL_137;
                              }
LABEL_135:
                              __asan_report_store4(M_local_buf);
                              goto LABEL_136;
                            }
LABEL_134:
                            __asan_report_store4(M_local_buf);
                            goto LABEL_135;
                          }
LABEL_133:
                          __asan_report_load8(M_local_buf);
                          goto LABEL_134;
                        }
                      }
                      __asan_report_store1(M_local_buf);
                      goto LABEL_133;
                    }
LABEL_125:
                    p_anon_0 = __asan_report_load8(p_d);
                    goto LABEL_126;
                  }
LABEL_124:
                  __asan_report_load4(p_d);
                  goto LABEL_125;
                }
              }
              __asan_report_load4(p_d);
              goto LABEL_124;
            }
          }
          __asan_report_load16(v43);
          goto LABEL_102;
        }
        v35->out_ = &out[*p_total];
        p_total = &this->total_;
        if ( *(_BYTE *)(((unsigned __int64)&this->total_ >> 3) + 0x7FFF8000) )
          goto LABEL_74;
        this->total_ += bytes_transferred;
      }
    }
  }
  if ( value == 101 )
  {
    p_ec = &this->ec_;
    if ( *(_WORD *)(((unsigned __int64)&this->ec_ >> 3) + 0x7FFF8000) )
      goto LABEL_91;
    *(__m128i *)(v7 + 128) = _mm_loadu_si128((const __m128i *)&this->ec_);
    goto LABEL_17;
  }
bail_out_of_coroutine:
  if ( !*(_BYTE *)(v7 + 104) )
  {
    p_h = *(_QWORD *)(v7 + 96);
    v60 = *(_BYTE *)((p_h >> 3) + 0x7FFF8000);
    if ( (char)((p_h & 7) + 3) >= v60 && v60 )
      goto LABEL_162;
    *(_DWORD *)p_h = -1;
  }
  if ( v75 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 231: range 0000000019BD945E-0000000019BD98B1
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::detail::async_read<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,void>(
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream,
        boost::beast::basic_flat_buffer<std::allocator<char> > *buffer,
        boost::beast::http::detail::read_all_condition<false> *cond,
        boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > *handler)
{
  unsigned __int64 p_h; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v9)(void); // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base *list; // rax
  char v12; // al
  unsigned __int64 v13; // rdx
  const boost::system::detail::system_error_category *v14; // rdx OVERLAPPED
  __int64 v15; // rsi OVERLAPPED
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+8h] [rbp-F0h] BYREF
  boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > v17; // [rsp+10h] [rbp-E8h] BYREF

  v17.value_ = 0;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::get_executor(stream);
  v17._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  v17.h_.boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>> + 2);
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_ >> 3) + 0x7FFF8000) )
  {
    p_h = (unsigned __int64)&handler->h_;
    __asan_report_load8(&handler->h_);
    goto LABEL_26;
  }
  v17.h_.h_.coro_._M_ptr = handler->h_.coro_._M_ptr;
  v17.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_h = (unsigned __int64)&handler->h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_h);
    goto LABEL_27;
  }
  M_pi = handler->h_.coro_._M_refcount._M_pi;
  handler->h_.coro_._M_refcount._M_pi = 0LL;
  v17.h_.h_.coro_._M_refcount._M_pi = M_pi;
  handler->h_.coro_._M_ptr = 0LL;
  p_h = (unsigned __int64)&handler->h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_h);
    goto LABEL_28;
  }
  v17.h_.h_.ca_ = handler->h_.ca_;
  p_h = (unsigned __int64)&handler->h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_h);
LABEL_29:
    v9 = (__int64 (**)(void))__asan_report_load8(p_h);
    goto LABEL_30;
  }
  p_h = (unsigned __int64)handler->h_.handler_.executor_.impl_;
  if ( !p_h )
    goto LABEL_9;
  if ( *(_BYTE *)((p_h >> 3) + 0x7FFF8000) )
    goto LABEL_29;
  v9 = *(__int64 (***)(void))p_h;
  if ( *(_BYTE *)((*(_QWORD *)p_h >> 3) + 0x7FFF8000LL) )
  {
LABEL_30:
    p_target = v9;
    __asan_report_load8(v9);
    goto LABEL_31;
  }
  p_h = (*v9)();
LABEL_9:
  v17.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_h;
  p_target = &handler->h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8(p_target);
    goto LABEL_32;
  }
  v17.h_.h_.handler_.target_ = handler->h_.handler_.target_;
  p_target = &handler->h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(p_target);
    goto LABEL_33;
  }
  v17.h_.h_.ready_ = handler->h_.ready_;
  p_target = &handler->h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_target);
    goto LABEL_34;
  }
  v17.h_.h_.ec_ = handler->h_.ec_;
  p_target = &handler->h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_target);
    goto LABEL_35;
  }
  v17.h_.h_.value_ = handler->h_.value_;
  p_target = &handler->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_target);
    goto LABEL_36;
  }
  v17.h_.wg1_.executor_.impl_ = handler->wg1_.executor_.impl_;
  handler->wg1_.executor_.impl_ = 0LL;
  p_target = &handler->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_36:
    __asan_report_load1(p_target);
    goto LABEL_37;
  }
  v17.h_.wg1_.owns_ = handler->wg1_.owns_;
  handler->wg1_.owns_ = 0;
  v17.h_.boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>> + 2);
  p_target = &handler->list_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->list_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_target);
LABEL_38:
    __asan_report_load4(p_target);
    goto LABEL_39;
  }
  list = handler->list_;
  handler->list_ = 0LL;
  v17.h_.list_ = list;
  p_target = &handler->boost::asio::coroutine;
  v12 = *(_BYTE *)(((unsigned __int64)&handler->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_38;
  v17.h_.value_ = handler->value_;
  v17.h_.boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>> + 2);
  p_target = &handler->d_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->d_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(p_target);
LABEL_40:
    __asan_report_load8(p_target);
    goto LABEL_41;
  }
  v17.h_.d_ = handler->d_;
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v17.wg1_, &e);
  p_target = e.impl_;
  if ( !e.impl_ )
    goto LABEL_23;
  if ( *(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_40;
  v13 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(v13);
    goto LABEL_42;
  }
  (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
LABEL_23:
  v17._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>
                                       + 2);
  v17.s_ = stream;
  v17.b_ = buffer;
  if ( *(_BYTE *)(((unsigned __int64)cond >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(cond);
    goto LABEL_43;
  }
  v17.cond_ = (boost::beast::http::detail::read_all_condition<false>)cond->parser;
  v17.ec_.val_ = 0;
  v17.ec_.failed_ = 0;
  v14 = &boost::system::detail::cat_holder<void>::system_category_instance;
  v17.ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  v17.total_ = 0LL;
  v15 = 0LL;
  boost::beast::detail::dynamic_read_ops::read_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>::operator()(
    &v17,
    *(boost::beast::error_code *)(&v14 - 1),
    0LL,
    0);
LABEL_43:
  v17._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v17.wg1_);
  v17.h_.boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>> + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v17.h_);
};

// Line 231: range 0000000019C13E04-0000000019C14270
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::beast::detail::async_read<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,void>(
        boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *stream,
        boost::beast::basic_flat_buffer<std::allocator<char> > *buffer,
        boost::beast::http::detail::read_all_condition<false> *cond,
        boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > *handler)
{
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> *p_h; // rbp
  boost::beast::http::detail::read_all_condition<false> *v5; // r13
  unsigned __int64 p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  __int64 (**v10)(void); // rax
  void *p_target; // rdi
  boost::beast::detail::stable_base *list; // rax
  char v13; // al
  unsigned __int64 v14; // rdx
  const boost::system::detail::system_error_category *v15; // rdx OVERLAPPED
  __int64 v16; // rsi OVERLAPPED
  boost::asio::executor_work_guard<boost::asio::executor>::executor_type e; // [rsp+8h] [rbp-F0h] BYREF
  boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > v18; // [rsp+10h] [rbp-E8h] BYREF

  v18.value_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)stream >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(stream);
    goto LABEL_27;
  }
  v5 = cond;
  boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>::get_executor(&stream->p_._M_t._M_t._M_head_impl->stream_);
  v18._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  v18.h_.boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>> + 2);
  p_h = &handler->h_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    p_M_refcount = (unsigned __int64)p_h;
    __asan_report_load8(p_h);
    goto LABEL_28;
  }
  v18.h_.h_.coro_._M_ptr = handler->h_.coro_._M_ptr;
  v18.h_.h_.coro_._M_refcount._M_pi = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.coro_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.coro_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_M_refcount);
    goto LABEL_29;
  }
  M_pi = handler->h_.coro_._M_refcount._M_pi;
  handler->h_.coro_._M_refcount._M_pi = 0LL;
  v18.h_.h_.coro_._M_refcount._M_pi = M_pi;
  handler->h_.coro_._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&handler->h_.ca_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ca_ >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(p_M_refcount);
    goto LABEL_30;
  }
  v18.h_.h_.ca_ = handler->h_.ca_;
  p_M_refcount = (unsigned __int64)&handler->h_.handler_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.handler_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(p_M_refcount);
LABEL_31:
    v10 = (__int64 (**)(void))__asan_report_load8(p_M_refcount);
    goto LABEL_32;
  }
  p_M_refcount = (unsigned __int64)handler->h_.handler_.executor_.impl_;
  if ( !p_M_refcount )
    goto LABEL_10;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_31;
  v10 = *(__int64 (***)(void))p_M_refcount;
  if ( *(_BYTE *)((*(_QWORD *)p_M_refcount >> 3) + 0x7FFF8000LL) )
  {
LABEL_32:
    p_target = v10;
    __asan_report_load8(v10);
    goto LABEL_33;
  }
  p_M_refcount = (*v10)();
LABEL_10:
  v18.h_.h_.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)p_M_refcount;
  p_target = &handler->h_.handler_.target_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.handler_.target_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_target);
    goto LABEL_34;
  }
  v18.h_.h_.handler_.target_ = handler->h_.handler_.target_;
  p_target = &handler->h_.ready_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ready_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_target);
    goto LABEL_35;
  }
  v18.h_.h_.ready_ = handler->h_.ready_;
  p_target = &handler->h_.ec_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_target);
    goto LABEL_36;
  }
  v18.h_.h_.ec_ = handler->h_.ec_;
  p_target = &handler->h_.value_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->h_.value_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_target);
    goto LABEL_37;
  }
  v18.h_.h_.value_ = handler->h_.value_;
  p_target = &handler->wg1_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->wg1_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_target);
    goto LABEL_38;
  }
  v18.h_.wg1_.executor_.impl_ = handler->wg1_.executor_.impl_;
  handler->wg1_.executor_.impl_ = 0LL;
  p_target = &handler->wg1_.owns_;
  if ( *(char *)(((unsigned __int64)&handler->wg1_.owns_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_38:
    __asan_report_load1(p_target);
    goto LABEL_39;
  }
  v18.h_.wg1_.owns_ = handler->wg1_.owns_;
  handler->wg1_.owns_ = 0;
  v18.h_.boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>> + 2);
  p_target = &handler->list_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->list_ >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(p_target);
LABEL_40:
    __asan_report_load4(p_target);
    goto LABEL_41;
  }
  list = handler->list_;
  handler->list_ = 0LL;
  v18.h_.list_ = list;
  p_target = &handler->boost::asio::coroutine;
  v13 = *(_BYTE *)(((unsigned __int64)&handler->boost::asio::coroutine >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_40;
  v18.h_.value_ = handler->value_;
  v18.h_.boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>> + 2);
  p_target = &handler->d_;
  if ( *(_BYTE *)(((unsigned __int64)&handler->d_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_target);
LABEL_42:
    __asan_report_load8(p_target);
    goto LABEL_43;
  }
  v18.h_.d_ = handler->d_;
  boost::asio::executor_work_guard<boost::asio::executor>::executor_work_guard(&v18.wg1_, &e);
  p_target = e.impl_;
  if ( !e.impl_ )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)e.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_42;
  v14 = (unsigned __int64)(e.impl_->_vptr_impl_base + 1);
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(v14);
    goto LABEL_44;
  }
  (*((void (**)(void))e.impl_->_vptr_impl_base + 1))();
LABEL_24:
  v18._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>
                                       + 2);
  v18.s_ = stream;
  v18.b_ = buffer;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(v5);
    goto LABEL_45;
  }
  v18.cond_ = (boost::beast::http::detail::read_all_condition<false>)v5->parser;
  v18.ec_.val_ = 0;
  v18.ec_.failed_ = 0;
  v15 = &boost::system::detail::cat_holder<void>::system_category_instance;
  v18.ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  v18.total_ = 0LL;
  v16 = 0LL;
  boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>::operator()(
    &v18,
    *(boost::beast::error_code *)(&v15 - 1),
    0LL,
    0);
LABEL_45:
  v18._vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>,boost::asio::executor,std::allocator<void>>
                                       + 2);
  boost::asio::executor_work_guard<boost::asio::executor>::~executor_work_guard(&v18.wg1_);
  v18.h_.boost::beast::async_base<boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> >,boost::asio::executor,std::allocator<void> >::_vptr_async_base = (int (**)(...))(&`vtable for'boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>> + 2);
  boost::beast::stable_async_base<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::asio::executor,std::allocator<void>>::~stable_async_base(&v18.h_);
};
