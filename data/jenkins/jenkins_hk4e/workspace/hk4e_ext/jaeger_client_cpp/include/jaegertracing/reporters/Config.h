// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/jaeger_client_cpp/include/jaegertracing/reporters/Config.h

// Line 60: range 0000000014EA0C52-0000000014EA1100
jaegertracing::reporters::Config *__fastcall jaegertracing::reporters::Config::parse(
        jaegertracing::reporters::Config *retstr,
        const YAML::Node *configYAML)
{
  std::forward_iterator_tag v2; // cl
  std::string *v4; // r12
  char *v5; // rbx
  _DWORD *v6; // r14
  unsigned __int64 p_m_pNode; // rdi
  std::forward_iterator_tag v8; // cl
  std::forward_iterator_tag v9; // cl
  __int64 v10; // rax
  char v11; // al
  void *p_bufferFlushInterval; // rdi
  std::forward_iterator_tag v13; // cl
  struct _Unwind_Exception *v14; // rax
  struct _Unwind_Exception *v15; // r12
  jaegertracing::reporters::Config *v16; // rdi
  char *v17; // rdi
  char *v18; // rdi
  char *v19; // rdi
  char *v20; // rdi
  char *M_p; // rdi
  int queueSize; // [rsp+Ch] [rbp-FCh]
  bool logSpans; // [rsp+10h] [rbp-F8h]
  __int64 v25; // [rsp+18h] [rbp-F0h]
  std::allocator<char> __a; // [rsp+23h] [rbp-E5h] BYREF
  int defaultValue; // [rsp+24h] [rbp-E4h] BYREF
  std::chrono::_V2::steady_clock::duration bufferFlushInterval; // [rsp+28h] [rbp-E0h] BYREF
  char v29[216]; // [rsp+30h] [rbp-D8h] BYREF

  v4 = (std::string *)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_2(160LL);
    if ( v10 )
      v4 = (std::string *)v10;
  }
  v5 = (char *)&v4[5];
  v4->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v4->_M_string_length = (std::string::size_type)"2 32 32 21 localAgentHostPort:73 96 32 11 endpoint:75";
  v4->_anon_0._M_allocated_capacity = (std::string::size_type)jaegertracing::reporters::Config::parse;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  if ( *(char *)(((unsigned __int64)configYAML >> 3) + 0x7FFF8000) < 0 )
  {
    p_m_pNode = (unsigned __int64)configYAML;
    __asan_report_load1(configYAML);
LABEL_15:
    __asan_report_load8(p_m_pNode);
LABEL_16:
    __asan_report_load8(p_m_pNode);
    goto LABEL_17;
  }
  if ( !configYAML->m_isValid )
    goto LABEL_11;
  p_m_pNode = (unsigned __int64)&configYAML->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&configYAML->m_pNode >> 3) + 0x7FFF8000) )
    goto LABEL_15;
  p_m_pNode = (unsigned __int64)configYAML->m_pNode;
  if ( !p_m_pNode )
    goto LABEL_10;
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  p_m_pNode = *(_QWORD *)p_m_pNode;
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(p_m_pNode);
    goto LABEL_18;
  }
  p_m_pNode = *(_QWORD *)p_m_pNode;
  if ( *(char *)((p_m_pNode >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_18:
    __asan_report_load1(p_m_pNode);
    goto LABEL_19;
  }
  if ( *(_BYTE *)p_m_pNode )
  {
LABEL_10:
    if ( YAML::Node::Type(configYAML) != Map )
      goto LABEL_11;
LABEL_19:
    defaultValue = 0;
    queueSize = jaegertracing::utils::yaml::findOrDefault<int,char [10],int>(
                  configYAML,
                  (const char (*)[10])"queueSize",
                  &defaultValue);
    defaultValue = 0;
    v25 = jaegertracing::utils::yaml::findOrDefault<int,char [20],int>(
            configYAML,
            (const char (*)[20])"bufferFlushInterval",
            &defaultValue);
    __a.gap0[0] = 0;
    logSpans = jaegertracing::utils::yaml::findOrDefault<bool,char [9],bool>(
                 configYAML,
                 (const char (*)[9])"logSpans",
                 (const bool *)__a.gap0);
    jaegertracing::utils::yaml::findOrDefault<std::string,char [19],char [1]>(
      v4 + 1,
      configYAML,
      (const char (*)[19])"localAgentHostPort",
      (const char (*)[1])::defaultValue);
    jaegertracing::utils::yaml::findOrDefault<std::string,char [9],char [1]>(
      v4 + 3,
      configYAML,
      (const char (*)[9])"endpoint",
      (const char (*)[1])::defaultValue);
    bufferFlushInterval.__r = 1000000000 * v25;
    jaegertracing::reporters::Config::Config(retstr, queueSize, &bufferFlushInterval, logSpans, v4 + 1, v4 + 3);
    M_p = v4[3]._M_dataplus._M_p;
    if ( M_p != (char *)&v4[3]._anon_0 )
      operator delete(M_p);
    v20 = v4[1]._M_dataplus._M_p;
    if ( v20 != (char *)&v4[1]._anon_0 )
      goto LABEL_46;
    goto LABEL_47;
  }
LABEL_11:
  v4[3]._M_dataplus._M_p = v4[3]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v4 + 3, ::defaultValue, ::defaultValue, v2);
  v4[1]._M_dataplus._M_p = v4[1]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v4 + 1, "127.0.0.1:6831", "", v8);
  v11 = *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
  {
    p_bufferFlushInterval = retstr;
    __asan_report_store4(retstr);
    goto LABEL_27;
  }
  retstr->_queueSize = 100;
  p_bufferFlushInterval = &retstr->_bufferFlushInterval;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_bufferFlushInterval >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  retstr->_bufferFlushInterval.__r = 10000000000LL;
  p_bufferFlushInterval = &retstr->_logSpans;
  if ( *(char *)(((unsigned __int64)&retstr->_logSpans >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_28:
    __asan_report_store1(p_bufferFlushInterval);
    goto LABEL_29;
  }
  retstr->_logSpans = 0;
  if ( !v4[1]._M_string_length )
  {
    std::string::basic_string<std::allocator<char>>(&retstr->_localAgentHostPort, "127.0.0.1:6831", &__a);
    goto LABEL_32;
  }
LABEL_29:
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_localAgentHostPort >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    retstr->_localAgentHostPort._M_dataplus._M_p = retstr->_localAgentHostPort._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &retstr->_localAgentHostPort,
      v4[1]._M_dataplus._M_p,
      &v4[1]._M_dataplus._M_p[v4[1]._M_string_length],
      v9);
  }
