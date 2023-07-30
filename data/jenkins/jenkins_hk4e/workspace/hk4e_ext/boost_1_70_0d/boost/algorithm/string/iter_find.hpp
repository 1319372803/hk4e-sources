// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/algorithm/string/iter_find.hpp

// Line 143: range 000000000C24CB0E-000000000C24DB5F
// local variable allocation has failed, the output may be wrong!
std::vector<std::string> *__fastcall boost::algorithm::iter_split<std::vector<std::string>,std::string const,boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
        unsigned __int64 Result,
        std::string *Input,
        unsigned __int64 a3)
{
  std::_Vector_base<std::string>::pointer v3; // r15
  unsigned __int64 v6; // r14
  _DWORD *v7; // r12
  boost::detail::function::vtable_base *obj_ptr; // rdi
  void (*v9)(const boost::detail::function::function_buffer *, boost::detail::function::function_buffer *, boost::detail::function::functor_manager_operation_type); // rsi
  bool *p_m_bEof; // rdi
  boost::detail::function::vtable_base *vtable; // rdi
  char v12; // al
  char *v13; // rdi
  bool *v14; // rsi
  boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char const*,std::string > >::input_iterator_type *p_m_Next; // rdi
  char *v16; // rsi
  void **v17; // rdi
  const void *M_current; // rsi
  void **v19; // rdi
  void **v20; // rsi
  void **v21; // rdi
  void **v22; // rsi
  unsigned __int64 v23; // r13
  std::_Vector_base<std::string>::pointer v24; // rax
  std::_Vector_base<std::string>::pointer v25; // rdx
  __int64 v26; // rax
  void **v27; // rdi
  void **v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rdi
  void *v32; // rdi
  void **v33; // rsi
  _QWORD *v34; // rdi
  char v35; // al
  struct _Unwind_Exception *v36; // rbx
  __m128i *v37; // rdi
  unsigned __int64 v38; // rax
  void (__fastcall **v39)(__m128i *, unsigned __int64, _QWORD); // rcx
  __m128i v40; // xmm0
  void (__fastcall **v41)(__m128i *, __m128i *, __int64); // rdi
  unsigned __int64 v42; // rax
  void (__fastcall **v43)(unsigned __int64, __m128i *, _QWORD); // rcx
  unsigned __int64 v44; // rax
  void (__fastcall **v45)(unsigned __int64, __m128i *, _QWORD); // rcx
  void (__fastcall **v46)(__m128i *, __m128i *, __int64, double); // rdi
  std::vector<std::string> *v47; // rdi
  std::_Vector_base<std::string>::pointer v48; // rax
  void *v49; // rdi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  double v53; // xmm0_8
  struct _Unwind_Exception *v54; // rax
  void (__fastcall *v55)(__m128i *, __m128i *, __int64, double); // rax
  boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char const*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char const*,std::string > >,boost::use_default,boost::use_default> v56; // [rsp+0h] [rbp-388h] OVERLAPPED BYREF
  boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char const*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char const*,std::string > >,boost::use_default,boost::use_default> n; // [rsp+50h] [rbp-338h] BYREF
  void *v58[2]; // [rsp+A0h] [rbp-2E8h] BYREF
  size_t v59; // [rsp+B0h] [rbp-2D8h]
  int v60; // [rsp+B8h] [rbp-2D0h]
  void *v61[2]; // [rsp+C0h] [rbp-2C8h] BYREF
  size_t v62; // [rsp+D0h] [rbp-2B8h]
  int v63; // [rsp+D8h] [rbp-2B0h]
  void *v64[2]; // [rsp+E0h] [rbp-2A8h] BYREF
  size_t v65; // [rsp+F0h] [rbp-298h]
  int v66; // [rsp+F8h] [rbp-290h]
  void *v67[2]; // [rsp+100h] [rbp-288h] BYREF
  size_t v68; // [rsp+110h] [rbp-278h]
  int v69; // [rsp+118h] [rbp-270h]
  unsigned __int64 v70; // [rsp+120h] [rbp-268h]
  __m128i v71; // [rsp+128h] [rbp-260h] BYREF
  __int64 v72; // [rsp+138h] [rbp-250h]
  __m128i v73; // [rsp+140h] [rbp-248h] BYREF
  std::_Vector_base<std::string>::pointer v74; // [rsp+150h] [rbp-238h]
  std::_Vector_base<std::string>::pointer v75; // [rsp+158h] [rbp-230h]
  char v76; // [rsp+160h] [rbp-228h]
  std::vector<std::string>::allocator_type __a[8]; // [rsp+170h] [rbp-218h] BYREF
  __m128i v78; // [rsp+178h] [rbp-210h] BYREF
  __int64 v79; // [rsp+188h] [rbp-200h]
  __m128i v80; // [rsp+190h] [rbp-1F8h]
  __int64 v81; // [rsp+1A0h] [rbp-1E8h]
  __int64 v82; // [rsp+1A8h] [rbp-1E0h]
  char v83; // [rsp+1B0h] [rbp-1D8h]
  unsigned __int64 v84; // [rsp+1C0h] [rbp-1C8h]
  __m128i v85; // [rsp+1C8h] [rbp-1C0h] BYREF
  __int64 v86; // [rsp+1D8h] [rbp-1B0h]
  __m128i si128; // [rsp+1E0h] [rbp-1A8h]
  __int64 v88; // [rsp+1F0h] [rbp-198h]
  __int64 v89; // [rsp+1F8h] [rbp-190h]
  char v90; // [rsp+200h] [rbp-188h]
  char v91[376]; // [rsp+210h] [rbp-178h] BYREF

  v56.m_iterator.m_Finder.functor.members.obj_ptr = Input;
  v6 = (unsigned __int64)v91;
  *(_QWORD *)&v56.m_iterator.m_Finder.functor.data[8] = v91;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v26 = __asan_stack_malloc_3(320LL);
    if ( v26 )
      v6 = v26;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 24 7 Tmp:178 96 80 11 itBegin:168 208 80 9 itEnd:173";
  *(_QWORD *)(v6 + 16) = boost::algorithm::iter_split<std::vector<std::string>,std::string const,boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -218959118;
  v7[536862725] = -219021312;
  v7[536862726] = 62194;
  v7[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v56.m_iterator.m_Finder.functor.members.obj_ptr >> 3) + 0x7FFF8000) )
  {
    obj_ptr = (boost::detail::function::vtable_base *)v56.m_iterator.m_Finder.functor.members.obj_ptr;
    __asan_report_load8(v56.m_iterator.m_Finder.functor.members.obj_ptr);
    goto LABEL_35;
  }
  v3 = *(std::_Vector_base<std::string>::pointer *)v56.m_iterator.m_Finder.functor.members.obj_ptr;
  obj_ptr = (boost::detail::function::vtable_base *)((char *)v56.m_iterator.m_Finder.functor.members.obj_ptr + 8);
  if ( *(_BYTE *)((((unsigned __int64)v56.m_iterator.m_Finder.functor.members.obj_ptr + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(obj_ptr);
    goto LABEL_36;
  }
  v56.m_iterator.m_Finder.functor.members.obj_ptr = (char *)v3
                                                  + *((_QWORD *)v56.m_iterator.m_Finder.functor.members.obj_ptr + 1);
  obj_ptr = (boost::detail::function::vtable_base *)(a3 + 16);
  if ( *(_BYTE *)(((a3 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(obj_ptr);
    goto LABEL_37;
  }
  obj_ptr = *(boost::detail::function::vtable_base **)(a3 + 16);
  n.m_iterator.m_Finder.vtable = obj_ptr;
  *(_QWORD *)&v56.m_iterator.m_bEof = 0LL;
  if ( (unsigned __int64)obj_ptr <= 0x10 )
  {
    v9 = (void (*)(const boost::detail::function::function_buffer *, boost::detail::function::function_buffer *, boost::detail::function::functor_manager_operation_type))a3;
    p_m_bEof = &v56.m_iterator.m_bEof;
    goto LABEL_7;
  }
LABEL_37:
  p_m_bEof = (bool *)operator new[]((unsigned __int64)obj_ptr);
  *(_QWORD *)&v56.m_iterator.m_bEof = p_m_bEof;
  if ( *(_BYTE *)((a3 >> 3) + 0x7FFF8000) )
  {
    vtable = (boost::detail::function::vtable_base *)a3;
    __asan_report_load8(a3);
LABEL_40:
    __asan_report_load4(vtable);
    goto LABEL_41;
  }
  v9 = *(void (**)(const boost::detail::function::function_buffer *, boost::detail::function::function_buffer *, boost::detail::function::functor_manager_operation_type))a3;
LABEL_7:
  memcpy(p_m_bEof, v9, (size_t)n.m_iterator.m_Finder.vtable);
  vtable = (boost::detail::function::vtable_base *)(a3 + 24);
  v12 = *(_BYTE *)(((a3 + 24) >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_40;
  LODWORD(n.m_iterator.m_Finder.functor.members.obj_ptr) = *(_DWORD *)(a3 + 24);
  vtable = n.m_iterator.m_Finder.vtable;
  n.m_iterator.m_Match.m_Begin._M_current = (const char *)n.m_iterator.m_Finder.vtable;
  *(_QWORD *)&n.m_iterator.m_Finder.functor.data[8] = 0LL;
  if ( n.m_iterator.m_Finder.vtable <= (boost::detail::function::vtable_base *)0x10 )
  {
    v13 = n.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.gap8;
    v14 = &v56.m_iterator.m_bEof;
    goto LABEL_11;
  }
LABEL_41:
  v13 = (char *)operator new[]((unsigned __int64)vtable);
  *(_QWORD *)&n.m_iterator.m_Finder.functor.data[8] = v13;
  v14 = *(bool **)&v56.m_iterator.m_bEof;
LABEL_11:
  memcpy(v13, v14, (size_t)n.m_iterator.m_Match.m_Begin._M_current);
  LODWORD(n.m_iterator.m_Match.m_End._M_current) = n.m_iterator.m_Finder.functor.members.obj_ptr;
  *(_QWORD *)&n.m_iterator.m_bEof = n.m_iterator.m_Match.m_Begin._M_current;
  n.m_iterator.m_Next._M_current = 0LL;
  if ( n.m_iterator.m_Match.m_Begin._M_current > (const char *)0x10 )
  {
    p_m_Next = (boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char const*,std::string > >::input_iterator_type *)operator new[]((unsigned __int64)n.m_iterator.m_Match.m_Begin._M_current);
    n.m_iterator.m_Next._M_current = (const char *)p_m_Next;
    v16 = *(char **)&n.m_iterator.m_Finder.functor.data[8];
  }
  else
  {
    p_m_Next = &n.m_iterator.m_Next;
    v16 = n.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.gap8;
  }
  memcpy(p_m_Next, v16, *(size_t *)&n.m_iterator.m_bEof);
  *(_DWORD *)n.m_f.gap0 = n.m_iterator.m_Match.m_End._M_current;
  v70 = 0LL;
  v59 = *(_QWORD *)&n.m_iterator.m_bEof;
  v58[0] = 0LL;
  if ( *(_QWORD *)&n.m_iterator.m_bEof > 0x10uLL )
  {
    v17 = (void **)operator new[](*(unsigned __int64 *)&n.m_iterator.m_bEof);
    v58[0] = v17;
    M_current = n.m_iterator.m_Next._M_current;
  }
  else
  {
    v17 = v58;
    M_current = &n.m_iterator.m_Next;
  }
  memcpy(v17, M_current, v59);
  v60 = *(_DWORD *)n.m_f.gap0;
  v56.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.obj_ptr = &v71;
  v62 = v59;
  v61[0] = 0LL;
  if ( v59 > 0x10 )
  {
    v19 = (void **)operator new[](v59);
    v61[0] = v19;
    v20 = (void **)v58[0];
  }
  else
  {
    v19 = v61;
    v20 = v58;
  }
  memcpy(v19, v20, v62);
  v63 = v60;
  v65 = v62;
  v64[0] = 0LL;
  if ( v62 > 0x10 )
  {
    v21 = (void **)operator new[](v62);
    v64[0] = v21;
    v22 = (void **)v61[0];
  }
  else
  {
    v21 = v64;
    v22 = v61;
  }
  memcpy(v21, v22, v65);
  v66 = v63;
  if ( (unsigned __int8)boost::detail::function::has_empty_target(v64) )
  {
    v23 = 0LL;
    goto LABEL_21;
  }
  v68 = v65;
  v67[0] = 0LL;
  if ( v65 > 0x10 )
  {
    v27 = (void **)operator new[](v65);
    v67[0] = v27;
    v28 = (void **)v64[0];
  }
  else
  {
    v27 = v67;
    v28 = v64;
  }
  memcpy(v27, v28, v68);
  v69 = v66;
  v29 = operator new(0x20uLL);
  v30 = v29;
  v31 = v68;
  if ( *(_BYTE *)(((v29 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_60;
  }
  *(_QWORD *)(v29 + 16) = v68;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    v31 = v30;
    __asan_report_store8();
    goto LABEL_61;
  }
  *(_QWORD *)v29 = 0LL;
  if ( v31 <= 0x10 )
  {
    v32 = (void *)v29;
    v33 = v67;
    goto LABEL_54;
  }
LABEL_61:
  v32 = (void *)operator new[](v31);
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
    v34 = (_QWORD *)v30;
    __asan_report_store8();
LABEL_64:
    __asan_report_store4(v34);
LABEL_65:
    v36 = (struct _Unwind_Exception *)__asan_report_store8();
    v37 = (__m128i *)v30;
    operator delete((void *)v30, 0x20uLL);
    if ( v68 > 0x10 )
    {
      v37 = (__m128i *)v67[0];
      if ( v67[0] )
        operator delete[](v67[0]);
    }
    if ( v65 > 0x10 )
    {
      v37 = (__m128i *)v64[0];
      if ( v64[0] )
        operator delete[](v64[0]);
    }
    if ( v62 > 0x10 )
    {
      v37 = (__m128i *)v61[0];
      if ( v61[0] )
        operator delete[](v61[0]);
    }
    if ( v59 > 0x10 )
    {
      v37 = (__m128i *)v58[0];
      if ( v58[0] )
        operator delete[](v58[0]);
    }
    if ( *(_QWORD *)&n.m_iterator.m_bEof > 0x10uLL )
    {
      v37 = (__m128i *)n.m_iterator.m_Next._M_current;
      if ( n.m_iterator.m_Next._M_current )
        operator delete[]((void *)n.m_iterator.m_Next._M_current);
    }
    if ( n.m_iterator.m_Match.m_Begin._M_current > (const char *)0x10 )
    {
      v37 = *(__m128i **)&n.m_iterator.m_Finder.functor.data[8];
      if ( *(_QWORD *)&n.m_iterator.m_Finder.functor.data[8] )
        operator delete[](*(void **)&n.m_iterator.m_Finder.functor.data[8]);
    }
    goto LABEL_83;
  }
  *(_QWORD *)v30 = v32;
  v33 = (void **)v67[0];
LABEL_54:
  memcpy(v32, v33, *(_QWORD *)(v30 + 16));
  v34 = (_QWORD *)(v30 + 24);
  v35 = *(_BYTE *)(((v30 + 24) >> 3) + 0x7FFF8000);
  if ( v35 && v35 <= 3 )
    goto LABEL_64;
  *(_DWORD *)(v30 + 24) = v69;
  if ( *(_BYTE *)(((unsigned __int64)v56.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.obj_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_65;
  *(_QWORD *)v56.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.obj_ptr = v30;
  if ( v68 > 0x10 && v67[0] )
    operator delete[](v67[0]);
  v23 = 1LL;
LABEL_21:
  if ( v65 > 0x10 && v64[0] )
    operator delete[](v64[0]);
  if ( v62 > 0x10 && v61[0] )
    operator delete[](v61[0]);
  if ( (_BYTE)v23 )
    v70 = (unsigned __int64)&boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char const*,std::string>>,__gnu_cxx::__normal_iterator<char const*,std::string>,__gnu_cxx::__normal_iterator<char const*,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>)::stored_vtable;
  else
    v70 = 0LL;
  if ( v59 > 0x10 && v58[0] )
    operator delete[](v58[0]);
  if ( *(_QWORD *)&n.m_iterator.m_bEof > 0x10uLL && n.m_iterator.m_Next._M_current )
    operator delete[]((void *)n.m_iterator.m_Next._M_current);
  if ( n.m_iterator.m_Match.m_Begin._M_current > (const char *)0x10 && *(_QWORD *)&n.m_iterator.m_Finder.functor.data[8] )
    operator delete[](*(void **)&n.m_iterator.m_Finder.functor.data[8]);
  v73.m128i_i64[0] = (__int64)v3;
  v73.m128i_i64[1] = (__int64)v3;
  v74 = v3;
  v24 = (std::_Vector_base<std::string>::pointer)v56.m_iterator.m_Finder.functor.members.obj_ptr;
  v75 = (std::_Vector_base<std::string>::pointer)v56.m_iterator.m_Finder.functor.members.obj_ptr;
  v76 = 0;
  if ( v3 != v56.m_iterator.m_Finder.functor.members.obj_ptr )
  {
    v25 = (std::_Vector_base<std::string>::pointer)v56.m_iterator.m_Finder.functor.members.obj_ptr;
    if ( v70 )
    {
      if ( *(_BYTE *)((((v70 & 0xFFFFFFFFFFFFFFFELL) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8((v70 & 0xFFFFFFFFFFFFFFFELL) + 8);
      else
        v24 = (std::_Vector_base<std::string>::pointer)(*(__int64 (__fastcall **)(__m128i *, std::_Vector_base<std::string>::pointer, boost::detail::function::function_buffer_members::obj_ptr_t))((v70 & 0xFFFFFFFFFFFFFFFELL) + 8))(
                                                         &v71,
                                                         v3,
                                                         v56.m_iterator.m_Finder.functor.members.obj_ptr);
    }
    if ( v24 == v75 && v75 == v25 && v75 == (std::_Vector_base<std::string>::pointer)v73.m128i_i64[1] )
      v76 = 1;
    v73.m128i_i64[0] = (__int64)v74;
    v73.m128i_i64[1] = (__int64)v24;
    v74 = v25;
  }
  *(_QWORD *)(v6 + 96) = 0LL;
  v38 = v70;
  if ( v70 )
  {
    *(_QWORD *)(v6 + 96) = v70;
    if ( (v38 & 1) != 0 )
    {
      *(__m128i *)(v6 + 104) = _mm_loadu_si128(&v71);
      *(_QWORD *)(v6 + 120) = v72;
    }
    else
    {
      v39 = (void (__fastcall **)(__m128i *, unsigned __int64, _QWORD))(v38 & 0xFFFFFFFFFFFFFFFELL);
      if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
      {
        v41 = (void (__fastcall **)(__m128i *, __m128i *, __int64))(v38 & 0xFFFFFFFFFFFFFFFELL);
        __asan_report_load8(v39);
        goto LABEL_124;
      }
      (*v39)(&v71, v6 + 104, 0LL);
    }
  }
  v40 = _mm_load_si128(&v73);
  *(__m128i *)(v6 + 128) = v40;
  *(_QWORD *)(v6 + 144) = v74;
  *(_QWORD *)(v6 + 152) = v75;
  *(_BYTE *)(v6 + 160) = v76;
  if ( !v70 || (v70 & 1) != 0 )
    goto LABEL_116;
  v41 = (void (__fastcall **)(__m128i *, __m128i *, __int64))(v70 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
  {
LABEL_124:
    __asan_report_load8(v41);
    *(double *)v40.m128i_i64 = __asan_report_load8(v41);
    goto LABEL_125;
  }
  if ( *v41 )
    (*v41)(&v71, &v71, 2LL);
LABEL_116:
  if ( n.m_iterator.m_Finder.vtable > (boost::detail::function::vtable_base *)0x10 && *(_QWORD *)&v56.m_iterator.m_bEof )
    operator delete[](*(void **)&v56.m_iterator.m_bEof);
  v70 = 0LL;
  v73 = 0uLL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 1;
  *(_QWORD *)(v6 + 208) = 0LL;
  *(__m128i *)(v6 + 240) = _mm_load_si128(&v73);
  *(_QWORD *)(v6 + 256) = 0LL;
  *(_QWORD *)(v6 + 264) = 0LL;
  *(_BYTE *)(v6 + 272) = 1;
  v84 = 0LL;
  v42 = *(_QWORD *)(v6 + 208);
  if ( !v42 )
    goto LABEL_126;
  v84 = *(_QWORD *)(v6 + 208);
  if ( (v42 & 1) != 0 )
  {
LABEL_125:
    v85 = _mm_loadu_si128((const __m128i *)(v6 + 216));
    v86 = *(_QWORD *)(v6 + 232);
    goto LABEL_126;
  }
  v43 = (void (__fastcall **)(unsigned __int64, __m128i *, _QWORD))(v42 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
  {
    *(double *)v40.m128i_i64 = __asan_report_load8(v43);
    goto LABEL_131;
  }
  (*v43)(v6 + 216, &v85, 0LL);
LABEL_126:
  si128 = _mm_load_si128((const __m128i *)(v6 + 240));
  v88 = *(_QWORD *)(v6 + 256);
  v89 = *(_QWORD *)(v6 + 264);
  v90 = *(_BYTE *)(v6 + 272);
  *(_QWORD *)__a[0].gap0 = 0LL;
  v44 = *(_QWORD *)(v6 + 96);
  if ( !v44 )
    goto LABEL_132;
  *(_QWORD *)__a[0].gap0 = *(_QWORD *)(v6 + 96);
  if ( (v44 & 1) != 0 )
  {
LABEL_131:
    v78 = _mm_loadu_si128((const __m128i *)(v6 + 104));
    v79 = *(_QWORD *)(v6 + 120);
    goto LABEL_132;
  }
  v45 = (void (__fastcall **)(unsigned __int64, __m128i *, _QWORD))(v44 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
  {
    *(double *)v40.m128i_i64 = __asan_report_load8(v45);
    goto LABEL_134;
  }
  (*v45)(v6 + 104, &v78, 0LL);
LABEL_132:
  v80 = _mm_load_si128((const __m128i *)(v6 + 128));
  v81 = *(_QWORD *)(v6 + 144);
  v82 = *(_QWORD *)(v6 + 152);
  v83 = *(_BYTE *)(v6 + 160);
  std::vector<std::string>::vector<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char const*,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char const*,std::string>>,boost::use_default,boost::use_default>,void>(
    (std::vector<std::string> *const)(v6 + 32),
    v56,
    n,
    __a);
LABEL_134:
  if ( *(_QWORD *)__a[0].gap0 && (__a[0].gap0[0] & 1) == 0 )
  {
    v46 = (void (__fastcall **)(__m128i *, __m128i *, __int64, double))(*(_QWORD *)__a[0].gap0 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_BYTE *)((*(_QWORD *)__a[0].gap0 >> 3) + 0x7FFF8000LL) )
    {
      __asan_report_load8(v46);
      goto LABEL_149;
    }
    if ( *v46 )
      (*v46)(&v78, &v78, 2LL, *(double *)v40.m128i_i64);
  }
  if ( !v84 || (v84 & 1) != 0 )
    goto LABEL_144;
  v46 = (void (__fastcall **)(__m128i *, __m128i *, __int64, double))(v84 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
  {
LABEL_149:
    __asan_report_load8(v46);
    goto LABEL_150;
  }
  if ( *v46 )
    (*v46)(&v85, &v85, 2LL, *(double *)v40.m128i_i64);
LABEL_144:
  if ( *(_BYTE *)((Result >> 3) + 0x7FFF8000) )
  {
LABEL_150:
    v47 = (std::vector<std::string> *)Result;
    __asan_report_load8(Result);
    goto LABEL_151;
  }
  v23 = *(_QWORD *)Result;
  v47 = (std::vector<std::string> *)(Result + 8);
  if ( *(_BYTE *)(((Result + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load8(v47);
    goto LABEL_152;
  }
  v3 = *(std::_Vector_base<std::string>::pointer *)(Result + 8);
  v47 = (std::vector<std::string> *)(Result + 16);
  if ( *(_BYTE *)(((Result + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_152:
    __asan_report_load8(v47);
    goto LABEL_153;
  }
  v48 = *(std::_Vector_base<std::string>::pointer *)(Result + 16);
  *(_QWORD *)Result = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(Result + 8) = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(Result + 16) = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 32) = v23;
  *(_QWORD *)(v6 + 40) = v3;
  *(_QWORD *)(v6 + 48) = v48;
  while ( v3 != (std::_Vector_base<std::string>::pointer)v23 )
  {
    v47 = (std::vector<std::string> *)v23;
    if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
    {
LABEL_153:
      *(double *)v40.m128i_i64 = __asan_report_load8(v47);
LABEL_154:
      operator delete(v47);
      goto LABEL_155;
    }
    v47 = *(std::vector<std::string> **)v23;
    if ( *(_QWORD *)v23 != v23 + 16 )
      goto LABEL_154;
LABEL_155:
    v23 += 32LL;
  }
  v49 = *(void **)(v6 + 32);
  if ( v49 )
    operator delete(v49);
  v50 = *(_QWORD *)(v6 + 208);
  if ( v50 && (v50 & 1) == 0 )
  {
    v37 = (__m128i *)(v50 & 0xFFFFFFFFFFFFFFFELL);
    if ( !*(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
    {
      if ( v37->m128i_i64[0] )
        ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, double))v37->m128i_i64[0])(
          v6 + 216,
          v6 + 216,
          2LL,
          *(double *)v40.m128i_i64);
      goto LABEL_167;
    }
    __asan_report_load8(v37);
LABEL_176:
    v53 = __asan_report_load8(v37);
    v36 = v54;
    if ( v70 && (v70 & 1) == 0 )
    {
      v37 = (__m128i *)(v70 & 0xFFFFFFFFFFFFFFFELL);
      if ( *(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
        v53 = __asan_report_load8(v37);
      v55 = (void (__fastcall *)(__m128i *, __m128i *, __int64, double))v37->m128i_i64[0];
      if ( v37->m128i_i64[0] )
      {
        v37 = &v71;
        v55(&v71, &v71, 2LL, v53);
      }
    }
LABEL_83:
    if ( n.m_iterator.m_Finder.vtable > (boost::detail::function::vtable_base *)0x10 )
    {
      v37 = *(__m128i **)&v56.m_iterator.m_bEof;
      if ( *(_QWORD *)&v56.m_iterator.m_bEof )
        operator delete[](*(void **)&v56.m_iterator.m_bEof);
    }
    __asan_handle_no_return(v37);
    _Unwind_Resume(v36);
  }
LABEL_167:
  v51 = *(_QWORD *)(v6 + 96);
  if ( v51 && (v51 & 1) == 0 )
  {
    v37 = (__m128i *)(v51 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
      goto LABEL_176;
    if ( v37->m128i_i64[0] )
      ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, double))v37->m128i_i64[0])(
        v6 + 104,
        v6 + 104,
        2LL,
        *(double *)v40.m128i_i64);
  }
  if ( *(_QWORD *)&v56.m_iterator.m_Finder.functor.data[8] == v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (std::vector<std::string> *)Result;
};

// Line 143: range 000000000C24B280-000000000C24C2D1
// local variable allocation has failed, the output may be wrong!
std::vector<std::string> *__fastcall boost::algorithm::iter_split<std::vector<std::string>,std::string,boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(
        unsigned __int64 Result,
        std::string *Input,
        unsigned __int64 a3)
{
  std::_Vector_base<std::string>::pointer v3; // r15
  unsigned __int64 v6; // r14
  _DWORD *v7; // r12
  boost::detail::function::vtable_base *obj_ptr; // rdi
  void (*v9)(const boost::detail::function::function_buffer *, boost::detail::function::function_buffer *, boost::detail::function::functor_manager_operation_type); // rsi
  bool *p_m_bEof; // rdi
  boost::detail::function::vtable_base *vtable; // rdi
  char v12; // al
  char *v13; // rdi
  bool *v14; // rsi
  char *p_m_Next; // rdi
  char *v16; // rsi
  void **v17; // rdi
  const void *M_current; // rsi
  void **v19; // rdi
  void **v20; // rsi
  void **v21; // rdi
  void **v22; // rsi
  unsigned __int64 v23; // r13
  std::_Vector_base<std::string>::pointer v24; // rax
  std::_Vector_base<std::string>::pointer v25; // rdx
  __int64 v26; // rax
  void **v27; // rdi
  void **v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rdi
  void *v32; // rdi
  void **v33; // rsi
  _QWORD *v34; // rdi
  char v35; // al
  struct _Unwind_Exception *v36; // rbx
  __m128i *v37; // rdi
  unsigned __int64 v38; // rax
  void (__fastcall **v39)(__m128i *, unsigned __int64, _QWORD); // rcx
  __m128i v40; // xmm0
  void (__fastcall **v41)(__m128i *, __m128i *, __int64); // rdi
  unsigned __int64 v42; // rax
  void (__fastcall **v43)(unsigned __int64, __m128i *, _QWORD); // rcx
  unsigned __int64 v44; // rax
  void (__fastcall **v45)(unsigned __int64, __m128i *, _QWORD); // rcx
  void (__fastcall **v46)(__m128i *, __m128i *, __int64, double); // rdi
  std::vector<std::string> *v47; // rdi
  std::_Vector_base<std::string>::pointer v48; // rax
  void *v49; // rdi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  double v53; // xmm0_8
  struct _Unwind_Exception *v54; // rax
  void (__fastcall *v55)(__m128i *, __m128i *, __int64, double); // rax
  boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> v56; // [rsp+0h] [rbp-388h] OVERLAPPED BYREF
  boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char*,std::string > >,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char*,std::string > >,boost::use_default,boost::use_default> n; // [rsp+50h] [rbp-338h] BYREF
  void *v58[2]; // [rsp+A0h] [rbp-2E8h] BYREF
  size_t v59; // [rsp+B0h] [rbp-2D8h]
  int v60; // [rsp+B8h] [rbp-2D0h]
  void *v61[2]; // [rsp+C0h] [rbp-2C8h] BYREF
  size_t v62; // [rsp+D0h] [rbp-2B8h]
  int v63; // [rsp+D8h] [rbp-2B0h]
  void *v64[2]; // [rsp+E0h] [rbp-2A8h] BYREF
  size_t v65; // [rsp+F0h] [rbp-298h]
  int v66; // [rsp+F8h] [rbp-290h]
  void *v67[2]; // [rsp+100h] [rbp-288h] BYREF
  size_t v68; // [rsp+110h] [rbp-278h]
  int v69; // [rsp+118h] [rbp-270h]
  unsigned __int64 v70; // [rsp+120h] [rbp-268h]
  __m128i v71; // [rsp+128h] [rbp-260h] BYREF
  __int64 v72; // [rsp+138h] [rbp-250h]
  __m128i v73; // [rsp+140h] [rbp-248h] BYREF
  std::_Vector_base<std::string>::pointer v74; // [rsp+150h] [rbp-238h]
  std::_Vector_base<std::string>::pointer v75; // [rsp+158h] [rbp-230h]
  char v76; // [rsp+160h] [rbp-228h]
  std::vector<std::string>::allocator_type __a[8]; // [rsp+170h] [rbp-218h] BYREF
  __m128i v78; // [rsp+178h] [rbp-210h] BYREF
  __int64 v79; // [rsp+188h] [rbp-200h]
  __m128i v80; // [rsp+190h] [rbp-1F8h]
  __int64 v81; // [rsp+1A0h] [rbp-1E8h]
  __int64 v82; // [rsp+1A8h] [rbp-1E0h]
  char v83; // [rsp+1B0h] [rbp-1D8h]
  unsigned __int64 v84; // [rsp+1C0h] [rbp-1C8h]
  __m128i v85; // [rsp+1C8h] [rbp-1C0h] BYREF
  __int64 v86; // [rsp+1D8h] [rbp-1B0h]
  __m128i si128; // [rsp+1E0h] [rbp-1A8h]
  __int64 v88; // [rsp+1F0h] [rbp-198h]
  __int64 v89; // [rsp+1F8h] [rbp-190h]
  char v90; // [rsp+200h] [rbp-188h]
  char v91[376]; // [rsp+210h] [rbp-178h] BYREF

  v56.m_iterator.m_Finder.functor.members.obj_ptr = Input;
  v6 = (unsigned __int64)v91;
  *(_QWORD *)&v56.m_iterator.m_Finder.functor.data[8] = v91;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v26 = __asan_stack_malloc_3(320LL);
    if ( v26 )
      v6 = v26;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 24 7 Tmp:178 96 80 11 itBegin:168 208 80 9 itEnd:173";
  *(_QWORD *)(v6 + 16) = boost::algorithm::iter_split<std::vector<std::string>,std::string,boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -218959118;
  v7[536862725] = -219021312;
  v7[536862726] = 62194;
  v7[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v56.m_iterator.m_Finder.functor.members.obj_ptr >> 3) + 0x7FFF8000) )
  {
    obj_ptr = (boost::detail::function::vtable_base *)v56.m_iterator.m_Finder.functor.members.obj_ptr;
    __asan_report_load8(v56.m_iterator.m_Finder.functor.members.obj_ptr);
    goto LABEL_35;
  }
  v3 = *(std::_Vector_base<std::string>::pointer *)v56.m_iterator.m_Finder.functor.members.obj_ptr;
  obj_ptr = (boost::detail::function::vtable_base *)((char *)v56.m_iterator.m_Finder.functor.members.obj_ptr + 8);
  if ( *(_BYTE *)((((unsigned __int64)v56.m_iterator.m_Finder.functor.members.obj_ptr + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(obj_ptr);
    goto LABEL_36;
  }
  v56.m_iterator.m_Finder.functor.members.obj_ptr = (char *)v3
                                                  + *((_QWORD *)v56.m_iterator.m_Finder.functor.members.obj_ptr + 1);
  obj_ptr = (boost::detail::function::vtable_base *)(a3 + 16);
  if ( *(_BYTE *)(((a3 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(obj_ptr);
    goto LABEL_37;
  }
  obj_ptr = *(boost::detail::function::vtable_base **)(a3 + 16);
  n.m_iterator.m_Finder.vtable = obj_ptr;
  *(_QWORD *)&v56.m_iterator.m_bEof = 0LL;
  if ( (unsigned __int64)obj_ptr <= 0x10 )
  {
    v9 = (void (*)(const boost::detail::function::function_buffer *, boost::detail::function::function_buffer *, boost::detail::function::functor_manager_operation_type))a3;
    p_m_bEof = &v56.m_iterator.m_bEof;
    goto LABEL_7;
  }
LABEL_37:
  p_m_bEof = (bool *)operator new[]((unsigned __int64)obj_ptr);
  *(_QWORD *)&v56.m_iterator.m_bEof = p_m_bEof;
  if ( *(_BYTE *)((a3 >> 3) + 0x7FFF8000) )
  {
    vtable = (boost::detail::function::vtable_base *)a3;
    __asan_report_load8(a3);
LABEL_40:
    __asan_report_load4(vtable);
    goto LABEL_41;
  }
  v9 = *(void (**)(const boost::detail::function::function_buffer *, boost::detail::function::function_buffer *, boost::detail::function::functor_manager_operation_type))a3;
LABEL_7:
  memcpy(p_m_bEof, v9, (size_t)n.m_iterator.m_Finder.vtable);
  vtable = (boost::detail::function::vtable_base *)(a3 + 24);
  v12 = *(_BYTE *)(((a3 + 24) >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_40;
  LODWORD(n.m_iterator.m_Finder.functor.members.obj_ptr) = *(_DWORD *)(a3 + 24);
  vtable = n.m_iterator.m_Finder.vtable;
  n.m_iterator.m_Match.m_Begin._M_current = (char *)n.m_iterator.m_Finder.vtable;
  *(_QWORD *)&n.m_iterator.m_Finder.functor.data[8] = 0LL;
  if ( n.m_iterator.m_Finder.vtable <= (boost::detail::function::vtable_base *)0x10 )
  {
    v13 = n.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.gap8;
    v14 = &v56.m_iterator.m_bEof;
    goto LABEL_11;
  }
LABEL_41:
  v13 = (char *)operator new[]((unsigned __int64)vtable);
  *(_QWORD *)&n.m_iterator.m_Finder.functor.data[8] = v13;
  v14 = *(bool **)&v56.m_iterator.m_bEof;
LABEL_11:
  memcpy(v13, v14, (size_t)n.m_iterator.m_Match.m_Begin._M_current);
  LODWORD(n.m_iterator.m_Match.m_End._M_current) = n.m_iterator.m_Finder.functor.members.obj_ptr;
  *(_QWORD *)&n.m_iterator.m_bEof = n.m_iterator.m_Match.m_Begin._M_current;
  n.m_iterator.m_Next._M_current = 0LL;
  if ( n.m_iterator.m_Match.m_Begin._M_current > (char *)0x10 )
  {
    p_m_Next = (char *)operator new[]((unsigned __int64)n.m_iterator.m_Match.m_Begin._M_current);
    n.m_iterator.m_Next._M_current = p_m_Next;
    v16 = *(char **)&n.m_iterator.m_Finder.functor.data[8];
  }
  else
  {
    p_m_Next = (char *)&n.m_iterator.m_Next;
    v16 = n.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.gap8;
  }
  memcpy(p_m_Next, v16, *(size_t *)&n.m_iterator.m_bEof);
  *(_DWORD *)n.m_f.gap0 = n.m_iterator.m_Match.m_End._M_current;
  v70 = 0LL;
  v59 = *(_QWORD *)&n.m_iterator.m_bEof;
  v58[0] = 0LL;
  if ( *(_QWORD *)&n.m_iterator.m_bEof > 0x10uLL )
  {
    v17 = (void **)operator new[](*(unsigned __int64 *)&n.m_iterator.m_bEof);
    v58[0] = v17;
    M_current = n.m_iterator.m_Next._M_current;
  }
  else
  {
    v17 = v58;
    M_current = &n.m_iterator.m_Next;
  }
  memcpy(v17, M_current, v59);
  v60 = *(_DWORD *)n.m_f.gap0;
  v56.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.obj_ptr = &v71;
  v62 = v59;
  v61[0] = 0LL;
  if ( v59 > 0x10 )
  {
    v19 = (void **)operator new[](v59);
    v61[0] = v19;
    v20 = (void **)v58[0];
  }
  else
  {
    v19 = v61;
    v20 = v58;
  }
  memcpy(v19, v20, v62);
  v63 = v60;
  v65 = v62;
  v64[0] = 0LL;
  if ( v62 > 0x10 )
  {
    v21 = (void **)operator new[](v62);
    v64[0] = v21;
    v22 = (void **)v61[0];
  }
  else
  {
    v21 = v64;
    v22 = v61;
  }
  memcpy(v21, v22, v65);
  v66 = v63;
  if ( (unsigned __int8)boost::detail::function::has_empty_target(v64) )
  {
    v23 = 0LL;
    goto LABEL_21;
  }
  v68 = v65;
  v67[0] = 0LL;
  if ( v65 > 0x10 )
  {
    v27 = (void **)operator new[](v65);
    v67[0] = v27;
    v28 = (void **)v64[0];
  }
  else
  {
    v27 = v67;
    v28 = v64;
  }
  memcpy(v27, v28, v68);
  v69 = v66;
  v29 = operator new(0x20uLL);
  v30 = v29;
  v31 = v68;
  if ( *(_BYTE *)(((v29 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_60;
  }
  *(_QWORD *)(v29 + 16) = v68;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    v31 = v30;
    __asan_report_store8();
    goto LABEL_61;
  }
  *(_QWORD *)v29 = 0LL;
  if ( v31 <= 0x10 )
  {
    v32 = (void *)v29;
    v33 = v67;
    goto LABEL_54;
  }
LABEL_61:
  v32 = (void *)operator new[](v31);
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
    v34 = (_QWORD *)v30;
    __asan_report_store8();
LABEL_64:
    __asan_report_store4(v34);
LABEL_65:
    v36 = (struct _Unwind_Exception *)__asan_report_store8();
    v37 = (__m128i *)v30;
    operator delete((void *)v30, 0x20uLL);
    if ( v68 > 0x10 )
    {
      v37 = (__m128i *)v67[0];
      if ( v67[0] )
        operator delete[](v67[0]);
    }
    if ( v65 > 0x10 )
    {
      v37 = (__m128i *)v64[0];
      if ( v64[0] )
        operator delete[](v64[0]);
    }
    if ( v62 > 0x10 )
    {
      v37 = (__m128i *)v61[0];
      if ( v61[0] )
        operator delete[](v61[0]);
    }
    if ( v59 > 0x10 )
    {
      v37 = (__m128i *)v58[0];
      if ( v58[0] )
        operator delete[](v58[0]);
    }
    if ( *(_QWORD *)&n.m_iterator.m_bEof > 0x10uLL )
    {
      v37 = (__m128i *)n.m_iterator.m_Next._M_current;
      if ( n.m_iterator.m_Next._M_current )
        operator delete[](n.m_iterator.m_Next._M_current);
    }
    if ( n.m_iterator.m_Match.m_Begin._M_current > (char *)0x10 )
    {
      v37 = *(__m128i **)&n.m_iterator.m_Finder.functor.data[8];
      if ( *(_QWORD *)&n.m_iterator.m_Finder.functor.data[8] )
        operator delete[](*(void **)&n.m_iterator.m_Finder.functor.data[8]);
    }
    goto LABEL_83;
  }
  *(_QWORD *)v30 = v32;
  v33 = (void **)v67[0];
LABEL_54:
  memcpy(v32, v33, *(_QWORD *)(v30 + 16));
  v34 = (_QWORD *)(v30 + 24);
  v35 = *(_BYTE *)(((v30 + 24) >> 3) + 0x7FFF8000);
  if ( v35 && v35 <= 3 )
    goto LABEL_64;
  *(_DWORD *)(v30 + 24) = v69;
  if ( *(_BYTE *)(((unsigned __int64)v56.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.obj_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_65;
  *(_QWORD *)v56.m_iterator.m_Finder.functor.members.bound_memfunc_ptr.obj_ptr = v30;
  if ( v68 > 0x10 && v67[0] )
    operator delete[](v67[0]);
  v23 = 1LL;
LABEL_21:
  if ( v65 > 0x10 && v64[0] )
    operator delete[](v64[0]);
  if ( v62 > 0x10 && v61[0] )
    operator delete[](v61[0]);
  if ( (_BYTE)v23 )
    v70 = (unsigned __int64)&boost::function2<boost::iterator_range<__gnu_cxx::__normal_iterator<char *,std::string>>,__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>>::assign_to<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>(boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>)::stored_vtable;
  else
    v70 = 0LL;
  if ( v59 > 0x10 && v58[0] )
    operator delete[](v58[0]);
  if ( *(_QWORD *)&n.m_iterator.m_bEof > 0x10uLL && n.m_iterator.m_Next._M_current )
    operator delete[](n.m_iterator.m_Next._M_current);
  if ( n.m_iterator.m_Match.m_Begin._M_current > (char *)0x10 && *(_QWORD *)&n.m_iterator.m_Finder.functor.data[8] )
    operator delete[](*(void **)&n.m_iterator.m_Finder.functor.data[8]);
  v73.m128i_i64[0] = (__int64)v3;
  v73.m128i_i64[1] = (__int64)v3;
  v74 = v3;
  v24 = (std::_Vector_base<std::string>::pointer)v56.m_iterator.m_Finder.functor.members.obj_ptr;
  v75 = (std::_Vector_base<std::string>::pointer)v56.m_iterator.m_Finder.functor.members.obj_ptr;
  v76 = 0;
  if ( v3 != v56.m_iterator.m_Finder.functor.members.obj_ptr )
  {
    v25 = (std::_Vector_base<std::string>::pointer)v56.m_iterator.m_Finder.functor.members.obj_ptr;
    if ( v70 )
    {
      if ( *(_BYTE *)((((v70 & 0xFFFFFFFFFFFFFFFELL) + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8((v70 & 0xFFFFFFFFFFFFFFFELL) + 8);
      else
        v24 = (std::_Vector_base<std::string>::pointer)(*(__int64 (__fastcall **)(__m128i *, std::_Vector_base<std::string>::pointer, boost::detail::function::function_buffer_members::obj_ptr_t))((v70 & 0xFFFFFFFFFFFFFFFELL) + 8))(
                                                         &v71,
                                                         v3,
                                                         v56.m_iterator.m_Finder.functor.members.obj_ptr);
    }
    if ( v24 == v75 && v75 == v25 && v75 == (std::_Vector_base<std::string>::pointer)v73.m128i_i64[1] )
      v76 = 1;
    v73.m128i_i64[0] = (__int64)v74;
    v73.m128i_i64[1] = (__int64)v24;
    v74 = v25;
  }
  *(_QWORD *)(v6 + 96) = 0LL;
  v38 = v70;
  if ( v70 )
  {
    *(_QWORD *)(v6 + 96) = v70;
    if ( (v38 & 1) != 0 )
    {
      *(__m128i *)(v6 + 104) = _mm_loadu_si128(&v71);
      *(_QWORD *)(v6 + 120) = v72;
    }
    else
    {
      v39 = (void (__fastcall **)(__m128i *, unsigned __int64, _QWORD))(v38 & 0xFFFFFFFFFFFFFFFELL);
      if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
      {
        v41 = (void (__fastcall **)(__m128i *, __m128i *, __int64))(v38 & 0xFFFFFFFFFFFFFFFELL);
        __asan_report_load8(v39);
        goto LABEL_124;
      }
      (*v39)(&v71, v6 + 104, 0LL);
    }
  }
  v40 = _mm_load_si128(&v73);
  *(__m128i *)(v6 + 128) = v40;
  *(_QWORD *)(v6 + 144) = v74;
  *(_QWORD *)(v6 + 152) = v75;
  *(_BYTE *)(v6 + 160) = v76;
  if ( !v70 || (v70 & 1) != 0 )
    goto LABEL_116;
  v41 = (void (__fastcall **)(__m128i *, __m128i *, __int64))(v70 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
  {
LABEL_124:
    __asan_report_load8(v41);
    *(double *)v40.m128i_i64 = __asan_report_load8(v41);
    goto LABEL_125;
  }
  if ( *v41 )
    (*v41)(&v71, &v71, 2LL);
LABEL_116:
  if ( n.m_iterator.m_Finder.vtable > (boost::detail::function::vtable_base *)0x10 && *(_QWORD *)&v56.m_iterator.m_bEof )
    operator delete[](*(void **)&v56.m_iterator.m_bEof);
  v70 = 0LL;
  v73 = 0uLL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 1;
  *(_QWORD *)(v6 + 208) = 0LL;
  *(__m128i *)(v6 + 240) = _mm_load_si128(&v73);
  *(_QWORD *)(v6 + 256) = 0LL;
  *(_QWORD *)(v6 + 264) = 0LL;
  *(_BYTE *)(v6 + 272) = 1;
  v84 = 0LL;
  v42 = *(_QWORD *)(v6 + 208);
  if ( !v42 )
    goto LABEL_126;
  v84 = *(_QWORD *)(v6 + 208);
  if ( (v42 & 1) != 0 )
  {
LABEL_125:
    v85 = _mm_loadu_si128((const __m128i *)(v6 + 216));
    v86 = *(_QWORD *)(v6 + 232);
    goto LABEL_126;
  }
  v43 = (void (__fastcall **)(unsigned __int64, __m128i *, _QWORD))(v42 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
  {
    *(double *)v40.m128i_i64 = __asan_report_load8(v43);
    goto LABEL_131;
  }
  (*v43)(v6 + 216, &v85, 0LL);
LABEL_126:
  si128 = _mm_load_si128((const __m128i *)(v6 + 240));
  v88 = *(_QWORD *)(v6 + 256);
  v89 = *(_QWORD *)(v6 + 264);
  v90 = *(_BYTE *)(v6 + 272);
  *(_QWORD *)__a[0].gap0 = 0LL;
  v44 = *(_QWORD *)(v6 + 96);
  if ( !v44 )
    goto LABEL_132;
  *(_QWORD *)__a[0].gap0 = *(_QWORD *)(v6 + 96);
  if ( (v44 & 1) != 0 )
  {
LABEL_131:
    v78 = _mm_loadu_si128((const __m128i *)(v6 + 104));
    v79 = *(_QWORD *)(v6 + 120);
    goto LABEL_132;
  }
  v45 = (void (__fastcall **)(unsigned __int64, __m128i *, _QWORD))(v44 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
  {
    *(double *)v40.m128i_i64 = __asan_report_load8(v45);
    goto LABEL_134;
  }
  (*v45)(v6 + 104, &v78, 0LL);
LABEL_132:
  v80 = _mm_load_si128((const __m128i *)(v6 + 128));
  v81 = *(_QWORD *)(v6 + 144);
  v82 = *(_QWORD *)(v6 + 152);
  v83 = *(_BYTE *)(v6 + 160);
  std::vector<std::string>::vector<boost::iterators::transform_iterator<boost::algorithm::detail::copy_iterator_rangeF<std::string,__gnu_cxx::__normal_iterator<char *,std::string>>,boost::algorithm::split_iterator<__gnu_cxx::__normal_iterator<char *,std::string>>,boost::use_default,boost::use_default>,void>(
    (std::vector<std::string> *const)(v6 + 32),
    v56,
    n,
    __a);
LABEL_134:
  if ( *(_QWORD *)__a[0].gap0 && (__a[0].gap0[0] & 1) == 0 )
  {
    v46 = (void (__fastcall **)(__m128i *, __m128i *, __int64, double))(*(_QWORD *)__a[0].gap0 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_BYTE *)((*(_QWORD *)__a[0].gap0 >> 3) + 0x7FFF8000LL) )
    {
      __asan_report_load8(v46);
      goto LABEL_149;
    }
    if ( *v46 )
      (*v46)(&v78, &v78, 2LL, *(double *)v40.m128i_i64);
  }
  if ( !v84 || (v84 & 1) != 0 )
    goto LABEL_144;
  v46 = (void (__fastcall **)(__m128i *, __m128i *, __int64, double))(v84 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
  {
LABEL_149:
    __asan_report_load8(v46);
    goto LABEL_150;
  }
  if ( *v46 )
    (*v46)(&v85, &v85, 2LL, *(double *)v40.m128i_i64);
LABEL_144:
  if ( *(_BYTE *)((Result >> 3) + 0x7FFF8000) )
  {
LABEL_150:
    v47 = (std::vector<std::string> *)Result;
    __asan_report_load8(Result);
    goto LABEL_151;
  }
  v23 = *(_QWORD *)Result;
  v47 = (std::vector<std::string> *)(Result + 8);
  if ( *(_BYTE *)(((Result + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load8(v47);
    goto LABEL_152;
  }
  v3 = *(std::_Vector_base<std::string>::pointer *)(Result + 8);
  v47 = (std::vector<std::string> *)(Result + 16);
  if ( *(_BYTE *)(((Result + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_152:
    __asan_report_load8(v47);
    goto LABEL_153;
  }
  v48 = *(std::_Vector_base<std::string>::pointer *)(Result + 16);
  *(_QWORD *)Result = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(Result + 8) = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(Result + 16) = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 32) = v23;
  *(_QWORD *)(v6 + 40) = v3;
  *(_QWORD *)(v6 + 48) = v48;
  while ( v3 != (std::_Vector_base<std::string>::pointer)v23 )
  {
    v47 = (std::vector<std::string> *)v23;
    if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
    {
LABEL_153:
      *(double *)v40.m128i_i64 = __asan_report_load8(v47);
LABEL_154:
      operator delete(v47);
      goto LABEL_155;
    }
    v47 = *(std::vector<std::string> **)v23;
    if ( *(_QWORD *)v23 != v23 + 16 )
      goto LABEL_154;
LABEL_155:
    v23 += 32LL;
  }
  v49 = *(void **)(v6 + 32);
  if ( v49 )
    operator delete(v49);
  v50 = *(_QWORD *)(v6 + 208);
  if ( v50 && (v50 & 1) == 0 )
  {
    v37 = (__m128i *)(v50 & 0xFFFFFFFFFFFFFFFELL);
    if ( !*(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
    {
      if ( v37->m128i_i64[0] )
        ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, double))v37->m128i_i64[0])(
          v6 + 216,
          v6 + 216,
          2LL,
          *(double *)v40.m128i_i64);
      goto LABEL_167;
    }
    __asan_report_load8(v37);
LABEL_176:
    v53 = __asan_report_load8(v37);
    v36 = v54;
    if ( v70 && (v70 & 1) == 0 )
    {
      v37 = (__m128i *)(v70 & 0xFFFFFFFFFFFFFFFELL);
      if ( *(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
        v53 = __asan_report_load8(v37);
      v55 = (void (__fastcall *)(__m128i *, __m128i *, __int64, double))v37->m128i_i64[0];
      if ( v37->m128i_i64[0] )
      {
        v37 = &v71;
        v55(&v71, &v71, 2LL, v53);
      }
    }
LABEL_83:
    if ( n.m_iterator.m_Finder.vtable > (boost::detail::function::vtable_base *)0x10 )
    {
      v37 = *(__m128i **)&v56.m_iterator.m_bEof;
      if ( *(_QWORD *)&v56.m_iterator.m_bEof )
        operator delete[](*(void **)&v56.m_iterator.m_bEof);
    }
    __asan_handle_no_return(v37);
    _Unwind_Resume(v36);
  }
LABEL_167:
  v51 = *(_QWORD *)(v6 + 96);
  if ( v51 && (v51 & 1) == 0 )
  {
    v37 = (__m128i *)(v51 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
      goto LABEL_176;
    if ( v37->m128i_i64[0] )
      ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, double))v37->m128i_i64[0])(
        v6 + 104,
        v6 + 104,
        2LL,
        *(double *)v40.m128i_i64);
  }
  if ( *(_QWORD *)&v56.m_iterator.m_Finder.functor.data[8] == v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (std::vector<std::string> *)Result;
};
