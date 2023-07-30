// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/exception.cpp

// Line 34: range 0000000019B63E78-0000000019B643C0
void __cdecl MiException::backtrace()
{
  const char *v0; // r13
  char *v1; // rbx
  char **v2; // r15
  void *v3; // rax
  __int64 v4; // rax
  common::milog::MilogStringStream *v5; // rbp
  common::milog::MilogStringStream *v6; // rdi
  char *v7; // rdi
  size_t v8; // rbx
  common::milog::MilogStringStream *v9; // rbp
  size_t v10; // r12
  const void *v11; // rsi
  common::milog::MilogStringStream *v12; // rdi
  char *v13; // rdi
  size_t v14; // rbx
  unsigned __int64 v15; // rax
  void *v16; // rdi
  size_t v17; // rbp
  void *v18; // rdi
  __int64 v19; // rax
  size_t v20; // r12
  size_t i; // r12
  __int64 v22; // rax
  void *v23; // rdi
  size_t v24; // rbp
  void *v25; // rdi
  size_t v26; // rbp
  unsigned __int64 v27; // rax
  void *v28; // rdi
  size_t v29; // rax
  void *v30; // rdi
  size_t v31; // rbp
  const char *v32; // rsi
  __int64 v33; // rdx
  std::forward_iterator_tag v34; // cl
  common::milog::MilogStringStream *ostr; // rbp
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  unsigned __int64 M_ptr; // rbx
  void *v39; // rdi
  struct _Unwind_Exception *v40; // rbx
  unsigned __int64 v41; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v42; // [rsp+10h] [rbp-C8h]
  common::milog::MiLogStream v43; // [rsp+20h] [rbp-B8h] BYREF
  common::milog::MiLogStream v44; // [rsp+40h] [rbp-98h] BYREF
  char v45[120]; // [rsp+60h] [rbp-78h] BYREF

  v41 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v41 = v4;
  }
  v1 = (char *)(v41 + 64);
  *(_QWORD *)v41 = 1102416563LL;
  *(_QWORD *)(v41 + 8) = "1 32 16 5 ss:42";
  *(_QWORD *)(v41 + 16) = MiException::backtrace;
  v42 = v41 >> 3;
  *(_DWORD *)(v42 + 2147450880) = -235802127;
  *(_DWORD *)(v42 + 2147450884) = -202178560;
  v2 = backtrace_symbols(
         (void **)((char *)MiException::last_frames + __readfsqword(0)),
         *(size_t *)((char *)&MiException::last_size + __readfsqword(0)));
  if ( v2 )
  {
    v3 = (void *)operator new[](0x1000uLL);
    *(_QWORD *)(v41 + 32) = v3;
    *(_QWORD *)(v41 + 40) = v3;
    memcpy(v3, "[EXCEPTION]:catch exception: ", 0x1DuLL);
    *(_QWORD *)(v41 + 40) += 29LL;
    _tls_init_7();
LABEL_20:
    v15 = __readfsqword(0);
    v16 = *(void **)(v41 + 40);
    v17 = (int)(*(_QWORD *)(v41 + 32) + 4096 - (_DWORD)v16);
    if ( *(std::string::size_type *)((char *)&MiException::exception_name[abi:cxx11]._M_string_length + v15) <= v17 )
      v17 = *(std::string::size_type *)((char *)&MiException::exception_name[abi:cxx11]._M_string_length + v15);
    memcpy(v16, *(const void **)((char *)&MiException::exception_name[abi:cxx11]._M_dataplus._M_p + v15), v17);
    v18 = (void *)(*(_QWORD *)(v41 + 40) + v17);
    *(_QWORD *)(v41 + 40) = v18;
    v19 = *(_QWORD *)(v41 + 32);
    v20 = (int)v19 + 4096 - (int)v18;
    if ( (_DWORD)v19 + 4096 != (_DWORD)v18 )
      v20 = 1LL;
    memcpy(v18, "\n", v20);
    *(_QWORD *)(v41 + 40) += v20;
    for ( i = 0LL; ; ++i )
    {
      if ( *(size_t *)((char *)&MiException::last_size + __readfsqword(0)) <= i )
      {
        free(v2);
        common::milog::MiLogStream::MiLogStream(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/exception.cpp",
          "backtrace",
          49);
        v32 = *(const char **)(v41 + 32);
        v33 = (int)(*(_QWORD *)(v41 + 40) - (_DWORD)v32);
        v44.log_ = (common::milog::MiLog *)&v44.ostr_ptr_._M_refcount;
        std::string::_M_construct<char const*>((std::string *const)&v44, v32, &v32[v33], v34);
        ostr = v43.ostr_;
        if ( *(_BYTE *)(((unsigned __int64)v43.ostr_ >> 3) + 0x7FFF8000) )
        {
          p_cur = v43.ostr_;
          __asan_report_load8(v43.ostr_);
        }
        else
        {
          p_cur = (common::milog::MilogStringStream *)&v43.ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v43.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            cur = v43.ostr_->buffer_.cur_;
            M_ptr = (unsigned __int64)&v43.ostr_->buffer_.data_[-(int)cur + 0x4000];
            if ( v44.ostr_ptr_._M_ptr <= (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)M_ptr )
              M_ptr = (unsigned __int64)v44.ostr_ptr_._M_ptr;
            memcpy(cur, v44.log_, M_ptr);
            ostr->buffer_.cur_ += M_ptr;
            if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v44.log_ != &v44.ostr_ptr_._M_refcount )
              operator delete(v44.log_);
            common::milog::MiLogStream::~MiLogStream(&v43);
            v39 = *(void **)(v41 + 32);
            if ( v39 )
              operator delete[](v39);
            goto LABEL_48;
          }
        }
        v40 = (struct _Unwind_Exception *)__asan_report_load8(p_cur);
        common::milog::MiLogStream::~MiLogStream(&v44);
        __asan_handle_no_return(&v44);
        _Unwind_Resume(v40);
      }
      v25 = (void *)*((_QWORD *)v1 - 3);
      v26 = (int)(*((_QWORD *)v1 - 4) + 4096 - (_DWORD)v25);
      if ( v26 > 0xB )
        v26 = 12LL;
      memcpy(v25, "[EXCEPTION]:", v26);
      *((_QWORD *)v1 - 3) += v26;
      v27 = (unsigned __int64)&v2[i];
      v28 = (void *)v27;
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        break;
      v0 = *(const char **)v27;
      if ( *(_QWORD *)v27 )
      {
        v29 = strlen(*(const char **)v27);
        v28 = (void *)*((_QWORD *)v1 - 3);
        v26 = (int)(*((_QWORD *)v1 - 4) + 4096 - (_DWORD)v28);
        if ( v29 <= v26 )
          v26 = v29;
        goto LABEL_26;
      }
      v30 = (void *)*((_QWORD *)v1 - 3);
      v31 = (int)(*((_QWORD *)v1 - 4) + 4096 - (_DWORD)v30);
      if ( v31 > 5 )
        v31 = 6LL;
      memcpy(v30, "(null)", v31);
      *((_QWORD *)v1 - 3) += v31;
