// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/function/function_template.hpp

// Line 128: range 000000000C248E01-000000000C2492CF
boost::iterator_range<__gnu_cxx::__normal_iterator<char const*,std::string > > __fastcall boost::detail::function::function_obj_invoker2<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char const*,std::string>>,__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>>::invoke(
        boost::detail::function::function_buffer *function_obj_ptr,
        __gnu_cxx::__normal_iterator<char const*,std::string > a0,
        __gnu_cxx::__normal_iterator<char const*,std::string > a1)
{
  unsigned __int64 obj_ptr; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  const char *v8; // rsi
  void **v9; // rdi
  unsigned __int64 v10; // rdi
  void **v11; // rdi
  void **v12; // rsi
  std::random_access_iterator_tag *v13; // rdi
  void **v14; // rsi
  void **v15; // rdi
  std::random_access_iterator_tag *v16; // rsi
  std::random_access_iterator_tag *v17; // rdi
  void **v18; // rsi
  const char *M_current; // rsi
  char v20; // al
  boost::iterator_range<__gnu_cxx::__normal_iterator<char const*,std::string > > result; // rax
  __int64 v22; // rax
  void *v23; // rdi
  const char *v24; // rdi
  char v25; // al
  struct _Unwind_Exception *v26; // rax
  struct _Unwind_Exception *v27; // rbx
  __gnu_cxx::__ops::_Iter_pred<boost::algorithm::detail::is_any_ofF<char> > v28; // [rsp+0h] [rbp-118h]
  const char *v29; // [rsp+8h] [rbp-110h]
  const char *v30; // [rsp+10h] [rbp-108h]
  void *dest[2]; // [rsp+20h] [rbp-F8h] BYREF
  size_t n; // [rsp+30h] [rbp-E8h]
  void *src[2]; // [rsp+40h] [rbp-D8h] BYREF
  size_t v34; // [rsp+50h] [rbp-C8h]
  void *v35[2]; // [rsp+60h] [rbp-B8h] BYREF
  size_t v36; // [rsp+70h] [rbp-A8h]
  std::random_access_iterator_tag v37[8]; // [rsp+80h] [rbp-98h] BYREF
  size_t v38; // [rsp+90h] [rbp-88h]
  char v39[120]; // [rsp+A0h] [rbp-78h] BYREF

  obj_ptr = (unsigned __int64)function_obj_ptr;
  v6 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v22 = __asan_stack_malloc_0(64LL);
    if ( v22 )
      v6 = v22;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 2 Ch";
  *(_QWORD *)(v6 + 16) = boost::detail::function::function_obj_invoker2<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char const*,std::string>>,__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>>::invoke;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)function_obj_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_38;
  }
  obj_ptr = (unsigned __int64)function_obj_ptr->members.obj_ptr;
  function_obj_ptr = (boost::detail::function::function_buffer *)(obj_ptr + 16);
  if ( *(_BYTE *)(((obj_ptr + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8();
    goto LABEL_39;
  }
  function_obj_ptr = *(boost::detail::function::function_buffer **)(obj_ptr + 16);
  n = (size_t)function_obj_ptr;
  dest[0] = 0LL;
  if ( (unsigned __int64)function_obj_ptr <= 0x10 )
  {
    v8 = (const char *)obj_ptr;
    v9 = dest;
    goto LABEL_6;
  }
LABEL_39:
  v9 = (void **)operator new[]((unsigned __int64)function_obj_ptr);
  dest[0] = v9;
  if ( *(_BYTE *)((obj_ptr >> 3) + 0x7FFF8000) )
  {
    v10 = obj_ptr;
    __asan_report_load8();
    goto LABEL_42;
  }
  v8 = *(const char **)obj_ptr;
LABEL_6:
  memcpy(v9, v8, n);
  v10 = n;
  v34 = n;
  src[0] = 0LL;
  if ( n <= 0x10 )
  {
    v11 = src;
    v12 = dest;
    goto LABEL_8;
  }
LABEL_42:
  v11 = (void **)operator new[](v10);
  src[0] = v11;
  v12 = (void **)dest[0];
LABEL_8:
  memcpy(v11, v12, v34);
  v38 = v34;
  *(_QWORD *)v37[0].gap0 = 0LL;
  if ( v34 > 0x10 )
  {
    v13 = (std::random_access_iterator_tag *)operator new[](v34);
    *(_QWORD *)v37[0].gap0 = v13;
    v14 = (void **)src[0];
  }
  else
  {
    v13 = v37;
    v14 = src;
  }
  memcpy(v13, v14, v38);
  v36 = v38;
  v35[0] = 0LL;
  if ( v38 > 0x10 )
  {
    v15 = (void **)operator new[](v38);
    v35[0] = v15;
    v16 = *(std::random_access_iterator_tag **)v37[0].gap0;
  }
  else
  {
    v15 = v35;
    v16 = v37;
  }
  memcpy(v15, v16, v36);
  if ( v38 > 0x10 && *(_QWORD *)v37[0].gap0 )
    operator delete[](*(void **)v37[0].gap0);
  v38 = v36;
  *(_QWORD *)v37[0].gap0 = 0LL;
  if ( v36 > 0x10 )
  {
    v17 = (std::random_access_iterator_tag *)operator new[](v36);
    *(_QWORD *)v37[0].gap0 = v17;
    v18 = (void **)v35[0];
  }
  else
  {
    v17 = v37;
    v18 = v35;
  }
  memcpy(v17, v18, v38);
  M_current = a1._M_current;
  v29 = std::__find_if<__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__ops::_Iter_pred<boost::algorithm::detail::is_any_ofF<char>>>(
          a0,
          a1,
          v28,
          (std::random_access_iterator_tag)v37)._M_current;
  if ( v38 > 0x10 && *(_QWORD *)v37[0].gap0 )
    operator delete[](*(void **)v37[0].gap0);
  if ( v36 > 0x10 && v35[0] )
    operator delete[](v35[0]);
  if ( v34 > 0x10 && src[0] )
    operator delete[](src[0]);
  if ( n > 0x10 && dest[0] )
    operator delete[](dest[0]);
  v30 = a1._M_current;
  if ( v29 == a1._M_current )
  {
    result.m_Begin = a1;
    goto LABEL_33;
  }
  a1._M_current = v29;
  v20 = *(_BYTE *)(((obj_ptr + 24) >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
  {
    __asan_report_load4(obj_ptr + 24);
    goto LABEL_54;
  }
  if ( !*(_DWORD *)(obj_ptr + 24) )
  {
    while ( 1 )
    {
      a0._M_current = a1._M_current;
      if ( v30 == a1._M_current )
        goto LABEL_32;
      v25 = *(_BYTE *)(((unsigned __int64)a1._M_current >> 3) + 0x7FFF8000);
      if ( v25 <= ((__int64)a1._M_current & 7) )
      {
        if ( v25 )
          break;
      }
LABEL_54:
      *(_BYTE *)(v6 + 32) = *a0._M_current;
      if ( *(_BYTE *)(((obj_ptr + 16) >> 3) + 0x7FFF8000) )
        goto LABEL_63;
      M_current = *(const char **)(obj_ptr + 16);
      if ( (unsigned __int64)M_current <= 0x10 )
      {
        v24 = (const char *)obj_ptr;
        goto LABEL_57;
      }
LABEL_64:
      v23 = (void *)obj_ptr;
      if ( *(_BYTE *)((obj_ptr >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
        v27 = v26;
        if ( n > 0x10 )
        {
          v23 = dest[0];
          if ( dest[0] )
            operator delete[](dest[0]);
        }
        __asan_handle_no_return(v23);
        _Unwind_Resume(v27);
      }
      v24 = *(const char **)obj_ptr;
LABEL_57:
      M_current = &M_current[(_QWORD)v24];
      if ( !std::binary_search<char const*,char>(v24, M_current, (const char *)(v6 + 32)) )
        goto LABEL_32;
      a1._M_current = a0._M_current + 1;
    }
    __asan_report_load1(a1._M_current);
LABEL_63:
    __asan_report_load8();
    goto LABEL_64;
  }
  a1._M_current = v29 + 1;
LABEL_32:
  result.m_Begin._M_current = v29;
LABEL_33:
  result.m_End = a1;
  if ( v39 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 128: range 000000000C2481CD-000000000C24869B
boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > __fastcall boost::detail::function::function_obj_invoker2<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::invoke(
        boost::detail::function::function_buffer *function_obj_ptr,
        __gnu_cxx::__normal_iterator<char*,std::string > a0,
        __gnu_cxx::__normal_iterator<char*,std::string > a1)
{
  unsigned __int64 obj_ptr; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  const char *v8; // rsi
  void **v9; // rdi
  unsigned __int64 v10; // rdi
  void **v11; // rdi
  void **v12; // rsi
  std::random_access_iterator_tag *v13; // rdi
  void **v14; // rsi
  void **v15; // rdi
  std::random_access_iterator_tag *v16; // rsi
  std::random_access_iterator_tag *v17; // rdi
  void **v18; // rsi
  char *M_current; // rsi
  char v20; // al
  boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > > result; // rax
  __int64 v22; // rax
  void *v23; // rdi
  const char *v24; // rdi
  char v25; // al
  struct _Unwind_Exception *v26; // rax
  struct _Unwind_Exception *v27; // rbx
  __gnu_cxx::__ops::_Iter_pred<boost::algorithm::detail::is_any_ofF<char> > v28; // [rsp+0h] [rbp-118h]
  char *v29; // [rsp+8h] [rbp-110h]
  char *v30; // [rsp+10h] [rbp-108h]
  void *dest[2]; // [rsp+20h] [rbp-F8h] BYREF
  size_t n; // [rsp+30h] [rbp-E8h]
  void *src[2]; // [rsp+40h] [rbp-D8h] BYREF
  size_t v34; // [rsp+50h] [rbp-C8h]
  void *v35[2]; // [rsp+60h] [rbp-B8h] BYREF
  size_t v36; // [rsp+70h] [rbp-A8h]
  std::random_access_iterator_tag v37[8]; // [rsp+80h] [rbp-98h] BYREF
  size_t v38; // [rsp+90h] [rbp-88h]
  char v39[120]; // [rsp+A0h] [rbp-78h] BYREF

  obj_ptr = (unsigned __int64)function_obj_ptr;
  v6 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v22 = __asan_stack_malloc_0(64LL);
    if ( v22 )
      v6 = v22;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 1 2 Ch";
  *(_QWORD *)(v6 + 16) = boost::detail::function::function_obj_invoker2<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>,boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::invoke;
  v7 = v6 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)function_obj_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_38;
  }
  obj_ptr = (unsigned __int64)function_obj_ptr->members.obj_ptr;
  function_obj_ptr = (boost::detail::function::function_buffer *)(obj_ptr + 16);
  if ( *(_BYTE *)(((obj_ptr + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8();
    goto LABEL_39;
  }
  function_obj_ptr = *(boost::detail::function::function_buffer **)(obj_ptr + 16);
  n = (size_t)function_obj_ptr;
  dest[0] = 0LL;
  if ( (unsigned __int64)function_obj_ptr <= 0x10 )
  {
    v8 = (const char *)obj_ptr;
    v9 = dest;
    goto LABEL_6;
  }
LABEL_39:
  v9 = (void **)operator new[]((unsigned __int64)function_obj_ptr);
  dest[0] = v9;
  if ( *(_BYTE *)((obj_ptr >> 3) + 0x7FFF8000) )
  {
    v10 = obj_ptr;
    __asan_report_load8();
    goto LABEL_42;
  }
  v8 = *(const char **)obj_ptr;
LABEL_6:
  memcpy(v9, v8, n);
  v10 = n;
  v34 = n;
  src[0] = 0LL;
  if ( n <= 0x10 )
  {
    v11 = src;
    v12 = dest;
    goto LABEL_8;
  }
LABEL_42:
  v11 = (void **)operator new[](v10);
  src[0] = v11;
  v12 = (void **)dest[0];
LABEL_8:
  memcpy(v11, v12, v34);
  v38 = v34;
  *(_QWORD *)v37[0].gap0 = 0LL;
  if ( v34 > 0x10 )
  {
    v13 = (std::random_access_iterator_tag *)operator new[](v34);
    *(_QWORD *)v37[0].gap0 = v13;
    v14 = (void **)src[0];
  }
  else
  {
    v13 = v37;
    v14 = src;
  }
  memcpy(v13, v14, v38);
  v36 = v38;
  v35[0] = 0LL;
  if ( v38 > 0x10 )
  {
    v15 = (void **)operator new[](v38);
    v35[0] = v15;
    v16 = *(std::random_access_iterator_tag **)v37[0].gap0;
  }
  else
  {
    v15 = v35;
    v16 = v37;
  }
  memcpy(v15, v16, v36);
  if ( v38 > 0x10 && *(_QWORD *)v37[0].gap0 )
    operator delete[](*(void **)v37[0].gap0);
  v38 = v36;
  *(_QWORD *)v37[0].gap0 = 0LL;
  if ( v36 > 0x10 )
  {
    v17 = (std::random_access_iterator_tag *)operator new[](v36);
    *(_QWORD *)v37[0].gap0 = v17;
    v18 = (void **)v35[0];
  }
  else
  {
    v17 = v37;
    v18 = v35;
  }
  memcpy(v17, v18, v38);
  M_current = a1._M_current;
  v29 = std::__find_if<__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__ops::_Iter_pred<boost::algorithm::detail::is_any_ofF<char>>>(
          a0,
          a1,
          v28,
          (std::random_access_iterator_tag)v37)._M_current;
  if ( v38 > 0x10 && *(_QWORD *)v37[0].gap0 )
    operator delete[](*(void **)v37[0].gap0);
  if ( v36 > 0x10 && v35[0] )
    operator delete[](v35[0]);
  if ( v34 > 0x10 && src[0] )
    operator delete[](src[0]);
  if ( n > 0x10 && dest[0] )
    operator delete[](dest[0]);
  v30 = a1._M_current;
  if ( v29 == a1._M_current )
  {
    result.m_Begin = a1;
    goto LABEL_33;
  }
  a1._M_current = v29;
  v20 = *(_BYTE *)(((obj_ptr + 24) >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
  {
    __asan_report_load4(obj_ptr + 24);
    goto LABEL_54;
  }
  if ( !*(_DWORD *)(obj_ptr + 24) )
  {
    while ( 1 )
    {
      a0._M_current = a1._M_current;
      if ( v30 == a1._M_current )
        goto LABEL_32;
      v25 = *(_BYTE *)(((unsigned __int64)a1._M_current >> 3) + 0x7FFF8000);
      if ( v25 <= ((__int64)a1._M_current & 7) )
      {
        if ( v25 )
          break;
      }
LABEL_54:
      *(_BYTE *)(v6 + 32) = *a0._M_current;
      if ( *(_BYTE *)(((obj_ptr + 16) >> 3) + 0x7FFF8000) )
        goto LABEL_63;
      M_current = *(char **)(obj_ptr + 16);
      if ( (unsigned __int64)M_current <= 0x10 )
      {
        v24 = (const char *)obj_ptr;
        goto LABEL_57;
      }
LABEL_64:
      v23 = (void *)obj_ptr;
      if ( *(_BYTE *)((obj_ptr >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
        v27 = v26;
        if ( n > 0x10 )
        {
          v23 = dest[0];
          if ( dest[0] )
            operator delete[](dest[0]);
        }
        __asan_handle_no_return(v23);
        _Unwind_Resume(v27);
      }
      v24 = *(const char **)obj_ptr;
LABEL_57:
      M_current = &M_current[(_QWORD)v24];
      if ( !std::binary_search<char const*,char>(v24, M_current, (const char *)(v6 + 32)) )
        goto LABEL_32;
      a1._M_current = a0._M_current + 1;
    }
    __asan_report_load1(a1._M_current);
LABEL_63:
    __asan_report_load8();
    goto LABEL_64;
  }
  a1._M_current = v29 + 1;
LABEL_32:
  result.m_Begin._M_current = v29;
LABEL_33:
  result.m_End = a1;
  if ( v39 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 128: range 000000000BF8EE93-000000000BF8EF66
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >::result_type __fastcall boost::detail::function::function_obj_invoker1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,int,common::minet::AServerSession *>::invoke(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *function_obj_ptr,
        common::minet::AServerSession *a0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > >::result_type result; // eax
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a0:129";
  *(_QWORD *)(v2 + 16) = boost::detail::function::function_obj_invoker1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>,int,common::minet::AServerSession *>::invoke;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = a0;
  result = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>::operator()<common::minet::AServerSession *>(
             function_obj_ptr,
             (common::minet::AServerSession **)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 128: range 000000000BF93701-000000000BF937D4
boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >::result_type __fastcall boost::detail::function::function_obj_invoker1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,int,common::minet::AServerSession *>::invoke(
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *function_obj_ptr,
        common::minet::AServerSession *a0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > >::result_type result; // eax
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 a0:129";
  *(_QWORD *)(v2 + 16) = boost::detail::function::function_obj_invoker1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>,int,common::minet::AServerSession *>::invoke;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = a0;
  result = boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>::operator()<common::minet::AServerSession *>(
             function_obj_ptr,
             (common::minet::AServerSession **)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 128: range 000000000BF91148-000000000BF9126A
boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > >::result_type __fastcall boost::detail::function::function_obj_invoker2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>,int,common::minet::AServerSession *,unsigned int>::invoke(
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *function_obj_ptr,
        common::minet::AServerSession *a0,
        unsigned int a1)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > >::result_type result; // eax
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 a1:129 64 8 6 a0:129";
  *(_QWORD *)(v3 + 16) = boost::detail::function::function_obj_invoker2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>,int,common::minet::AServerSession *,unsigned int>::invoke;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 64) = a0;
  *(_DWORD *)(v3 + 48) = a1;
  result = boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>::operator()<common::minet::AServerSession *,unsigned int>(
             function_obj_ptr,
             (common::minet::AServerSession **)(v3 + 64),
             (unsigned int *)(v3 + 48));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 128: range 000000000BF941C6-000000000BF942E8
boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > >::result_type __fastcall boost::detail::function::function_obj_invoker2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>,int,common::minet::AServerSession *,unsigned int>::invoke(
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *function_obj_ptr,
        common::minet::AServerSession *a0,
        unsigned int a1)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > >::result_type result; // eax
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 a1:129 64 8 6 a0:129";
  *(_QWORD *)(v3 + 16) = boost::detail::function::function_obj_invoker2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>,int,common::minet::AServerSession *,unsigned int>::invoke;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 64) = a0;
  *(_DWORD *)(v3 + 48) = a1;
  result = boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>::operator()<common::minet::AServerSession *,unsigned int>(
             function_obj_ptr,
             (common::minet::AServerSession **)(v3 + 64),
             (unsigned int *)(v3 + 48));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 490: range 000000000CB1156E-000000000CB116BA
bool __cdecl boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
        const boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *p_f,
        boost::detail::function::function_buffer *functor)
{
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool is_any_of; // r14
  bool result; // al
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v4;
  }
  v3->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1102416563;
  *(_QWORD *)&v3->m_Pred.m_Storage.m_fixSet[8] = "1 32 32 9 <unknown>";
  v3->m_Pred.m_Size = (std::size_t)boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(v3 + 1, p_f);
  is_any_of = boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
                this,
                v3 + 1,
                functor,
                (boost::detail::function::function_obj_tag)((_BYTE)v3 + 32));
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::~token_finderF(v3 + 1);
  result = is_any_of;
  if ( v9 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 490: range 000000000BF8EF68-000000000BF8F084
bool __fastcall boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        const boost::detail::function::basic_vtable1<int,common::minet::AServerSession*> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 5 f:490";
  *(_QWORD *)(v3 + 16) = boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v3 + 32) = f;
  result = boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
             this,
             *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v3 + 32),
             functor,
             (boost::detail::function::function_obj_tag)this);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 490: range 000000000BF937D6-000000000BF938F2
bool __fastcall boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        const boost::detail::function::basic_vtable1<int,common::minet::AServerSession*> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 5 f:490";
  *(_QWORD *)(v3 + 16) = boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v3 + 32) = f;
  result = boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
             this,
             *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v3 + 32),
             functor,
             (boost::detail::function::function_obj_tag)this);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 490: range 000000000BF9126C-000000000BF91388
bool __fastcall boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
        const boost::detail::function::basic_vtable2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 5 f:490";
  *(_QWORD *)(v3 + 16) = boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v3 + 32) = f;
  result = boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
             this,
             *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v3 + 32),
             functor,
             (boost::detail::function::function_obj_tag)this);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 490: range 000000000BF942EA-000000000BF94406
bool __fastcall boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
        const boost::detail::function::basic_vtable2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 5 f:490";
  *(_QWORD *)(v3 + 16) = boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v3 + 32) = f;
  result = boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
             this,
             *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v3 + 32),
             functor,
             (boost::detail::function::function_obj_tag)this);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 502: range 000000000BF76FC2-000000000BF7701E
void __cdecl boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::clear(
        const boost::detail::function::basic_vtable1<int,common::minet::AServerSession*> *const this,
        boost::detail::function::function_buffer *functor)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->base.manager )
    this->base.manager(functor, functor, 2LL);
};

// Line 502: range 000000000CAA9504-000000000CAA9560
void __cdecl boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::clear(
        const boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        boost::detail::function::function_buffer *functor)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->base.manager )
    this->base.manager(functor, functor, 2LL);
};

