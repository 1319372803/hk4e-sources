// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/jaeger_client_cpp/include/jaegertracing/utils/YAML.h

// Line 31: range 0000000014E94DFB-0000000014E95868
// local variable allocation has failed, the output may be wrong!
bool __fastcall jaegertracing::utils::yaml::findOrDefault<bool,char [35],bool>(
        const YAML::Node *node,
        const char (*key)[35],
        const bool *defaultValue)
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v4; // r15
  unsigned __int64 v6; // r12
  char *v7; // rbx
  _DWORD *v8; // r14
  std::random_access_iterator_tag v9; // r8
  YAML::detail::node **p_m_pNode; // rdi
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v15; // cl
  _Atomic_word *v16; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rax
  _Atomic_word *v18; // rdx
  char v19; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rax
  char v21; // dl
  _Atomic_word *v22; // rdi
  char v23; // al
  unsigned int v24; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v26; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v27; // rax
  char v28; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // rax
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  unsigned __int64 v32; // rdi
  char v33; // al
  char v34; // bp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  char *v36; // rdi
  __int64 v38; // rax
  char v39; // si
  char v40; // si
  char v41; // cl
  __int64 *p_pred; // rcx OVERLAPPED
  __int64 v43; // rdi
  const char (*v44)[35]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v45; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rax
  _Atomic_word *v47; // rdi
  char v48; // dl
  char v49; // cl
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v52; // cl
  char v53; // cl
  char v54; // cl
  struct _Unwind_Exception *v55; // rax
  struct _Unwind_Exception *v56; // rbx
  std::string::pointer v57; // rdi
  YAML::InvalidNode *v59; // rdi
  YAML::BadConversion *v60; // r12
  YAML::BadConversion *v61; // rdi
  YAML::BadConversion *v62; // r12
  YAML::BadConversion *v63; // rdi
  YAML::Mark mark_; // [rsp+24h] [rbp-144h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+30h] [rbp-138h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v68; // [rsp+38h] [rbp-130h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v69; // [rsp+40h] [rbp-128h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v70; // [rsp+48h] [rbp-120h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *__pred; // [rsp+50h] [rbp-118h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v72; // [rsp+58h] [rbp-110h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v73; // [rsp+60h] [rbp-108h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v74; // [rsp+68h] [rbp-100h]
  std::string msg_; // [rsp+70h] [rbp-F8h] BYREF
  char v76[216]; // [rsp+90h] [rbp-D8h] BYREF

  v6 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v38 = __asan_stack_malloc_2(160LL);
    if ( v38 )
      v6 = v38;
  }
  v7 = (char *)(v6 + 160);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 1 1 t 64 64 12 valueNode:35";
  *(_QWORD *)(v6 + 16) = jaegertracing::utils::yaml::findOrDefault<bool,char [35],bool>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862724] = -202116109;
  YAML::Node::EnsureNodeExists(node);
  p_m_pNode = &node->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_m_pNode);
    goto LABEL_68;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_69;
  }
  M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(p_M_refcount);
    goto LABEL_70;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v68 = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v15 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v15 || !v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_70:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_71:
  v39 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v39 && v39 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_75;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(m_pNode);
    goto LABEL_76;
  }
  v16 = *(_Atomic_word **)m_pNode;
  v69 = M_ptr;
  v17 = v68;
  v70 = v68;
  if ( !v68 )
    goto LABEL_16;
  v18 = &v68->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_77;
  v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
  {
    _InterlockedAdd(v18, 1u);
    goto LABEL_16;
  }
LABEL_76:
  v16 = v18;
  v17 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v18);
LABEL_77:
  v40 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v40 && v40 )
  {
    v16 = &v17->_M_use_count;
    __asan_report_load4(&v17->_M_use_count);
    goto LABEL_81;
  }
  ++v17->_M_use_count;
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(v16);
LABEL_82:
    v20 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v16);
    goto LABEL_83;
  }
  v4 = *(_QWORD *)v16;
  __pred = v69;
  v20 = v70;
  v72 = v70;
  if ( !v70 )
    goto LABEL_22;
  v16 = &v70->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v16 & 7) + 3) < v21 || !v21 )
    {
      _InterlockedAdd(v16, 1u);
      goto LABEL_22;
    }
    goto LABEL_82;
  }
LABEL_83:
  v22 = &v20->_M_use_count;
  v41 = *(_BYTE *)(((unsigned __int64)&v20->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v20 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(v22);
LABEL_87:
    __asan_report_load4(v22);
    goto LABEL_88;
  }
  ++v20->_M_use_count;
LABEL_22:
  v22 = (_Atomic_word *)(v4 + 16);
  v23 = *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
    goto LABEL_87;
  v24 = *(_DWORD *)(v4 + 16);
  if ( v24 == 3 )
  {
    v46 = v72;
    v74 = v72;
    if ( v72 )
    {
      v47 = &v72->_M_use_count;
      if ( &_pthread_key_create )
      {
        v48 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v47 & 7) + 3) < v48 || !v48 )
        {
          _InterlockedAdd(v47, 1u);
          goto LABEL_97;
        }
        v46 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v47);
      }
      v49 = *(_BYTE *)(((unsigned __int64)&v46->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v46 + 8) & 7) + 3) >= v49 && v49 )
      {
        __asan_report_load4(&v46->_M_use_count);
LABEL_105:
        exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
        YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
        YAML::Exception::Exception(exception, (const YAML::Mark *)(v4 + 4), &msg_);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
        M_p = msg_._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
          operator delete(msg_._M_dataplus._M_p);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        {
          M_p = (std::string::pointer)exception;
          __asan_report_store8();
        }
        *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
        __asan_handle_no_return(M_p);
        _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
      }
      ++v46->_M_use_count;
    }
LABEL_97:
    if ( v74 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v24 > 3 )
    goto LABEL_89;
  if ( v24 <= 1 )
  {
    second = 0LL;
    goto LABEL_28;
  }
LABEL_88:
  if ( v24 == 2 )
    goto LABEL_105;
LABEL_89:
  p_pred = (__int64 *)&__pred;
  v43 = v4 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v43);
    goto LABEL_113;
  }
  v43 = v4 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v45._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v43);
    goto LABEL_114;
  }
  v44 = key;
  v45._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [35]>(char [35] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [35]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v9)._M_current;
LABEL_114:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v4 + 136) != v45._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v45._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v45._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v45._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( v72 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v72);
  if ( v70 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v70);
  if ( v68 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v68);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v26 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v73 = node->m_pMemory._M_ptr;
      v26 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v27 = p_m_pMemory->_M_refcount._M_pi;
        v74 = v27;
        if ( !v27 )
          goto LABEL_42;
        v26 = &v27->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_124:
          v30 = &v27->_M_use_count;
          v53 = *(_BYTE *)(((unsigned __int64)&v27->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v27 + 8) & 7) + 3) >= v53 && v53 )
          {
            __asan_report_load4(v30);
            goto LABEL_128;
          }
          ++v27->_M_use_count;
LABEL_42:
          *(_BYTE *)(v6 + 64) = 1;
          *(_QWORD *)(v6 + 72) = v6 + 88;
          *(_QWORD *)(v6 + 80) = 0LL;
          *(_BYTE *)(v6 + 88) = 0;
          *(_QWORD *)(v6 + 104) = v73;
          v29 = v74;
          *(_QWORD *)(v6 + 112) = v74;
          if ( !v29 )
            goto LABEL_47;
          v30 = &v29->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_129:
            v54 = *(_BYTE *)(((unsigned __int64)&v29->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v29 + 8) & 7) + 3) >= v54 && v54 )
            {
              __asan_report_load4(&v29->_M_use_count);
              v56 = v55;
              v57 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v57);
              _Unwind_Resume(v56);
            }
            ++v29->_M_use_count;
            goto LABEL_47;
          }
          v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
          {
            _InterlockedAdd(v30, 1u);
LABEL_47:
            *(_QWORD *)(v6 + 120) = second;
            if ( v74 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74);
            goto LABEL_49;
          }
LABEL_128:
          v29 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v30);
          goto LABEL_129;
        }
        v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v26 & 7) + 3) < v28 || !v28 )
        {
          _InterlockedAdd(v26, 1u);
          goto LABEL_42;
        }
LABEL_123:
        v27 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v26);
        goto LABEL_124;
      }
    }
    __asan_report_load8(v26);
    goto LABEL_123;
  }
  YAML::key_to_string<char [35]>(&msg_, key);
  *(_BYTE *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 72) = v6 + 88;
  std::string::_M_construct<char *>(
    (std::string *const)(v6 + 72),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v52);
  *(_QWORD *)(v6 + 104) = 0LL;
  *(_QWORD *)(v6 + 112) = 0LL;
  *(_QWORD *)(v6 + 120) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v6 + 64) )
  {
LABEL_55:
    v33 = *(_BYTE *)(((unsigned __int64)defaultValue >> 3) + 0x7FFF8000);
    if ( v33 > ((unsigned __int8)defaultValue & 7) || !v33 )
    {
      v34 = *defaultValue;
      goto LABEL_58;
    }
    goto LABEL_138;
  }
  v32 = *(_QWORD *)(v6 + 120);
  if ( !v32 )
    goto LABEL_139;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v32);
    goto LABEL_136;
  }
  v32 = *(_QWORD *)v32;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    __asan_report_load8(v32);
    goto LABEL_137;
  }
  v32 = *(_QWORD *)v32;
  if ( *(char *)((v32 >> 3) + 0x7FFF8000) >= 0 )
  {
    if ( *(_BYTE *)v32 )
      goto LABEL_139;
    goto LABEL_55;
  }
LABEL_137:
  __asan_report_load1(v32);
LABEL_138:
  __asan_report_load1(defaultValue);
LABEL_139:
  if ( !*(_BYTE *)(v6 + 64) )
  {
    v59 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(v59, (const std::string *)(v6 + 72));
    __asan_handle_no_return(v59);
    _cxa_throw(v59, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( *(_BYTE *)(((v6 + 120) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v6 + 120);
LABEL_145:
    v60 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark((const YAML::Node *const)(v7 - 96));
    v61 = v60;
    YAML::BadConversion::BadConversion(v60, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
    {
      v61 = v60;
      __asan_report_store8();
    }
    *(_QWORD *)v60 = &`vtable for'YAML::TypedBadConversion<bool> + 2;
    __asan_handle_no_return(v61);
    _cxa_throw(
      v60,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<bool>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<bool>::~TypedBadConversion);
  }
  if ( !*(_QWORD *)(v6 + 120) )
    goto LABEL_145;
  if ( !(unsigned __int8)YAML::convert<bool>::decode(v6 + 64, v6 + 48) )
  {
    v62 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark((const YAML::Node *const)(v7 - 96));
    v63 = v62;
    YAML::BadConversion::BadConversion(v62, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
    {
      v63 = v62;
      __asan_report_store8();
    }
    *(_QWORD *)v62 = &`vtable for'YAML::TypedBadConversion<bool> + 2;
    __asan_handle_no_return(v63);
    _cxa_throw(
      v62,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<bool>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<bool>::~TypedBadConversion);
  }
  v34 = *(_BYTE *)(v6 + 48);
LABEL_58:
  v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 112);
  if ( v35 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
  v36 = *(char **)(v6 + 72);
  if ( v36 != (char *)(v6 + 88) )
    operator delete(v36);
  if ( v76 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v34;
};

// Line 31: range 0000000014E928B9-0000000014E92C25
bool __fastcall jaegertracing::utils::yaml::findOrDefault<bool,char [9],bool>(
        const YAML::Node *node,
        const char (*key)[9],
        const bool *defaultValue)
{
  YAML::Node *v4; // rbp
  _DWORD *v5; // r12
  unsigned __int64 m_pNode; // rdi
  char v7; // al
  char M_pi; // r13
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v9; // rdi
  char *M_p; // rdi
  __int64 v12; // rax
  YAML::InvalidNode *exception; // rdi
  YAML::BadConversion *v15; // r12
  YAML::BadConversion *v16; // rdi
  YAML::BadConversion *v17; // r12
  YAML::BadConversion *v18; // rdi
  YAML::Mark mark_; // [rsp+14h] [rbp-E4h] BYREF
  char v20[216]; // [rsp+20h] [rbp-D8h] BYREF

  v4 = (YAML::Node *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(160LL);
    if ( v12 )
      v4 = (YAML::Node *)v12;
  }
  *(_QWORD *)&v4->m_isValid = 1102416563LL;
  v4->m_invalidKey._M_dataplus._M_p = "2 48 1 1 t 64 64 12 valueNode:35";
  v4->m_invalidKey._M_string_length = (std::string::size_type)jaegertracing::utils::yaml::findOrDefault<bool,char [9],bool>;
  v5 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862724] = -202116109;
  YAML::Node::operator[]<char [9]>(v4 + 1, node, key);
  if ( !v4[1].m_isValid )
  {
LABEL_8:
    v7 = *(_BYTE *)(((unsigned __int64)defaultValue >> 3) + 0x7FFF8000);
    if ( v7 > ((unsigned __int8)defaultValue & 7) || !v7 )
    {
      M_pi = *defaultValue;
      goto LABEL_11;
    }
    goto LABEL_23;
  }
  m_pNode = (unsigned __int64)v4[1].m_pNode;
  if ( !m_pNode )
    goto LABEL_24;
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(m_pNode);
    goto LABEL_21;
  }
  m_pNode = *(_QWORD *)m_pNode;
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(m_pNode);
    goto LABEL_22;
  }
  m_pNode = *(_QWORD *)m_pNode;
  if ( *(char *)((m_pNode >> 3) + 0x7FFF8000) >= 0 )
  {
    if ( *(_BYTE *)m_pNode )
      goto LABEL_24;
    goto LABEL_8;
  }
LABEL_22:
  __asan_report_load1(m_pNode);
LABEL_23:
  __asan_report_load1(defaultValue);
LABEL_24:
  if ( !v4[1].m_isValid )
  {
    exception = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(exception, &v4[1].m_invalidKey);
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v4[1].m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v4[1].m_pNode);
LABEL_30:
    v15 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark(v4 + 1);
    v16 = v15;
    YAML::BadConversion::BadConversion(v15, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      v16 = v15;
      __asan_report_store8();
    }
    *(_QWORD *)v15 = &`vtable for'YAML::TypedBadConversion<bool> + 2;
    __asan_handle_no_return(v16);
    _cxa_throw(
      v15,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<bool>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<bool>::~TypedBadConversion);
  }
  if ( !v4[1].m_pNode )
    goto LABEL_30;
  if ( !(unsigned __int8)YAML::convert<bool>::decode(&v4[1], &v4->m_pMemory._M_refcount) )
  {
    v17 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark(v4 + 1);
    v18 = v17;
    YAML::BadConversion::BadConversion(v17, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      v18 = v17;
      __asan_report_store8();
    }
    *(_QWORD *)v17 = &`vtable for'YAML::TypedBadConversion<bool> + 2;
    __asan_handle_no_return(v18);
    _cxa_throw(
      v17,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<bool>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<bool>::~TypedBadConversion);
  }
  M_pi = (char)v4->m_pMemory._M_refcount._M_pi;
LABEL_11:
  v9 = v4[1].m_pMemory._M_refcount._M_pi;
  if ( v9 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v9);
  M_p = v4[1].m_invalidKey._M_dataplus._M_p;
  if ( M_p != (char *)&v4[1].m_invalidKey._anon_0 )
    operator delete(M_p);
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)&v4->m_isValid = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return M_pi;
};