LABEL_27:
      v22 = *((_QWORD *)v1 - 4);
      v23 = (void *)*((_QWORD *)v1 - 3);
      v24 = (int)v22 + 4096 - (int)v23;
      if ( (_DWORD)v22 + 4096 != (_DWORD)v23 )
        v24 = 1LL;
      memcpy(v23, "\n", v24);
      *((_QWORD *)v1 - 3) += v24;
    }
    __asan_report_load8(v27);
LABEL_26:
    memcpy(v28, v0, v26);
    *((_QWORD *)v1 - 3) += v26;
    goto LABEL_27;
  }
  common::milog::MiLogStream::MiLogStream(
    &v44,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/exception.cpp",
    "backtrace",
    39);
  v5 = v44.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v44.ostr_ >> 3) + 0x7FFF8000) )
  {
    v6 = v44.ostr_;
    __asan_report_load8(v44.ostr_);
    goto LABEL_12;
  }
  v6 = (common::milog::MilogStringStream *)&v44.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v44.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(v6);
    goto LABEL_13;
  }
  v7 = v44.ostr_->buffer_.cur_;
  v8 = (size_t)&v44.ostr_->buffer_.data_[-(int)v7 + 0x4000];
  if ( v8 > 0x23 )
    v8 = 36LL;
  memcpy(v7, "backtrace_symbols failed, exception:", v8);
  v5->buffer_.cur_ += v8;
  _tls_init_7();
LABEL_13:
  v9 = v44.ostr_;
  v1 = (char *)&MiException::exception_name[abi:cxx11] + __readfsqword(0);
  v10 = *((_QWORD *)v1 + 1);
  v11 = *(const void **)v1;
  if ( *(_BYTE *)(((unsigned __int64)v44.ostr_ >> 3) + 0x7FFF8000) )
  {
    v12 = v44.ostr_;
    __asan_report_load8(v44.ostr_);
    goto LABEL_19;
  }
  v1 = v44.ostr_->buffer_.data_ + 0x4000;
  v12 = (common::milog::MilogStringStream *)&v44.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v44.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(v12);
    goto LABEL_20;
  }
  v13 = v44.ostr_->buffer_.cur_;
  v14 = (int)v1 - (int)v13;
  if ( v10 <= v14 )
    v14 = v10;
  memcpy(v13, v11, v14);
  v9->buffer_.cur_ += v14;
  common::milog::MiLogStream::~MiLogStream(&v44);