// Line 502: range 000000000BF77BF8-000000000BF77C54
void __cdecl boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::clear(
        const boost::detail::function::basic_vtable2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::detail::function::function_buffer *functor)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->base.manager )
    this->base.manager(functor, functor, 2LL);
};

// Line 565: range 000000000BF9A6BE-000000000BF9A84A
void __fastcall boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        const boost::detail::function::basic_vtable1<int,common::minet::AServerSession*> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 f:565";
  *(_QWORD *)(v4 + 16) = boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v4 + 32) = f;
  v7 = (unsigned __int64)operator new(0x18uLL, functor);
  if ( *(char *)((v7 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v7 + 23) >> 3) + 0x7FFF8000) != 0
    && (char)((v7 + 23) & 7) >= *(_BYTE *)(((v7 + 23) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v7, 24LL);
  }
  v8 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)v7 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(v4 + 48);
  if ( v9 == (char *)v4 )
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

// Line 565: range 000000000BF9E486-000000000BF9E612
void __fastcall boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        const boost::detail::function::basic_vtable1<int,common::minet::AServerSession*> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 f:565";
  *(_QWORD *)(v4 + 16) = boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v4 + 32) = f;
  v7 = (unsigned __int64)operator new(0x18uLL, functor);
  if ( *(char *)((v7 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v7 + 23) >> 3) + 0x7FFF8000) != 0
    && (char)((v7 + 23) & 7) >= *(_BYTE *)(((v7 + 23) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v7, 24LL);
  }
  v8 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)v7 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(v4 + 48);
  if ( v9 == (char *)v4 )
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

