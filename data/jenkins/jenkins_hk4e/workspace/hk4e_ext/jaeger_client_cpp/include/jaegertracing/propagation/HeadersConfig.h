// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/jaeger_client_cpp/include/jaegertracing/propagation/HeadersConfig.h

// Line 57: range 0000000014E84694-0000000014E84A2C
void __fastcall jaegertracing::propagation::HeadersConfig::HeadersConfig(
        jaegertracing::propagation::HeadersConfig *const this)
{
  std::forward_iterator_tag v1; // cl
  std::forward_iterator_tag v3; // cl
  std::forward_iterator_tag v4; // cl
  std::forward_iterator_tag v5; // cl
  std::forward_iterator_tag v6; // cl
  std::forward_iterator_tag v7; // cl
  std::string *p_jaegerBaggageHeader; // rdi
  std::forward_iterator_tag v9; // cl
  std::forward_iterator_tag v10; // cl
  std::string __beg; // [rsp+0h] [rbp-98h] BYREF
  std::string v12; // [rsp+20h] [rbp-78h] BYREF
  std::string v13; // [rsp+40h] [rbp-58h] BYREF
  std::string v14; // [rsp+60h] [rbp-38h] BYREF

  v14._M_dataplus._M_p = v14._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v14, defaultValue, defaultValue, v1);
  v13._M_dataplus._M_p = v13._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v13, defaultValue, defaultValue, v3);
  v12._M_dataplus._M_p = v12._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v12, defaultValue, defaultValue, v4);
  __beg._M_dataplus._M_p = __beg._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&__beg, defaultValue, defaultValue, v5);
  if ( !__beg._M_string_length )
  {
    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      this->_jaegerDebugHeader._M_dataplus._M_p = this->_jaegerDebugHeader._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&this->_jaegerDebugHeader, &byte_1AE436AF[-15], byte_1AE436AF, v6);
      goto LABEL_8;
    }
    __asan_report_store8();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->_jaegerDebugHeader._M_dataplus._M_p = this->_jaegerDebugHeader._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &this->_jaegerDebugHeader,
      __beg._M_dataplus._M_p,
      &__beg._M_dataplus._M_p[__beg._M_string_length],
      v6);
  }
LABEL_8:
  if ( !v12._M_string_length )
  {
    p_jaegerBaggageHeader = &this->_jaegerBaggageHeader;
    if ( !*(_BYTE *)(((unsigned __int64)&this->_jaegerBaggageHeader >> 3) + 0x7FFF8000) )
    {
      this->_jaegerBaggageHeader._M_dataplus._M_p = this->_jaegerBaggageHeader._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(p_jaegerBaggageHeader, "jaeger-baggage", "", v7);
      goto LABEL_15;
    }
    __asan_report_store8();
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_jaegerBaggageHeader >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->_jaegerBaggageHeader._M_dataplus._M_p = this->_jaegerBaggageHeader._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &this->_jaegerBaggageHeader,
      v12._M_dataplus._M_p,
      &v12._M_dataplus._M_p[v12._M_string_length],
      v7);
  }
LABEL_15:
  if ( !v13._M_string_length )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&this->_traceContextHeaderName >> 3) + 0x7FFF8000) )
    {
      this->_traceContextHeaderName._M_dataplus._M_p = this->_traceContextHeaderName._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&this->_traceContextHeaderName, "uber-trace-id", "", v9);
      goto LABEL_22;
    }
    __asan_report_store8();
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_traceContextHeaderName >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->_traceContextHeaderName._M_dataplus._M_p = this->_traceContextHeaderName._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &this->_traceContextHeaderName,
      v13._M_dataplus._M_p,
      &v13._M_dataplus._M_p[v13._M_string_length],
      v9);
  }
LABEL_22:
  if ( !v14._M_string_length )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&this->_traceBaggageHeaderPrefix >> 3) + 0x7FFF8000) )
    {
      this->_traceBaggageHeaderPrefix._M_dataplus._M_p = this->_traceBaggageHeaderPrefix._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&this->_traceBaggageHeaderPrefix, "uberctx-", "", v10);
      goto LABEL_29;
    }
    __asan_report_store8();
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_traceBaggageHeaderPrefix >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->_traceBaggageHeaderPrefix._M_dataplus._M_p = this->_traceBaggageHeaderPrefix._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &this->_traceBaggageHeaderPrefix,
      v14._M_dataplus._M_p,
      &v14._M_dataplus._M_p[v14._M_string_length],
      v10);
  }
LABEL_29:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p != &__beg._anon_0 )
    operator delete(__beg._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
    operator delete(v12._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13._M_dataplus._M_p != &v13._anon_0 )
    operator delete(v13._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14._M_dataplus._M_p != &v14._anon_0 )
    operator delete(v14._M_dataplus._M_p);
};