// Line 31: range 0000000014EA38E8-0000000014EA4726
// local variable allocation has failed, the output may be wrong!
double __fastcall jaegertracing::utils::yaml::findOrDefault<double,char [6],int>(
        const YAML::Node *node,
        const char (*key)[6],
        const int *defaultValue)
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r14
  __int64 v4; // r15
  unsigned __int64 v6; // r13
  char *v7; // rbx
  _DWORD *v8; // rbp
  std::random_access_iterator_tag v9; // r8
  YAML::detail::node **p_m_pNode; // rdi
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v15; // cl
  _Atomic_word *v16; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rax
  _Atomic_word *v18; // rdx
  char v19; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rax
  char v21; // dl
  _Atomic_word *v22; // rdi
  char v23; // al
  unsigned int v24; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v26; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v27; // rax
  char v28; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // rax
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  unsigned __int64 v32; // rdi
  const int *v33; // rcx
  char v34; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  char *v36; // rdi
  __int64 v38; // rax
  char v39; // si
  char v40; // si
  char v41; // cl
  __int64 *p_pred; // rcx OVERLAPPED
  __int64 v43; // rdi
  const char (*v44)[6]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v45; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rax
  _Atomic_word *v47; // rdi
  char v48; // dl
  char v49; // cl
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v52; // cl
  char v53; // cl
  char v54; // cl
  struct _Unwind_Exception *v55; // rax
  struct _Unwind_Exception *v56; // rbx
  std::string::pointer v57; // rdi
  YAML::InvalidNode *v58; // rdi
  YAML::BadConversion *v59; // r13
  YAML::BadConversion *v60; // rdi
  std::enable_if<true,bool>::type v61; // r14
  char v62; // r15
  unsigned __int64 v63; // rdi
  YAML::InvalidNode *v64; // rdi
  std::enable_if<true,bool>::type v65; // al
  YAML::BadConversion *v66; // r13
  YAML::BadConversion *v67; // rdi
  double defaultValueb; // [rsp+8h] [rbp-340h]
  const int *defaultValuec; // [rsp+8h] [rbp-340h]
  YAML::Mark mark_; // [rsp+24h] [rbp-324h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+30h] [rbp-318h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v74; // [rsp+38h] [rbp-310h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v75; // [rsp+40h] [rbp-308h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v76; // [rsp+48h] [rbp-300h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *__pred; // [rsp+50h] [rbp-2F8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v78; // [rsp+58h] [rbp-2F0h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v79; // [rsp+60h] [rbp-2E8h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v80; // [rsp+68h] [rbp-2E0h]
  std::string msg_; // [rsp+70h] [rbp-2D8h] BYREF
  char v82[696]; // [rsp+90h] [rbp-2B8h] BYREF

  v6 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v38 = __asan_stack_malloc_4(640LL);
    if ( v38 )
      v6 = v38;
  }
  v7 = (char *)(v6 + 640);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 8 1 t 80 64 12 valueNode:35 176 392 6 stream";
  *(_QWORD *)(v6 + 16) = jaegertracing::utils::yaml::findOrDefault<double,char [6],int>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234881024;
  v8[536862722] = 62194;
  v8[536862724] = -219021312;
  v8[536862725] = 62194;
  v8[536862737] = -218103808;
  v8[536862738] = -202116109;
  v8[536862739] = -202116109;
  YAML::Node::EnsureNodeExists(node);
  p_m_pNode = &node->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_m_pNode);
    goto LABEL_68;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_69;
  }
  M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(p_M_refcount);
    goto LABEL_70;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v74 = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v15 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v15 || !v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_70:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_71:
  v39 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v39 && v39 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_75;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(m_pNode);
    goto LABEL_76;
  }
  v16 = *(_Atomic_word **)m_pNode;
  v75 = M_ptr;
  v17 = v74;
  v76 = v74;
  if ( !v74 )
    goto LABEL_16;
  v18 = &v74->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_77;
  v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
  {
    _InterlockedAdd(v18, 1u);
    goto LABEL_16;
  }
LABEL_76:
  v16 = v18;
  v17 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v18);
LABEL_77:
  v40 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v40 && v40 )
  {
    v16 = &v17->_M_use_count;
    __asan_report_load4(&v17->_M_use_count);
    goto LABEL_81;
  }
  ++v17->_M_use_count;
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(v16);
LABEL_82:
    v20 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v16);
    goto LABEL_83;
  }
  v4 = *(_QWORD *)v16;
  __pred = v75;
  v20 = v76;
  v78 = v76;
  if ( !v76 )
    goto LABEL_22;
  v16 = &v76->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v16 & 7) + 3) < v21 || !v21 )
    {
      _InterlockedAdd(v16, 1u);
      goto LABEL_22;
    }
    goto LABEL_82;
  }
LABEL_83:
  v22 = &v20->_M_use_count;
  v41 = *(_BYTE *)(((unsigned __int64)&v20->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v20 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(v22);
LABEL_87:
    __asan_report_load4(v22);
    goto LABEL_88;
  }
  ++v20->_M_use_count;
LABEL_22:
  v22 = (_Atomic_word *)(v4 + 16);
  v23 = *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
    goto LABEL_87;
  v24 = *(_DWORD *)(v4 + 16);
  if ( v24 == 3 )
  {
    v46 = v78;
    v80 = v78;
    if ( v78 )
    {
      v47 = &v78->_M_use_count;
      if ( &_pthread_key_create )
      {
        v48 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v47 & 7) + 3) < v48 || !v48 )
        {
          _InterlockedAdd(v47, 1u);
          goto LABEL_97;
        }
        v46 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v47);
      }
      v49 = *(_BYTE *)(((unsigned __int64)&v46->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v46 + 8) & 7) + 3) >= v49 && v49 )
      {
        __asan_report_load4(&v46->_M_use_count);
LABEL_105:
        exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
        YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
        YAML::Exception::Exception(exception, (const YAML::Mark *)(v4 + 4), &msg_);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
        M_p = msg_._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
          operator delete(msg_._M_dataplus._M_p);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        {
          M_p = (std::string::pointer)exception;
          __asan_report_store8();
        }
        *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
        __asan_handle_no_return(M_p);
        _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
      }
      ++v46->_M_use_count;
    }
LABEL_97:
    if ( v80 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v80);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v24 > 3 )
    goto LABEL_89;
  if ( v24 <= 1 )
  {
    second = 0LL;
    goto LABEL_28;
  }
LABEL_88:
  if ( v24 == 2 )
    goto LABEL_105;
LABEL_89:
  p_pred = (__int64 *)&__pred;
  v43 = v4 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v43);
    goto LABEL_113;
  }
  v43 = v4 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v45._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v43);
    goto LABEL_114;
  }
  v44 = key;
  v45._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [6]>(char [6] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [6]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v9)._M_current;
LABEL_114:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v4 + 136) != v45._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v45._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v45._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v45._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( v78 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v78);
  if ( v76 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v76);
  if ( v74 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v26 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v79 = node->m_pMemory._M_ptr;
      v26 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v27 = p_m_pMemory->_M_refcount._M_pi;
        v80 = v27;
        if ( !v27 )
          goto LABEL_42;
        v26 = &v27->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_124:
          v30 = &v27->_M_use_count;
          v53 = *(_BYTE *)(((unsigned __int64)&v27->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v27 + 8) & 7) + 3) >= v53 && v53 )
          {
            __asan_report_load4(v30);
            goto LABEL_128;
          }
          ++v27->_M_use_count;
LABEL_42:
          *(_BYTE *)(v6 + 80) = 1;
          *(_QWORD *)(v6 + 88) = v6 + 104;
          *(_QWORD *)(v6 + 96) = 0LL;
          *(_BYTE *)(v6 + 104) = 0;
          *(_QWORD *)(v6 + 120) = v79;
          v29 = v80;
          *(_QWORD *)(v6 + 128) = v80;
          if ( !v29 )
            goto LABEL_47;
          v30 = &v29->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_129:
            v54 = *(_BYTE *)(((unsigned __int64)&v29->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v29 + 8) & 7) + 3) >= v54 && v54 )
            {
              __asan_report_load4(&v29->_M_use_count);
              v56 = v55;
              v57 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v57);
              _Unwind_Resume(v56);
            }
            ++v29->_M_use_count;
            goto LABEL_47;
          }
          v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
          {
            _InterlockedAdd(v30, 1u);
LABEL_47:
            *(_QWORD *)(v6 + 136) = second;
            if ( v80 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v80);
            goto LABEL_49;
          }
LABEL_128:
          v29 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v30);
          goto LABEL_129;
        }
        v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v26 & 7) + 3) < v28 || !v28 )
        {
          _InterlockedAdd(v26, 1u);
          goto LABEL_42;
        }
LABEL_123:
        v27 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v26);
        goto LABEL_124;
      }
    }
    __asan_report_load8(v26);
    goto LABEL_123;
  }
  YAML::key_to_string<char [6]>(&msg_, key);
  *(_BYTE *)(v6 + 80) = 0;
  *(_QWORD *)(v6 + 88) = v6 + 104;
  std::string::_M_construct<char *>(
    (std::string *const)(v6 + 88),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v52);
  *(_QWORD *)(v6 + 120) = 0LL;
  *(_QWORD *)(v6 + 128) = 0LL;
  *(_QWORD *)(v6 + 136) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v6 + 80) )
  {
LABEL_55:
    v33 = defaultValue;
    v34 = *(_BYTE *)(((unsigned __int64)defaultValue >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)defaultValue & 7) + 3) < v34 || !v34 )
    {
      defaultValueb = (double)*defaultValue;
      goto LABEL_58;
    }
    goto LABEL_138;
  }
  v32 = *(_QWORD *)(v6 + 136);
  if ( !v32 )
    goto LABEL_139;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v32);
    goto LABEL_136;
  }
  v32 = *(_QWORD *)v32;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    __asan_report_load8(v32);
    goto LABEL_137;
  }
  v32 = *(_QWORD *)v32;
  if ( *(char *)((v32 >> 3) + 0x7FFF8000) >= 0 )
  {
    if ( *(_BYTE *)v32 )
      goto LABEL_139;
    goto LABEL_55;
  }
LABEL_137:
  __asan_report_load1(v32);
LABEL_138:
  __asan_report_load4(v33);
LABEL_139:
  if ( !*(_BYTE *)(v6 + 80) )
  {
    v58 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(v58, (const std::string *)(v6 + 88));
    __asan_handle_no_return(v58);
    _cxa_throw(v58, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( *(_BYTE *)(((v6 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v6 + 136);
LABEL_145:
    v59 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark((const YAML::Node *const)(v7 - 560));
    v60 = v59;
    YAML::BadConversion::BadConversion(v59, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
    {
      v60 = v59;
      __asan_report_store8();
    }
    *(_QWORD *)v59 = &`vtable for'YAML::TypedBadConversion<double> + 2;
    __asan_handle_no_return(v60);
    _cxa_throw(
      v59,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<double>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<double>::~TypedBadConversion);
  }
  if ( !*(_QWORD *)(v6 + 136) )
    goto LABEL_145;
  if ( YAML::Node::Type((const YAML::Node *const)(v6 + 80)) == Scalar )
  {
    if ( *(char *)(((v6 + 80) >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_load1(v6 + 80);
    }
    else
    {
      v62 = *(_BYTE *)(v6 + 80);
      if ( v62 )
      {
        v63 = v6 + 136;
        if ( *(_BYTE *)(((v6 + 136) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v63);
        }
        else
        {
          v63 = *(_QWORD *)(v6 + 136);
          if ( !v63 )
          {
LABEL_165:
            defaultValuec = (const int *)YAML::detail::node_data::empty_scalar[abi:cxx11]();
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(
              v6 + 176,
              defaultValuec,
              24LL);
LABEL_159:
            *(_DWORD *)(v6 + 328) &= ~2u;
            std::istream::peek((std::istream *)(v6 + 176));
            v65 = YAML::conversion::ConvertStreamTo<double>((std::stringstream *)(v6 + 176), (double *)(v6 + 48));
            v61 = v65;
            if ( !v65 )
            {
              if ( !(unsigned int)std::string::compare(defaultValuec, ".inf") )
              {
                v61 = v62;
              }
              else if ( !(unsigned int)std::string::compare(defaultValuec, ".Inf") )
              {
                v61 = v62;
              }
              else if ( !(unsigned int)std::string::compare(defaultValuec, ".INF") )
              {
                v61 = v62;
              }
              else if ( !(unsigned int)std::string::compare(defaultValuec, "+.inf") )
              {
                v61 = v62;
              }
              else if ( !(unsigned int)std::string::compare(defaultValuec, "+.Inf") )
              {
                v61 = v62;
              }
              else if ( !(unsigned int)std::string::compare(defaultValuec, "+.INF") )
              {
                v61 = v62;
              }
              if ( v61 )
              {
                *(_QWORD *)(v6 + 48) = 0x7FF0000000000000LL;
              }
              else
              {
                if ( !(unsigned int)std::string::compare(defaultValuec, "-.inf") )
                {
                  v61 = v62;
                }
                else if ( !(unsigned int)std::string::compare(defaultValuec, "-.Inf") )
                {
                  v61 = v62;
                }
                else if ( !(unsigned int)std::string::compare(defaultValuec, "-.INF") )
                {
                  v61 = v62;
                }
                if ( v61 )
                {
                  *(_QWORD *)(v6 + 48) = 0xFFF0000000000000LL;
                }
                else
                {
                  if ( (unsigned int)std::string::compare(defaultValuec, ".nan")
                    && (unsigned int)std::string::compare(defaultValuec, ".NaN")
                    && (unsigned int)std::string::compare(defaultValuec, ".NAN") )
                  {
                    v62 = v61;
                  }
                  if ( v62 )
                  {
                    *(_QWORD *)(v6 + 48) = 0x7FF8000000000000LL;
                    v61 = v62;
                  }
                  else
                  {
                    v61 = 0;
                  }
                }
              }
            }
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v6 + 176);
            goto LABEL_150;
          }
          if ( !*(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
          {
            v63 = *(_QWORD *)v63;
            if ( !*(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
            {
              defaultValuec = (const int *)(*(_QWORD *)v63 + 64LL);
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(
                v6 + 176,
                defaultValuec,
                24LL);
              goto LABEL_159;
            }
            goto LABEL_164;
          }
        }
        __asan_report_load8(v63);
LABEL_164:
        __asan_report_load8(v63);
        goto LABEL_165;
      }
    }
    v64 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(v64, (const std::string *)(v6 + 88));
    __asan_handle_no_return(v64);
    _cxa_throw(v64, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  v61 = 0;
LABEL_150:
  if ( !v61 )
  {
    v66 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark((const YAML::Node *const)(v7 - 560));
    v67 = v66;
    YAML::BadConversion::BadConversion(v66, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
    {
      v67 = v66;
      __asan_report_store8();
    }
    *(_QWORD *)v66 = &`vtable for'YAML::TypedBadConversion<double> + 2;
    __asan_handle_no_return(v67);
    _cxa_throw(
      v66,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<double>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<double>::~TypedBadConversion);
  }
  defaultValueb = *(double *)(v6 + 48);
LABEL_58:
  v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 128);
  if ( v35 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
  v36 = *(char **)(v6 + 88);
  if ( v36 != (char *)(v6 + 104) )
    operator delete(v36);
  if ( v82 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return defaultValueb;
};

// Line 31: range 0000000014E9EB00-0000000014E9F3DE
// local variable allocation has failed, the output may be wrong!
int __fastcall jaegertracing::utils::yaml::findOrDefault<int,char [10],int>(
        const YAML::Node *node,
        const char (*key)[10],
        const int *defaultValue)
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v4; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  std::random_access_iterator_tag v8; // r8
  YAML::detail::node **p_m_pNode; // rdi
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v14; // cl
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v25; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  unsigned __int64 v31; // rdi
  const int *v32; // rcx
  char v33; // dl
  int v34; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  char *v36; // rdi
  __int64 v38; // rax
  char v39; // si
  char v40; // si
  char v41; // cl
  __int64 *p_pred; // rcx OVERLAPPED
  __int64 v43; // rdi
  const char (*v44)[10]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v45; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rax
  _Atomic_word *v47; // rdi
  char v48; // dl
  char v49; // cl
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v52; // cl
  char v53; // cl
  char v54; // cl
  struct _Unwind_Exception *v55; // rax
  struct _Unwind_Exception *v56; // rbx
  std::string::pointer v57; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+20h] [rbp-118h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v61; // [rsp+28h] [rbp-110h]
  __int64 v62; // [rsp+30h] [rbp-108h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v63; // [rsp+38h] [rbp-100h]
  __int64 __pred; // [rsp+40h] [rbp-F8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v65; // [rsp+48h] [rbp-F0h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v66; // [rsp+50h] [rbp-E8h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v67; // [rsp+58h] [rbp-E0h]
  std::string msg_; // [rsp+60h] [rbp-D8h] BYREF
  char v69[184]; // [rsp+80h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v38 = __asan_stack_malloc_1(128LL);
    if ( v38 )
      v6 = v38;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v6 + 16) = jaegertracing::utils::yaml::findOrDefault<int,char [10],int>;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450892) = -202116109;
  YAML::Node::EnsureNodeExists(node);
  p_m_pNode = &node->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_m_pNode);
    goto LABEL_68;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_69;
  }
  M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(p_M_refcount);
    goto LABEL_70;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v61 = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v14 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_70:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_71:
  v39 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v39 && v39 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_75;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(m_pNode);
    goto LABEL_76;
  }
  v15 = *(volatile signed __int32 **)m_pNode;
  v62 = (__int64)M_ptr;
  v16 = (__int64)v61;
  v63 = v61;
  if ( !v61 )
    goto LABEL_16;
  v17 = &v61->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_77;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
  {
    _InterlockedAdd(v17, 1u);
    goto LABEL_16;
  }
