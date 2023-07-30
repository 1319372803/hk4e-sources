// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/resolve_query_op.hpp

// Line 77: range 0000000019B94CA0-0000000019B95E06
void __fastcall boost::asio::detail::resolve_query_op<boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v5; // r13
  boost::asio::detail::scheduler_operation *v6; // r14
  _DWORD *v7; // r12
  boost::asio::detail::operation *v8; // rdi
  char *v9; // rsi
  std::forward_iterator_tag v10; // cl
  __int64 v11; // rax
  char *v12; // r15
  unsigned int *p_func; // rdi
  boost::asio::detail::operation *v14; // rdi
  boost::asio::detail::scheduler_operation *next; // rax
  char v16; // cl
  char *v17; // rdi
  boost::asio::detail::operation *v18; // rdi
  unsigned __int64 i; // rax
  char *v20; // rdi
  char v21; // al
  char v22; // al
  unsigned __int64 v23; // rax
  char v24; // cl
  int v25; // eax
  boost::asio::detail::operation *v26; // rdi
  boost::asio::detail::operation **v27; // rdi
  boost::asio::detail::operation *v28; // rdi
  boost::asio::detail::scheduler_operation::func_type func; // rdi
  unsigned __int64 v30; // rdi
  boost::asio::detail::scheduler_operation *v31; // rax
  unsigned __int64 v32; // rdi
  boost::asio::detail::operation *v33; // rax
  boost::asio::detail::operation *v34; // rdi
  std::forward_iterator_tag v35; // cl
  std::forward_iterator_tag v36; // cl
  unsigned int *p_task_result; // rdi
  std::forward_iterator_tag v38; // cl
  __int64 v39; // rbp
  __int64 v40; // r15
  size_t v41; // rax
  std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>> *M_p; // r15
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v43; // rax
  _Atomic_word *p_M_use_count; // rdi
  char v45; // dl
  char v46; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>> *v48; // rax
  std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>> *v49; // rdi
  char v50; // dl
  __int64 v51; // rdi
  char v52; // al
  const char *v53; // rsi
  std::forward_iterator_tag v54; // cl
  boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp> *v55; // rdx
  char *v56; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v57; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v58; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v59; // rdi
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v62; // rdi
  unsigned __int64 impl; // rdi
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // rdx
  struct _Unwind_Exception *v69; // rbp
  char *v70; // rdi
  std::string::pointer namea; // [rsp+0h] [rbp-308h]
  struct addrinfo **pai; // [rsp+10h] [rbp-2F8h]
  std::__shared_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>,(__gnu_cxx::_Lock_policy)2>::element_type *paia; // [rsp+10h] [rbp-2F8h]
  struct addrinfo *req; // [rsp+18h] [rbp-2F0h]
  std::allocator<void> a; // [rsp+2Fh] [rbp-2D9h] BYREF
  std::__shared_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>,(__gnu_cxx::_Lock_policy)2> v77; // [rsp+30h] [rbp-2D8h] BYREF
  __int64 v78; // [rsp+40h] [rbp-2C8h]
  std::string v79; // [rsp+50h] [rbp-2B8h] BYREF
  std::string v80; // [rsp+70h] [rbp-298h] BYREF
  boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp> v81; // [rsp+90h] [rbp-278h] BYREF
  char v82[536]; // [rsp+F0h] [rbp-218h] BYREF

  v5 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_3(480LL);
    if ( v11 )
      v5 = v11;
  }
  v6 = (boost::asio::detail::scheduler_operation *)(v5 + 480);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 16 2 ec 80 24 4 p:83 144 24 5 w:105 208 28 8 endpoint 272 32 16 actual_host_name 336 104 11 handler:116";
  *(_QWORD *)(v5 + 16) = boost::asio::detail::resolve_query_op<boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862723] = -218959360;
  v7[536862724] = 62194;
  v7[536862725] = -218959360;
  v7[536862726] = 62194;
  v7[536862727] = -219020288;
  v7[536862728] = 62194;
  v7[536862729] = -219021312;
  v7[536862730] = 62194;
  v7[536862733] = -218103808;
  v7[536862734] = -202116109;
  *(_QWORD *)(v5 + 80) = (char *)base + 176;
  *(_QWORD *)(v5 + 88) = base;
  *(_QWORD *)(v5 + 96) = base;
  if ( owner )
  {
    v8 = base + 7;
    if ( *(_BYTE *)(((unsigned __int64)&base[7] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v8);
      goto LABEL_11;
    }
    if ( base[7].next_ != owner )
    {
      v6 = base + 1;
      pai = (struct addrinfo **)&base[10].task_result_;
      req = (struct addrinfo *)&base[2].func_;
      *(_QWORD *)(v5 + 272) = v5 + 288;
      v8 = (boost::asio::detail::operation *)((char *)base + 136);
      if ( !*(_BYTE *)(((unsigned __int64)&base[5].task_result_ >> 3) + 0x7FFF8000) )
      {
        v9 = *(char **)&base[5].task_result_;
        v8 = base + 6;
        if ( !*(_BYTE *)(((unsigned __int64)&base[6] >> 3) + 0x7FFF8000) )
        {
          std::string::_M_construct<char *>(
            (std::string *const)(v5 + 272),
            v9,
            (char *)base[6].next_ + (unsigned __int64)v9,
            (std::forward_iterator_tag)a4);
          goto LABEL_13;
        }
LABEL_12:
        __asan_report_load8(v8);
LABEL_13:
        v12 = *(char **)(v5 + 272);
        v80._M_dataplus._M_p = v80._anon_0._M_local_buf;
        p_func = (unsigned int *)&base[4].func_;
        if ( *(_BYTE *)(((unsigned __int64)&base[4].func_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_func);
        }
        else
        {
          p_func = &base[4].task_result_;
          if ( !*(_BYTE *)(((unsigned __int64)&base[4].task_result_ >> 3) + 0x7FFF8000) )
          {
            std::string::_M_construct<char *>(
              &v80,
              (char *)base[4].func_,
              (char *)base[4].func_ + *(_QWORD *)&base[4].task_result_,
              v10);
            goto LABEL_18;
          }
        }
        __asan_report_load8(p_func);
LABEL_18:
        namea = v80._M_dataplus._M_p;
        v14 = base + 2;
        if ( *(_BYTE *)(((unsigned __int64)&base[2] >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v14);
        }
        else
        {
          next = base[2].next_;
          if ( !next )
          {
LABEL_23:
            if ( !*(_WORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
            {
              base[1].next_ = (boost::asio::detail::scheduler_operation *)0x10000007DLL;
              v6->func_ = (boost::asio::detail::scheduler_operation::func_type)&boost::system::detail::cat_holder<void>::system_category_instance;
              goto LABEL_25;
            }
            goto LABEL_35;
          }
          v14 = (boost::asio::detail::operation *)&next->func_;
          v16 = *(_BYTE *)(((unsigned __int64)&next->func_ >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)next + 8) & 7) + 3) < v16 || !v16 )
          {
            if ( LODWORD(next->func_) )
            {
LABEL_36:
              if ( !namea )
                goto LABEL_40;
              v20 = namea;
              v21 = *(_BYTE *)(((unsigned __int64)namea >> 3) + 0x7FFF8000);
              if ( v21 <= ((unsigned __int8)namea & 7) && v21 )
              {
                __asan_report_load1(namea);
                goto LABEL_50;
              }
              if ( !*namea )
LABEL_40:
                namea = 0LL;
              if ( !v12 )
                goto LABEL_45;
              v20 = v12;
              v22 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
              if ( v22 > ((unsigned __int8)v12 & 7) || !v22 )
              {
                if ( *v12 )
                {
LABEL_46:
                  v23 = (unsigned __int64)__errno_location();
                  v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
                  if ( (char)((v23 & 7) + 3) < v24 || !v24 )
                  {
                    *(_DWORD *)v23 = 0;
                    v25 = getaddrinfo(namea, v12, req, pai);
LABEL_52:
                    if ( *(_WORD *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
                    {
                      v18 = v6;
                      __asan_report_store16(v6);
                      goto LABEL_55;
                    }
                    *(boost::system::error_code *)&base[1].next_ = boost::asio::detail::socket_ops::translate_addrinfo_error(v25);
LABEL_25:
                    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v80._M_dataplus._M_p != &v80._anon_0 )
                      operator delete(v80._M_dataplus._M_p);
                    v17 = *(char **)(v5 + 272);
                    if ( v17 != (char *)(v5 + 288) )
                      operator delete(v17);
                    v18 = base + 7;
                    if ( !*(_BYTE *)(((unsigned __int64)&base[7] >> 3) + 0x7FFF8000) )
                    {
                      v6 = base[7].next_;
                      v18 = (boost::asio::detail::scheduler_operation *)((char *)v6 + 40);
                      if ( *(char *)(((unsigned __int64)&v6[1].task_result_ >> 3) + 0x7FFF8000) >= 0 )
                      {
                        if ( !LOBYTE(v6[1].task_result_) )
                          goto LABEL_79;
                        for ( i = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                                                      + __readfsqword(0)); ; i = *(_QWORD *)(i + 16) )
                        {
                          if ( !i )
                            goto LABEL_60;
                          v18 = (boost::asio::detail::operation *)i;
                          if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
                          {
LABEL_57:
                            i = __asan_report_load8(v18);
                          }
                          else if ( v6 != *(boost::asio::detail::scheduler_operation **)i )
                          {
                            if ( *(_BYTE *)(((i + 16) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_load8(i + 16);
                              goto LABEL_73;
                            }
                            continue;
                          }
                          if ( !*(_BYTE *)(((i + 8) >> 3) + 0x7FFF8000) )
                          {
                            i = *(_QWORD *)(i + 8);
LABEL_60:
                            if ( !i )
                              goto LABEL_79;
                            if ( *(_BYTE *)(((unsigned __int64)base >> 3) + 0x7FFF8000) )
                            {
LABEL_73:
                              v26 = base;
                              __asan_report_store8();
                            }
                            else
                            {
                              base->next_ = 0LL;
                              v26 = (boost::asio::detail::operation *)(i + 32);
                              if ( !*(_BYTE *)(((i + 32) >> 3) + 0x7FFF8000) )
                              {
                                v27 = *(boost::asio::detail::operation ***)(i + 32);
                                if ( !v27 )
                                  goto LABEL_76;
                                if ( !*(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                                {
                                  *v27 = base;
                                  *(_QWORD *)(i + 32) = base;
                                  goto LABEL_88;
                                }
LABEL_75:
                                __asan_report_store8();
LABEL_76:
                                *(_QWORD *)(i + 32) = base;
                                if ( !*(_BYTE *)(((i + 24) >> 3) + 0x7FFF8000) )
                                {
                                  *(_QWORD *)(i + 24) = base;
                                  goto LABEL_88;
                                }
                                __asan_report_store8();
LABEL_79:
                                *(_QWORD *)(v5 + 48) = v6 + 2;
                                if ( *(char *)(((unsigned __int64)&v6[4] >> 3) + 0x7FFF8000) < 0 )
                                {
                                  __asan_report_load1(&v6[4]);
                                }
                                else if ( !LOBYTE(v6[4].next_) )
                                {
                                  *(_BYTE *)(v5 + 56) = 0;
                                  goto LABEL_82;
                                }
                                pthread_mutex_lock((pthread_mutex_t *)&v6[2].func_);
                                *(_BYTE *)(v5 + 56) = 1;
LABEL_82:
                                if ( *(_BYTE *)(((unsigned __int64)base >> 3) + 0x7FFF8000) )
                                {
                                  v28 = base;
                                  __asan_report_store8();
                                }
                                else
                                {
                                  base->next_ = 0LL;
                                  v28 = (boost::asio::detail::scheduler_operation *)((char *)v6 + 224);
                                  if ( !*(_BYTE *)(((unsigned __int64)&v6[9].func_ >> 3) + 0x7FFF8000) )
                                  {
                                    func = v6[9].func_;
                                    if ( func )
                                    {
                                      if ( !*(_BYTE *)(((unsigned __int64)func >> 3) + 0x7FFF8000) )
                                      {
                                        *(_QWORD *)func = base;
                                        v6[9].func_ = (boost::asio::detail::scheduler_operation::func_type)base;
                                        goto LABEL_87;
                                      }
LABEL_95:
                                      __asan_report_store8();
                                    }
                                    v6[9].func_ = (boost::asio::detail::scheduler_operation::func_type)base;
                                    if ( *(_BYTE *)(((unsigned __int64)&v6[9] >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store8();
                                    }
                                    else
                                    {
                                      v6[9].next_ = base;
LABEL_87:
                                      boost::asio::detail::scheduler::wake_one_thread_and_unlock(
                                        (boost::asio::detail::scheduler *const)v6,
                                        (boost::asio::detail::conditionally_enabled_mutex::scoped_lock *)(v5 + 48));
                                      if ( !*(_BYTE *)(v5 + 56) )
                                      {
LABEL_88:
                                        *(_QWORD *)(v5 + 96) = 0LL;
                                        *(_QWORD *)(v5 + 88) = 0LL;
                                        goto LABEL_89;
                                      }
                                    }
                                    pthread_mutex_unlock((pthread_mutex_t *)(*(_QWORD *)(v5 + 48) + 8LL));
                                    goto LABEL_88;
                                  }
                                }
                                __asan_report_load8(v28);
                                goto LABEL_95;
                              }
                            }
                            __asan_report_load8(v26);
                            goto LABEL_75;
                          }
                          i = __asan_report_load8(i + 8);
                        }
                      }
LABEL_56:
                      __asan_report_load1(v18);
                      goto LABEL_57;
                    }
LABEL_55:
                    __asan_report_load8(v18);
                    goto LABEL_56;
                  }
LABEL_51:
                  v25 = __asan_report_store4(v23);
                  goto LABEL_52;
                }
LABEL_45:
                v12 = 0LL;
                goto LABEL_46;
              }
LABEL_50:
              v23 = __asan_report_load1(v20);
              goto LABEL_51;
            }
            goto LABEL_23;
          }
        }
        __asan_report_load4(v14);
LABEL_35:
        __asan_report_store16(v6);
        goto LABEL_36;
      }
LABEL_11:
      __asan_report_load8(v8);
      goto LABEL_12;
    }
  }
  paia = (std::__shared_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>,(__gnu_cxx::_Lock_policy)2>::element_type *)&base[10];
  if ( *(_BYTE *)(((unsigned __int64)&base[10] >> 3) + 0x7FFF8000) )
  {
    v30 = (unsigned __int64)&base[10];
    __asan_report_load8(paia);
LABEL_120:
    v31 = (boost::asio::detail::scheduler_operation *)__asan_report_load8(v30);
    goto LABEL_121;
  }
  v30 = (unsigned __int64)base[10].next_;
  if ( !v30 )
    goto LABEL_105;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    goto LABEL_120;
  v31 = *(boost::asio::detail::scheduler_operation **)v30;
  if ( *(_BYTE *)((*(_QWORD *)v30 >> 3) + 0x7FFF8000LL) )
  {
LABEL_121:
    v32 = (unsigned __int64)v31;
    __asan_report_load8(v31);
    goto LABEL_122;
  }
  v30 = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v31->next_)(
          v30,
          base,
          *(_QWORD *)v30 >> 3,
          a4);
LABEL_105:
  *(_QWORD *)(v5 + 144) = v30;
  v32 = (unsigned __int64)&base[10].func_;
  if ( *(char *)(((unsigned __int64)&base[10].func_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_122:
    __asan_report_load1(v32);
    goto LABEL_123;
  }
  *(_BYTE *)(v5 + 152) = base[10].func_;
  v32 = (unsigned __int64)&base[8].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[8].func_ >> 3) + 0x7FFF8000) )
  {
LABEL_123:
    __asan_report_load8(v32);
LABEL_124:
    v33 = (boost::asio::detail::operation *)__asan_report_load8(v32);
    goto LABEL_125;
  }
  v32 = (unsigned __int64)base[8].func_;
  if ( !v32 )
    goto LABEL_111;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
    goto LABEL_124;
  v33 = *(boost::asio::detail::operation **)v32;
  if ( *(_BYTE *)((*(_QWORD *)v32 >> 3) + 0x7FFF8000LL) )
  {
LABEL_125:
    v34 = v33;
    __asan_report_load8(v33);
    goto LABEL_126;
  }
  v32 = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v33->next_)(
          v32,
          base,
          *(_QWORD *)v32 >> 3,
          a4);
LABEL_111:
  *(_QWORD *)(v5 + 160) = v32;
  v77._M_ptr = 0LL;
  v77._M_refcount._M_pi = 0LL;
  v78 = 0LL;
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>::coro_handler(
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> > *const)(v5 + 336),
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> > *)(v5 + 480));
  v34 = base + 1;
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_126:
    __asan_report_load16(v34);
LABEL_127:
    __asan_report_load8(v34);
LABEL_128:
    __asan_report_load8(v34);
    goto LABEL_129;
  }
  *(__m128i *)(v5 + 400) = _mm_loadu_si128((const __m128i *)&base[1]);
  std::__shared_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>,(__gnu_cxx::_Lock_policy)2> *const)(v5 + 416),
    &v77);
  *(_QWORD *)(v5 + 432) = v78;
  if ( v77._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v77._M_refcount._M_pi);
  *(_QWORD *)(v5 + 80) = v5 + 336;
  v34 = (boost::asio::detail::operation *)((char *)base + 256);
  if ( *(_BYTE *)(((unsigned __int64)&base[10].task_result_ >> 3) + 0x7FFF8000) )
    goto LABEL_127;
  if ( !*(_QWORD *)&base[10].task_result_ )
    goto LABEL_191;
  v80._M_dataplus._M_p = v80._anon_0._M_local_buf;
  v34 = (boost::asio::detail::operation *)((char *)base + 136);
  if ( *(_BYTE *)(((unsigned __int64)&base[5].task_result_ >> 3) + 0x7FFF8000) )
    goto LABEL_128;
  v34 = base + 6;
  if ( !*(_BYTE *)(((unsigned __int64)&base[6] >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      &v80,
      *(char **)&base[5].task_result_,
      (char *)base[6].next_ + *(_QWORD *)&base[5].task_result_,
      v35);
    goto LABEL_130;
  }
LABEL_129:
  __asan_report_load8(v34);
LABEL_130:
  v79._M_dataplus._M_p = v79._anon_0._M_local_buf;
  p_task_result = (unsigned int *)&base[4].func_;
  if ( *(_BYTE *)(((unsigned __int64)&base[4].func_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_task_result);
  }
  else
  {
    p_task_result = &base[4].task_result_;
    if ( !*(_BYTE *)(((unsigned __int64)&base[4].task_result_ >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        &v79,
        (char *)base[4].func_,
        (char *)base[4].func_ + *(_QWORD *)&base[4].task_result_,
        v36);
      goto LABEL_135;
    }
  }
  __asan_report_load8(p_task_result);
LABEL_135:
  v39 = *(_QWORD *)&base[10].task_result_;
  v77._M_ptr = 0LL;
  v77._M_refcount._M_pi = 0LL;
  v78 = 0LL;
  if ( !v39 )
    goto LABEL_183;
  *(_QWORD *)(v5 + 272) = v5 + 288;
  std::string::_M_construct<char *>(
    (std::string *const)(v5 + 272),
    v79._M_dataplus._M_p,
    &v79._M_dataplus._M_p[v79._M_string_length],
    v38);
  if ( *(_BYTE *)(((unsigned __int64)(v39 + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39 + 32);
  }
  else
  {
    v40 = *(_QWORD *)(v39 + 32);
    if ( v40 )
    {
      v41 = strlen(*(const char **)(v39 + 32));
      std::string::_M_replace(v5 + 272, 0LL, *(_QWORD *)(v5 + 280), v40, v41);
    }
  }
  M_p = (std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>> *)operator new(0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_145;
  }
  M_p->_M_impl._M_start = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&M_p->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_145:
    __asan_report_store8();
    goto LABEL_146;
  }
  M_p->_M_impl._M_finish = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&M_p->_M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_146:
    __asan_report_store8();
    goto LABEL_147;
  }
  M_p->_M_impl._M_end_of_storage = 0LL;
  *(_QWORD *)(v5 + 48) = M_p;
  v43 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)operator new(0x18uLL);
LABEL_147:
  p_M_use_count = &v43->_M_use_count;
  v45 = *(_BYTE *)(((unsigned __int64)&v43->_M_use_count >> 3) + 0x7FFF8000);
  if ( v45 && v45 <= 3 )
  {
    __asan_report_store4(p_M_use_count);
LABEL_156:
    __asan_report_store4(p_M_use_count);
    goto LABEL_157;
  }
  v43->_M_use_count = 1;
  p_M_use_count = &v43->_M_weak_count;
  v46 = *(_BYTE *)(((unsigned __int64)&v43->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v43 + 12) & 7) + 3) >= v46 && v46 )
    goto LABEL_156;
  v43->_M_weak_count = 1;
  if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
  {
LABEL_157:
    __asan_report_store8();
LABEL_158:
    __asan_report_store8();
    v49 = v48;
    __cxa_begin_catch(v48);
    if ( M_p )
    {
      std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>::~vector(M_p);
      v49 = M_p;
      operator delete(M_p, 0x18uLL);
    }
    __asan_handle_no_return(v49);
    __cxa_rethrow();
  }
  v43->_vptr__Sp_counted_base = (int (**)(...))(&`vtable for'std::_Sp_counted_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>> *,(__gnu_cxx::_Lock_policy)2>
                                              + 2);
  if ( *(_BYTE *)(((unsigned __int64)&v43[1] >> 3) + 0x7FFF8000) )
    goto LABEL_158;
  v43[1]._vptr__Sp_counted_base = (int (**)(...))M_p;
  *(_QWORD *)(v5 + 56) = v43;
  v77._M_ptr = *(std::__shared_ptr<std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 48);
  M_pi = v77._M_refcount._M_pi;
  v77._M_refcount._M_pi = v43;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  while ( v39 )
  {
    v50 = *(_BYTE *)(((unsigned __int64)(v39 + 4) >> 3) + 0x7FFF8000);
    if ( (char)(((v39 + 4) & 7) + 3) >= v50 && v50 )
    {
      __asan_report_load4(v39 + 4);
    }
    else if ( *(_DWORD *)(v39 + 4) != 10 && *(_DWORD *)(v39 + 4) != 2 )
    {
      goto LABEL_162;
    }
    *(_QWORD *)(v5 + 208) = 0LL;
    *(_QWORD *)(v5 + 216) = 0LL;
    *(_QWORD *)(v5 + 224) = 0LL;
    *(_DWORD *)(v5 + 232) = 0;
    *(_WORD *)(v5 + 208) = 2;
    v51 = v39 + 16;
    v52 = *(_BYTE *)(((unsigned __int64)(v39 + 16) >> 3) + 0x7FFF8000);
    if ( v52 && v52 <= 3 )
    {
      __asan_report_load4(v51);
LABEL_174:
      *(_QWORD *)(v5 + 48) = 0x100000016LL;
      *(_QWORD *)(v5 + 56) = &boost::system::detail::cat_holder<void>::system_category_instance;
      __asan_handle_no_return(v51);
      boost::asio::detail::do_throw_error((const boost::system::error_code *)(v5 + 48));
    }
    if ( *(_DWORD *)(v39 + 16) > 0x80u )
      goto LABEL_174;
    if ( *(_BYTE *)(((unsigned __int64)(v39 + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v39 + 24);
    }
    else
    {
      memcpy((void *)(v5 + 208), *(const void **)(v39 + 24), *(unsigned int *)(v39 + 16));
      paia = v77._M_ptr;
      req = (struct addrinfo *)v80._M_string_length;
      M_p = (std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>> *)v80._M_dataplus._M_p;
      v53 = *(const char **)(v5 + 272);
      v81.endpoint_.impl_.data_.base = (boost::asio::detail::socket_addr_type)_mm_load_si128((const __m128i *)(v5 + 208));
      *(_QWORD *)&v81.endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[2] = *(_QWORD *)(v5 + 224);
      v81.endpoint_.impl_.data_.v6.sin6_scope_id = *(_DWORD *)(v5 + 232);
      v81.host_name_._M_dataplus._M_p = v81.host_name_._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(
        &v81.host_name_,
        v53,
        &v53[*(_QWORD *)(v5 + 280)],
        (std::forward_iterator_tag)(*(_BYTE *)(v5 + 280) + (_BYTE)v53));
    }
    v81.service_name_._M_dataplus._M_p = v81.service_name_._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v81.service_name_, (const char *)M_p, (const char *)req + (_QWORD)M_p, v54);
    std::vector<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>::emplace_back<boost::asio::ip::basic_resolver_entry<boost::asio::ip::tcp>>(
      paia,
      &v81,
      v55);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v81.service_name_._M_dataplus._M_p != &v81.service_name_._anon_0 )
      operator delete(v81.service_name_._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v81.host_name_._M_dataplus._M_p != &v81.host_name_._anon_0 )
      operator delete(v81.host_name_._M_dataplus._M_p);
LABEL_162:
    if ( *(_BYTE *)(((unsigned __int64)(v39 + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v39 + 40);
      break;
    }
    v39 = *(_QWORD *)(v39 + 40);
  }
  v56 = *(char **)(v5 + 272);
  if ( v56 != (char *)(v5 + 288) )
    operator delete(v56);
LABEL_183:
  v57 = v77._M_refcount._M_pi;
  v77._M_refcount._M_pi = 0LL;
  *(_QWORD *)(v5 + 416) = v77._M_ptr;
  v58 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 424);
  *(_QWORD *)(v5 + 424) = v57;
  if ( v58 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v58);
  *(_QWORD *)(v5 + 432) = v78;
  if ( v77._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v77._M_refcount._M_pi);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v79._M_dataplus._M_p != &v79._anon_0 )
    operator delete(v79._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v80._M_dataplus._M_p != &v80._anon_0 )
    operator delete(v80._M_dataplus._M_p);
LABEL_191:
  boost::asio::detail::resolve_query_op<boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::resolve_query_op<boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v5 + 80));
  if ( owner )
    boost::asio::executor::dispatch<boost::asio::detail::binder2<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>,boost::system::error_code,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>,std::allocator<void>>(
      (const boost::asio::executor *const)(v5 + 160),
      (boost::asio::detail::binder2<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >,boost::system::error_code,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> > *)(v5 + 336),
      &a);
  v59 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 424);
  if ( v59 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v59);
  v60 = *(_QWORD *)(v5 + 360);
  if ( v60 )
  {
    if ( *(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v60);
    }
    else
    {
      v61 = *(_QWORD *)v60 + 8LL;
      if ( !*(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v60 + 8LL))();
        goto LABEL_199;
      }
    }
    impl = v61;
    __asan_report_load8(v61);
LABEL_213:
    __asan_report_load8(impl);
    goto LABEL_214;
  }
LABEL_199:
  v62 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 344);
  if ( v62 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v62);
  boost::asio::detail::io_object_executor<boost::asio::executor>::on_work_finished((const boost::asio::detail::io_object_executor<boost::asio::executor> *const)(v5 + 144));
  impl = (unsigned __int64)boost::asio::executor::get_impl((const boost::asio::executor *const)(v5 + 160));
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_213;
  v64 = *(_QWORD *)impl + 32LL;
  if ( *(_BYTE *)((v64 >> 3) + 0x7FFF8000) )
  {
LABEL_214:
    v65 = v64;
    __asan_report_load8(v64);
LABEL_215:
    __asan_report_load8(v65);
    goto LABEL_216;
  }
  (*(void (**)(void))(*(_QWORD *)impl + 32LL))();
  v65 = *(_QWORD *)(v5 + 160);
  if ( !v65 )
    goto LABEL_207;
  if ( *(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
    goto LABEL_215;
  v66 = *(_QWORD *)v65 + 8LL;
  if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
  {
LABEL_216:
    v67 = v66;
    __asan_report_load8(v66);
    goto LABEL_217;
  }
  (*(void (**)(void))(*(_QWORD *)v65 + 8LL))();
LABEL_207:
  v67 = *(_QWORD *)(v5 + 144);
  if ( v67 )
  {
    if ( !*(_BYTE *)((v67 >> 3) + 0x7FFF8000) )
    {
      v68 = *(_QWORD *)v67 + 8LL;
      if ( !*(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v67 + 8LL))();
        goto LABEL_89;
      }
LABEL_218:
      v69 = (struct _Unwind_Exception *)__asan_report_load8(v68);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v80._M_dataplus._M_p != &v80._anon_0 )
        operator delete(v80._M_dataplus._M_p);
      v70 = *(char **)(v5 + 272);
      if ( v70 != (char *)(v5 + 288) )
        operator delete(v70);
      boost::asio::detail::resolve_query_op<boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::resolve_query_op<boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v5 + 80));
      __asan_handle_no_return(v5 + 80);
      _Unwind_Resume(v69);
    }
LABEL_217:
    __asan_report_load8(v67);
    goto LABEL_218;
  }
LABEL_89:
  boost::asio::detail::resolve_query_op<boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::resolve_query_op<boost::asio::ip::tcp,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v5 + 80));
  if ( v82 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = -168430091;
  }
};