// Line 565: range 000000000BF9C7BC-000000000BF9C948
void __fastcall boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
        const boost::detail::function::basic_vtable2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 f:565";
  *(_QWORD *)(v4 + 16) = boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v4 + 32) = f;
  v7 = (unsigned __int64)operator new(0x18uLL, functor);
  if ( *(char *)((v7 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v7 + 23) >> 3) + 0x7FFF8000) != 0
    && (char)((v7 + 23) & 7) >= *(_BYTE *)(((v7 + 23) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v7, 24LL);
  }
  v8 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)v7 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(v4 + 48);
  if ( v9 == (char *)v4 )
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

// Line 565: range 000000000BF9F0AE-000000000BF9F23A
void __fastcall boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
        const boost::detail::function::basic_vtable2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 f:565";
  *(_QWORD *)(v4 + 16) = boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v4 + 32) = f;
  v7 = (unsigned __int64)operator new(0x18uLL, functor);
  if ( *(char *)((v7 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v7 + 23) >> 3) + 0x7FFF8000) != 0
    && (char)((v7 + 23) & 7) >= *(_BYTE *)(((v7 + 23) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v7, 24LL);
  }
  v8 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)v7 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(v4 + 48);
  if ( v9 == (char *)v4 )
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

// Line 579: range 000000000CB801F6-000000000CB8027B
void __cdecl boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_functor<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
        const boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *p_f,
        boost::detail::function::function_buffer *functor,
        boost::false_type a4)
{
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *v4; // rbx

  v4 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)operator new(0x20uLL);
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(v4, p_f);
  if ( *(_BYTE *)(((unsigned __int64)functor >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  functor->members.obj_ptr = v4;
};

// Line 609: range 000000000CB52E06-000000000CB52F8C
bool __cdecl boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
        const boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *p_f,
        boost::detail::function::function_buffer *functor,
        boost::detail::function::function_obj_tag a4)
{
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool result; // al
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v5;
  }
  v4->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1102416563;
  *(_QWORD *)&v4->m_Pred.m_Storage.m_fixSet[8] = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  v4->m_Pred.m_Size = (std::size_t)boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862723] = -202116109;
  boost::addressof<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(p_f);
  if ( (unsigned __int8)boost::detail::function::has_empty_target() != 1 )
  {
    boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(v4 + 2, p_f);
    boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_functor<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
      this,
      v4 + 2,
      functor,
      (boost::false_type)((_BYTE)v4 + 64));
    boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::~token_finderF(v4 + 2);
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v4->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 609: range 000000000BF951C2-000000000BF95314
__int64 __fastcall boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        const boost::detail::function::basic_vtable1<int,common::minet::AServerSession*> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 result; // rax
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 f:609";
  *(_QWORD *)(v4 + 16) = boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v4 + 32) = f;
  boost::addressof<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>((boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v4 + 32));
  if ( (unsigned __int8)boost::detail::function::has_empty_target() != 1 )
  {
    boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
      this,
      functor,
      *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v4 + 32));
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v4 )
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
  return result;
};