LABEL_76:
  v15 = v17;
  v16 = __asan_report_store4(v17);
LABEL_77:
  v40 = *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v40 && v40 )
  {
    v15 = (volatile signed __int32 *)(v16 + 8);
    __asan_report_load4(v16 + 8);
    goto LABEL_81;
  }
  ++*(_DWORD *)(v16 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(v15);
LABEL_82:
    v19 = __asan_report_store4(v15);
    goto LABEL_83;
  }
  v4 = *(_QWORD *)v15;
  __pred = v62;
  v19 = (__int64)v63;
  v65 = v63;
  if ( !v63 )
    goto LABEL_22;
  v15 = &v63->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_22;
    }
    goto LABEL_82;
  }
LABEL_83:
  v21 = v19 + 8;
  v41 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(v21);
LABEL_87:
    __asan_report_load4(v21);
    goto LABEL_88;
  }
  ++*(_DWORD *)(v19 + 8);
LABEL_22:
  v21 = v4 + 16;
  v22 = *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_87;
  v23 = *(_DWORD *)(v4 + 16);
  if ( v23 == 3 )
  {
    v46 = v65;
    v67 = v65;
    if ( v65 )
    {
      v47 = &v65->_M_use_count;
      if ( &_pthread_key_create )
      {
        v48 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v47 & 7) + 3) < v48 || !v48 )
        {
          _InterlockedAdd(v47, 1u);
          goto LABEL_97;
        }
        v46 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v47);
      }
      v49 = *(_BYTE *)(((unsigned __int64)&v46->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v46 + 8) & 7) + 3) >= v49 && v49 )
      {
        __asan_report_load4(&v46->_M_use_count);
LABEL_105:
        exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
        YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
        YAML::Exception::Exception(exception, (const YAML::Mark *)(v4 + 4), &msg_);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
        M_p = msg_._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
          operator delete(msg_._M_dataplus._M_p);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        {
          M_p = (std::string::pointer)exception;
          __asan_report_store8();
        }
        *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
        __asan_handle_no_return(M_p);
        _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
      }
      ++v46->_M_use_count;
    }
LABEL_97:
    if ( v67 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v67);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v23 > 3 )
    goto LABEL_89;
  if ( v23 <= 1 )
  {
    second = 0LL;
    goto LABEL_28;
  }
LABEL_88:
  if ( v23 == 2 )
    goto LABEL_105;
LABEL_89:
  p_pred = &__pred;
  v43 = v4 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v43);
    goto LABEL_113;
  }
  v43 = v4 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v45._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v43);
    goto LABEL_114;
  }
  v44 = key;
  v45._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [10]>(char [10] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [10]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v8)._M_current;
LABEL_114:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v4 + 136) != v45._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v45._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v45._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v45._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( v65 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v65);
  if ( v63 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v63);
  if ( v61 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v61);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v25 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v66 = node->m_pMemory._M_ptr;
      v25 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v26 = p_m_pMemory->_M_refcount._M_pi;
        v67 = v26;
        if ( !v26 )
          goto LABEL_42;
        v25 = &v26->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_124:
          v29 = &v26->_M_use_count;
          v53 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v53 && v53 )
          {
            __asan_report_load4(v29);
            goto LABEL_128;
          }
          ++v26->_M_use_count;
LABEL_42:
          *(_BYTE *)(v6 + 32) = 1;
          *(_QWORD *)(v6 + 40) = v6 + 56;
          *(_QWORD *)(v6 + 48) = 0LL;
          *(_BYTE *)(v6 + 56) = 0;
          *(_QWORD *)(v6 + 72) = v66;
          v28 = v67;
          *(_QWORD *)(v6 + 80) = v67;
          if ( !v28 )
            goto LABEL_47;
          v29 = &v28->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_129:
            v54 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v54 && v54 )
            {
              __asan_report_load4(&v28->_M_use_count);
              v56 = v55;
              v57 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v57);
              _Unwind_Resume(v56);
            }
            ++v28->_M_use_count;
            goto LABEL_47;
          }
          v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
          {
            _InterlockedAdd(v29, 1u);
LABEL_47:
            *(_QWORD *)(v6 + 88) = second;
            if ( v67 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v67);
            goto LABEL_49;
          }
LABEL_128:
          v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v29);
          goto LABEL_129;
        }
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v25 & 7) + 3) < v27 || !v27 )
        {
          _InterlockedAdd(v25, 1u);
          goto LABEL_42;
        }
LABEL_123:
        v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v25);
        goto LABEL_124;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_123;
  }
  YAML::key_to_string<char [10]>(&msg_, key);
  *(_BYTE *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = v6 + 56;
  std::string::_M_construct<char *>(
    (std::string *const)(v6 + 40),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v52);
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v6 + 32) )
  {
LABEL_55:
    v32 = defaultValue;
    v33 = *(_BYTE *)(((unsigned __int64)defaultValue >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)defaultValue & 7) + 3) < v33 || !v33 )
    {
      v34 = *defaultValue;
      goto LABEL_58;
    }
    goto LABEL_138;
  }
  v31 = *(_QWORD *)(v6 + 88);
  if ( v31 )
  {
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
    }
    else
    {
      v31 = *(_QWORD *)v31;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        v31 = *(_QWORD *)v31;
        if ( *(char *)((v31 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v31 )
            goto LABEL_55;
          goto LABEL_139;
        }
LABEL_137:
        __asan_report_load1(v31);
LABEL_138:
        __asan_report_load4(v32);
        goto LABEL_139;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_137;
  }
LABEL_139:
  v34 = YAML::Node::as<int>((const YAML::Node *const)(v6 + 32));
LABEL_58:
  v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 80);
  if ( v35 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
  v36 = *(char **)(v6 + 40);
  if ( v36 != (char *)(v6 + 56) )
    operator delete(v36);
  if ( v69 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v34;
};

// Line 31: range 0000000014EA569F-0000000014EA5F7D
// local variable allocation has failed, the output may be wrong!
int __fastcall jaegertracing::utils::yaml::findOrDefault<int,char [14],int>(
        const YAML::Node *node,
        const char (*key)[14],
        const int *defaultValue)
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v4; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  std::random_access_iterator_tag v8; // r8
  YAML::detail::node **p_m_pNode; // rdi
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v14; // cl
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v25; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  unsigned __int64 v31; // rdi
  const int *v32; // rcx
  char v33; // dl
  int v34; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  char *v36; // rdi
  __int64 v38; // rax
  char v39; // si
  char v40; // si
  char v41; // cl
  __int64 *p_pred; // rcx OVERLAPPED
  __int64 v43; // rdi
  const char (*v44)[14]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v45; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rax
  _Atomic_word *v47; // rdi
  char v48; // dl
  char v49; // cl
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v52; // cl
  char v53; // cl
  char v54; // cl
  struct _Unwind_Exception *v55; // rax
  struct _Unwind_Exception *v56; // rbx
  std::string::pointer v57; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+20h] [rbp-118h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v61; // [rsp+28h] [rbp-110h]
  __int64 v62; // [rsp+30h] [rbp-108h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v63; // [rsp+38h] [rbp-100h]
  __int64 __pred; // [rsp+40h] [rbp-F8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v65; // [rsp+48h] [rbp-F0h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v66; // [rsp+50h] [rbp-E8h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v67; // [rsp+58h] [rbp-E0h]
  std::string msg_; // [rsp+60h] [rbp-D8h] BYREF
  char v69[184]; // [rsp+80h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v38 = __asan_stack_malloc_1(128LL);
    if ( v38 )
      v6 = v38;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v6 + 16) = jaegertracing::utils::yaml::findOrDefault<int,char [14],int>;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450892) = -202116109;
  YAML::Node::EnsureNodeExists(node);
  p_m_pNode = &node->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_m_pNode);
    goto LABEL_68;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_69;
  }
  M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(p_M_refcount);
    goto LABEL_70;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v61 = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v14 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_70:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_71:
  v39 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v39 && v39 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_75;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(m_pNode);
    goto LABEL_76;
  }
  v15 = *(volatile signed __int32 **)m_pNode;
  v62 = (__int64)M_ptr;
  v16 = (__int64)v61;
  v63 = v61;
  if ( !v61 )
    goto LABEL_16;
  v17 = &v61->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_77;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
  {
    _InterlockedAdd(v17, 1u);
    goto LABEL_16;
  }
LABEL_76:
  v15 = v17;
  v16 = __asan_report_store4(v17);
LABEL_77:
  v40 = *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v40 && v40 )
  {
    v15 = (volatile signed __int32 *)(v16 + 8);
    __asan_report_load4(v16 + 8);
    goto LABEL_81;
  }
  ++*(_DWORD *)(v16 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(v15);
LABEL_82:
    v19 = __asan_report_store4(v15);
    goto LABEL_83;
  }
  v4 = *(_QWORD *)v15;
  __pred = v62;
  v19 = (__int64)v63;
  v65 = v63;
  if ( !v63 )
    goto LABEL_22;
  v15 = &v63->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_22;
    }
    goto LABEL_82;
  }
LABEL_83:
  v21 = v19 + 8;
  v41 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(v21);
LABEL_87:
    __asan_report_load4(v21);
    goto LABEL_88;
  }
  ++*(_DWORD *)(v19 + 8);
LABEL_22:
  v21 = v4 + 16;
  v22 = *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_87;
  v23 = *(_DWORD *)(v4 + 16);
  if ( v23 == 3 )
  {
    v46 = v65;
    v67 = v65;
    if ( v65 )
    {
      v47 = &v65->_M_use_count;
      if ( &_pthread_key_create )
      {
        v48 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v47 & 7) + 3) < v48 || !v48 )
        {
          _InterlockedAdd(v47, 1u);
          goto LABEL_97;
        }
        v46 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v47);
      }
      v49 = *(_BYTE *)(((unsigned __int64)&v46->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v46 + 8) & 7) + 3) >= v49 && v49 )
      {
        __asan_report_load4(&v46->_M_use_count);
LABEL_105:
        exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
        YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
        YAML::Exception::Exception(exception, (const YAML::Mark *)(v4 + 4), &msg_);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
        M_p = msg_._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
          operator delete(msg_._M_dataplus._M_p);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        {
          M_p = (std::string::pointer)exception;
          __asan_report_store8();
        }
        *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
        __asan_handle_no_return(M_p);
        _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
      }
      ++v46->_M_use_count;
    }
LABEL_97:
    if ( v67 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v67);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v23 > 3 )
    goto LABEL_89;
  if ( v23 <= 1 )
  {
    second = 0LL;
    goto LABEL_28;
  }
LABEL_88:
  if ( v23 == 2 )
    goto LABEL_105;
LABEL_89:
  p_pred = &__pred;
  v43 = v4 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v43);
    goto LABEL_113;
  }
  v43 = v4 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v45._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v43);
    goto LABEL_114;
  }
  v44 = key;
  v45._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [14]>(char [14] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [14]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v8)._M_current;
LABEL_114:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v4 + 136) != v45._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v45._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v45._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v45._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( v65 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v65);
  if ( v63 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v63);
  if ( v61 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v61);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v25 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v66 = node->m_pMemory._M_ptr;
      v25 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v26 = p_m_pMemory->_M_refcount._M_pi;
        v67 = v26;
        if ( !v26 )
          goto LABEL_42;
        v25 = &v26->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_124:
          v29 = &v26->_M_use_count;
          v53 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v53 && v53 )
          {
            __asan_report_load4(v29);
            goto LABEL_128;
          }
          ++v26->_M_use_count;
LABEL_42:
          *(_BYTE *)(v6 + 32) = 1;
          *(_QWORD *)(v6 + 40) = v6 + 56;
          *(_QWORD *)(v6 + 48) = 0LL;
          *(_BYTE *)(v6 + 56) = 0;
          *(_QWORD *)(v6 + 72) = v66;
          v28 = v67;
          *(_QWORD *)(v6 + 80) = v67;
          if ( !v28 )
            goto LABEL_47;
          v29 = &v28->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_129:
            v54 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v54 && v54 )
            {
              __asan_report_load4(&v28->_M_use_count);
              v56 = v55;
              v57 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v57);
              _Unwind_Resume(v56);
            }
            ++v28->_M_use_count;
            goto LABEL_47;
          }
          v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
          {
            _InterlockedAdd(v29, 1u);
LABEL_47:
            *(_QWORD *)(v6 + 88) = second;
            if ( v67 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v67);
            goto LABEL_49;
          }
LABEL_128:
          v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v29);
          goto LABEL_129;
        }
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v25 & 7) + 3) < v27 || !v27 )
        {
          _InterlockedAdd(v25, 1u);
          goto LABEL_42;
        }
