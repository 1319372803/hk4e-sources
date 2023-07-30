// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/jaeger_client_cpp/include/jaegertracing/samplers/Config.h

// Line 59: range 0000000014EA77D9-0000000014EA7CA3
jaegertracing::samplers::Config *__fastcall jaegertracing::samplers::Config::parse(
        jaegertracing::samplers::Config *retstr,
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
  std::forward_iterator_tag v11; // cl
  char v12; // al
  char *M_p; // rdi
  char *v14; // rdi
  struct _Unwind_Exception *v16; // rax
  struct _Unwind_Exception *v17; // r12
  char *v18; // rdi
  char *v19; // rdi
  char *v20; // rdi
  char *v21; // rdi
  double v22; // [rsp+0h] [rbp-F8h]
  int maxOperations; // [rsp+Ch] [rbp-ECh]
  std::allocator<char> __a; // [rsp+13h] [rbp-E5h] BYREF
  int defaultValue; // [rsp+14h] [rbp-E4h] BYREF
  std::chrono::_V2::steady_clock::duration samplingRefreshInterval; // [rsp+18h] [rbp-E0h] BYREF
  char v27[216]; // [rsp+20h] [rbp-D8h] BYREF

  v4 = (std::string *)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_2(160LL);
    if ( v10 )
      v4 = (std::string *)v10;
  }
  v5 = (char *)&v4[5];
  v4->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v4->_M_string_length = (std::string::size_type)"2 32 32 7 type:65 96 32 20 samplingServerURL:69";
  v4->_anon_0._M_allocated_capacity = (std::string::size_type)jaegertracing::samplers::Config::parse;
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
  {
LABEL_11:
    v4[3]._M_dataplus._M_p = v4[3]._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(v4 + 3, "http://127.0.0.1:5778/sampling", "", v2);
    v4[1]._M_dataplus._M_p = v4[1]._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(v4 + 1, "remote", "", v8);
    if ( v4[1]._M_string_length )
    {
      if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8();
      }
      else
      {
        retstr->_type._M_dataplus._M_p = retstr->_type._anon_0._M_local_buf;
        std::string::_M_construct<char *>(
          &retstr->_type,
          v4[1]._M_dataplus._M_p,
          &v4[1]._M_dataplus._M_p[v4[1]._M_string_length],
          v9);
      }
    }
    else
    {
      std::string::basic_string<std::allocator<char>>(&retstr->_type, "remote", &__a);
    }
    if ( *(_BYTE *)(((unsigned __int64)&retstr->_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
    }
    else
    {
      retstr->_param = 0.001;
      if ( !v4[3]._M_string_length )
      {
        std::string::basic_string<std::allocator<char>>(
          &retstr->_samplingServerURL,
          "http://127.0.0.1:5778/sampling",
          &__a);
        goto LABEL_32;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&retstr->_samplingServerURL >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
    }
    else
    {
      retstr->_samplingServerURL._M_dataplus._M_p = retstr->_samplingServerURL._anon_0._M_local_buf;
      std::string::_M_construct<char *>(
        &retstr->_samplingServerURL,
        v4[3]._M_dataplus._M_p,
        &v4[3]._M_dataplus._M_p[v4[3]._M_string_length],
        v11);
    }
LABEL_32:
    v12 = *(_BYTE *)(((unsigned __int64)&retstr->_maxOperations >> 3) + 0x7FFF8000);
    if ( v12 && v12 <= 3 )
    {
      __asan_report_store4(&retstr->_maxOperations);
    }
    else
    {
      retstr->_maxOperations = 2000;
      if ( !*(_BYTE *)(((unsigned __int64)&retstr->_samplingRefreshInterval >> 3) + 0x7FFF8000) )
      {
        retstr->_samplingRefreshInterval.__r = 60000000000LL;
        M_p = v4[1]._M_dataplus._M_p;
        if ( M_p != (char *)&v4[1]._anon_0 )
          operator delete(M_p);
        v14 = v4[3]._M_dataplus._M_p;
        if ( v14 != (char *)&v4[3]._anon_0 )
          operator delete(v14);
        goto LABEL_39;
      }
    }
    __asan_report_store8();
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
      __asan_report_load8(retstr);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_type._M_dataplus._M_p != &retstr->_type._anon_0 )
      operator delete(retstr->_type._M_dataplus._M_p);
    v18 = (char *)*((_QWORD *)v5 - 16);
    if ( v18 != v5 - 112 )
      operator delete(v18);
    v19 = (char *)*((_QWORD *)v5 - 8);
    if ( v19 != v5 - 48 )
      operator delete(v19);
    __asan_handle_no_return(v19);
    _Unwind_Resume(v17);
  }
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
  if ( !*(_BYTE *)p_m_pNode )
    goto LABEL_11;
LABEL_10:
  if ( YAML::Node::Type(configYAML) != Map )
    goto LABEL_11;
LABEL_19:
  jaegertracing::utils::yaml::findOrDefault<std::string,char [5],char [1]>(
    v4 + 1,
    configYAML,
    (const char (*)[5])"type",
    (const char (*)[1])::defaultValue);
  defaultValue = -1;
  v22 = jaegertracing::utils::yaml::findOrDefault<double,char [6],int>(
          configYAML,
          (const char (*)[6])"param",
          &defaultValue);
  jaegertracing::utils::yaml::findOrDefault<std::string,char [18],char [1]>(
    v4 + 3,
    configYAML,
    (const char (*)[18])"samplingServerURL",
    (const char (*)[1])::defaultValue);
  defaultValue = 0;
  maxOperations = jaegertracing::utils::yaml::findOrDefault<int,char [14],int>(
                    configYAML,
                    (const char (*)[14])"maxOperations",
                    &defaultValue);
  defaultValue = 0;
  samplingRefreshInterval.__r = 1000000000LL
                              * jaegertracing::utils::yaml::findOrDefault<int,char [24],int>(
                                  configYAML,
                                  (const char (*)[24])"samplingRefreshInterval",
                                  &defaultValue);
  jaegertracing::samplers::Config::Config(retstr, v4 + 1, v22, v4 + 3, maxOperations, &samplingRefreshInterval);
  v20 = v4[3]._M_dataplus._M_p;
  if ( v20 != (char *)&v4[3]._anon_0 )
    operator delete(v20);
  v21 = v4[1]._M_dataplus._M_p;
  if ( v21 != (char *)&v4[1]._anon_0 )
    operator delete(v21);
LABEL_39:
  if ( v27 == (char *)v4 )
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

// Line 85: range 0000000014E8278C-0000000014E82A26
void __fastcall jaegertracing::samplers::Config::Config(
        jaegertracing::samplers::Config *const this,
        unsigned __int64 type,
        double param,
        const std::string *samplingServerURL,
        int maxOperations,
        const std::chrono::_V2::steady_clock::duration *samplingRefreshInterval)
{
  unsigned __int64 v6; // rbp
  double v7; // r12
  unsigned __int64 v8; // r13
  int v9; // r14d
  std::forward_iterator_tag v11; // cl
  double *p_param; // rdi
  char v13; // al
  struct _Unwind_Exception *v14; // rax
  struct _Unwind_Exception *v15; // rbp
  std::string::pointer M_p; // rdi

  if ( *(_BYTE *)(((type + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(type + 8);
  }
  else
  {
    v7 = param;
    v6 = (unsigned __int64)samplingServerURL;
    v9 = maxOperations;
    v8 = (unsigned __int64)samplingRefreshInterval;
    if ( *(_QWORD *)(type + 8) )
      goto LABEL_14;
    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      this->_type._M_dataplus._M_p = this->_type._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&this->_type, "remote", "", (std::forward_iterator_tag)maxOperations);
      goto LABEL_5;
    }
  }
  __asan_report_store8();
LABEL_14:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_18;
  }
  this->_type._M_dataplus._M_p = this->_type._anon_0._M_local_buf;
  if ( *(_BYTE *)((type >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    p_param = (double *)type;
    __asan_report_load8(type);
LABEL_19:
    __asan_report_store8();
    goto LABEL_20;
  }
  std::string::_M_construct<char *>(
    &this->_type,
    *(char **)type,
    (char *)(*(_QWORD *)(type + 8) + *(_QWORD *)type),
    (std::forward_iterator_tag)maxOperations);
LABEL_5:
  if ( v7 == -1.0 )
    v7 = 0.001;
  p_param = &this->_param;
  if ( *(_BYTE *)(((unsigned __int64)&this->_param >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  this->_param = v7;
  p_param = (double *)(v6 + 8);
  if ( *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(p_param);
    goto LABEL_21;
  }
  if ( *(_QWORD *)(v6 + 8) )
    goto LABEL_22;
  if ( !*(_BYTE *)(((unsigned __int64)&this->_samplingServerURL >> 3) + 0x7FFF8000) )
  {
    this->_samplingServerURL._M_dataplus._M_p = this->_samplingServerURL._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&this->_samplingServerURL, "http://127.0.0.1:5778/sampling", "", v11);
    goto LABEL_27;
  }
LABEL_21:
  __asan_report_store8();
LABEL_22:
  if ( *(_BYTE *)(((unsigned __int64)&this->_samplingServerURL >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->_samplingServerURL._M_dataplus._M_p = this->_samplingServerURL._anon_0._M_local_buf;
    if ( !*(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        &this->_samplingServerURL,
        *(char **)v6,
        (char *)(*(_QWORD *)(v6 + 8) + *(_QWORD *)v6),
        v11);
      goto LABEL_27;
    }
  }
  __asan_report_load8(v6);
LABEL_27:
  if ( !v9 )
    v9 = 2000;
  v13 = *(_BYTE *)(((unsigned __int64)&this->_maxOperations >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
  {
    __asan_report_store4(&this->_maxOperations);
    goto LABEL_37;
  }
  this->_maxOperations = v9;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(v8);
    goto LABEL_38;
  }
  if ( *(__int64 *)v8 > 0 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&this->_samplingRefreshInterval >> 3) + 0x7FFF8000) )
    {
      if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      {
        this->_samplingRefreshInterval.__r = *(_QWORD *)v8;
        return;
      }
      goto LABEL_39;
    }
LABEL_38:
    __asan_report_store8();
LABEL_39:
    __asan_report_load8(v8);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_samplingRefreshInterval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    M_p = this->_type._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->_type._M_dataplus._M_p != &this->_type._anon_0 )
      operator delete(M_p);
    __asan_handle_no_return(M_p);
    _Unwind_Resume(v15);
  }
  this->_samplingRefreshInterval.__r = 60000000000LL;
};
