// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/detail/exception_implementation.hpp

// Line 65: range 000000000C28B9E6-000000000C28C10B
void __fastcall boost::property_tree::ptree_bad_path::ptree_bad_path<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>>(
        boost::property_tree::ptree_bad_path *const this,
        const std::string *w,
        const boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > *p)
{
  std::forward_iterator_tag v3; // cl
  const std::string *v4; // rbp
  boost::property_tree::ptree_bad_path *v5; // r12
  boost::any *p_m_path; // r14
  std::forward_iterator_tag v8; // cl
  void *p_M_string_length; // rdi
  std::string::pointer v10; // rdi
  std::string::size_type v11; // rax
  std::string::size_type M_allocated_capacity; // rsi
  std::string::size_type v13; // rsi
  __int64 M_p; // rsi
  unsigned __int64 v15; // rax
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  char v19; // dl
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  bool v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  char v26; // dl
  char *v27; // rsi
  unsigned __int64 v28; // rcx
  bool v29; // r8
  struct _Unwind_Exception *v30; // rbx
  unsigned __int64 v31; // rax
  std::forward_iterator_tag v32; // cl
  boost::any::placeholder *v33; // r13
  boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > >::char_type *p_m_separator; // rdi
  struct _Unwind_Exception *v35; // rbx
  struct _Unwind_Exception *v36; // rbx
  void *v37; // rdi
  void *v38[2]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v39; // [rsp+10h] [rbp-98h] BYREF
  std::string v40; // [rsp+20h] [rbp-88h] BYREF
  std::string v41; // [rsp+40h] [rbp-68h] BYREF
  void *v42; // [rsp+60h] [rbp-48h] BYREF
  __int64 v43; // [rsp+68h] [rbp-40h]
  __int128 v44[3]; // [rsp+70h] [rbp-38h] BYREF

  v41._M_dataplus._M_p = v41._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_7;
  }
  v5 = this;
  v4 = w;
  if ( *(_BYTE *)(((unsigned __int64)&p->m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8();
    goto LABEL_8;
  }
  std::string::_M_construct<char *>(
    &v41,
    p->m_value._M_dataplus._M_p,
    &p->m_value._M_dataplus._M_p[p->m_value._M_string_length],
    v3);
  v40._M_dataplus._M_p = v40._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    p_M_string_length = (void *)v4;
    __asan_report_load8();
    goto LABEL_9;
  }
  p_M_string_length = &w->_M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)&w->_M_string_length >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = &v40;
    std::string::_M_construct<char *>(&v40, w->_M_dataplus._M_p, &w->_M_dataplus._M_p[w->_M_string_length], v8);
    goto LABEL_10;
  }
LABEL_9:
  __asan_report_load8();
LABEL_10:
  if ( v40._M_string_length == 0x3FFFFFFFFFFFFFFFLL || v40._M_string_length == 4611686018427387902LL )
  {
    __asan_handle_no_return(p_M_string_length);
    std::__throw_length_error("basic_string::append");
  }
  std::string::_M_append(&v40, " (", 2LL);
  v11 = v40._M_string_length + v41._M_string_length;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v40._M_dataplus._M_p == &v40._anon_0 )
    M_allocated_capacity = 15LL;
  else
    M_allocated_capacity = v40._anon_0._M_allocated_capacity;
  if ( v11 > M_allocated_capacity
    && ((std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41._M_dataplus._M_p == &v41._anon_0
      ? (v13 = 15LL)
      : (v13 = v41._anon_0._M_allocated_capacity),
        v11 <= v13) )
  {
    M_string_length = v41._M_string_length;
    if ( v41._M_string_length )
      M_string_length = 0LL;
    M_p = 0LL;
    v15 = std::string::_M_replace(&v41, 0LL, M_string_length, v40._M_dataplus._M_p);
  }
  else
  {
    M_p = (__int64)v41._M_dataplus._M_p;
    v15 = std::string::_M_append(&v40, v41._M_dataplus._M_p);
  }
  v42 = v44;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    v17 = v15 + 16;
    if ( *(_QWORD *)v15 != v15 + 16 )
    {
      v42 = *(void **)v15;
      v18 = v15 + 16;
      if ( !*(_BYTE *)(((v15 + 16) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)&v44[0] = *(_QWORD *)(v15 + 16);
        goto LABEL_32;
      }
LABEL_42:
      __asan_report_load8();
      goto LABEL_43;
    }
  }
  v18 = v17;
  v22 = v15 + 31;
  M_p = *(unsigned __int8 *)(((v15 + 31) >> 3) + 0x7FFF8000);
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v17 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v17 & 7)
    || (v22 &= 7u, v23 = (char)M_p <= (char)v22, LOBYTE(v22) = (_BYTE)M_p != 0, (_BYTE)M_p != 0 && v23) )
  {
    M_p = 16LL;
    __asan_report_load_n(v17, 16LL, v17, v22);
    goto LABEL_42;
  }
  v44[0] = (__int128)_mm_loadu_si128((const __m128i *)(v15 + 16));