LABEL_32:
  if ( *(_BYTE *)(((unsigned __int64)&retstr->_endpoint >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)&retstr->_localAgentHostPort >> 3) + 0x7FFF8000) )
      __asan_report_load8(&retstr->_localAgentHostPort);
    v16 = (jaegertracing::reporters::Config *)retstr->_localAgentHostPort._M_dataplus._M_p;
    if ( v16 != (jaegertracing::reporters::Config *)&retstr->_localAgentHostPort._anon_0 )
      operator delete(v16);
    v17 = (char *)*((_QWORD *)v5 - 16);
    if ( v17 != v5 - 112 )
      operator delete(v17);
    v18 = (char *)*((_QWORD *)v5 - 8);
    if ( v18 != v5 - 48 )
      operator delete(v18);
    __asan_handle_no_return(v18);
    _Unwind_Resume(v15);
  }
  retstr->_endpoint._M_dataplus._M_p = retstr->_endpoint._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    &retstr->_endpoint,
    v4[3]._M_dataplus._M_p,
    &v4[3]._M_dataplus._M_p[v4[3]._M_string_length],
    v13);
  v19 = v4[1]._M_dataplus._M_p;
  if ( v19 != (char *)&v4[1]._anon_0 )
    operator delete(v19);
  v20 = v4[3]._M_dataplus._M_p;
  if ( v20 != (char *)&v4[3]._anon_0 )
LABEL_46:
    operator delete(v20);
