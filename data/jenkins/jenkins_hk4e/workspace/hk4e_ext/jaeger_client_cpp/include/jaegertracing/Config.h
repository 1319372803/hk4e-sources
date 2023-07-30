// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/jaeger_client_cpp/include/jaegertracing/Config.h

// Line 40: range 0000000014EAB699-0000000014EACA13
// local variable allocation has failed, the output may be wrong!
jaegertracing::Config *__fastcall jaegertracing::Config::parse(
        jaegertracing::Config *retstr,
        const YAML::Node *configYAML)
{
  unsigned __int64 M_ptr; // r13
  unsigned __int64 v4; // r12
  char *v5; // rbx
  unsigned __int64 p_m_pNode; // rdi
  __int64 v7; // rax
  std::forward_iterator_tag v8; // cl
  std::forward_iterator_tag v9; // cl
  std::forward_iterator_tag v10; // cl
  char *v11; // rdi
  char *v12; // rdi
  char *v13; // rdi
  char *v14; // rdi
  char *v15; // rdi
  char *v16; // rdi
  char *v17; // rdi
  char *v18; // rdi
  char *v19; // rdi
  char *v20; // rdi
  char *v21; // rdi
  char *v22; // rdi
  char *v23; // rdi
  char *v24; // rdi
  std::_Vector_base<jaegertracing::Tag>::pointer M_finish; // r13
  std::_Vector_base<jaegertracing::Tag>::pointer i; // rbx
  void *p_value; // rdi
  unsigned __int64 v29; // rdi
  YAML::NodeType::value v30; // eax
  char *v31; // rdi
  char *v32; // rdi
  char *v33; // rdi
  char *v34; // rdi
  std::random_access_iterator_tag v35; // r8
  std::string::size_type *v36; // rdi
  char v37; // al
  unsigned int v38; // eax
  YAML::detail::node *second; // r13
  unsigned __int64 v40; // rdi
  YAML::NodeType::value v41; // eax
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  const YAML::Node *v43; // rdi
  const char *v44; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v45; // rax
  YAML::Exception *exception; // r12
  char *v47; // rdi
  std::forward_iterator_tag v48; // cl
  char *v49; // rdi
  __int64 v50; // r13
  std::forward_iterator_tag v51; // cl
  std::forward_iterator_tag v52; // cl
  char *v53; // rdi
  char *v54; // rdi
  char *v55; // rdi
  char *v56; // rdi
  char *v57; // rdi
  char *v58; // rdi
  char *v59; // rdi
  YAML::detail::shared_memory_holder *p_m_pMemory; // [rsp+0h] [rbp-5D0h]
  bool disabled; // [rsp+Fh] [rbp-5C1h]
  YAML::detail::node *m_pNode; // [rsp+10h] [rbp-5C0h]
  bool v63; // [rsp+10h] [rbp-5C0h]
  _DWORD *v64; // [rsp+18h] [rbp-5B8h]
  std::allocator<char> v65; // [rsp+2Eh] [rbp-5A2h] BYREF
  std::allocator<char> v66; // [rsp+2Fh] [rbp-5A1h] BYREF
  std::allocator<char> v67; // [rsp+30h] [rbp-5A0h] BYREF
  std::allocator<char> v68; // [rsp+31h] [rbp-59Fh] BYREF
  std::allocator<char> __a; // [rsp+32h] [rbp-59Eh] BYREF
  bool defaultValue; // [rsp+33h] [rbp-59Dh] BYREF
  int v71; // [rsp+34h] [rbp-59Ch] BYREF
  std::chrono::_V2::steady_clock::duration samplingRefreshInterval; // [rsp+38h] [rbp-598h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v73; // [rsp+40h] [rbp-590h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v74; // [rsp+50h] [rbp-580h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+60h] [rbp-570h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v76; // [rsp+70h] [rbp-560h] BYREF
  std::vector<jaegertracing::Tag> tags; // [rsp+80h] [rbp-550h] BYREF
  std::string type; // [rsp+A0h] [rbp-530h] BYREF
  char v79[1296]; // [rsp+C0h] [rbp-510h] BYREF

  M_ptr = (unsigned __int64)configYAML;
  v4 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_5(1248LL);
    if ( v7 )
      v4 = v7;
  }
  v5 = (char *)(v4 + 1248);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "13 48 32 14 serviceName:46 112 32 17 jaegerDebugHeader 176 32 19 jaegerBaggageHeader 240 32 22 t"
                        "raceContextHeaderName 304 32 24 traceBaggageHeaderPrefix 368 48 22 baggageRestrictions:58 448 64"
                        " 14 samplerNode:51 544 64 15 reporterNode:53 640 64 14 headersNode:55 736 64 26 baggageRestricti"
                        "onsNode:57 832 88 10 sampler:52 960 88 11 reporter:54 1088 128 10 headers:56";
  *(_QWORD *)(v4 + 16) = jaegertracing::Config::parse;
  v64 = (_DWORD *)(v4 >> 3);
  v64[536862720] = -235802127;
  v64[536862721] = 61937;
  v64[536862722] = -219021312;
  v64[536862723] = 62194;
  v64[536862724] = -219021312;
  v64[536862725] = 62194;
  v64[536862726] = -219021312;
  v64[536862727] = 62194;
  v64[536862728] = -219021312;
  v64[536862729] = 62194;
  v64[536862730] = -219021312;
  v64[536862731] = 62194;
  v64[536862733] = -218959118;
  v64[536862736] = -218959118;
  v64[536862739] = -218959118;
  v64[536862742] = -218959118;
  v64[536862745] = -218959118;
  v64[536862748] = -234881024;
  v64[536862749] = -218959118;
  v64[536862752] = -234881024;
  v64[536862753] = -218959118;
  v64[536862758] = -202116109;
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
  if ( !*(_BYTE *)p_m_pNode )
    goto LABEL_11;