// Line 609: range 000000000BF998CA-000000000BF99A1C
__int64 __fastcall boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        const boost::detail::function::basic_vtable1<int,common::minet::AServerSession*> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 result; // rax
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 f:609";
  *(_QWORD *)(v4 + 16) = boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v4 + 32) = f;
  boost::addressof<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>((boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v4 + 32));
  if ( (unsigned __int8)boost::detail::function::has_empty_target() != 1 )
  {
    boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
      this,
      functor,
      *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v4 + 32));
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v4 )
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
  return result;
};

// Line 609: range 000000000BF97466-000000000BF975B8
__int64 __fastcall boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
        const boost::detail::function::basic_vtable2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 result; // rax
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 f:609";
  *(_QWORD *)(v4 + 16) = boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v4 + 32) = f;
  boost::addressof<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>((boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v4 + 32));
  if ( (unsigned __int8)boost::detail::function::has_empty_target() != 1 )
  {
    boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
      this,
      functor,
      *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v4 + 32));
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v4 )
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
  return result;
};

// Line 609: range 000000000BF99FA6-000000000BF9A0F8
__int64 __fastcall boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
        const boost::detail::function::basic_vtable2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::detail::function::function_buffer *functor,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 result; // rax
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 5 f:609";
  *(_QWORD *)(v4 + 16) = boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v4 + 32) = f;
  boost::addressof<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>((boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v4 + 32));
  if ( (unsigned __int8)boost::detail::function::has_empty_target() != 1 )
  {
    boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_functor<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
      this,
      functor,
      *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v4 + 32));
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v4 )
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
  return result;
};