LABEL_47:
  if ( v29 == (char *)v4 )
  {
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v4->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 83: range 0000000014E82532-0000000014E8278B
void __fastcall jaegertracing::reporters::Config::Config(
        jaegertracing::reporters::Config *const this,
        int queueSize,
        const std::chrono::_V2::steady_clock::duration *bufferFlushInterval,
        bool logSpans,
        const std::string *localAgentHostPort,
        const std::string *endpoint)
{
  char v8; // al
  void *p_bufferFlushInterval; // rdi
  std::forward_iterator_tag v10; // cl
  std::string::size_type *p_M_string_length; // rax
  struct _Unwind_Exception *v12; // rbp
  jaegertracing::reporters::Config *M_p; // rdi

  if ( queueSize <= 0 )
    queueSize = 100;
  v8 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_store4(this);
    goto LABEL_20;
  }
  this->_queueSize = queueSize;
  if ( *(_BYTE *)(((unsigned __int64)bufferFlushInterval >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(bufferFlushInterval);
    goto LABEL_21;
  }
  if ( bufferFlushInterval->__r > 0 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&this->_bufferFlushInterval >> 3) + 0x7FFF8000) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)bufferFlushInterval >> 3) + 0x7FFF8000) )
      {
        this->_bufferFlushInterval = (std::chrono::_V2::steady_clock::duration)bufferFlushInterval->__r;
        goto LABEL_10;
      }
      goto LABEL_22;
    }
LABEL_21:
    __asan_report_store8();
LABEL_22:
    __asan_report_load8(bufferFlushInterval);
  }
  p_bufferFlushInterval = &this->_bufferFlushInterval;
  if ( *(_BYTE *)(((unsigned __int64)&this->_bufferFlushInterval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_26;
  }
  this->_bufferFlushInterval.__r = 10000000000LL;
LABEL_10:
  p_bufferFlushInterval = &this->_logSpans;
  if ( *(char *)(((unsigned __int64)&this->_logSpans >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_26:
    __asan_report_store1(p_bufferFlushInterval);
    goto LABEL_27;
  }
  this->_logSpans = logSpans;
  p_bufferFlushInterval = &localAgentHostPort->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&localAgentHostPort->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_bufferFlushInterval);
    goto LABEL_28;
  }
  if ( localAgentHostPort->_M_string_length )
    goto LABEL_29;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_localAgentHostPort >> 3) + 0x7FFF8000) )
  {
    this->_localAgentHostPort._M_dataplus._M_p = this->_localAgentHostPort._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &this->_localAgentHostPort,
      "127.0.0.1:6831",
      "",
      (std::forward_iterator_tag)logSpans);
    goto LABEL_15;
  }
LABEL_28:
  __asan_report_store8();
LABEL_29:
  if ( *(_BYTE *)(((unsigned __int64)&this->_localAgentHostPort >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_33;
  }
  this->_localAgentHostPort._M_dataplus._M_p = this->_localAgentHostPort._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)localAgentHostPort >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(localAgentHostPort);
    goto LABEL_34;
  }
  std::string::_M_construct<char *>(
    &this->_localAgentHostPort,
    localAgentHostPort->_M_dataplus._M_p,
    &localAgentHostPort->_M_dataplus._M_p[localAgentHostPort->_M_string_length],
    (std::forward_iterator_tag)logSpans);
LABEL_15:
  if ( *(_BYTE *)(((unsigned __int64)&this->_endpoint >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  this->_endpoint._M_dataplus._M_p = this->_endpoint._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)endpoint >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    p_M_string_length = (std::string::size_type *)__asan_report_load8(endpoint);
LABEL_36:
    v12 = (struct _Unwind_Exception *)__asan_report_load8(p_M_string_length);
    if ( *(_BYTE *)(((unsigned __int64)&this->_localAgentHostPort >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_localAgentHostPort);
    M_p = (jaegertracing::reporters::Config *)this->_localAgentHostPort._M_dataplus._M_p;
    if ( M_p != (jaegertracing::reporters::Config *)&this->_localAgentHostPort._anon_0 )
      operator delete(M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v12);
  }
  p_M_string_length = &endpoint->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&endpoint->_M_string_length >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  std::string::_M_construct<char *>(
    &this->_endpoint,
    endpoint->_M_dataplus._M_p,
    &endpoint->_M_dataplus._M_p[endpoint->_M_string_length],
    v10);
};