LABEL_10:
  if ( YAML::Node::Type(configYAML) != Map )
  {
LABEL_11:
    memset(&tags, 0, sizeof(tags));
    std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 304), ::defaultValue, &__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 240), ::defaultValue, &v68);
    *(_BYTE *)(v4 + 368) = 0;
    *(_QWORD *)(v4 + 376) = v4 + 392;
    std::string::_M_construct<char *>(
      (std::string *const)(v4 + 376),
      *(char **)(v4 + 240),
      (char *)(*(_QWORD *)(v4 + 248) + *(_QWORD *)(v4 + 240)),
      v8);
    *(_QWORD *)(v4 + 408) = 0LL;
    jaegertracing::propagation::HeadersConfig::HeadersConfig((jaegertracing::propagation::HeadersConfig *const)(v4 + 1088));
    std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 176), ::defaultValue, &v67);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v4 + 112), "127.0.0.1:6831", &v66);
    *(_DWORD *)(v4 + 960) = 100;
    *(_QWORD *)(v4 + 968) = 10000000000LL;
    *(_BYTE *)(v4 + 976) = 0;
    if ( *(_QWORD *)(v4 + 120) )
    {
      *(_QWORD *)(v4 + 984) = v4 + 1000;
      std::string::_M_construct<char *>(
        (std::string *const)(v4 + 984),
        *(char **)(v4 + 112),
        (char *)(*(_QWORD *)(v4 + 120) + *(_QWORD *)(v4 + 112)),
        v9);
    }
    else
    {
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v4 + 984),
        "127.0.0.1:6831",
        (const std::allocator<char> *)&defaultValue);
    }
    *(_QWORD *)(v4 + 1016) = v4 + 1032;
    std::string::_M_construct<char *>(
      (std::string *const)(v4 + 1016),
      *(char **)(v4 + 176),
      (char *)(*(_QWORD *)(v4 + 184) + *(_QWORD *)(v4 + 176)),
      v10);
    samplingRefreshInterval.__r = 60000000000LL;
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 48),
      "http://127.0.0.1:5778/sampling",
      (const std::allocator<char> *)&defaultValue);
    std::string::basic_string<std::allocator<char>>(&type, "remote", &v65);
    jaegertracing::samplers::Config::Config(
      (jaegertracing::samplers::Config *const)(v4 + 832),
      &type,
      0.001,
      (const std::string *)(v4 + 48),
      2000,
      &samplingRefreshInterval);
    jaegertracing::Config::Config(
      retstr,
      0,
      (const jaegertracing::samplers::Config *)(v4 + 832),
      (const jaegertracing::reporters::Config *)(v4 + 960),
      (const jaegertracing::propagation::HeadersConfig *)(v4 + 1088),
      (const jaegertracing::baggage::RestrictionsConfig *)(v4 + 368),
      (const std::string *)(v4 + 304),
      &tags);
    v11 = *(char **)(v4 + 872);
    if ( v11 != (char *)(v4 + 888) )
      operator delete(v11);
    v12 = *(char **)(v4 + 832);
    if ( v12 != (char *)(v4 + 848) )
      operator delete(v12);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
      operator delete(type._M_dataplus._M_p);
    v13 = *(char **)(v4 + 48);
    if ( v13 != (char *)(v4 + 64) )
      operator delete(v13);
    v14 = *(char **)(v4 + 1016);
    if ( v14 != (char *)(v4 + 1032) )
      operator delete(v14);
    v15 = *(char **)(v4 + 984);
    if ( v15 != (char *)(v4 + 1000) )
      operator delete(v15);
    v16 = *(char **)(v4 + 112);
    if ( v16 != (char *)(v4 + 128) )
      operator delete(v16);
    v17 = *(char **)(v4 + 176);
    if ( v17 != (char *)(v4 + 192) )
      operator delete(v17);
    v18 = *(char **)(v4 + 1184);
    if ( v18 != (char *)(v4 + 1200) )
      operator delete(v18);
    v19 = *(char **)(v4 + 1152);
    if ( v19 != (char *)(v4 + 1168) )
      operator delete(v19);
    v20 = *(char **)(v4 + 1120);
    if ( v20 != (char *)(v4 + 1136) )
      operator delete(v20);
    v21 = *(char **)(v4 + 1088);
    if ( v21 != (char *)(v4 + 1104) )
      operator delete(v21);
    v22 = *(char **)(v4 + 376);
    if ( v22 != (char *)(v4 + 392) )
      operator delete(v22);
    v23 = *(char **)(v4 + 240);
    if ( v23 != (char *)(v4 + 256) )
      operator delete(v23);
    v24 = *(char **)(v4 + 304);
    if ( v24 != (char *)(v4 + 320) )
      operator delete(v24);
    M_finish = tags._M_impl._M_finish;
    for ( i = tags._M_impl._M_start; ; ++i )
    {
      if ( M_finish == i )
      {
        if ( tags._M_impl._M_start )
          operator delete(tags._M_impl._M_start);
        goto LABEL_65;
      }
      p_value = &i->_value;
      if ( *(_BYTE *)(((unsigned __int64)&i->_value >> 3) + 0x7FFF8000) )
        break;
      opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        i->_value.type_index,
        &i->_value.data);
      p_value = i;
      if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
        goto LABEL_55;
      p_value = i->_key._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)i->_key._M_dataplus._M_p != &i->_key._anon_0 )
        goto LABEL_56;