// Line 677: range 000000000BF76F88-000000000BF76FC1
boost::function1<int,common::minet::AServerSession*>::vtable_type *__cdecl boost::function1<int,common::minet::AServerSession *>::get_vtable(
        const boost::function1<int,common::minet::AServerSession*> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (boost::function1<int,common::minet::AServerSession*>::vtable_type *)((unsigned __int64)this->vtable & 0xFFFFFFFFFFFFFFFELL);
};

// Line 677: range 000000000CAA94CA-000000000CAA9503
boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > >::vtable_type *__cdecl boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::get_vtable(
        const boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > >::vtable_type *)((unsigned __int64)this->vtable & 0xFFFFFFFFFFFFFFFELL);
};

// Line 677: range 000000000BF77BBE-000000000BF77BF7
boost::function2<int,common::minet::AServerSession*,unsigned int>::vtable_type *__cdecl boost::function2<int,common::minet::AServerSession *,unsigned int>::get_vtable(
        const boost::function2<int,common::minet::AServerSession*,unsigned int> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (boost::function2<int,common::minet::AServerSession*,unsigned int>::vtable_type *)((unsigned __int64)this->vtable & 0xFFFFFFFFFFFFFFFELL);
};

// Line 706: range 000000000BF6AD08-000000000BF6AD22
void __cdecl boost::function1<int,common::minet::AServerSession *>::function1(
        boost::function1<int,common::minet::AServerSession*> *const this)
{
  boost::function_base::function_base(this);
};

// Line 706: range 000000000C9916A6-000000000C9916C0
void __cdecl boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::function2(
        boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  boost::function_base::function_base(this);
};

// Line 706: range 000000000BF6B55E-000000000BF6B578
void __cdecl boost::function2<int,common::minet::AServerSession *,unsigned int>::function2(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this)
{
  boost::function_base::function_base(this);
};

// Line 711: range 000000000CA25C64-000000000CA25DA5
void __cdecl boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::function2<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
        boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *p_f,
        boost::enable_if_<true,int>::type a3)
{
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v4;
  }
  v3->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1102416563;
  *(_QWORD *)&v3->m_Pred.m_Storage.m_fixSet[8] = "1 32 32 9 <unknown>";
  v3->m_Pred.m_Size = (std::size_t)boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::function2<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  boost::function_base::function_base(this);
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(v3 + 1, p_f);
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
    this,
    v3 + 1);
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::~token_finderF(v3 + 1);
  if ( v6 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 711: range 000000000BF8393E-000000000BF83A69
void __fastcall boost::function1<int,common::minet::AServerSession *>::function1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        boost::function1<int,common::minet::AServerSession*> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 5 f:711";
  *(_QWORD *)(v2 + 16) = boost::function1<int,common::minet::AServerSession *>::function1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v2 + 32) = f;
  boost::function_base::function_base(this);
  boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
    this,
    *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 711: range 000000000BF875D8-000000000BF87703
void __fastcall boost::function1<int,common::minet::AServerSession *>::function1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        boost::function1<int,common::minet::AServerSession*> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 5 f:711";
  *(_QWORD *)(v2 + 16) = boost::function1<int,common::minet::AServerSession *>::function1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v2 + 32) = f;
  boost::function_base::function_base(this);
  boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
    this,
    *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 711: range 000000000BF845AC-000000000BF846D7
void __fastcall boost::function2<int,common::minet::AServerSession *,unsigned int>::function2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 5 f:711";
  *(_QWORD *)(v2 + 16) = boost::function2<int,common::minet::AServerSession *,unsigned int>::function2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32) = f;
  boost::function_base::function_base(this);
  boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
    this,
    *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 711: range 000000000BF87746-000000000BF87871
void __fastcall boost::function2<int,common::minet::AServerSession *,unsigned int>::function2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 5 f:711";
  *(_QWORD *)(v2 + 16) = boost::function2<int,common::minet::AServerSession *,unsigned int>::function2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32) = f;
  boost::function_base::function_base(this);
  boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
    this,
    *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 744: range 000000000BF8FE26-000000000BF8FE57
void __cdecl boost::function1<int,common::minet::AServerSession *>::function1(
        boost::function1<int,common::minet::AServerSession*> *const this,
        const boost::function1<int,common::minet::AServerSession*> *f)
{
  boost::function_base::function_base(this);
  boost::function1<int,common::minet::AServerSession *>::assign_to_own(this, f);
};

// Line 744: range 000000000CA26132-000000000CA26163
void __cdecl boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::function2(
        boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        const boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *f)
{
  boost::function_base::function_base(this);
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to_own(
    this,
    f);
};

// Line 744: range 000000000BF91ED0-000000000BF91F01
void __cdecl boost::function2<int,common::minet::AServerSession *,unsigned int>::function2(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this,
        const boost::function2<int,common::minet::AServerSession*,unsigned int> *f)
{
  boost::function_base::function_base(this);
  boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to_own(this, f);
};

// Line 756: range 000000000BF6AE44-000000000BF6AE5E
void __cdecl boost::function1<int,common::minet::AServerSession *>::~function1(
        boost::function1<int,common::minet::AServerSession*> *const this)
{
  boost::function1<int,common::minet::AServerSession *>::clear(this);
};

// Line 756: range 000000000C9915BA-000000000C9915D4
void __cdecl boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::~function2(
        boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::clear(this);
};