LABEL_123:
        v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v25);
        goto LABEL_124;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_123;
  }
  YAML::key_to_string<char [14]>(&msg_, key);
  *(_BYTE *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = v6 + 56;
  std::string::_M_construct<char *>(
    (std::string *const)(v6 + 40),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v52);
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v6 + 32) )
  {
LABEL_55:
    v32 = defaultValue;
    v33 = *(_BYTE *)(((unsigned __int64)defaultValue >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)defaultValue & 7) + 3) < v33 || !v33 )
    {
      v34 = *defaultValue;
      goto LABEL_58;
    }
    goto LABEL_138;
  }
  v31 = *(_QWORD *)(v6 + 88);
  if ( v31 )
  {
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
    }
    else
    {
      v31 = *(_QWORD *)v31;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        v31 = *(_QWORD *)v31;
        if ( *(char *)((v31 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v31 )
            goto LABEL_55;
          goto LABEL_139;
        }
LABEL_137:
        __asan_report_load1(v31);
LABEL_138:
        __asan_report_load4(v32);
        goto LABEL_139;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_137;
  }
LABEL_139:
  v34 = YAML::Node::as<int>((const YAML::Node *const)(v6 + 32));
LABEL_58:
  v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 80);
  if ( v35 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
  v36 = *(char **)(v6 + 40);
  if ( v36 != (char *)(v6 + 56) )
    operator delete(v36);
  if ( v69 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v34;
};

// Line 31: range 0000000014E967E1-0000000014E97250
// local variable allocation has failed, the output may be wrong!
int __fastcall jaegertracing::utils::yaml::findOrDefault<int,char [16],int>(
        const YAML::Node *node,
        const char (*key)[16],
        const int *defaultValue)
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v4; // r15
  unsigned __int64 v6; // r12
  char *v7; // rbx
  _DWORD *v8; // r14
  std::random_access_iterator_tag v9; // r8
  YAML::detail::node **p_m_pNode; // rdi
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v15; // cl
  _Atomic_word *v16; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rax
  _Atomic_word *v18; // rdx
  char v19; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rax
  char v21; // dl
  _Atomic_word *v22; // rdi
  char v23; // al
  unsigned int v24; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v26; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v27; // rax
  char v28; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // rax
  volatile signed __int32 *v30; // rdi
  char v31; // dl
  unsigned __int64 v32; // rdi
  const int *v33; // rcx
  char v34; // dl
  int v35; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v36; // rdi
  char *v37; // rdi
  __int64 v39; // rax
  char v40; // si
  char v41; // si
  char v42; // cl
  __int64 *p_pred; // rcx OVERLAPPED
  __int64 v44; // rdi
  const char (*v45)[16]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v46; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v47; // rax
  _Atomic_word *v48; // rdi
  char v49; // dl
  char v50; // cl
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v53; // cl
  char v54; // cl
  char v55; // cl
  struct _Unwind_Exception *v56; // rax
  struct _Unwind_Exception *v57; // rbx
  std::string::pointer v58; // rdi
  YAML::InvalidNode *v59; // rdi
  YAML::BadConversion *v60; // r12
  YAML::BadConversion *v61; // rdi
  YAML::BadConversion *v62; // r12
  YAML::BadConversion *v63; // rdi
  YAML::Mark mark_; // [rsp+24h] [rbp-144h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+30h] [rbp-138h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v68; // [rsp+38h] [rbp-130h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v69; // [rsp+40h] [rbp-128h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v70; // [rsp+48h] [rbp-120h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *__pred; // [rsp+50h] [rbp-118h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v72; // [rsp+58h] [rbp-110h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v73; // [rsp+60h] [rbp-108h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v74; // [rsp+68h] [rbp-100h]
  std::string msg_; // [rsp+70h] [rbp-F8h] BYREF
  char v76[216]; // [rsp+90h] [rbp-D8h] BYREF

  v6 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v39 = __asan_stack_malloc_2(160LL);
    if ( v39 )
      v6 = v39;
  }
  v7 = (char *)(v6 + 160);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 1 t 64 64 12 valueNode:35";
  *(_QWORD *)(v6 + 16) = jaegertracing::utils::yaml::findOrDefault<int,char [16],int>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862724] = -202116109;
  YAML::Node::EnsureNodeExists(node);
  p_m_pNode = &node->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_m_pNode);
    goto LABEL_68;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_69;
  }
  M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(p_M_refcount);
    goto LABEL_70;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v68 = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v15 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v15 || !v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_70:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_71:
  v40 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v40 && v40 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_75;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(m_pNode);
    goto LABEL_76;
  }
  v16 = *(_Atomic_word **)m_pNode;
  v69 = M_ptr;
  v17 = v68;
  v70 = v68;
  if ( !v68 )
    goto LABEL_16;
  v18 = &v68->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_77;
  v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
  {
    _InterlockedAdd(v18, 1u);
    goto LABEL_16;
  }
LABEL_76:
  v16 = v18;
  v17 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v18);
LABEL_77:
  v41 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v41 && v41 )
  {
    v16 = &v17->_M_use_count;
    __asan_report_load4(&v17->_M_use_count);
    goto LABEL_81;
  }
  ++v17->_M_use_count;
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(v16);
LABEL_82:
    v20 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v16);
    goto LABEL_83;
  }
  v4 = *(_QWORD *)v16;
  __pred = v69;
  v20 = v70;
  v72 = v70;
  if ( !v70 )
    goto LABEL_22;
  v16 = &v70->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v16 & 7) + 3) < v21 || !v21 )
    {
      _InterlockedAdd(v16, 1u);
      goto LABEL_22;
    }
    goto LABEL_82;
  }
LABEL_83:
  v22 = &v20->_M_use_count;
  v42 = *(_BYTE *)(((unsigned __int64)&v20->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v20 + 8) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v22);
LABEL_87:
    __asan_report_load4(v22);
    goto LABEL_88;
  }
  ++v20->_M_use_count;
LABEL_22:
  v22 = (_Atomic_word *)(v4 + 16);
  v23 = *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
    goto LABEL_87;
  v24 = *(_DWORD *)(v4 + 16);
  if ( v24 == 3 )
  {
    v47 = v72;
    v74 = v72;
    if ( v72 )
    {
      v48 = &v72->_M_use_count;
      if ( &_pthread_key_create )
      {
        v49 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v48 & 7) + 3) < v49 || !v49 )
        {
          _InterlockedAdd(v48, 1u);
          goto LABEL_97;
        }
        v47 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v48);
      }
      v50 = *(_BYTE *)(((unsigned __int64)&v47->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v47 + 8) & 7) + 3) >= v50 && v50 )
      {
        __asan_report_load4(&v47->_M_use_count);
LABEL_105:
        exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
        YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
        YAML::Exception::Exception(exception, (const YAML::Mark *)(v4 + 4), &msg_);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
        M_p = msg_._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
          operator delete(msg_._M_dataplus._M_p);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        {
          M_p = (std::string::pointer)exception;
          __asan_report_store8();
        }
        *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
        __asan_handle_no_return(M_p);
        _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
      }
      ++v47->_M_use_count;
    }
LABEL_97:
    if ( v74 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v24 > 3 )
    goto LABEL_89;
  if ( v24 <= 1 )
  {
    second = 0LL;
    goto LABEL_28;
  }
LABEL_88:
  if ( v24 == 2 )
    goto LABEL_105;
LABEL_89:
  p_pred = (__int64 *)&__pred;
  v44 = v4 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v44);
    goto LABEL_113;
  }
  v44 = v4 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v46._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v44);
    goto LABEL_114;
  }
  v45 = key;
  v46._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [16]>(char [16] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [16]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v9)._M_current;
LABEL_114:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v4 + 136) != v46._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v46._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v46._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v46._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( v72 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v72);
  if ( v70 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v70);
  if ( v68 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v68);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v26 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v73 = node->m_pMemory._M_ptr;
      v26 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v27 = p_m_pMemory->_M_refcount._M_pi;
        v74 = v27;
        if ( !v27 )
          goto LABEL_42;
        v26 = &v27->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_124:
          v30 = &v27->_M_use_count;
          v54 = *(_BYTE *)(((unsigned __int64)&v27->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v27 + 8) & 7) + 3) >= v54 && v54 )
          {
            __asan_report_load4(v30);
            goto LABEL_128;
          }
          ++v27->_M_use_count;
LABEL_42:
          *(_BYTE *)(v6 + 64) = 1;
          *(_QWORD *)(v6 + 72) = v6 + 88;
          *(_QWORD *)(v6 + 80) = 0LL;
          *(_BYTE *)(v6 + 88) = 0;
          *(_QWORD *)(v6 + 104) = v73;
          v29 = v74;
          *(_QWORD *)(v6 + 112) = v74;
          if ( !v29 )
            goto LABEL_47;
          v30 = &v29->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_129:
            v55 = *(_BYTE *)(((unsigned __int64)&v29->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v29 + 8) & 7) + 3) >= v55 && v55 )
            {
              __asan_report_load4(&v29->_M_use_count);
              v57 = v56;
              v58 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v58);
              _Unwind_Resume(v57);
            }
            ++v29->_M_use_count;
            goto LABEL_47;
          }
          v31 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v30 & 7) + 3) < v31 || !v31 )
          {
            _InterlockedAdd(v30, 1u);
LABEL_47:
            *(_QWORD *)(v6 + 120) = second;
            if ( v74 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74);
            goto LABEL_49;
          }
LABEL_128:
          v29 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v30);
          goto LABEL_129;
        }
        v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v26 & 7) + 3) < v28 || !v28 )
        {
          _InterlockedAdd(v26, 1u);
          goto LABEL_42;
        }
LABEL_123:
        v27 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v26);
        goto LABEL_124;
      }
    }
    __asan_report_load8(v26);
    goto LABEL_123;
  }
  YAML::key_to_string<char [16]>(&msg_, key);
  *(_BYTE *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 72) = v6 + 88;
  std::string::_M_construct<char *>(
    (std::string *const)(v6 + 72),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v53);
  *(_QWORD *)(v6 + 104) = 0LL;
  *(_QWORD *)(v6 + 112) = 0LL;
  *(_QWORD *)(v6 + 120) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v6 + 64) )
  {
LABEL_55:
    v33 = defaultValue;
    v34 = *(_BYTE *)(((unsigned __int64)defaultValue >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)defaultValue & 7) + 3) < v34 || !v34 )
    {
      v35 = *defaultValue;
      goto LABEL_58;
    }
    goto LABEL_138;
  }
  v32 = *(_QWORD *)(v6 + 120);
  if ( !v32 )
    goto LABEL_139;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v32);
    goto LABEL_136;
  }
  v32 = *(_QWORD *)v32;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    __asan_report_load8(v32);
    goto LABEL_137;
  }
  v32 = *(_QWORD *)v32;
  if ( *(char *)((v32 >> 3) + 0x7FFF8000) >= 0 )
  {
    if ( *(_BYTE *)v32 )
      goto LABEL_139;
    goto LABEL_55;
  }
LABEL_137:
  __asan_report_load1(v32);
LABEL_138:
  __asan_report_load4(v33);
LABEL_139:
  if ( !*(_BYTE *)(v6 + 64) )
  {
    v59 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(v59, (const std::string *)(v6 + 72));
    __asan_handle_no_return(v59);
    _cxa_throw(v59, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( *(_BYTE *)(((v6 + 120) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v6 + 120);
LABEL_145:
    v60 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark((const YAML::Node *const)(v7 - 96));
    v61 = v60;
    YAML::BadConversion::BadConversion(v60, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
    {
      v61 = v60;
      __asan_report_store8();
    }
    *(_QWORD *)v60 = &`vtable for'YAML::TypedBadConversion<int> + 2;
    __asan_handle_no_return(v61);
    _cxa_throw(
      v60,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<int>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<int>::~TypedBadConversion);
  }
  if ( !*(_QWORD *)(v6 + 120) )
    goto LABEL_145;
  if ( !YAML::convert<int>::decode((const YAML::Node *)(v6 + 64), (int *)(v6 + 48)) )
  {
    v62 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark((const YAML::Node *const)(v7 - 96));
    v63 = v62;
    YAML::BadConversion::BadConversion(v62, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
    {
      v63 = v62;
      __asan_report_store8();
    }
    *(_QWORD *)v62 = &`vtable for'YAML::TypedBadConversion<int> + 2;
    __asan_handle_no_return(v63);
    _cxa_throw(
      v62,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<int>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<int>::~TypedBadConversion);
  }
  v35 = *(_DWORD *)(v6 + 48);
LABEL_58:
  v36 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 112);
  if ( v36 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v36);
  v37 = *(char **)(v6 + 72);
  if ( v37 != (char *)(v6 + 88) )
    operator delete(v37);
  if ( v76 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v35;
};

// Line 31: range 0000000014E9A247-0000000014E9A870
int __fastcall jaegertracing::utils::yaml::findOrDefault<int,char [20],int>(
        const YAML::Node *node,
        const char (*key)[20],
        const int *defaultValue)
{
  unsigned __int64 v4; // r12
  char *v5; // rbp
  _DWORD *v6; // rbx
  unsigned __int64 v7; // rdi
  char v8; // dl
  int v9; // r13d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v10; // rdi
  char *v11; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  char v16; // al
  int v17; // eax
  std::enable_if<true,bool>::type v18; // r14
  YAML::InvalidNode *exception; // rdi
  YAML::BadConversion *v20; // r12
  YAML::BadConversion *v21; // rdi
  YAML::InvalidNode *v22; // rdi
  unsigned __int64 v23; // rdi
  __int64 v24; // rsi
  YAML::InvalidNode *v25; // rdi
  YAML::BadConversion *v26; // r12
  YAML::BadConversion *v27; // rdi
  YAML::Mark mark_; // [rsp+14h] [rbp-2A4h] BYREF
  char v29[664]; // [rsp+20h] [rbp-298h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_4(608LL);
    if ( v13 )
      v4 = v13;
  }
  v5 = (char *)(v4 + 608);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 1 t 48 64 12 valueNode:35 144 392 6 stream";
  *(_QWORD *)(v4 + 16) = jaegertracing::utils::yaml::findOrDefault<int,char [20],int>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862723] = -219021312;
  v6[536862724] = 62194;
  v6[536862736] = -218103808;
  v6[536862737] = -202116109;
  v6[536862738] = -202116109;
  YAML::Node::operator[]<char [20]>((YAML::Node *)(v4 + 48), node, key);
  if ( !*(_BYTE *)(v4 + 48) )
  {
LABEL_8:
    v8 = *(_BYTE *)(((unsigned __int64)defaultValue >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)defaultValue & 7) + 3) < v8 || !v8 )
    {
      v9 = *defaultValue;
      goto LABEL_11;
    }
    goto LABEL_23;
  }
  v7 = *(_QWORD *)(v4 + 104);
  if ( !v7 )
    goto LABEL_24;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7);
    goto LABEL_21;
  }
  v7 = *(_QWORD *)v7;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(v7);
    goto LABEL_22;
  }
  v7 = *(_QWORD *)v7;
  if ( *(char *)((v7 >> 3) + 0x7FFF8000) >= 0 )
  {
    if ( *(_BYTE *)v7 )
      goto LABEL_24;
    goto LABEL_8;
  }
LABEL_22:
  __asan_report_load1(v7);
LABEL_23:
  __asan_report_load4(defaultValue);