LABEL_57:
      ;
    }
    __asan_report_load8(p_value);
LABEL_55:
    __asan_report_load8(p_value);
LABEL_56:
    operator delete(p_value);
    goto LABEL_57;
  }
LABEL_19:
  jaegertracing::utils::yaml::findOrDefault<std::string,char [13],char [1]>(
    (std::string *)(v4 + 48),
    configYAML,
    (const char (*)[13])"service_name",
    (const char (*)[1])::defaultValue);
  defaultValue = 0;
  disabled = jaegertracing::utils::yaml::findOrDefault<bool,char [9],bool>(
               configYAML,
               (const char (*)[9])"disabled",
               &defaultValue);
  YAML::Node::operator[]<char [8]>((YAML::Node *)(v4 + 448), configYAML, (const char (*)[8])"sampler");
  jaegertracing::samplers::Config::parse((jaegertracing::samplers::Config *)(v4 + 832), (const YAML::Node *)(v4 + 448));
  YAML::Node::operator[]<char [9]>((YAML::Node *)(v4 + 544), configYAML, (const char (*)[9])"reporter");
  jaegertracing::reporters::Config::parse(
    (jaegertracing::reporters::Config *)(v4 + 960),
    (const YAML::Node *)(v4 + 544));
  YAML::Node::operator[]<char [8]>((YAML::Node *)(v4 + 640), configYAML, (const char (*)[8])"headers");
  if ( !*(_BYTE *)(v4 + 640) )
    goto LABEL_79;
  v29 = *(_QWORD *)(v4 + 696);
  if ( !v29 )
  {
LABEL_74:
    v30 = YAML::Node::Type((const YAML::Node *const)(v4 + 640));
    goto LABEL_78;
  }
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v29);
    goto LABEL_76;
  }
  v29 = *(_QWORD *)v29;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_load8(v29);
    goto LABEL_77;
  }
  v29 = *(_QWORD *)v29;
  if ( *(char *)((v29 >> 3) + 0x7FFF8000) >= 0 )
  {
    if ( !*(_BYTE *)v29 )
    {
LABEL_79:
      jaegertracing::propagation::HeadersConfig::HeadersConfig((jaegertracing::propagation::HeadersConfig *const)(v4 + 1088));
      goto LABEL_88;
    }
    goto LABEL_74;
  }