// Line 756: range 000000000BF6B60C-000000000BF6B626
void __cdecl boost::function2<int,common::minet::AServerSession *,unsigned int>::~function2(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this)
{
  boost::function2<int,common::minet::AServerSession *,unsigned int>::clear(this);
};

// Line 758: range 000000000CAA9314-000000000CAA94C9
__int64 __fastcall boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::operator()(
        const boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        __gnu_cxx::__normal_iterator<char*,std::string > a0,
        __gnu_cxx::__normal_iterator<char*,std::string > a1)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > >::vtable_type *vtable; // rax
  __int64 result; // rax
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 6 a0:758 64 8 6 a1:758 96 16 9 <unknown>";
  *(_QWORD *)(v3 + 16) = boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 32) = a0;
  *(__gnu_cxx::__normal_iterator<char*,std::string > *)(v3 + 64) = a1;
  if ( boost::function_base::empty(this) )
  {
    boost::bad_function_call::bad_function_call((boost::bad_function_call *const)(v3 + 96));
    __asan_handle_no_return(v3 + 96);
    boost::throw_exception<boost::bad_function_call>((const boost::bad_function_call *)(v3 + 96));
  }
  vtable = boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::get_vtable(this);
  if ( *(_BYTE *)(((unsigned __int64)&vtable->invoker >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = ((__int64 (__fastcall *)(boost::detail::function::function_buffer *, _QWORD, _QWORD))vtable->invoker)(
             &this->functor,
             *(_QWORD *)(v3 + 32),
             *(_QWORD *)(v3 + 64));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 856: range 000000000BF7D2B8-000000000BF7D419
void __cdecl boost::function1<int,common::minet::AServerSession *>::swap(
        boost::function1<int,common::minet::AServerSession*> *const this,
        boost::function1<int,common::minet::AServerSession*> *other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 7 tmp:861";
  *(_QWORD *)(v2 + 16) = boost::function1<int,common::minet::AServerSession *>::swap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( other != this )
  {
    boost::function1<int,common::minet::AServerSession *>::function1((boost::function1<int,common::minet::AServerSession*> *const)(v2 + 32));
    boost::function1<int,common::minet::AServerSession *>::move_assign(
      (boost::function1<int,common::minet::AServerSession*> *const)(v2 + 32),
      this);
    boost::function1<int,common::minet::AServerSession *>::move_assign(this, other);
    boost::function1<int,common::minet::AServerSession *>::move_assign(
      other,
      (boost::function1<int,common::minet::AServerSession*> *)(v2 + 32));
    boost::function1<int,common::minet::AServerSession *>::~function1((boost::function1<int,common::minet::AServerSession*> *const)(v2 + 32));
  }
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 856: range 000000000BF7E49C-000000000BF7E5FD
void __cdecl boost::function2<int,common::minet::AServerSession *,unsigned int>::swap(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::function2<int,common::minet::AServerSession*,unsigned int> *other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 7 tmp:861";
  *(_QWORD *)(v2 + 16) = boost::function2<int,common::minet::AServerSession *,unsigned int>::swap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( other != this )
  {
    boost::function2<int,common::minet::AServerSession *,unsigned int>::function2((boost::function2<int,common::minet::AServerSession*,unsigned int> *const)(v2 + 32));
    boost::function2<int,common::minet::AServerSession *,unsigned int>::move_assign(
      (boost::function2<int,common::minet::AServerSession*,unsigned int> *const)(v2 + 32),
      this);
    boost::function2<int,common::minet::AServerSession *,unsigned int>::move_assign(this, other);
    boost::function2<int,common::minet::AServerSession *,unsigned int>::move_assign(
      other,
      (boost::function2<int,common::minet::AServerSession*,unsigned int> *)(v2 + 32));
    boost::function2<int,common::minet::AServerSession *,unsigned int>::~function2((boost::function2<int,common::minet::AServerSession*,unsigned int> *const)(v2 + 32));
  }
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 868: range 000000000BF72196-000000000BF72232
void __cdecl boost::function1<int,common::minet::AServerSession *>::clear(
        boost::function1<int,common::minet::AServerSession*> *const this)
{
  boost::function1<int,common::minet::AServerSession*>::vtable_type *vtable; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->vtable )
  {
    if ( !boost::function_base::has_trivial_copy_and_destroy(this) )
    {
      vtable = boost::function1<int,common::minet::AServerSession *>::get_vtable(this);
      boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::clear(vtable, &this->functor);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = 0LL;
  }
};

// Line 868: range 000000000CA26052-000000000CA260EE
void __cdecl boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::clear(
        boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this)
{
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > >::vtable_type *vtable; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->vtable )
  {
    if ( !boost::function_base::has_trivial_copy_and_destroy(this) )
    {
      vtable = boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::get_vtable(this);
      boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::clear(
        vtable,
        &this->functor);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = 0LL;
  }
};

// Line 868: range 000000000BF72AFE-000000000BF72B9A
void __cdecl boost::function2<int,common::minet::AServerSession *,unsigned int>::clear(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this)
{
  boost::function2<int,common::minet::AServerSession*,unsigned int>::vtable_type *vtable; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->vtable )
  {
    if ( !boost::function_base::has_trivial_copy_and_destroy(this) )
    {
      vtable = boost::function2<int,common::minet::AServerSession *,unsigned int>::get_vtable(this);
      boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::clear(
        vtable,
        &this->functor);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = 0LL;
  }
};

// Line 897: range 000000000BF962CC-000000000BF963C0
void __cdecl boost::function1<int,common::minet::AServerSession *>::assign_to_own(
        boost::function1<int,common::minet::AServerSession*> *const this,
        const boost::function1<int,common::minet::AServerSession*> *f)
{
  boost::detail::function::vtable_base *vtable; // rdx
  boost::function1<int,common::minet::AServerSession*>::vtable_type *v3; // rax

  if ( !boost::function_base::empty(f) )
  {
    if ( *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    vtable = f->vtable;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = vtable;
    if ( boost::function_base::has_trivial_copy_and_destroy(this) )
    {
      memcpy(&this->functor, &f->functor, sizeof(this->functor));
    }
    else
    {
      v3 = boost::function1<int,common::minet::AServerSession *>::get_vtable(this);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v3->base.manager(&f->functor, &this->functor, clone_functor_tag);
    }
  }
};

// Line 897: range 000000000BF98292-000000000BF98386
void __cdecl boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to_own(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this,
        const boost::function2<int,common::minet::AServerSession*,unsigned int> *f)
{
  boost::detail::function::vtable_base *vtable; // rdx
  boost::function2<int,common::minet::AServerSession*,unsigned int>::vtable_type *v3; // rax

  if ( !boost::function_base::empty(f) )
  {
    if ( *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    vtable = f->vtable;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = vtable;
    if ( boost::function_base::has_trivial_copy_and_destroy(this) )
    {
      memcpy(&this->functor, &f->functor, sizeof(this->functor));
    }
    else
    {
      v3 = boost::function2<int,common::minet::AServerSession *,unsigned int>::get_vtable(this);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v3->base.manager(&f->functor, &this->functor, clone_functor_tag);
    }
  }
};

// Line 912: range 000000000CAA9020-000000000CAA91F9
void __cdecl boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
        boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > > *const this,
        boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *p_f)
{
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool is_any_of; // r14
  boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > >::vtable_type *v6; // rdx
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char> > *)v3;
  }
  v2->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1102416563;
  *(_QWORD *)&v2->m_Pred.m_Storage.m_fixSet[8] = "1 32 32 9 <unknown>";
  v2->m_Pred.m_Size = (std::size_t)boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::token_finderF(v2 + 1, p_f);
  is_any_of = boost::detail::function::basic_vtable2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
                &boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>)::stored_vtable,
                v2 + 1,
                &this->functor);
  boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>::~token_finderF(v2 + 1);
  *(_DWORD *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) = -117901064;
  if ( is_any_of )
  {
    v6 = (boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char*,std::string > >,__gnu_cxx::__normal_iterator<char*,std::string >,__gnu_cxx::__normal_iterator<char*,std::string > >::vtable_type *)&boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>)::stored_vtable;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = &v6->base;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = 0LL;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->m_Pred.m_Storage.m_dynSet = (boost::algorithm::detail::is_any_ofF<char>::set_value_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 912: range 000000000BF8916C-000000000BF8930C
void __fastcall boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        boost::function1<int,common::minet::AServerSession*> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::detail::function::vtable_base *v5; // rdx
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 5 f:912";
  *(_QWORD *)(v2 + 16) = boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v2 + 32) = f;
  if ( boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
         &boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>)::stored_vtable,
         &this->functor,
         *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v2 + 32)) )
  {
    v5 = (boost::detail::function::vtable_base *)((char *)&boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>)::stored_vtable.base.manager
                                                + 1);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = 0LL;
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 912: range 000000000BF8D392-000000000BF8D532
void __fastcall boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        boost::function1<int,common::minet::AServerSession*> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::detail::function::vtable_base *v5; // rdx
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 5 f:912";
  *(_QWORD *)(v2 + 16) = boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v2 + 32) = f;
  if ( boost::detail::function::basic_vtable1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
         &boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>)::stored_vtable,
         &this->functor,
         *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v2 + 32)) )
  {
    v5 = (boost::detail::function::vtable_base *)((char *)&boost::function1<int,common::minet::AServerSession *>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>)::stored_vtable.base.manager
                                                + 1);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = 0LL;
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 912: range 000000000BF8A854-000000000BF8A9F4
void __fastcall boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::detail::function::vtable_base *v5; // rdx
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 5 f:912";
  *(_QWORD *)(v2 + 16) = boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32) = f;
  if ( boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
         &boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable,
         &this->functor,
         *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32)) )
  {
    v5 = (boost::detail::function::vtable_base *)((char *)&boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable.base.manager
                                                + 1);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = 0LL;
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 912: range 000000000BF8D8BE-000000000BF8DA5E
void __fastcall boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::detail::function::vtable_base *v5; // rdx
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 5 f:912";
  *(_QWORD *)(v2 + 16) = boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32) = f;
  if ( boost::detail::function::basic_vtable2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
         &boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable,
         &this->functor,
         *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32)) )
  {
    v5 = (boost::detail::function::vtable_base *)((char *)&boost::function2<int,common::minet::AServerSession *,unsigned int>::assign_to<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>)::stored_vtable.base.manager
                                                + 1);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = v5;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->vtable = 0LL;
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 982: range 000000000BF83A6A-000000000BF83C01
void __cdecl boost::function1<int,common::minet::AServerSession *>::move_assign(
        boost::function1<int,common::minet::AServerSession*> *const this,
        boost::function1<int,common::minet::AServerSession*> *f)
{
  boost::detail::function::vtable_base *vtable; // rdx
  boost::function1<int,common::minet::AServerSession*>::vtable_type *v3; // rax

  if ( f != this )
  {
    if ( !boost::function_base::empty(f) )
    {
      if ( *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      vtable = f->vtable;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->vtable = vtable;
      if ( boost::function_base::has_trivial_copy_and_destroy(this) )
      {
        memcpy(&this->functor, &f->functor, sizeof(this->functor));
      }
      else
      {
        v3 = boost::function1<int,common::minet::AServerSession *>::get_vtable(this);
        if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v3->base.manager(&f->functor, &this->functor, move_functor_tag);
      }
      if ( *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      f->vtable = 0LL;
    }
    else
    {
      boost::function1<int,common::minet::AServerSession *>::clear(this);
    }
  }
};

// Line 982: range 000000000BF846D8-000000000BF8486F
void __cdecl boost::function2<int,common::minet::AServerSession *,unsigned int>::move_assign(
        boost::function2<int,common::minet::AServerSession*,unsigned int> *const this,
        boost::function2<int,common::minet::AServerSession*,unsigned int> *f)
{
  boost::detail::function::vtable_base *vtable; // rdx
  boost::function2<int,common::minet::AServerSession*,unsigned int>::vtable_type *v3; // rax

  if ( f != this )
  {
    if ( !boost::function_base::empty(f) )
    {
      if ( *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      vtable = f->vtable;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->vtable = vtable;
      if ( boost::function_base::has_trivial_copy_and_destroy(this) )
      {
        memcpy(&this->functor, &f->functor, sizeof(this->functor));
      }
      else
      {
        v3 = boost::function2<int,common::minet::AServerSession *,unsigned int>::get_vtable(this);
        if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v3->base.manager(&f->functor, &this->functor, move_functor_tag);
      }
      if ( *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      f->vtable = 0LL;
    }
    else
    {
      boost::function2<int,common::minet::AServerSession *,unsigned int>::clear(this);
    }
  }
};

// Line 1048: range 000000000BF638AC-000000000BF638C6
void __cdecl boost::function<int ()(common::minet::AServerSession *)>::~function(
        boost::function<int(common::minet::AServerSession*)> *const this)
{
  boost::function1<int,common::minet::AServerSession *>::~function1(this);
};

// Line 1048: range 000000000BF638F4-000000000BF6390E
void __cdecl boost::function<int ()(common::minet::AServerSession *,unsigned int)>::~function(
        boost::function<int(common::minet::AServerSession*,unsigned int)> *const this)
{
  boost::function2<int,common::minet::AServerSession *,unsigned int>::~function2(this);
};

// Line 1058: range 000000000BF6AD24-000000000BF6AD3E
void __cdecl boost::function<int ()(common::minet::AServerSession *)>::function(
        boost::function<int(common::minet::AServerSession*)> *const this)
{
  boost::function1<int,common::minet::AServerSession *>::function1(this);
};

// Line 1058: range 000000000BF6B57A-000000000BF6B594
void __cdecl boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function(
        boost::function<int(common::minet::AServerSession*,unsigned int)> *const this)
{
  boost::function2<int,common::minet::AServerSession *,unsigned int>::function2(this);
};

// Line 1061: range 000000000BF7D1A0-000000000BF7D2B7
void __fastcall boost::function<int ()(common::minet::AServerSession *)>::function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        boost::function<int(common::minet::AServerSession*)> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 f:1061";
  *(_QWORD *)(v2 + 16) = boost::function<int ()(common::minet::AServerSession *)>::function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v2 + 32) = f;
  boost::function1<int,common::minet::AServerSession *>::function1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
    this,
    *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1061: range 000000000BF80A22-000000000BF80B39
void __fastcall boost::function<int ()(common::minet::AServerSession *)>::function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        boost::function<int(common::minet::AServerSession*)> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 f:1061";
  *(_QWORD *)(v2 + 16) = boost::function<int ()(common::minet::AServerSession *)>::function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v2 + 32) = f;
  boost::function1<int,common::minet::AServerSession *>::function1<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
    this,
    *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1061: range 000000000BF7E384-000000000BF7E49B
void __fastcall boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::function<int(common::minet::AServerSession*,unsigned int)> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 f:1061";
  *(_QWORD *)(v2 + 16) = boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32) = f;
  boost::function2<int,common::minet::AServerSession *,unsigned int>::function2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
    this,
    *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1061: range 000000000BF8152E-000000000BF81645
void __fastcall boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::function<int(common::minet::AServerSession*,unsigned int)> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 f:1061";
  *(_QWORD *)(v2 + 16) = boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32) = f;
  boost::function2<int,common::minet::AServerSession *,unsigned int>::function2<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
    this,
    *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1087: range 000000000BF89B42-000000000BF89B67