LABEL_48:
  if ( v45 == (char *)v41 )
  {
    *(_QWORD *)((v41 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v41 = 1172321806LL;
    *(_QWORD *)((v41 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 55: range 0000000019B643C5-0000000019B6466F
void __fastcall __noreturn _cxa_throw(void *a1, struct type_info *lptinfo, void (__fastcall *a3)(void *))
{
  std::forward_iterator_tag v3; // cl
  void (__fastcall *v5)(void *); // r13
  const char *v6; // rbx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  char *v12; // rdi
  __int64 v13; // rdx
  void **v14; // rdi
  void (*v15)(void *, void *, void (*)(void *)) volatile; // rbx
  struct _Unwind_Exception *v16; // rbx
  std::string::pointer M_p; // rdi
  std::string v18; // [rsp+0h] [rbp-68h] BYREF
  std::string v19; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_BYTE *)((((unsigned __int64)lptinfo + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8((char *)lptinfo + 8);
  v5 = a3;
  v6 = (const char *)*((_QWORD *)lptinfo + 1);
  v7 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
  if ( v7 <= (*((_BYTE *)lptinfo + 8) & 7) && v7 )
    __asan_report_load1(*((_QWORD *)lptinfo + 1));
  if ( *v6 == 42 )
    ++v6;
  v18._M_dataplus._M_p = v18._anon_0._M_local_buf;
  if ( v6 )
    v8 = (__int64)&v6[strlen(v6)];
  else
    v8 = -1LL;
  std::string::_M_construct<char const*>(&v18, v6, (const char *)v8, v3);
  common::tools::MiscUtils::demangle(&v19, &v18);
  _tls_init_7();
  std::string::operator=((char *)&MiException::exception_name[abi:cxx11] + __readfsqword(0), &v19);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19._M_dataplus._M_p != &v19._anon_0 )
    operator delete(v19._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18._M_dataplus._M_p != &v18._anon_0 )
    operator delete(v18._M_dataplus._M_p);
  _tls_init_7();
  if ( std::string::find((char *)&MiException::exception_name[abi:cxx11] + __readfsqword(0), "std::", 0LL, 5LL) != -1 )
  {
    _tls_init_7();
    if ( (unsigned int)std::string::compare(
                         (char *)&MiException::exception_name[abi:cxx11] + __readfsqword(0),
                         "std::invalid_argument",
                         v9) )
    {
      _tls_init_7();
      if ( (unsigned int)std::string::compare(
                           (char *)&MiException::exception_name[abi:cxx11] + __readfsqword(0),
                           "std::out_of_range",
                           v10) )
      {
        _tls_init_7();
        if ( (unsigned int)std::string::compare(
                             (char *)&MiException::exception_name[abi:cxx11] + __readfsqword(0),
                             "std::regex_error",
                             v11) )
        {
          _tls_init_7();
          v12 = (char *)&MiException::exception_name[abi:cxx11] + __readfsqword(0);
          if ( (unsigned int)std::string::compare(v12, "std::filesystem::filesystem_error", v13) )
          {
            __asan_handle_no_return(v12);
            __assert_fail("false", "src/exception.cpp", 0x42u, "void __cxa_throw(void*, void*, void (*)(void*))");
          }
        }
      }
    }
  }
  v14 = (void **)((char *)MiException::last_frames + __readfsqword(0));
  *(size_t *)((char *)&MiException::last_size + __readfsqword(0)) = backtrace(v14, 30);
  if ( !(_BYTE)`guard variable for'__cxa_throw::rethrow )
  {
    v14 = (void **)&`guard variable for'__cxa_throw::rethrow;
    if ( __cxa_guard_acquire(&`guard variable for'__cxa_throw::rethrow) )
    {
      __cxa_throw::rethrow = (void (*const)(void *, void *, void (*)(void *)) volatile)dlsym(
                                                                                         (void *)0xFFFFFFFFFFFFFFFFLL,
                                                                                         "__cxa_throw");
      v14 = (void **)&`guard variable for'__cxa_throw::rethrow;
      __cxa_guard_release(&`guard variable for'__cxa_throw::rethrow);
    }
  }
  v15 = __cxa_throw::rethrow;
  __asan_handle_no_return(v14);
  v16 = (struct _Unwind_Exception *)((__int64 (__fastcall *)(void *, struct type_info *, void (__fastcall *)(void *)))v15)(
                                      a1,
                                      lptinfo,
                                      v5);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19._M_dataplus._M_p != &v19._anon_0 )
    operator delete(v19._M_dataplus._M_p);
  M_p = v18._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18._M_dataplus._M_p != &v18._anon_0 )
    operator delete(v18._M_dataplus._M_p);
  __asan_handle_no_return(M_p);
  _Unwind_Resume(v16);
};

// Line 73: range 0000000019B64671-0000000019B64688
void __cdecl GLOBAL__sub_I_exception_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