LABEL_77:
  v30 = (unsigned int)__asan_report_load1(v29);
LABEL_78:
  if ( v30 != Map )
    goto LABEL_79;
  jaegertracing::utils::yaml::findOrDefault<std::string,char [18],char [1]>(
    (std::string *)(v4 + 112),
    (const YAML::Node *)(v4 + 640),
    (const char (*)[18])"jaegerDebugHeader",
    (const char (*)[1])::defaultValue);
  jaegertracing::utils::yaml::findOrDefault<std::string,char [20],char [1]>(
    (std::string *)(v4 + 176),
    (const YAML::Node *)(v4 + 640),
    (const char (*)[20])"jaegerBaggageHeader",
    (const char (*)[1])::defaultValue);
  jaegertracing::utils::yaml::findOrDefault<std::string,char [23],char [1]>(
    (std::string *)(v4 + 240),
    (const YAML::Node *)(v4 + 640),
    (const char (*)[23])"TraceContextHeaderName",
    (const char (*)[1])::defaultValue);
  jaegertracing::utils::yaml::findOrDefault<std::string,char [25],char [1]>(
    (std::string *)(v4 + 304),
    (const YAML::Node *)(v4 + 640),
    (const char (*)[25])"traceBaggageHeaderPrefix",
    (const char (*)[1])::defaultValue);
  jaegertracing::propagation::HeadersConfig::HeadersConfig(
    (jaegertracing::propagation::HeadersConfig *const)(v4 + 1088),
    (const std::string *)(v4 + 112),
    (const std::string *)(v4 + 176),
    (const std::string *)(v4 + 240),
    (const std::string *)(v4 + 304));
  v31 = *(char **)(v4 + 304);
  if ( v31 != (char *)(v4 + 320) )
    operator delete(v31);
  v32 = *(char **)(v4 + 240);
  if ( v32 != (char *)(v4 + 256) )
    operator delete(v32);
  v33 = *(char **)(v4 + 176);
  if ( v33 != (char *)(v4 + 192) )
    operator delete(v33);
  v34 = *(char **)(v4 + 112);
  if ( v34 != (char *)(v4 + 128) )
    operator delete(v34);
