// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/ssl/detail/impl/openssl_init.ipp

// Line 146: range 0000000019B804C4-0000000019B8070C
std::shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init> __cdecl boost::asio::ssl::detail::openssl_init_base::instance()
{
  volatile signed __int32 *v0; // rdi
  std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *v1; // rbx
  unsigned __int64 v2; // rdi
  std::shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init> result; // rax
  std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *v4; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v5; // rax
  _Atomic_word *p_M_use_count; // rdi
  char v7; // dl
  char v8; // cl
  double v9; // xmm0_8
  std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *v10; // rax
  std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *v11; // rdi
  char v12; // cl
  struct _Unwind_Exception *v13; // rax
  struct _Unwind_Exception *v14; // rbx

  v1 = (std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *)v0;
  if ( !(_BYTE)`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init
    && __cxa_guard_acquire(&`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init) )
  {
    v4 = (std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *)operator new(1uLL);
    boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_ptr = v4;
    boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_refcount._M_pi = 0LL;
    v5 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator new(0x18uLL);
    p_M_use_count = &v5->_M_use_count;
    v7 = *(_BYTE *)(((unsigned __int64)&v5->_M_use_count >> 3) + 0x7FFF8000);
    if ( v7 && v7 <= 3 )
    {
      __asan_report_store4(p_M_use_count);
    }
    else
    {
      v5->_M_use_count = 1;
      p_M_use_count = &v5->_M_weak_count;
      v8 = *(_BYTE *)(((unsigned __int64)&v5->_M_weak_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v5 + 12) & 7) + 3) < v8 || !v8 )
      {
        v5->_M_weak_count = 1;
        if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          v5->_vptr__Sp_counted_base = (int (**)(...))(&`vtable for'std::_Sp_counted_ptr<boost::asio::ssl::detail::openssl_init_base::do_init *,(__gnu_cxx::_Lock_policy)2>
                                                     + 2);
          if ( !*(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000) )
          {
            v5[1]._vptr__Sp_counted_base = (int (**)(...))v4;
            boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_refcount._M_pi = v5;
            __cxa_guard_release(&`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init);
            __cxa_atexit(
              (void (__fastcall *)(void *))std::shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init>::~shared_ptr,
              &boost::asio::ssl::detail::openssl_init_base::instance(void)::init,
              &_dso_handle);
            goto LABEL_3;
          }
LABEL_21:
          v9 = __asan_report_store8();
          v11 = v10;
          __cxa_begin_catch(v10);
          if ( v4 )
          {
            CONF_modules_unload(1LL, v9);
            v11 = v4;
            operator delete(v4, 1uLL);
          }
          __asan_handle_no_return(v11);
          __cxa_rethrow();
        }
LABEL_20:
        __asan_report_store8();
        goto LABEL_21;
      }
    }
    __asan_report_store4(p_M_use_count);
    goto LABEL_20;
  }
LABEL_3:
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    v2 = (unsigned __int64)v1;
    __asan_report_store8();
    goto LABEL_25;
  }
  *(_QWORD *)v1->gap0 = boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_ptr;
  result._M_ptr = (std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *)boost::asio::ssl::detail::openssl_init_base::instance(void)::init._M_refcount._M_pi;
  v2 = (unsigned __int64)&v1[8];
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((unsigned __int64)&v1[8] >> 3);
  if ( LOBYTE(result._M_refcount._M_pi[134215680]._vptr__Sp_counted_base) )
  {
LABEL_25:
    __asan_report_store8();
LABEL_26:
    result._M_ptr = (std::__shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(v2);
    goto LABEL_27;
  }
  *(_QWORD *)v1[8].gap0 = result._M_ptr;
  if ( !result._M_ptr )
    goto LABEL_10;
  v2 = (unsigned __int64)&result._M_ptr[8];
  if ( &_pthread_key_create )
  {
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)((v2 >> 3) + 0x7FFF8000);
    if ( (char)((v2 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
    {
      _InterlockedAdd((volatile signed __int32 *)v2, 1u);
      goto LABEL_10;
    }
    goto LABEL_26;
  }
LABEL_27:
  v12 = *(_BYTE *)(((unsigned __int64)&result._M_ptr[8] >> 3) + 0x7FFF8000);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(((LOBYTE(result._M_ptr) + 8) & 7u) + 3);
  if ( (char)(((LOBYTE(result._M_ptr) + 8) & 7) + 3) >= v12 && v12 )
  {
    __asan_report_load4(&result._M_ptr[8]);
    v14 = v13;
    __cxa_guard_abort(&`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init);
    __asan_handle_no_return(&`guard variable for'boost::asio::ssl::detail::openssl_init_base::instance(void)::init);
    _Unwind_Resume(v14);
  }
  ++*(_DWORD *)result._M_ptr[8].gap0;
LABEL_10:
  result._M_ptr = v1;
  return result;
};