LABEL_24:
  if ( !*(_BYTE *)(v4 + 48) )
  {
    exception = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(exception, (const std::string *)(v4 + 56));
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( *(_BYTE *)(((v4 + 104) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v4 + 104);
LABEL_43:
    v20 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark((const YAML::Node *const)(v5 - 560));
    v21 = v20;
    YAML::BadConversion::BadConversion(v20, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      v21 = v20;
      __asan_report_store8();
    }
    *(_QWORD *)v20 = &`vtable for'YAML::TypedBadConversion<int> + 2;
    __asan_handle_no_return(v21);
    _cxa_throw(
      v20,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<int>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<int>::~TypedBadConversion);
  }
  if ( !*(_QWORD *)(v4 + 104) )
    goto LABEL_43;
  if ( *(char *)(((v4 + 48) >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(v4 + 48);
LABEL_47:
    v22 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(v22, (const std::string *)(v4 + 56));
    __asan_handle_no_return(v22);
    _cxa_throw(v22, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !*(_BYTE *)(v4 + 48) )
    goto LABEL_47;
  v14 = *(_QWORD *)(v4 + 104);
  if ( !v14 )
  {
LABEL_52:
    v17 = 1;
    goto LABEL_37;
  }
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v14);
    goto LABEL_49;
  }
  v14 = *(_QWORD *)v14;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(v14);
    goto LABEL_50;
  }
  v14 = *(_QWORD *)v14;
  if ( *(char *)((v14 >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_50:
    __asan_report_load1(v14);
LABEL_51:
    __asan_report_load4(v15);
    goto LABEL_52;
  }
  if ( *(_BYTE *)v14 )
  {
    v15 = v14 + 16;
    v16 = *(_BYTE *)(((v14 + 16) >> 3) + 0x7FFF8000);
    if ( !v16 || v16 > 3 )
    {
      v17 = *(_DWORD *)(v14 + 16);
      goto LABEL_37;
    }
    goto LABEL_51;
  }
  v17 = 0;
LABEL_37:
  if ( v17 == 2 )
  {
    if ( !*(_BYTE *)(v4 + 48) )
    {
      v25 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
      YAML::InvalidNode::InvalidNode(v25, (const std::string *)(v4 + 56));
      __asan_handle_no_return(v25);
      _cxa_throw(v25, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
    }
    v23 = *(_QWORD *)(v4 + 104);
    if ( v23 )
    {
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v23);
      }
      else
      {
        v23 = *(_QWORD *)v23;
        if ( !*(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        {
          v24 = *(_QWORD *)v23 + 64LL;
LABEL_59:
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(
            v4 + 144,
            v24,
            24LL);
          *(_DWORD *)(v4 + 296) &= ~2u;
          std::istream::peek((std::istream *)(v4 + 144));
          v18 = YAML::conversion::ConvertStreamTo<int>((std::stringstream *)(v4 + 144), (int *)(v4 + 32));
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 144);
          goto LABEL_39;
        }
      }
      __asan_report_load8(v23);
    }
    v24 = YAML::detail::node_data::empty_scalar[abi:cxx11]();
    goto LABEL_59;
  }
  v18 = 0;
LABEL_39:
  if ( !v18 )
  {
    v26 = (YAML::BadConversion *)__cxa_allocate_exception(0x40uLL);
    mark_ = YAML::Node::Mark((const YAML::Node *const)(v5 - 560));
    v27 = v26;
    YAML::BadConversion::BadConversion(v26, &mark_);
    if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
    {
      v27 = v26;
      __asan_report_store8();
    }
    *(_QWORD *)v26 = &`vtable for'YAML::TypedBadConversion<int> + 2;
    __asan_handle_no_return(v27);
    _cxa_throw(
      v26,
      (struct type_info *)&`typeinfo for'YAML::TypedBadConversion<int>,
      (void (__fastcall *)(void *))YAML::TypedBadConversion<int>::~TypedBadConversion);
  }
  v9 = *(_DWORD *)(v4 + 32);
LABEL_11:
  v10 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 96);
  if ( v10 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v10);
  v11 = *(char **)(v4 + 56);
  if ( v11 != (char *)(v4 + 72) )
    operator delete(v11);
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
  return v9;
};

// Line 31: range 0000000014EA6EF6-0000000014EA77D4
// local variable allocation has failed, the output may be wrong!
int __fastcall jaegertracing::utils::yaml::findOrDefault<int,char [24],int>(
        const YAML::Node *node,
        const char (*key)[24],
        const int *defaultValue)
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v4; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  std::random_access_iterator_tag v8; // r8
  YAML::detail::node **p_m_pNode; // rdi
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v14; // cl
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v25; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  unsigned __int64 v31; // rdi
  const int *v32; // rcx
  char v33; // dl
  int v34; // ebp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // rdi
  char *v36; // rdi
  __int64 v38; // rax
  char v39; // si
  char v40; // si
  char v41; // cl
  __int64 *p_pred; // rcx OVERLAPPED
  __int64 v43; // rdi
  const char (*v44)[24]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v45; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rax
  _Atomic_word *v47; // rdi
  char v48; // dl
  char v49; // cl
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v52; // cl
  char v53; // cl
  char v54; // cl
  struct _Unwind_Exception *v55; // rax
  struct _Unwind_Exception *v56; // rbx
  std::string::pointer v57; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+20h] [rbp-118h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v61; // [rsp+28h] [rbp-110h]
  __int64 v62; // [rsp+30h] [rbp-108h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v63; // [rsp+38h] [rbp-100h]
  __int64 __pred; // [rsp+40h] [rbp-F8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v65; // [rsp+48h] [rbp-F0h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::element_type *v66; // [rsp+50h] [rbp-E8h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v67; // [rsp+58h] [rbp-E0h]
  std::string msg_; // [rsp+60h] [rbp-D8h] BYREF
  char v69[184]; // [rsp+80h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v38 = __asan_stack_malloc_1(128LL);
    if ( v38 )
      v6 = v38;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v6 + 16) = jaegertracing::utils::yaml::findOrDefault<int,char [24],int>;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450892) = -202116109;
  YAML::Node::EnsureNodeExists(node);
  p_m_pNode = &node->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_m_pNode);
    goto LABEL_68;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_69;
  }
  M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(p_M_refcount);
    goto LABEL_70;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v61 = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v14 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_70:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_71:
  v39 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v39 && v39 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_75;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(m_pNode);
    goto LABEL_76;
  }
  v15 = *(volatile signed __int32 **)m_pNode;
  v62 = (__int64)M_ptr;
  v16 = (__int64)v61;
  v63 = v61;
  if ( !v61 )
    goto LABEL_16;
  v17 = &v61->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_77;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
  {
    _InterlockedAdd(v17, 1u);
    goto LABEL_16;
  }
LABEL_76:
  v15 = v17;
  v16 = __asan_report_store4(v17);
LABEL_77:
  v40 = *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v40 && v40 )
  {
    v15 = (volatile signed __int32 *)(v16 + 8);
    __asan_report_load4(v16 + 8);
    goto LABEL_81;
  }
  ++*(_DWORD *)(v16 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(v15);
LABEL_82:
    v19 = __asan_report_store4(v15);
    goto LABEL_83;
  }
  v4 = *(_QWORD *)v15;
  __pred = v62;
  v19 = (__int64)v63;
  v65 = v63;
  if ( !v63 )
    goto LABEL_22;
  v15 = &v63->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_22;
    }
    goto LABEL_82;
  }
LABEL_83:
  v21 = v19 + 8;
  v41 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(v21);
LABEL_87:
    __asan_report_load4(v21);
    goto LABEL_88;
  }
  ++*(_DWORD *)(v19 + 8);
LABEL_22:
  v21 = v4 + 16;
  v22 = *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_87;
  v23 = *(_DWORD *)(v4 + 16);
  if ( v23 == 3 )
  {
    v46 = v65;
    v67 = v65;
    if ( v65 )
    {
      v47 = &v65->_M_use_count;
      if ( &_pthread_key_create )
      {
        v48 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v47 & 7) + 3) < v48 || !v48 )
        {
          _InterlockedAdd(v47, 1u);
          goto LABEL_97;
        }
        v46 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v47);
      }
      v49 = *(_BYTE *)(((unsigned __int64)&v46->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v46 + 8) & 7) + 3) >= v49 && v49 )
      {
        __asan_report_load4(&v46->_M_use_count);
LABEL_105:
        exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
        YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
        YAML::Exception::Exception(exception, (const YAML::Mark *)(v4 + 4), &msg_);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
        M_p = msg_._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
          operator delete(msg_._M_dataplus._M_p);
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        {
          M_p = (std::string::pointer)exception;
          __asan_report_store8();
        }
        *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
        __asan_handle_no_return(M_p);
        _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
      }
      ++v46->_M_use_count;
    }
LABEL_97:
    if ( v67 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v67);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v23 > 3 )
    goto LABEL_89;
  if ( v23 <= 1 )
  {
    second = 0LL;
    goto LABEL_28;
  }
LABEL_88:
  if ( v23 == 2 )
    goto LABEL_105;
LABEL_89:
  p_pred = &__pred;
  v43 = v4 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v43);
    goto LABEL_113;
  }
  v43 = v4 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v4 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v45._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v43);
    goto LABEL_114;
  }
  v44 = key;
  v45._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [24]>(char [24] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v4 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [24]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v8)._M_current;
LABEL_114:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v4 + 136) != v45._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v45._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v45._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v45._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( v65 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v65);
  if ( v63 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v63);
  if ( v61 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v61);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v25 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v66 = node->m_pMemory._M_ptr;
      v25 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v26 = p_m_pMemory->_M_refcount._M_pi;
        v67 = v26;
        if ( !v26 )
          goto LABEL_42;
        v25 = &v26->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_124:
          v29 = &v26->_M_use_count;
          v53 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v53 && v53 )
          {
            __asan_report_load4(v29);
            goto LABEL_128;
          }
          ++v26->_M_use_count;
LABEL_42:
          *(_BYTE *)(v6 + 32) = 1;
          *(_QWORD *)(v6 + 40) = v6 + 56;
          *(_QWORD *)(v6 + 48) = 0LL;
          *(_BYTE *)(v6 + 56) = 0;
          *(_QWORD *)(v6 + 72) = v66;
          v28 = v67;
          *(_QWORD *)(v6 + 80) = v67;
          if ( !v28 )
            goto LABEL_47;
          v29 = &v28->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_129:
            v54 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v54 && v54 )
            {
              __asan_report_load4(&v28->_M_use_count);
              v56 = v55;
              v57 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v57);
              _Unwind_Resume(v56);
            }
            ++v28->_M_use_count;
            goto LABEL_47;
          }
          v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
          {
            _InterlockedAdd(v29, 1u);
LABEL_47:
            *(_QWORD *)(v6 + 88) = second;
            if ( v67 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v67);
            goto LABEL_49;
          }
LABEL_128:
          v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v29);
          goto LABEL_129;
        }
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v25 & 7) + 3) < v27 || !v27 )
        {
          _InterlockedAdd(v25, 1u);
          goto LABEL_42;
        }
LABEL_123:
        v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v25);
        goto LABEL_124;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_123;
  }
  YAML::key_to_string<char [24]>(&msg_, key);
  *(_BYTE *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = v6 + 56;
  std::string::_M_construct<char *>(
    (std::string *const)(v6 + 40),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v52);
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v6 + 32) )
  {
LABEL_55:
    v32 = defaultValue;
    v33 = *(_BYTE *)(((unsigned __int64)defaultValue >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)defaultValue & 7) + 3) < v33 || !v33 )
    {
      v34 = *defaultValue;
      goto LABEL_58;
    }
    goto LABEL_138;
  }
  v31 = *(_QWORD *)(v6 + 88);
  if ( v31 )
  {
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
    }
    else
    {
      v31 = *(_QWORD *)v31;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        v31 = *(_QWORD *)v31;
        if ( *(char *)((v31 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v31 )
            goto LABEL_55;
          goto LABEL_139;
        }
LABEL_137:
        __asan_report_load1(v31);
LABEL_138:
        __asan_report_load4(v32);
        goto LABEL_139;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_137;
  }
LABEL_139:
  v34 = YAML::Node::as<int>((const YAML::Node *const)(v6 + 32));
LABEL_58:
  v35 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 80);
  if ( v35 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
  v36 = *(char **)(v6 + 40);
  if ( v36 != (char *)(v6 + 56) )
    operator delete(v36);
  if ( v69 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v34;
};

// Line 31: range 0000000014EA8C1C-0000000014EA9515
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall jaegertracing::utils::yaml::findOrDefault<std::string,char [13],char [1]>(
        std::string *retstr,
        const YAML::Node *node,
        const char (*key)[13],
        const char (*defaultValue)[1])
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v5; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  std::random_access_iterator_tag v9; // r8
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v14; // cl
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v25; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  unsigned __int64 v31; // rdi
  std::forward_iterator_tag v32; // cl
  const char *v33; // rdx
  __int64 v34; // rax
  char v35; // si
  char v36; // si
  char v37; // cl
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  __int64 v39; // rdi
  const char (*v40)[13]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v41; // rax
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v44; // cl
  char v45; // cl
  char v46; // cl
  struct _Unwind_Exception *v47; // rax
  struct _Unwind_Exception *v48; // rbx
  std::string::pointer v49; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdi
  char *v51; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v56; // [rsp+20h] [rbp-118h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v57; // [rsp+30h] [rbp-108h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+40h] [rbp-F8h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v59; // [rsp+50h] [rbp-E8h] BYREF
  std::string msg_; // [rsp+60h] [rbp-D8h] BYREF
  char v61[184]; // [rsp+80h] [rbp-B8h] BYREF

  v7 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v34 = __asan_stack_malloc_1(128LL);
    if ( v34 )
      v7 = v34;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v7 + 16) = jaegertracing::utils::yaml::findOrDefault<std::string,char [13],char [1]>;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450892) = -202116109;
  YAML::Node::EnsureNodeExists(node);
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&node->m_pNode);
    goto LABEL_62;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_63;
  }
  v56._M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_M_refcount);
    goto LABEL_64;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v56._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_65;
  v14 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_64:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_65:
  v35 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v35 && v35 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_69;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(m_pNode);
    goto LABEL_70;
  }
  v15 = *(volatile signed __int32 **)m_pNode;
  v57 = v56;
  v16 = (__int64)v56._M_refcount._M_pi;
  if ( !v56._M_refcount._M_pi )
    goto LABEL_16;
  v17 = &v56._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
  {
    _InterlockedAdd(v17, 1u);
    goto LABEL_16;
  }
LABEL_70:
  v15 = v17;
  v16 = __asan_report_store4(v17);
LABEL_71:
  v36 = *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v36 && v36 )
  {
    v15 = (volatile signed __int32 *)(v16 + 8);
    __asan_report_load4(v16 + 8);
    goto LABEL_75;
  }
  ++*(_DWORD *)(v16 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v15);
LABEL_76:
    v19 = __asan_report_store4(v15);
    goto LABEL_77;
  }
  v5 = *(_QWORD *)v15;
  __pred = v57;
  v19 = (__int64)v57._M_refcount._M_pi;
  if ( !v57._M_refcount._M_pi )
    goto LABEL_22;
  v15 = &v57._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_22;
    }
    goto LABEL_76;
  }
LABEL_77:
  v21 = v19 + 8;
  v37 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v21);
LABEL_81:
    __asan_report_load4(v21);
LABEL_82:
    if ( v23 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(v5 + 4), &msg_);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      M_p = msg_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
        operator delete(msg_._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        M_p = (std::string::pointer)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(M_p);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_83;
  }
  ++*(_DWORD *)(v19 + 8);
LABEL_22:
  v21 = v5 + 16;
  v22 = *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_81;
  v23 = *(_DWORD *)(v5 + 16);
  if ( v23 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v59, &__pred);
    if ( v59._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v23 <= 3 )
  {
    if ( v23 <= 1 )
    {
      second = 0LL;
      goto LABEL_28;
    }
    goto LABEL_82;
  }
LABEL_83:
  p_pred = &__pred;
  v39 = v5 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39);
    goto LABEL_97;
  }
  v39 = v5 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    v41._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v39);
    goto LABEL_98;
  }
  v40 = key;
  v41._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [13]>(char [13] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [13]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v9)._M_current;
LABEL_98:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v5 + 136) != v41._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v41._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v41._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v41._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v57._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v57._M_refcount._M_pi);
  if ( v56._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v56._M_refcount._M_pi);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v25 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v59._M_ptr = node->m_pMemory._M_ptr;
      v25 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v26 = p_m_pMemory->_M_refcount._M_pi;
        v59._M_refcount._M_pi = v26;
        if ( !v26 )
          goto LABEL_42;
        v25 = &v26->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_108:
          v29 = &v26->_M_use_count;
          v45 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v45 && v45 )
          {
            __asan_report_load4(v29);
            goto LABEL_112;
          }
          ++v26->_M_use_count;
LABEL_42:
          *(_BYTE *)(v7 + 32) = 1;
          *(_QWORD *)(v7 + 40) = v7 + 56;
          *(_QWORD *)(v7 + 48) = 0LL;
          *(_BYTE *)(v7 + 56) = 0;
          *(_QWORD *)(v7 + 72) = v59._M_ptr;
          v28 = v59._M_refcount._M_pi;
          *(_QWORD *)(v7 + 80) = v59._M_refcount._M_pi;
          if ( !v28 )
            goto LABEL_47;
          v29 = &v28->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_113:
            v46 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v46 && v46 )
            {
              __asan_report_load4(&v28->_M_use_count);
              v48 = v47;
              v49 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v49);
              _Unwind_Resume(v48);
            }
            ++v28->_M_use_count;
            goto LABEL_47;
          }
          v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
          {
            _InterlockedAdd(v29, 1u);
LABEL_47:
            *(_QWORD *)(v7 + 88) = second;
            if ( v59._M_refcount._M_pi )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
            goto LABEL_49;
          }
LABEL_112:
          v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v29);
          goto LABEL_113;
        }
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v25 & 7) + 3) < v27 || !v27 )
        {
          _InterlockedAdd(v25, 1u);
          goto LABEL_42;
        }
LABEL_107:
        v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v25);
        goto LABEL_108;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_107;
  }
  YAML::key_to_string<char [13]>(&msg_, key);
  *(_BYTE *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = v7 + 56;
  std::string::_M_construct<char *>(
    (std::string *const)(v7 + 40),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v44);
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v7 + 32) )
    goto LABEL_55;
  v31 = *(_QWORD *)(v7 + 88);
  if ( v31 )
  {
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
    }
    else
    {
      v31 = *(_QWORD *)v31;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        v31 = *(_QWORD *)v31;
        if ( *(char *)((v31 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v31 )
          {
LABEL_55:
            if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
            {
              v32.gap0[0] = (char)retstr;
              retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
              if ( defaultValue )
              {
                v33 = &(*defaultValue)[strlen((const char *)defaultValue)];
LABEL_58:
                std::string::_M_construct<char const*>(retstr, (const char *)defaultValue, v33, v32);
                goto LABEL_128;
              }
LABEL_123:
              v33 = &(*defaultValue)[-1];
              goto LABEL_58;
            }
LABEL_122:
            __asan_report_store8();
            goto LABEL_123;
          }
          goto LABEL_124;
        }
LABEL_121:
        __asan_report_load1(v31);
        goto LABEL_122;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_121;
  }
LABEL_124:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    YAML::Node::as<std::string>(retstr, (const YAML::Node *const)(v7 + 32));
  }
LABEL_128:
  v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 80);
  if ( v50 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v50);
  v51 = *(char **)(v7 + 40);
  if ( v51 != (char *)(v7 + 56) )
    operator delete(v51);
  if ( v61 == (char *)v7 )
  {
    *(_DWORD *)((v7 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 31: range 0000000014E981C9-0000000014E98AC2
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall jaegertracing::utils::yaml::findOrDefault<std::string,char [18],char [1]>(
        std::string *retstr,
        const YAML::Node *node,
        const char (*key)[18],
        const char (*defaultValue)[1])
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v5; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  std::random_access_iterator_tag v9; // r8
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v14; // cl
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v25; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  unsigned __int64 v31; // rdi
  std::forward_iterator_tag v32; // cl
  const char *v33; // rdx
  __int64 v34; // rax
  char v35; // si
  char v36; // si
  char v37; // cl
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  __int64 v39; // rdi
  const char (*v40)[18]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v41; // rax
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v44; // cl
  char v45; // cl
  char v46; // cl
  struct _Unwind_Exception *v47; // rax
  struct _Unwind_Exception *v48; // rbx
  std::string::pointer v49; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdi
  char *v51; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v56; // [rsp+20h] [rbp-118h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v57; // [rsp+30h] [rbp-108h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+40h] [rbp-F8h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v59; // [rsp+50h] [rbp-E8h] BYREF
  std::string msg_; // [rsp+60h] [rbp-D8h] BYREF
  char v61[184]; // [rsp+80h] [rbp-B8h] BYREF

  v7 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v34 = __asan_stack_malloc_1(128LL);
    if ( v34 )
      v7 = v34;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v7 + 16) = jaegertracing::utils::yaml::findOrDefault<std::string,char [18],char [1]>;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450892) = -202116109;
  YAML::Node::EnsureNodeExists(node);
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&node->m_pNode);
    goto LABEL_62;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_63;
  }
  v56._M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_M_refcount);
    goto LABEL_64;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v56._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_65;
  v14 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_64:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_65:
  v35 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v35 && v35 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_69;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(m_pNode);
    goto LABEL_70;
  }
  v15 = *(volatile signed __int32 **)m_pNode;
  v57 = v56;
  v16 = (__int64)v56._M_refcount._M_pi;
  if ( !v56._M_refcount._M_pi )
    goto LABEL_16;
  v17 = &v56._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
  {
    _InterlockedAdd(v17, 1u);
    goto LABEL_16;
  }
LABEL_70:
  v15 = v17;
  v16 = __asan_report_store4(v17);
LABEL_71:
  v36 = *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v36 && v36 )
  {
    v15 = (volatile signed __int32 *)(v16 + 8);
    __asan_report_load4(v16 + 8);
    goto LABEL_75;
  }
  ++*(_DWORD *)(v16 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v15);
LABEL_76:
    v19 = __asan_report_store4(v15);
    goto LABEL_77;
  }
  v5 = *(_QWORD *)v15;
  __pred = v57;
  v19 = (__int64)v57._M_refcount._M_pi;
  if ( !v57._M_refcount._M_pi )
    goto LABEL_22;
  v15 = &v57._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_22;
    }
    goto LABEL_76;
  }
LABEL_77:
  v21 = v19 + 8;
  v37 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v21);
LABEL_81:
    __asan_report_load4(v21);
LABEL_82:
    if ( v23 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(v5 + 4), &msg_);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      M_p = msg_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
        operator delete(msg_._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        M_p = (std::string::pointer)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(M_p);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_83;
  }
  ++*(_DWORD *)(v19 + 8);
LABEL_22:
  v21 = v5 + 16;
  v22 = *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_81;
  v23 = *(_DWORD *)(v5 + 16);
  if ( v23 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v59, &__pred);
    if ( v59._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v23 <= 3 )
  {
    if ( v23 <= 1 )
    {
      second = 0LL;
      goto LABEL_28;
    }
    goto LABEL_82;
  }
LABEL_83:
  p_pred = &__pred;
  v39 = v5 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39);
    goto LABEL_97;
  }
  v39 = v5 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    v41._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v39);
    goto LABEL_98;
  }
  v40 = key;
  v41._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [18]>(char [18] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [18]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v9)._M_current;
LABEL_98:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v5 + 136) != v41._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v41._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v41._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v41._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v57._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v57._M_refcount._M_pi);
  if ( v56._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v56._M_refcount._M_pi);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v25 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v59._M_ptr = node->m_pMemory._M_ptr;
      v25 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v26 = p_m_pMemory->_M_refcount._M_pi;
        v59._M_refcount._M_pi = v26;
        if ( !v26 )
          goto LABEL_42;
        v25 = &v26->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_108:
          v29 = &v26->_M_use_count;
          v45 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v45 && v45 )
          {
            __asan_report_load4(v29);
            goto LABEL_112;
          }
          ++v26->_M_use_count;
LABEL_42:
          *(_BYTE *)(v7 + 32) = 1;
          *(_QWORD *)(v7 + 40) = v7 + 56;
          *(_QWORD *)(v7 + 48) = 0LL;
          *(_BYTE *)(v7 + 56) = 0;
          *(_QWORD *)(v7 + 72) = v59._M_ptr;
          v28 = v59._M_refcount._M_pi;
          *(_QWORD *)(v7 + 80) = v59._M_refcount._M_pi;
          if ( !v28 )
            goto LABEL_47;
          v29 = &v28->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_113:
            v46 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v46 && v46 )
            {
              __asan_report_load4(&v28->_M_use_count);
              v48 = v47;
              v49 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v49);
              _Unwind_Resume(v48);
            }
            ++v28->_M_use_count;
            goto LABEL_47;
          }
          v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
          {
            _InterlockedAdd(v29, 1u);
LABEL_47:
            *(_QWORD *)(v7 + 88) = second;
            if ( v59._M_refcount._M_pi )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
            goto LABEL_49;
          }
LABEL_112:
          v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v29);
          goto LABEL_113;
        }
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v25 & 7) + 3) < v27 || !v27 )
        {
          _InterlockedAdd(v25, 1u);
          goto LABEL_42;
        }
LABEL_107:
        v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v25);
        goto LABEL_108;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_107;
  }
  YAML::key_to_string<char [18]>(&msg_, key);
  *(_BYTE *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = v7 + 56;
  std::string::_M_construct<char *>(
    (std::string *const)(v7 + 40),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v44);
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v7 + 32) )
    goto LABEL_55;
  v31 = *(_QWORD *)(v7 + 88);
  if ( v31 )
  {
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
    }
    else
    {
      v31 = *(_QWORD *)v31;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        v31 = *(_QWORD *)v31;
        if ( *(char *)((v31 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v31 )
          {
LABEL_55:
            if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
            {
              v32.gap0[0] = (char)retstr;
              retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
              if ( defaultValue )
              {
                v33 = &(*defaultValue)[strlen((const char *)defaultValue)];
LABEL_58:
                std::string::_M_construct<char const*>(retstr, (const char *)defaultValue, v33, v32);
                goto LABEL_128;
              }
LABEL_123:
              v33 = &(*defaultValue)[-1];
              goto LABEL_58;
            }
LABEL_122:
            __asan_report_store8();
            goto LABEL_123;
          }
          goto LABEL_124;
        }
LABEL_121:
        __asan_report_load1(v31);
        goto LABEL_122;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_121;
  }
LABEL_124:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    YAML::Node::as<std::string>(retstr, (const YAML::Node *const)(v7 + 32));
  }
LABEL_128:
  v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 80);
  if ( v50 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v50);
  v51 = *(char **)(v7 + 40);
  if ( v51 != (char *)(v7 + 56) )
    operator delete(v51);
  if ( v61 == (char *)v7 )
  {
    *(_DWORD *)((v7 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 31: range 0000000014EA0357-0000000014EA0C50
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall jaegertracing::utils::yaml::findOrDefault<std::string,char [19],char [1]>(
        std::string *retstr,
        const YAML::Node *node,
        const char (*key)[19],
        const char (*defaultValue)[1])
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v5; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  std::random_access_iterator_tag v9; // r8
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v14; // cl
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v25; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  unsigned __int64 v31; // rdi
  std::forward_iterator_tag v32; // cl
  const char *v33; // rdx
  __int64 v34; // rax
  char v35; // si
  char v36; // si
  char v37; // cl
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  __int64 v39; // rdi
  const char (*v40)[19]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v41; // rax
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v44; // cl
  char v45; // cl
  char v46; // cl
  struct _Unwind_Exception *v47; // rax
  struct _Unwind_Exception *v48; // rbx
  std::string::pointer v49; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdi
  char *v51; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v56; // [rsp+20h] [rbp-118h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v57; // [rsp+30h] [rbp-108h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+40h] [rbp-F8h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v59; // [rsp+50h] [rbp-E8h] BYREF
  std::string msg_; // [rsp+60h] [rbp-D8h] BYREF
  char v61[184]; // [rsp+80h] [rbp-B8h] BYREF

  v7 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v34 = __asan_stack_malloc_1(128LL);
    if ( v34 )
      v7 = v34;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v7 + 16) = jaegertracing::utils::yaml::findOrDefault<std::string,char [19],char [1]>;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450892) = -202116109;
  YAML::Node::EnsureNodeExists(node);
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&node->m_pNode);
    goto LABEL_62;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_63;
  }
  v56._M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_M_refcount);
    goto LABEL_64;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v56._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_65;
  v14 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_64:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_65:
  v35 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v35 && v35 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_69;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(m_pNode);
    goto LABEL_70;
  }
  v15 = *(volatile signed __int32 **)m_pNode;
  v57 = v56;
  v16 = (__int64)v56._M_refcount._M_pi;
  if ( !v56._M_refcount._M_pi )
    goto LABEL_16;
  v17 = &v56._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
  {
    _InterlockedAdd(v17, 1u);
    goto LABEL_16;
  }
LABEL_70:
  v15 = v17;
  v16 = __asan_report_store4(v17);
LABEL_71:
  v36 = *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v36 && v36 )
  {
    v15 = (volatile signed __int32 *)(v16 + 8);
    __asan_report_load4(v16 + 8);
    goto LABEL_75;
  }
  ++*(_DWORD *)(v16 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v15);
LABEL_76:
    v19 = __asan_report_store4(v15);
    goto LABEL_77;
  }
  v5 = *(_QWORD *)v15;
  __pred = v57;
  v19 = (__int64)v57._M_refcount._M_pi;
  if ( !v57._M_refcount._M_pi )
    goto LABEL_22;
  v15 = &v57._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_22;
    }
    goto LABEL_76;
  }
LABEL_77:
  v21 = v19 + 8;
  v37 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v21);
LABEL_81:
    __asan_report_load4(v21);
LABEL_82:
    if ( v23 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(v5 + 4), &msg_);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      M_p = msg_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
        operator delete(msg_._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        M_p = (std::string::pointer)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(M_p);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_83;
  }
  ++*(_DWORD *)(v19 + 8);
LABEL_22:
  v21 = v5 + 16;
  v22 = *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_81;
  v23 = *(_DWORD *)(v5 + 16);
  if ( v23 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v59, &__pred);
    if ( v59._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v23 <= 3 )
  {
    if ( v23 <= 1 )
    {
      second = 0LL;
      goto LABEL_28;
    }
    goto LABEL_82;
  }
LABEL_83:
  p_pred = &__pred;
  v39 = v5 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39);
    goto LABEL_97;
  }
  v39 = v5 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    v41._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v39);
    goto LABEL_98;
  }
  v40 = key;
  v41._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [19]>(char [19] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [19]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v9)._M_current;
LABEL_98:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v5 + 136) != v41._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v41._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v41._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v41._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v57._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v57._M_refcount._M_pi);
  if ( v56._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v56._M_refcount._M_pi);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v25 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v59._M_ptr = node->m_pMemory._M_ptr;
      v25 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v26 = p_m_pMemory->_M_refcount._M_pi;
        v59._M_refcount._M_pi = v26;
        if ( !v26 )
          goto LABEL_42;
        v25 = &v26->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_108:
          v29 = &v26->_M_use_count;
          v45 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v45 && v45 )
          {
            __asan_report_load4(v29);
            goto LABEL_112;
          }
          ++v26->_M_use_count;
LABEL_42:
          *(_BYTE *)(v7 + 32) = 1;
          *(_QWORD *)(v7 + 40) = v7 + 56;
          *(_QWORD *)(v7 + 48) = 0LL;
          *(_BYTE *)(v7 + 56) = 0;
          *(_QWORD *)(v7 + 72) = v59._M_ptr;
          v28 = v59._M_refcount._M_pi;
          *(_QWORD *)(v7 + 80) = v59._M_refcount._M_pi;
          if ( !v28 )
            goto LABEL_47;
          v29 = &v28->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_113:
            v46 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v46 && v46 )
            {
              __asan_report_load4(&v28->_M_use_count);
              v48 = v47;
              v49 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v49);
              _Unwind_Resume(v48);
            }
            ++v28->_M_use_count;
            goto LABEL_47;
          }
          v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
          {
            _InterlockedAdd(v29, 1u);
LABEL_47:
            *(_QWORD *)(v7 + 88) = second;
            if ( v59._M_refcount._M_pi )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
            goto LABEL_49;
          }
LABEL_112:
          v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v29);
          goto LABEL_113;
        }
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v25 & 7) + 3) < v27 || !v27 )
        {
          _InterlockedAdd(v25, 1u);
          goto LABEL_42;
        }
LABEL_107:
        v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v25);
        goto LABEL_108;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_107;
  }
  YAML::key_to_string<char [19]>(&msg_, key);
  *(_BYTE *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = v7 + 56;
  std::string::_M_construct<char *>(
    (std::string *const)(v7 + 40),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v44);
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v7 + 32) )
    goto LABEL_55;
  v31 = *(_QWORD *)(v7 + 88);
  if ( v31 )
  {
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
    }
    else
    {
      v31 = *(_QWORD *)v31;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        v31 = *(_QWORD *)v31;
        if ( *(char *)((v31 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v31 )
          {
LABEL_55:
            if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
            {
              v32.gap0[0] = (char)retstr;
              retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
              if ( defaultValue )
              {
                v33 = &(*defaultValue)[strlen((const char *)defaultValue)];
LABEL_58:
                std::string::_M_construct<char const*>(retstr, (const char *)defaultValue, v33, v32);
                goto LABEL_128;
              }
LABEL_123:
              v33 = &(*defaultValue)[-1];
              goto LABEL_58;
            }
LABEL_122:
            __asan_report_store8();
            goto LABEL_123;
          }
          goto LABEL_124;
        }
LABEL_121:
        __asan_report_load1(v31);
        goto LABEL_122;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_121;
  }
LABEL_124:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    YAML::Node::as<std::string>(retstr, (const YAML::Node *const)(v7 + 32));
  }
LABEL_128:
  v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 80);
  if ( v50 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v50);
  v51 = *(char **)(v7 + 40);
  if ( v51 != (char *)(v7 + 56) )
    operator delete(v51);
  if ( v61 == (char *)v7 )
  {
    *(_DWORD *)((v7 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 31: range 0000000014E9A875-0000000014E9AAAC
std::string *__fastcall jaegertracing::utils::yaml::findOrDefault<std::string,char [20],char [1]>(
        std::string *retstr,
        const YAML::Node *node,
        const char (*key)[20],
        const char (*defaultValue)[1])
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  std::forward_iterator_tag v8; // cl
  unsigned __int64 v9; // rdi
  const char *v10; // rdx
  __int64 v11; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rdi
  char *v13; // rdi
  char v16[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v6 = v11;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v6 + 16) = jaegertracing::utils::yaml::findOrDefault<std::string,char [20],char [1]>;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450892) = -202116109;
  YAML::Node::operator[]<char [20]>((YAML::Node *)(v6 + 32), node, key);
  if ( !*(_BYTE *)(v6 + 32) )
  {
LABEL_8:
    if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
    {
      retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
      if ( defaultValue )
      {
        v10 = &(*defaultValue)[strlen((const char *)defaultValue)];
LABEL_11:
        std::string::_M_construct<char const*>(retstr, (const char *)defaultValue, v10, v8);
        goto LABEL_23;
      }
LABEL_18:
      v10 = &(*defaultValue)[-1];
      goto LABEL_11;
    }
LABEL_17:
    __asan_report_store8();
    goto LABEL_18;
  }
  v9 = *(_QWORD *)(v6 + 88);
  if ( v9 )
  {
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v9);
    }
    else
    {
      v9 = *(_QWORD *)v9;
      if ( !*(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        v9 = *(_QWORD *)v9;
        if ( *(char *)((v9 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v9 )
            goto LABEL_8;
          goto LABEL_19;
        }
LABEL_16:
        __asan_report_load1(v9);
        goto LABEL_17;
      }
    }
    __asan_report_load8(v9);
    goto LABEL_16;
  }
LABEL_19:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    YAML::Node::as<std::string>(retstr, (const YAML::Node *const)(v6 + 32));
  }
LABEL_23:
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 80);
  if ( v12 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v12);
  v13 = *(char **)(v6 + 40);
  if ( v13 != (char *)(v6 + 56) )
    operator delete(v13);
  if ( v16 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 31: range 0000000014E9BA22-0000000014E9C31B
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall jaegertracing::utils::yaml::findOrDefault<std::string,char [23],char [1]>(
        std::string *retstr,
        const YAML::Node *node,
        const char (*key)[23],
        const char (*defaultValue)[1])
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v5; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  std::random_access_iterator_tag v9; // r8
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v14; // cl
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v25; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  unsigned __int64 v31; // rdi
  std::forward_iterator_tag v32; // cl
  const char *v33; // rdx
  __int64 v34; // rax
  char v35; // si
  char v36; // si
  char v37; // cl
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  __int64 v39; // rdi
  const char (*v40)[23]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v41; // rax
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v44; // cl
  char v45; // cl
  char v46; // cl
  struct _Unwind_Exception *v47; // rax
  struct _Unwind_Exception *v48; // rbx
  std::string::pointer v49; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdi
  char *v51; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v56; // [rsp+20h] [rbp-118h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v57; // [rsp+30h] [rbp-108h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+40h] [rbp-F8h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v59; // [rsp+50h] [rbp-E8h] BYREF
  std::string msg_; // [rsp+60h] [rbp-D8h] BYREF
  char v61[184]; // [rsp+80h] [rbp-B8h] BYREF

  v7 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v34 = __asan_stack_malloc_1(128LL);
    if ( v34 )
      v7 = v34;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v7 + 16) = jaegertracing::utils::yaml::findOrDefault<std::string,char [23],char [1]>;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450892) = -202116109;
  YAML::Node::EnsureNodeExists(node);
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&node->m_pNode);
    goto LABEL_62;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_63;
  }
  v56._M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_M_refcount);
    goto LABEL_64;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v56._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_65;
  v14 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_64:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_65:
  v35 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v35 && v35 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_69;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(m_pNode);
    goto LABEL_70;
  }
  v15 = *(volatile signed __int32 **)m_pNode;
  v57 = v56;
  v16 = (__int64)v56._M_refcount._M_pi;
  if ( !v56._M_refcount._M_pi )
    goto LABEL_16;
  v17 = &v56._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
  {
    _InterlockedAdd(v17, 1u);
    goto LABEL_16;
  }
LABEL_70:
  v15 = v17;
  v16 = __asan_report_store4(v17);
LABEL_71:
  v36 = *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v36 && v36 )
  {
    v15 = (volatile signed __int32 *)(v16 + 8);
    __asan_report_load4(v16 + 8);
    goto LABEL_75;
  }
  ++*(_DWORD *)(v16 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v15);
LABEL_76:
    v19 = __asan_report_store4(v15);
    goto LABEL_77;
  }
  v5 = *(_QWORD *)v15;
  __pred = v57;
  v19 = (__int64)v57._M_refcount._M_pi;
  if ( !v57._M_refcount._M_pi )
    goto LABEL_22;
  v15 = &v57._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_22;
    }
    goto LABEL_76;
  }
LABEL_77:
  v21 = v19 + 8;
  v37 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v21);
LABEL_81:
    __asan_report_load4(v21);
LABEL_82:
    if ( v23 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(v5 + 4), &msg_);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      M_p = msg_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
        operator delete(msg_._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        M_p = (std::string::pointer)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(M_p);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_83;
  }
  ++*(_DWORD *)(v19 + 8);
LABEL_22:
  v21 = v5 + 16;
  v22 = *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_81;
  v23 = *(_DWORD *)(v5 + 16);
  if ( v23 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v59, &__pred);
    if ( v59._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v23 <= 3 )
  {
    if ( v23 <= 1 )
    {
      second = 0LL;
      goto LABEL_28;
    }
    goto LABEL_82;
  }
LABEL_83:
  p_pred = &__pred;
  v39 = v5 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39);
    goto LABEL_97;
  }
  v39 = v5 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    v41._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v39);
    goto LABEL_98;
  }
  v40 = key;
  v41._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [23]>(char [23] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [23]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v9)._M_current;
LABEL_98:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v5 + 136) != v41._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v41._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v41._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v41._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v57._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v57._M_refcount._M_pi);
  if ( v56._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v56._M_refcount._M_pi);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v25 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v59._M_ptr = node->m_pMemory._M_ptr;
      v25 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v26 = p_m_pMemory->_M_refcount._M_pi;
        v59._M_refcount._M_pi = v26;
        if ( !v26 )
          goto LABEL_42;
        v25 = &v26->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_108:
          v29 = &v26->_M_use_count;
          v45 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v45 && v45 )
          {
            __asan_report_load4(v29);
            goto LABEL_112;
          }
          ++v26->_M_use_count;
LABEL_42:
          *(_BYTE *)(v7 + 32) = 1;
          *(_QWORD *)(v7 + 40) = v7 + 56;
          *(_QWORD *)(v7 + 48) = 0LL;
          *(_BYTE *)(v7 + 56) = 0;
          *(_QWORD *)(v7 + 72) = v59._M_ptr;
          v28 = v59._M_refcount._M_pi;
          *(_QWORD *)(v7 + 80) = v59._M_refcount._M_pi;
          if ( !v28 )
            goto LABEL_47;
          v29 = &v28->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_113:
            v46 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v46 && v46 )
            {
              __asan_report_load4(&v28->_M_use_count);
              v48 = v47;
              v49 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v49);
              _Unwind_Resume(v48);
            }
            ++v28->_M_use_count;
            goto LABEL_47;
          }
          v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
          {
            _InterlockedAdd(v29, 1u);
LABEL_47:
            *(_QWORD *)(v7 + 88) = second;
            if ( v59._M_refcount._M_pi )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
            goto LABEL_49;
          }
LABEL_112:
          v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v29);
          goto LABEL_113;
        }
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v25 & 7) + 3) < v27 || !v27 )
        {
          _InterlockedAdd(v25, 1u);
          goto LABEL_42;
        }
LABEL_107:
        v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v25);
        goto LABEL_108;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_107;
  }
  YAML::key_to_string<char [23]>(&msg_, key);
  *(_BYTE *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = v7 + 56;
  std::string::_M_construct<char *>(
    (std::string *const)(v7 + 40),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v44);
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v7 + 32) )
    goto LABEL_55;
  v31 = *(_QWORD *)(v7 + 88);
  if ( v31 )
  {
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
    }
    else
    {
      v31 = *(_QWORD *)v31;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        v31 = *(_QWORD *)v31;
        if ( *(char *)((v31 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v31 )
          {
LABEL_55:
            if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
            {
              v32.gap0[0] = (char)retstr;
              retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
              if ( defaultValue )
              {
                v33 = &(*defaultValue)[strlen((const char *)defaultValue)];
LABEL_58:
                std::string::_M_construct<char const*>(retstr, (const char *)defaultValue, v33, v32);
                goto LABEL_128;
              }
LABEL_123:
              v33 = &(*defaultValue)[-1];
              goto LABEL_58;
            }
LABEL_122:
            __asan_report_store8();
            goto LABEL_123;
          }
          goto LABEL_124;
        }
LABEL_121:
        __asan_report_load1(v31);
        goto LABEL_122;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_121;
  }
LABEL_124:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    YAML::Node::as<std::string>(retstr, (const YAML::Node *const)(v7 + 32));
  }
LABEL_128:
  v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 80);
  if ( v50 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v50);
  v51 = *(char **)(v7 + 40);
  if ( v51 != (char *)(v7 + 56) )
    operator delete(v51);
  if ( v61 == (char *)v7 )
  {
    *(_DWORD *)((v7 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 31: range 0000000014E9D291-0000000014E9DB8A
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall jaegertracing::utils::yaml::findOrDefault<std::string,char [25],char [1]>(
        std::string *retstr,
        const YAML::Node *node,
        const char (*key)[25],
        const char (*defaultValue)[1])
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v5; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  std::random_access_iterator_tag v9; // r8
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v14; // cl
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v25; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  unsigned __int64 v31; // rdi
  std::forward_iterator_tag v32; // cl
  const char *v33; // rdx
  __int64 v34; // rax
  char v35; // si
  char v36; // si
  char v37; // cl
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  __int64 v39; // rdi
  const char (*v40)[25]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v41; // rax
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v44; // cl
  char v45; // cl
  char v46; // cl
  struct _Unwind_Exception *v47; // rax
  struct _Unwind_Exception *v48; // rbx
  std::string::pointer v49; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdi
  char *v51; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v56; // [rsp+20h] [rbp-118h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v57; // [rsp+30h] [rbp-108h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+40h] [rbp-F8h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v59; // [rsp+50h] [rbp-E8h] BYREF
  std::string msg_; // [rsp+60h] [rbp-D8h] BYREF
  char v61[184]; // [rsp+80h] [rbp-B8h] BYREF

  v7 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v34 = __asan_stack_malloc_1(128LL);
    if ( v34 )
      v7 = v34;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v7 + 16) = jaegertracing::utils::yaml::findOrDefault<std::string,char [25],char [1]>;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450892) = -202116109;
  YAML::Node::EnsureNodeExists(node);
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&node->m_pNode);
    goto LABEL_62;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_63;
  }
  v56._M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_M_refcount);
    goto LABEL_64;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v56._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_65;
  v14 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_64:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_65:
  v35 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v35 && v35 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_69;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(m_pNode);
    goto LABEL_70;
  }
  v15 = *(volatile signed __int32 **)m_pNode;
  v57 = v56;
  v16 = (__int64)v56._M_refcount._M_pi;
  if ( !v56._M_refcount._M_pi )
    goto LABEL_16;
  v17 = &v56._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
  {
    _InterlockedAdd(v17, 1u);
    goto LABEL_16;
  }
LABEL_70:
  v15 = v17;
  v16 = __asan_report_store4(v17);
LABEL_71:
  v36 = *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v36 && v36 )
  {
    v15 = (volatile signed __int32 *)(v16 + 8);
    __asan_report_load4(v16 + 8);
    goto LABEL_75;
  }
  ++*(_DWORD *)(v16 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v15);
LABEL_76:
    v19 = __asan_report_store4(v15);
    goto LABEL_77;
  }
  v5 = *(_QWORD *)v15;
  __pred = v57;
  v19 = (__int64)v57._M_refcount._M_pi;
  if ( !v57._M_refcount._M_pi )
    goto LABEL_22;
  v15 = &v57._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_22;
    }
    goto LABEL_76;
  }
LABEL_77:
  v21 = v19 + 8;
  v37 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v21);
LABEL_81:
    __asan_report_load4(v21);
LABEL_82:
    if ( v23 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(v5 + 4), &msg_);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      M_p = msg_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
        operator delete(msg_._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        M_p = (std::string::pointer)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(M_p);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_83;
  }
  ++*(_DWORD *)(v19 + 8);
LABEL_22:
  v21 = v5 + 16;
  v22 = *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_81;
  v23 = *(_DWORD *)(v5 + 16);
  if ( v23 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v59, &__pred);
    if ( v59._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v23 <= 3 )
  {
    if ( v23 <= 1 )
    {
      second = 0LL;
      goto LABEL_28;
    }
    goto LABEL_82;
  }
LABEL_83:
  p_pred = &__pred;
  v39 = v5 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39);
    goto LABEL_97;
  }
  v39 = v5 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    v41._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v39);
    goto LABEL_98;
  }
  v40 = key;
  v41._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [25]>(char [25] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [25]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v9)._M_current;
LABEL_98:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v5 + 136) != v41._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v41._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v41._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v41._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v57._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v57._M_refcount._M_pi);
  if ( v56._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v56._M_refcount._M_pi);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v25 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v59._M_ptr = node->m_pMemory._M_ptr;
      v25 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v26 = p_m_pMemory->_M_refcount._M_pi;
        v59._M_refcount._M_pi = v26;
        if ( !v26 )
          goto LABEL_42;
        v25 = &v26->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_108:
          v29 = &v26->_M_use_count;
          v45 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v45 && v45 )
          {
            __asan_report_load4(v29);
            goto LABEL_112;
          }
          ++v26->_M_use_count;
LABEL_42:
          *(_BYTE *)(v7 + 32) = 1;
          *(_QWORD *)(v7 + 40) = v7 + 56;
          *(_QWORD *)(v7 + 48) = 0LL;
          *(_BYTE *)(v7 + 56) = 0;
          *(_QWORD *)(v7 + 72) = v59._M_ptr;
          v28 = v59._M_refcount._M_pi;
          *(_QWORD *)(v7 + 80) = v59._M_refcount._M_pi;
          if ( !v28 )
            goto LABEL_47;
          v29 = &v28->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_113:
            v46 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v46 && v46 )
            {
              __asan_report_load4(&v28->_M_use_count);
              v48 = v47;
              v49 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v49);
              _Unwind_Resume(v48);
            }
            ++v28->_M_use_count;
            goto LABEL_47;
          }
          v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
          {
            _InterlockedAdd(v29, 1u);
LABEL_47:
            *(_QWORD *)(v7 + 88) = second;
            if ( v59._M_refcount._M_pi )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
            goto LABEL_49;
          }
LABEL_112:
          v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v29);
          goto LABEL_113;
        }
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v25 & 7) + 3) < v27 || !v27 )
        {
          _InterlockedAdd(v25, 1u);
          goto LABEL_42;
        }
LABEL_107:
        v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v25);
        goto LABEL_108;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_107;
  }
  YAML::key_to_string<char [25]>(&msg_, key);
  *(_BYTE *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = v7 + 56;
  std::string::_M_construct<char *>(
    (std::string *const)(v7 + 40),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v44);
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v7 + 32) )
    goto LABEL_55;
  v31 = *(_QWORD *)(v7 + 88);
  if ( v31 )
  {
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
    }
    else
    {
      v31 = *(_QWORD *)v31;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        v31 = *(_QWORD *)v31;
        if ( *(char *)((v31 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v31 )
          {
LABEL_55:
            if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
            {
              v32.gap0[0] = (char)retstr;
              retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
              if ( defaultValue )
              {
                v33 = &(*defaultValue)[strlen((const char *)defaultValue)];
LABEL_58:
                std::string::_M_construct<char const*>(retstr, (const char *)defaultValue, v33, v32);
                goto LABEL_128;
              }
LABEL_123:
              v33 = &(*defaultValue)[-1];
              goto LABEL_58;
            }
LABEL_122:
            __asan_report_store8();
            goto LABEL_123;
          }
          goto LABEL_124;
        }
LABEL_121:
        __asan_report_load1(v31);
        goto LABEL_122;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_121;
  }
LABEL_124:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    YAML::Node::as<std::string>(retstr, (const YAML::Node *const)(v7 + 32));
  }
LABEL_128:
  v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 80);
  if ( v50 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v50);
  v51 = *(char **)(v7 + 40);
  if ( v51 != (char *)(v7 + 56) )
    operator delete(v51);
  if ( v61 == (char *)v7 )
  {
    *(_DWORD *)((v7 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 31: range 0000000014EA2079-0000000014EA2972
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall jaegertracing::utils::yaml::findOrDefault<std::string,char [5],char [1]>(
        std::string *retstr,
        const YAML::Node *node,
        const char (*key)[5],
        const char (*defaultValue)[1])
{
  YAML::detail::shared_memory_holder *p_m_pMemory; // r13
  __int64 v5; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  std::random_access_iterator_tag v9; // r8
  unsigned __int64 m_pNode; // rdi
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  unsigned __int64 p_M_use_count; // rdx
  char v14; // cl
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  volatile signed __int32 *v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rdi
  char v22; // al
  unsigned int v23; // eax
  YAML::detail::node *second; // r15
  volatile signed __int32 *v25; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rax
  volatile signed __int32 *v29; // rdi
  char v30; // dl
  unsigned __int64 v31; // rdi
  std::forward_iterator_tag v32; // cl
  const char *v33; // rdx
  __int64 v34; // rax
  char v35; // si
  char v36; // si
  char v37; // cl
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> *p_pred; // rcx OVERLAPPED
  __int64 v39; // rdi
  const char (*v40)[5]; // rdx
  __gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > v41; // rax
  YAML::Exception *exception; // rbp
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v44; // cl
  char v45; // cl
  char v46; // cl
  struct _Unwind_Exception *v47; // rax
  struct _Unwind_Exception *v48; // rbx
  std::string::pointer v49; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdi
  char *v51; // rdi
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v56; // [rsp+20h] [rbp-118h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v57; // [rsp+30h] [rbp-108h]
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> __pred; // [rsp+40h] [rbp-F8h] BYREF
  std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2> v59; // [rsp+50h] [rbp-E8h] BYREF
  std::string msg_; // [rsp+60h] [rbp-D8h] BYREF
  char v61[184]; // [rsp+80h] [rbp-B8h] BYREF

  v7 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v34 = __asan_stack_malloc_1(128LL);
    if ( v34 )
      v7 = v34;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v7 + 16) = jaegertracing::utils::yaml::findOrDefault<std::string,char [5],char [1]>;
  v8 = v7 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450892) = -202116109;
  YAML::Node::EnsureNodeExists(node);
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&node->m_pNode);
    goto LABEL_62;
  }
  m_pNode = (unsigned __int64)node->m_pNode;
  p_m_pMemory = &node->m_pMemory;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(p_m_pMemory);
    goto LABEL_63;
  }
  v56._M_ptr = node->m_pMemory._M_ptr;
  p_M_refcount = &node->m_pMemory._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pMemory._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_M_refcount);
    goto LABEL_64;
  }
  M_pi = node->m_pMemory._M_refcount._M_pi;
  v56._M_refcount._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_10;
  p_M_use_count = (unsigned __int64)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_65;
  v14 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v14 || !v14 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
    goto LABEL_10;
  }
LABEL_64:
  m_pNode = p_M_use_count;
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_65:
  v35 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v35 && v35 )
  {
    m_pNode = (unsigned __int64)&M_pi->_M_use_count;
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_69;
  }
  ++M_pi->_M_use_count;
LABEL_10:
  if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(m_pNode);
    goto LABEL_70;
  }
  v15 = *(volatile signed __int32 **)m_pNode;
  v57 = v56;
  v16 = (__int64)v56._M_refcount._M_pi;
  if ( !v56._M_refcount._M_pi )
    goto LABEL_16;
  v17 = &v56._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
  {
    _InterlockedAdd(v17, 1u);
    goto LABEL_16;
  }
LABEL_70:
  v15 = v17;
  v16 = __asan_report_store4(v17);
LABEL_71:
  v36 = *(_BYTE *)(((unsigned __int64)(v16 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v16 + 8) & 7) + 3) >= v36 && v36 )
  {
    v15 = (volatile signed __int32 *)(v16 + 8);
    __asan_report_load4(v16 + 8);
    goto LABEL_75;
  }
  ++*(_DWORD *)(v16 + 8);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_load8(v15);
LABEL_76:
    v19 = __asan_report_store4(v15);
    goto LABEL_77;
  }
  v5 = *(_QWORD *)v15;
  __pred = v57;
  v19 = (__int64)v57._M_refcount._M_pi;
  if ( !v57._M_refcount._M_pi )
    goto LABEL_22;
  v15 = &v57._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v20 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v20 || !v20 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_22;
    }
    goto LABEL_76;
  }
LABEL_77:
  v21 = v19 + 8;
  v37 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v21);
LABEL_81:
    __asan_report_load4(v21);
LABEL_82:
    if ( v23 == 2 )
    {
      exception = (YAML::Exception *)__cxa_allocate_exception(0x40uLL);
      YAML::ErrorMsg::BAD_SUBSCRIPT_WITH_KEY[abi:cxx11](&msg_, (const char *)key);
      YAML::Exception::Exception(exception, (const YAML::Mark *)(v5 + 4), &msg_);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)exception = &`vtable for'YAML::RepresentationException + 2;
      M_p = msg_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
        operator delete(msg_._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      {
        M_p = (std::string::pointer)exception;
        __asan_report_store8();
      }
      *(_QWORD *)exception = &`vtable for'YAML::BadSubscript + 2;
      __asan_handle_no_return(M_p);
      _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::BadSubscript, YAML::BadSubscript::~BadSubscript);
    }
    goto LABEL_83;
  }
  ++*(_DWORD *)(v19 + 8);
LABEL_22:
  v21 = v5 + 16;
  v22 = *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_81;
  v23 = *(_DWORD *)(v5 + 16);
  if ( v23 == 3 )
  {
    std::__shared_ptr<YAML::detail::memory_holder,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(&v59, &__pred);
    if ( v59._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
    second = 0LL;
    goto LABEL_28;
  }
  if ( v23 <= 3 )
  {
    if ( v23 <= 1 )
    {
      second = 0LL;
      goto LABEL_28;
    }
    goto LABEL_82;
  }
LABEL_83:
  p_pred = &__pred;
  v39 = v5 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 136) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39);
    goto LABEL_97;
  }
  v39 = v5 + 128;
  if ( *(_BYTE *)(((unsigned __int64)(v5 + 128) >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    v41._M_current = (const std::pair<YAML::detail::node*,YAML::detail::node*> *)__asan_report_load8(v39);
    goto LABEL_98;
  }
  v40 = key;
  v41._M_current = std::__find_if<__gnu_cxx::__normal_iterator<std::pair<YAML::detail::node *,YAML::detail::node *> const*,std::vector<std::pair<YAML::detail::node *,YAML::detail::node *>>>,__gnu_cxx::__ops::_Iter_pred<YAML::detail::node * YAML::detail::node_data::get<char [5]>(char [5] const&,std::shared_ptr<YAML::detail::memory_holder>)::{lambda(std::pair<YAML::detail::node *,YAML::detail::node *>)#1}>>(
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 128),
                     *(__gnu_cxx::__normal_iterator<const std::pair<YAML::detail::node*,YAML::detail::node*>*,std::vector<std::pair<YAML::detail::node*,YAML::detail::node*>> > *)(v5 + 136),
                     *(__gnu_cxx::__ops::_Iter_pred<YAML::detail::node_data::get(const Key&,YAML::detail::shared_memory_holder) const [with Key _ char [5]_ YAML::detail::shared_memory_holder _ std::shared_ptr<YAML::detail::memory_holder>]::<lambda(YAML::detail::node_data::kv_pair)> > *)(&p_pred - 1),
                     v9)._M_current;
LABEL_98:
  if ( *(const std::pair<YAML::detail::node*,YAML::detail::node*> **)(v5 + 136) != v41._M_current )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&v41._M_current->second >> 3) + 0x7FFF8000) )
    {
      second = v41._M_current->second;
      goto LABEL_28;
    }
    __asan_report_load8(&v41._M_current->second);
  }
  second = 0LL;
LABEL_28:
  if ( __pred._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__pred._M_refcount._M_pi);
  if ( v57._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v57._M_refcount._M_pi);
  if ( v56._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v56._M_refcount._M_pi);
  if ( second )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_m_pMemory >> 3) + 0x7FFF8000) )
    {
      v25 = (volatile signed __int32 *)p_m_pMemory;
      __asan_report_load8(p_m_pMemory);
    }
    else
    {
      v59._M_ptr = node->m_pMemory._M_ptr;
      v25 = (volatile signed __int32 *)&p_m_pMemory->_M_refcount;
      if ( !*(_BYTE *)(((unsigned __int64)&p_m_pMemory->_M_refcount >> 3) + 0x7FFF8000) )
      {
        v26 = p_m_pMemory->_M_refcount._M_pi;
        v59._M_refcount._M_pi = v26;
        if ( !v26 )
          goto LABEL_42;
        v25 = &v26->_M_use_count;
        if ( !&_pthread_key_create )
        {
LABEL_108:
          v29 = &v26->_M_use_count;
          v45 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v45 && v45 )
          {
            __asan_report_load4(v29);
            goto LABEL_112;
          }
          ++v26->_M_use_count;
LABEL_42:
          *(_BYTE *)(v7 + 32) = 1;
          *(_QWORD *)(v7 + 40) = v7 + 56;
          *(_QWORD *)(v7 + 48) = 0LL;
          *(_BYTE *)(v7 + 56) = 0;
          *(_QWORD *)(v7 + 72) = v59._M_ptr;
          v28 = v59._M_refcount._M_pi;
          *(_QWORD *)(v7 + 80) = v59._M_refcount._M_pi;
          if ( !v28 )
            goto LABEL_47;
          v29 = &v28->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_113:
            v46 = *(_BYTE *)(((unsigned __int64)&v28->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v28 + 8) & 7) + 3) >= v46 && v46 )
            {
              __asan_report_load4(&v28->_M_use_count);
              v48 = v47;
              v49 = msg_._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
                operator delete(msg_._M_dataplus._M_p);
              __asan_handle_no_return(v49);
              _Unwind_Resume(v48);
            }
            ++v28->_M_use_count;
            goto LABEL_47;
          }
          v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
          {
            _InterlockedAdd(v29, 1u);
LABEL_47:
            *(_QWORD *)(v7 + 88) = second;
            if ( v59._M_refcount._M_pi )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59._M_refcount._M_pi);
            goto LABEL_49;
          }
LABEL_112:
          v28 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v29);
          goto LABEL_113;
        }
        v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v25 & 7) + 3) < v27 || !v27 )
        {
          _InterlockedAdd(v25, 1u);
          goto LABEL_42;
        }
LABEL_107:
        v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v25);
        goto LABEL_108;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_107;
  }
  YAML::key_to_string<char [5]>(&msg_, key);
  *(_BYTE *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = v7 + 56;
  std::string::_M_construct<char *>(
    (std::string *const)(v7 + 40),
    msg_._M_dataplus._M_p,
    &msg_._M_dataplus._M_p[msg_._M_string_length],
    v44);
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)msg_._M_dataplus._M_p != &msg_._anon_0 )
    operator delete(msg_._M_dataplus._M_p);
LABEL_49:
  if ( !*(_BYTE *)(v7 + 32) )
    goto LABEL_55;
  v31 = *(_QWORD *)(v7 + 88);
  if ( v31 )
  {
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v31);
    }
    else
    {
      v31 = *(_QWORD *)v31;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        v31 = *(_QWORD *)v31;
        if ( *(char *)((v31 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v31 )
          {
LABEL_55:
            if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
            {
              v32.gap0[0] = (char)retstr;
              retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
              if ( defaultValue )
              {
                v33 = &(*defaultValue)[strlen((const char *)defaultValue)];
LABEL_58:
                std::string::_M_construct<char const*>(retstr, (const char *)defaultValue, v33, v32);
                goto LABEL_128;
              }
LABEL_123:
              v33 = &(*defaultValue)[-1];
              goto LABEL_58;
            }
LABEL_122:
            __asan_report_store8();
            goto LABEL_123;
          }
          goto LABEL_124;
        }
LABEL_121:
        __asan_report_load1(v31);
        goto LABEL_122;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_121;
  }
LABEL_124:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    YAML::Node::as<std::string>(retstr, (const YAML::Node *const)(v7 + 32));
  }
LABEL_128:
  v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 + 80);
  if ( v50 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v50);
  v51 = *(char **)(v7 + 40);
  if ( v51 != (char *)(v7 + 56) )
    operator delete(v51);
  if ( v61 == (char *)v7 )
  {
    *(_DWORD *)((v7 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v7 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 31: range 0000000014E92C2A-0000000014E92E61
std::string *__fastcall jaegertracing::utils::yaml::findOrDefault<std::string,char [9],char [1]>(
        std::string *retstr,
        const YAML::Node *node,
        const char (*key)[9],
        const char (*defaultValue)[1])
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  std::forward_iterator_tag v8; // cl
  unsigned __int64 v9; // rdi
  const char *v10; // rdx
  __int64 v11; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v12; // rdi
  char *v13; // rdi
  char v16[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v6 = v11;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 64 12 valueNode:35";
  *(_QWORD *)(v6 + 16) = jaegertracing::utils::yaml::findOrDefault<std::string,char [9],char [1]>;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450892) = -202116109;
  YAML::Node::operator[]<char [9]>((YAML::Node *)(v6 + 32), node, key);
  if ( !*(_BYTE *)(v6 + 32) )
  {
LABEL_8:
    if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
    {
      retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
      if ( defaultValue )
      {
        v10 = &(*defaultValue)[strlen((const char *)defaultValue)];
LABEL_11:
        std::string::_M_construct<char const*>(retstr, (const char *)defaultValue, v10, v8);
        goto LABEL_23;
      }
LABEL_18:
      v10 = &(*defaultValue)[-1];
      goto LABEL_11;
    }
LABEL_17:
    __asan_report_store8();
    goto LABEL_18;
  }
  v9 = *(_QWORD *)(v6 + 88);
  if ( v9 )
  {
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v9);
    }
    else
    {
      v9 = *(_QWORD *)v9;
      if ( !*(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        v9 = *(_QWORD *)v9;
        if ( *(char *)((v9 >> 3) + 0x7FFF8000) >= 0 )
        {
          if ( !*(_BYTE *)v9 )
            goto LABEL_8;
          goto LABEL_19;
        }
LABEL_16:
        __asan_report_load1(v9);
        goto LABEL_17;
      }
    }
    __asan_report_load8(v9);
    goto LABEL_16;
  }
LABEL_19:
  if ( *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr + 31) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  else
  {
    YAML::Node::as<std::string>(retstr, (const YAML::Node *const)(v6 + 32));
  }
LABEL_23:
  v12 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 80);
  if ( v12 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v12);
  v13 = *(char **)(v6 + 40);
  if ( v13 != (char *)(v6 + 56) )
    operator delete(v13);
  if ( v16 == (char *)v6 )
  {
    *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