LABEL_88:
  YAML::Node::EnsureNodeExists(configYAML);
  if ( *(_BYTE *)(((unsigned __int64)&configYAML->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&configYAML->m_pNode);
    goto LABEL_114;
  }
  m_pNode = configYAML->m_pNode;
  p_m_pMemory = &configYAML->m_pMemory;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v73, &configYAML->m_pMemory);
  if ( *(_BYTE *)(((unsigned __int64)m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_114:
    __asan_report_load8(m_pNode);
    goto LABEL_115;
  }
  M_ptr = (unsigned __int64)m_pNode->m_pRef._M_ptr;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v74, &v73);
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_115:
    v36 = (std::string::size_type *)M_ptr;
    __asan_report_load8(M_ptr);
LABEL_116:
    __asan_report_load4(v36);
LABEL_117:
    if ( v38 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11]((std::string *)(v5 - 944), _pred[0]);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(M_ptr + 4), (const std::string *)(v5 - 944));
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      v47 = (char *)*((_QWORD *)v5 - 118);
      if ( v47 != v5 - 928 )
        operator delete(v47);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        v47 = (char *)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(v47);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_118;
  }
  M_ptr = *(_QWORD *)M_ptr;
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&__pred, &v74);
  v36 = (std::string::size_type *)(M_ptr + 16);
  v37 = *(_BYTE *)(((M_ptr + 16) >> 3) + 0x7FFF8000);
  if ( v37 && v37 <= 3 )
    goto LABEL_116;
  v38 = *(_DWORD *)(M_ptr + 16);
  if ( v38 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v76, &__pred);
    if ( v76._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v76._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_97;
  }
  if ( v38 <= 3 )
  {
    if ( v38 <= 1 )
    {
      second = 0LL;
      goto LABEL_97;
    }
    goto LABEL_117;
  }
LABEL_118:
  p_pred = &__pred;
  v43 = (const YAML::Node *)(M_ptr + 136);
  if ( *(_BYTE *)(((M_ptr + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v43);
    goto LABEL_132;
  }
  v43 = (const YAML::Node *)(M_ptr + 128);
  if ( *(_BYTE *)(((M_ptr + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_132:
    v45._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v43);
    goto LABEL_133;
  }
  v44 = _pred[0];
  v45._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [21]>(char [21] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(M_ptr + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(M_ptr + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [21]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v35)._M_current;
LABEL_133:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(M_ptr + 136) != v45._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v45._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v45._M_current->second;
      goto LABEL_97;
    }
    __asan_report_load8(&v45._M_current->second);
  }
  second = 0LL;
LABEL_97:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v74._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74._M_refcount._M_pi);
  if ( v73._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v73._M_refcount._M_pi);
  if ( second )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v76, p_m_pMemory);
    *(_BYTE *)(v4 + 736) = 1;
    *(_QWORD *)(v4 + 744) = v4 + 760;
    *(_QWORD *)(v4 + 752) = 0LL;
    *(_BYTE *)(v4 + 760) = 0;
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
      (std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 776),
      &v76);
    *(_QWORD *)(v4 + 792) = second;
    if ( v76._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v76._M_refcount._M_pi);
  }
  else
  {
    YAML::key_to_string<char [21]>((std::string *)(v4 + 304), "baggage_restrictions");
    *(_BYTE *)(v4 + 736) = 0;
    *(_QWORD *)(v4 + 744) = v4 + 760;
    std::string::_M_construct<char *>(
      (std::string *const)(v4 + 744),
      *(char **)(v4 + 304),
      (char *)(*(_QWORD *)(v4 + 312) + *(_QWORD *)(v4 + 304)),
      v48);
    *(_QWORD *)(v4 + 776) = 0LL;
    *(_QWORD *)(v4 + 784) = 0LL;
    *(_QWORD *)(v4 + 792) = 0LL;
    v49 = *(char **)(v4 + 304);
    if ( v49 != (char *)(v4 + 320) )
      operator delete(v49);
  }
  if ( !*(_BYTE *)(v4 + 736) )
    goto LABEL_144;
  v40 = *(_QWORD *)(v4 + 792);
  if ( !v40 )
  {
LABEL_112:
    v41 = YAML::Node::Type((const YAML::Node *const)(v4 + 736));
    goto LABEL_143;
  }
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v40);
    goto LABEL_141;
  }
  v40 = *(_QWORD *)v40;
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
LABEL_141:
    __asan_report_load8(v40);
    goto LABEL_142;
  }
  v40 = *(_QWORD *)v40;
  if ( *(char *)((v40 >> 3) + 0x7FFF8000) >= 0 )
  {
    if ( *(_BYTE *)v40 )
      goto LABEL_112;
LABEL_144:
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 304),
      ::defaultValue,
      (const std::allocator<char> *)&defaultValue);
    *(_BYTE *)(v4 + 368) = 0;
    *(_QWORD *)(v4 + 376) = v4 + 392;
    std::string::_M_construct<char *>(
      (std::string *const)(v4 + 376),
      *(char **)(v4 + 304),
      (char *)(*(_QWORD *)(v4 + 312) + *(_QWORD *)(v4 + 304)),
      v52);
    *(_QWORD *)(v4 + 408) = 0LL;
    v53 = *(char **)(v4 + 304);
    if ( v53 == (char *)(v4 + 320) )
      goto LABEL_148;
    goto LABEL_147;
  }