void __cdecl boost::function<int ()(common::minet::AServerSession *)>::function(
        boost::function<int(common::minet::AServerSession*)> *const this,
        const boost::function<int(common::minet::AServerSession*)>::self_type *f)
{
  boost::function1<int,common::minet::AServerSession *>::function1(this, f);
};

// Line 1087: range 000000000BF8B0D0-000000000BF8B0F5
void __cdecl boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function(
        boost::function<int(common::minet::AServerSession*,unsigned int)> *const this,
        const boost::function<int(common::minet::AServerSession*,unsigned int)>::self_type *f)
{
  boost::function2<int,common::minet::AServerSession *,unsigned int>::function2(this, f);
};

// Line 1119: range 000000000BF76DF8-000000000BF76F5B
boost::enable_if_<true,boost::function<int(common::minet::AServerSession*)>&>::type __fastcall boost::function<int ()(common::minet::AServerSession *)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
        boost::function<int(common::minet::AServerSession*)> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::enable_if_<true,boost::function<int(common::minet::AServerSession*)>&>::type result; // rax
  boost::function<int(common::minet::AServerSession*)> v6; // [rsp+10h] [rbp-A0h] BYREF
  char v7[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 f:1119";
  *(_QWORD *)(v2 + 16) = boost::function<int ()(common::minet::AServerSession *)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v2 + 32) = f;
  boost::function<int ()(common::minet::AServerSession *)>::function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>(
    &v6,
    *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1> > > *)(v2 + 32));
  boost::function1<int,common::minet::AServerSession *>::swap(&v6, this);
  boost::function<int ()(common::minet::AServerSession *)>::~function(&v6);
  result = this;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1119: range 000000000BF7A37A-000000000BF7A4DD