LABEL_32:
  v18 = v15 + 8;
  if ( *(_BYTE *)(((v15 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8();
LABEL_44:
    __asan_report_store1(v18, M_p);
LABEL_45:
    __asan_handle_no_return(v18);
    std::__throw_length_error("basic_string::append");
  }
  v43 = *(_QWORD *)(v15 + 8);
  *(_QWORD *)v15 = v17;
  *(_QWORD *)(v15 + 8) = 0LL;
  v18 = v15 + 16;
  v19 = *(_BYTE *)(((v15 + 16) >> 3) + 0x7FFF8000);
  if ( v19 <= (char)((v15 + 16) & 7) && v19 )
    goto LABEL_44;
  *(_BYTE *)(v15 + 16) = 0;
  if ( v43 == 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_45;
  v20 = (__int64)")";
  v21 = std::string::_M_append(&v42, ")", 1LL);
  v38[0] = &v39;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    v24 = v21 + 16;
    if ( *(_QWORD *)v21 != v21 + 16 )
    {
      v38[0] = *(void **)v21;
      v25 = v21 + 16;
      if ( !*(_BYTE *)(((v21 + 16) >> 3) + 0x7FFF8000) )
      {
        v39.m128i_i64[0] = *(_QWORD *)(v21 + 16);
        goto LABEL_52;
      }
LABEL_67:
      __asan_report_load8();
      goto LABEL_68;
    }
  }
  v25 = v24;
  v28 = v21 + 31;
  v20 = *(unsigned __int8 *)(((v21 + 31) >> 3) + 0x7FFF8000);
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v24 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v24 & 7)
    || (v28 &= 7u, v29 = (char)v20 <= (char)v28, LOBYTE(v28) = (_BYTE)v20 != 0, (_BYTE)v20 != 0 && v29) )
  {
    v20 = 16LL;
    __asan_report_load_n(v24, 16LL, v24, v28);
    goto LABEL_67;
  }
  v39 = _mm_loadu_si128((const __m128i *)(v21 + 16));
LABEL_52:
  v25 = v21 + 8;
  if ( *(_BYTE *)(((v21 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8();
    goto LABEL_69;
  }
  v38[1] = *(void **)(v21 + 8);
  *(_QWORD *)v21 = v24;
  *(_QWORD *)(v21 + 8) = 0LL;
  v25 = v21 + 16;
  v26 = *(_BYTE *)(((v21 + 16) >> 3) + 0x7FFF8000);
  if ( v26 <= (char)((v21 + 16) & 7) && v26 )
  {
LABEL_69:
    v30 = (struct _Unwind_Exception *)__asan_report_store1(v25, v20);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v40._M_dataplus._M_p != &v40._anon_0 )
      operator delete(v40._M_dataplus._M_p);
    v10 = v41._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41._M_dataplus._M_p != &v41._anon_0 )
      operator delete(v41._M_dataplus._M_p);
    __asan_handle_no_return(v10);
    _Unwind_Resume(v30);
  }
  *(_BYTE *)(v21 + 16) = 0;
  if ( v42 != v44 )
    operator delete(v42);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v40._M_dataplus._M_p != &v40._anon_0 )
    operator delete(v40._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41._M_dataplus._M_p != &v41._anon_0 )
    operator delete(v41._M_dataplus._M_p);
  v27 = (char *)v38;
  std::runtime_error::runtime_error(v5, v38);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    *(_QWORD *)v5->baseclass_0 = &`vtable for'boost::property_tree::ptree_error + 2;
    if ( v38[0] != &v39 )
      operator delete(v38[0]);
    if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)v5->baseclass_0 = &`vtable for'boost::property_tree::ptree_bad_path + 2;
      p_m_path = &v5->m_path;
      v31 = operator new(0x38uLL);
      goto LABEL_77;
    }
  }
  v31 = __asan_report_store8();
LABEL_77:
  v33 = (boost::any::placeholder *)v31;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_83;
  }
  *(_QWORD *)v31 = &`vtable for'boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>>
                 + 2;
  v4 = (const std::string *)(v31 + 8);
  if ( *(_BYTE *)(((v31 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_store8();
    goto LABEL_84;
  }
  *(_QWORD *)(v31 + 8) = v31 + 24;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8();
    goto LABEL_85;
  }
  v27 = p->m_value._M_dataplus._M_p;
  if ( !*(_BYTE *)(((unsigned __int64)&p->m_value._M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>((std::string *const)(v31 + 8), v27, &v27[p->m_value._M_string_length], v32);
    goto LABEL_86;
  }
LABEL_85:
  __asan_report_load8();
LABEL_86:
  p_m_separator = &p->m_separator;
  if ( *(char *)(((unsigned __int64)&p->m_separator >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_m_separator);
    goto LABEL_95;
  }
  p_m_separator = (boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > >::char_type *)&v4[1];
  if ( *(char *)(((unsigned __int64)&v4[1] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_95:
    __asan_report_store1(p_m_separator, v27);
    goto LABEL_96;
  }
  LOBYTE(v4[1]._M_dataplus._M_p) = p->m_separator;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8();
    goto LABEL_97;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v4[1]._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    __asan_report_store8();
    goto LABEL_98;
  }
  v4[1]._M_string_length = (std::string::size_type)v33[1]._vptr_placeholder;
  if ( *(_BYTE *)(((unsigned __int64)&p->m_start >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8();
    goto LABEL_99;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v4[1]._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_load8();
LABEL_100:
    v35 = (struct _Unwind_Exception *)__asan_report_store8();
    operator delete(v33, 0x38uLL);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      v36 = (struct _Unwind_Exception *)__asan_report_store8();
      v37 = v38[0];
      if ( v38[0] != &v39 )
        operator delete(v38[0]);
      __asan_handle_no_return(v37);
      _Unwind_Resume(v36);
    }
    *(_QWORD *)v5->baseclass_0 = &`vtable for'boost::property_tree::ptree_error + 2;
    std::runtime_error::~runtime_error((std::runtime_error *)v5);
    __asan_handle_no_return(v5);
    _Unwind_Resume(v35);
  }
  v4[1]._M_string_length += p->m_start._M_current - p->m_value._M_dataplus._M_p;
  if ( *(_BYTE *)(((unsigned __int64)p_m_path >> 3) + 0x7FFF8000) )
    goto LABEL_100;
  v5->m_path.content = v33;
};