LABEL_142:
  v41 = (unsigned int)__asan_report_load1(v40);
LABEL_143:
  if ( v41 != Map )
    goto LABEL_144;
  defaultValue = 0;
  v63 = jaegertracing::utils::yaml::findOrDefault<bool,char [35],bool>(
          (const YAML::Node *)(v4 + 736),
          (const char (*)[35])"denyBaggageOnInitializationFailure",
          &defaultValue);
  jaegertracing::utils::yaml::findOrDefault<std::string,char [9],char [1]>(
    (std::string *)(v4 + 304),
    (const YAML::Node *)(v4 + 736),
    (const char (*)[9])"hostPort",
    (const char (*)[1])::defaultValue);
  v71 = 0;
  v50 = 1000000000LL
      * jaegertracing::utils::yaml::findOrDefault<int,char [16],int>(
          (const YAML::Node *)(v4 + 736),
          (const char (*)[16])"refreshInterval",
          &v71);
  *(_BYTE *)(v4 + 368) = v63;
  *(_QWORD *)(v4 + 376) = v4 + 392;
  std::string::_M_construct<char *>(
    (std::string *const)(v4 + 376),
    *(char **)(v4 + 304),
    (char *)(*(_QWORD *)(v4 + 312) + *(_QWORD *)(v4 + 304)),
    v51);
  *(_QWORD *)(v4 + 408) = v50;
  v53 = *(char **)(v4 + 304);
  if ( v53 == (char *)(v4 + 320) )
    goto LABEL_148;
LABEL_147:
  operator delete(v53);
LABEL_148:
  memset(&tags, 0, sizeof(tags));
  jaegertracing::Config::Config(
    retstr,
    disabled,
    (const jaegertracing::samplers::Config *)(v4 + 832),
    (const jaegertracing::reporters::Config *)(v4 + 960),
    (const jaegertracing::propagation::HeadersConfig *)(v4 + 1088),
    (const jaegertracing::baggage::RestrictionsConfig *)(v4 + 368),
    (const std::string *)(v4 + 48),
    &tags);
  std::vector<jaegertracing::Tag>::~vector(&tags);
  v54 = *(char **)(v4 + 376);
  if ( v54 != (char *)(v4 + 392) )
    operator delete(v54);
  YAML::Node::~Node((YAML::Node *const)(v4 + 736));
  jaegertracing::propagation::HeadersConfig::~HeadersConfig((jaegertracing::propagation::HeadersConfig *const)(v4 + 1088));
  YAML::Node::~Node((YAML::Node *const)(v4 + 640));
  v55 = *(char **)(v4 + 1016);
  if ( v55 != (char *)(v4 + 1032) )
    operator delete(v55);
  v56 = *(char **)(v4 + 984);
  if ( v56 != (char *)(v4 + 1000) )
    operator delete(v56);
  YAML::Node::~Node((YAML::Node *const)(v4 + 544));
  v57 = *(char **)(v4 + 872);
  if ( v57 != (char *)(v4 + 888) )
    operator delete(v57);
  v58 = *(char **)(v4 + 832);
  if ( v58 != (char *)(v4 + 848) )
    operator delete(v58);
  YAML::Node::~Node((YAML::Node *const)(v4 + 448));
  v59 = *(char **)(v4 + 48);
  if ( v59 != (char *)(v4 + 64) )
    operator delete(v59);
LABEL_65:
  if ( v79 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8098) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1248LL, v79);
  }
  return retstr;
};