boost::enable_if_<true,boost::function<int(common::minet::AServerSession*)>&>::type __fastcall boost::function<int ()(common::minet::AServerSession *)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
        boost::function<int(common::minet::AServerSession*)> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::enable_if_<true,boost::function<int(common::minet::AServerSession*)>&>::type result; // rax
  boost::function<int(common::minet::AServerSession*)> v6; // [rsp+10h] [rbp-A0h] BYREF
  char v7[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 f:1119";
  *(_QWORD *)(v2 + 16) = boost::function<int ()(common::minet::AServerSession *)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v2 + 32) = f;
  boost::function<int ()(common::minet::AServerSession *)>::function<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>(
    &v6,
    *(boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1> > > *)(v2 + 32));
  boost::function1<int,common::minet::AServerSession *>::swap(&v6, this);
  boost::function<int ()(common::minet::AServerSession *)>::~function(&v6);
  result = this;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1119: range 000000000BF77A2E-000000000BF77B91
boost::enable_if_<true,boost::function<int(common::minet::AServerSession*,unsigned int)>&>::type __fastcall boost::function<int ()(common::minet::AServerSession *,unsigned int)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::function<int(common::minet::AServerSession*,unsigned int)> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::enable_if_<true,boost::function<int(common::minet::AServerSession*,unsigned int)>&>::type result; // rax
  boost::function<int(common::minet::AServerSession*,unsigned int)> v6; // [rsp+10h] [rbp-A0h] BYREF
  char v7[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 f:1119";
  *(_QWORD *)(v2 + 16) = boost::function<int ()(common::minet::AServerSession *,unsigned int)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32) = f;
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>(
    &v6,
    *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32));
  boost::function2<int,common::minet::AServerSession *,unsigned int>::swap(&v6, this);
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::~function(&v6);
  result = this;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1119: range 000000000BF7AB6A-000000000BF7ACCD
boost::enable_if_<true,boost::function<int(common::minet::AServerSession*,unsigned int)>&>::type __fastcall boost::function<int ()(common::minet::AServerSession *,unsigned int)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
        boost::function<int(common::minet::AServerSession*,unsigned int)> *const this,
        boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > f)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  boost::enable_if_<true,boost::function<int(common::minet::AServerSession*,unsigned int)>&>::type result; // rax
  boost::function<int(common::minet::AServerSession*,unsigned int)> v6; // [rsp+10h] [rbp-A0h] BYREF
  char v7[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 f:1119";
  *(_QWORD *)(v2 + 16) = boost::function<int ()(common::minet::AServerSession *,unsigned int)>::operator=<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32) = f;
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::function<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>(
    &v6,
    *(boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession*,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2> > > *)(v2 + 32));
  boost::function2<int,common::minet::AServerSession *,unsigned int>::swap(&v6, this);
  boost::function<int ()(common::minet::AServerSession *,unsigned int)>::~function(&v6);
  result = this;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