// Line 62: range 0000000014E82246-0000000014E82531
void __fastcall jaegertracing::propagation::HeadersConfig::HeadersConfig(
        jaegertracing::propagation::HeadersConfig *const this,
        const std::string *jaegerDebugHeader,
        const std::string *jaegerBaggageHeader,
        const std::string *traceContextHeaderName,
        const std::string *traceBaggageHeaderPrefix)
{
  const std::string *v5; // rbp
  const std::string *v6; // r12
  const std::string *v7; // r13
  std::forward_iterator_tag v9; // cl
  const std::string *p_M_string_length; // rdi
  std::forward_iterator_tag v11; // cl
  std::forward_iterator_tag v12; // cl
  struct _Unwind_Exception *v13; // rbp
  jaegertracing::propagation::HeadersConfig *M_p; // rdi
  jaegertracing::propagation::HeadersConfig *v15; // rdi
  std::string::pointer v16; // rdi
  std::allocator<char> __a; // [rsp+Fh] [rbp-29h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&jaegerDebugHeader->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&jaegerDebugHeader->_M_string_length);
  }
  else
  {
    v7 = jaegerBaggageHeader;
    v6 = traceContextHeaderName;
    v5 = traceBaggageHeaderPrefix;
    if ( jaegerDebugHeader->_M_string_length )
      goto LABEL_10;
    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      this->_jaegerDebugHeader._M_dataplus._M_p = this->_jaegerDebugHeader._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(
        &this->_jaegerDebugHeader,
        &byte_1AE436AF[-15],
        byte_1AE436AF,
        (std::forward_iterator_tag)traceContextHeaderName);
      goto LABEL_5;
    }
  }
  __asan_report_store8();
LABEL_10:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_14;
  }
  this->_jaegerDebugHeader._M_dataplus._M_p = this->_jaegerDebugHeader._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)jaegerDebugHeader >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    p_M_string_length = jaegerDebugHeader;
    __asan_report_load8(jaegerDebugHeader);
    goto LABEL_15;
  }
  std::string::_M_construct<char *>(
    &this->_jaegerDebugHeader,
    jaegerDebugHeader->_M_dataplus._M_p,
    &jaegerDebugHeader->_M_dataplus._M_p[jaegerDebugHeader->_M_string_length],
    (std::forward_iterator_tag)traceContextHeaderName);
LABEL_5:
  p_M_string_length = (const std::string *)&v7->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v7->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(p_M_string_length);
    goto LABEL_16;
  }
  if ( !v7->_M_string_length )
  {
    std::string::basic_string<std::allocator<char>>(&this->_jaegerBaggageHeader, "jaeger-baggage", &__a);
    goto LABEL_21;
  }
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)&this->_jaegerBaggageHeader >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->_jaegerBaggageHeader._M_dataplus._M_p = this->_jaegerBaggageHeader._anon_0._M_local_buf;
    if ( !*(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        &this->_jaegerBaggageHeader,
        v7->_M_dataplus._M_p,
        &v7->_M_dataplus._M_p[v7->_M_string_length],
        v9);
      goto LABEL_21;
    }
  }
  __asan_report_load8(v7);
LABEL_21:
  if ( *(_BYTE *)(((unsigned __int64)&v6->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v6->_M_string_length);
  }
  else if ( !v6->_M_string_length )
  {
    std::string::basic_string<std::allocator<char>>(&this->_traceContextHeaderName, "uber-trace-id", &__a);
    goto LABEL_30;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_traceContextHeaderName >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->_traceContextHeaderName._M_dataplus._M_p = this->_traceContextHeaderName._anon_0._M_local_buf;
    if ( !*(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        &this->_traceContextHeaderName,
        v6->_M_dataplus._M_p,
        &v6->_M_dataplus._M_p[v6->_M_string_length],
        v11);
      goto LABEL_30;
    }
  }
  __asan_report_load8(v6);
LABEL_30:
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v5->_M_string_length);
  }
  else if ( !v5->_M_string_length )
  {
    std::string::basic_string<std::allocator<char>>(&this->_traceBaggageHeaderPrefix, "uberctx-", &__a);
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_traceBaggageHeaderPrefix >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_38:
    v13 = (struct _Unwind_Exception *)__asan_report_load8(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->_traceContextHeaderName >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_traceContextHeaderName);
    M_p = (jaegertracing::propagation::HeadersConfig *)this->_traceContextHeaderName._M_dataplus._M_p;
    if ( M_p != (jaegertracing::propagation::HeadersConfig *)&this->_traceContextHeaderName._anon_0 )
      operator delete(M_p);
    while ( *(_BYTE *)(((unsigned __int64)&this->_jaegerBaggageHeader >> 3) + 0x7FFF8000) )
      v13 = (struct _Unwind_Exception *)__asan_report_load8(&this->_jaegerBaggageHeader);
    v15 = (jaegertracing::propagation::HeadersConfig *)this->_jaegerBaggageHeader._M_dataplus._M_p;
    if ( v15 != (jaegertracing::propagation::HeadersConfig *)&this->_jaegerBaggageHeader._anon_0 )
      operator delete(v15);
    while ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      v13 = (struct _Unwind_Exception *)__asan_report_load8(this);
    v16 = this->_jaegerDebugHeader._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->_jaegerDebugHeader._M_dataplus._M_p != &this->_jaegerDebugHeader._anon_0 )
      operator delete(v16);
    __asan_handle_no_return(v16);
    _Unwind_Resume(v13);
  }
  this->_traceBaggageHeaderPrefix._M_dataplus._M_p = this->_traceBaggageHeaderPrefix._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    goto LABEL_38;
  std::string::_M_construct<char *>(
    &this->_traceBaggageHeaderPrefix,
    v5->_M_dataplus._M_p,
    &v5->_M_dataplus._M_p[v5->_M_string_length],
    v12);
};
