// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/reactive_socket_recvfrom_op.hpp

// Line 100: range 000000000CDEE685-000000000CDEEF35
void __fastcall boost::asio::detail::reactive_socket_recvfrom_op<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,boost::system::error_code const&,unsigned long>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete(
        void *owner,
        boost::asio::detail::operation *base,
        const boost::system::error_code *a3,
        std::size_t a4)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r12
  unsigned __int64 next; // rdi
  boost::asio::detail::scheduler_operation *v10; // rax
  boost::asio::detail::scheduler_operation *v11; // rdx
  boost::asio::detail::operation *v12; // rax
  unsigned __int64 p_task_result; // rdi
  __m128i v14; // xmm0
  boost::asio::detail::operation *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  void (__fastcall *v22)(unsigned __int64, unsigned __int64, __int64, unsigned __int64); // rax
  unsigned __int64 v23; // rcx
  char *v24; // rax
  __int64 v25; // rax
  char v26; // dl
  char v27; // al
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  _QWORD *v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rdx
  char v41; // dl
  char v42; // al
  struct _Unwind_Exception *v43; // rbp
  std::allocator<void> a; // [rsp+1Fh] [rbp-199h] BYREF
  char v45[408]; // [rsp+20h] [rbp-198h] BYREF

  v5 = (unsigned __int64)base;
  v6 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v25 = __asan_stack_malloc_3(352LL);
    if ( v25 )
      v6 = v25;
  }
  v7 = v6 + 352;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 8 2 ex 64 24 5 p:107 128 32 5 w:108 192 48 11 handler:119 272 48 8 function";
  *(_QWORD *)(v6 + 16) = boost::asio::detail::reactive_socket_recvfrom_op<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,boost::system::error_code const&,unsigned long>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -234881024;
  v8[536862723] = -218959118;
  v8[536862725] = -218959118;
  v8[536862727] = -219021312;
  v8[536862728] = 62194;
  v8[536862730] = -202116109;
  *(_QWORD *)(v6 + 64) = base + 4;
  *(_QWORD *)(v6 + 72) = base;
  *(_QWORD *)(v6 + 80) = base;
  if ( *(_BYTE *)(((unsigned __int64)&base[5] >> 3) + 0x7FFF8000) )
  {
    next = (unsigned __int64)&base[5];
    __asan_report_load8(&base[5]);
LABEL_42:
    __asan_report_load8(next);
    goto LABEL_43;
  }
  next = (unsigned __int64)base[5].next_;
  if ( !next )
    goto LABEL_7;
  if ( *(_BYTE *)((next >> 3) + 0x7FFF8000) )
    goto LABEL_42;
  v10 = *(boost::asio::detail::scheduler_operation **)next;
  if ( *(_BYTE *)((*(_QWORD *)next >> 3) + 0x7FFF8000LL) )
  {
LABEL_43:
    __asan_report_load8(v10);
    goto LABEL_44;
  }
  next = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v10->next_)(
           next,
           base,
           *(_QWORD *)next >> 3,
           a4);
LABEL_7:
  *(_QWORD *)(v6 + 128) = next;
  v11 = (boost::asio::detail::operation *)((char *)base + 128);
  if ( *(char *)(((unsigned __int64)&base[5].func_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_44:
    next = (unsigned __int64)v11;
    __asan_report_load1(v11);
    goto LABEL_45;
  }
  *(_BYTE *)(v6 + 136) = base[5].func_;
  if ( next )
  {
    if ( !*(_BYTE *)((next >> 3) + 0x7FFF8000) )
    {
      v12 = *(boost::asio::detail::operation **)next;
      if ( !*(_BYTE *)((*(_QWORD *)next >> 3) + 0x7FFF8000LL) )
      {
        next = ((__int64 (__fastcall *)(unsigned __int64, boost::asio::detail::operation *, _QWORD, std::size_t))v12->next_)(
                 next,
                 base,
                 *(_QWORD *)next >> 3,
                 a4);
        goto LABEL_12;
      }
LABEL_46:
      p_task_result = (unsigned __int64)v12;
      __asan_report_load8(v12);
LABEL_47:
      __asan_report_load_n(p_task_result, 24LL);
      goto LABEL_48;
    }
LABEL_45:
    __asan_report_load8(next);
    goto LABEL_46;
  }
LABEL_12:
  *(_QWORD *)(v6 + 144) = next;
  *(_BYTE *)(v6 + 152) = *(_BYTE *)(v6 + 136);
  p_task_result = (unsigned __int64)&base[4];
  if ( *(_BYTE *)((((unsigned __int64)&base[4].task_result_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&base[4].task_result_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)base + 119) & 7)
    || *(char *)(((unsigned __int64)&base[4] >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_47;
  }
  v14 = _mm_loadu_si128((const __m128i *)&base[4]);
  *(__m128i *)(v6 + 192) = v14;
  *(_QWORD *)(v6 + 208) = *(_QWORD *)&base[4].task_result_;
  p_task_result = (unsigned __int64)&base[1];
  if ( *(_WORD *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load16(p_task_result);
    goto LABEL_49;
  }
  *(__m128i *)(v6 + 216) = _mm_loadu_si128((const __m128i *)&base[1]);
  p_task_result = (unsigned __int64)&base[1].task_result_;
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(p_task_result);
LABEL_50:
    __asan_report_load8(p_task_result);
    goto LABEL_51;
  }
  *(_QWORD *)(v6 + 232) = *(_QWORD *)&base[1].task_result_;
  *(_QWORD *)(v6 + 64) = v6 + 192;
  v15 = *(boost::asio::detail::operation **)(v6 + 80);
  if ( !v15 )
    goto LABEL_23;
  p_task_result = (unsigned __int64)&v15[5];
  if ( *(_BYTE *)(((unsigned __int64)&v15[5] >> 3) + 0x7FFF8000) )
    goto LABEL_50;
  p_task_result = (unsigned __int64)v15[5].next_;
  if ( p_task_result )
  {
    if ( !*(_BYTE *)((p_task_result >> 3) + 0x7FFF8000) )
    {
      v16 = *(_QWORD *)p_task_result + 8LL;
      if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)p_task_result + 8LL))();
        goto LABEL_22;
      }
LABEL_52:
      __asan_report_load8(v16);
      goto LABEL_53;
    }
LABEL_51:
    __asan_report_load8(p_task_result);
    goto LABEL_52;
  }
LABEL_22:
  *(_QWORD *)(v6 + 80) = 0LL;
LABEL_23:
  v5 = *(_QWORD *)(v6 + 72);
  if ( !v5 )
    goto LABEL_32;
  v17 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v17 )
  {
    v18 = (_QWORD *)(v17 + 8);
    if ( !*(_BYTE *)(((v17 + 8) >> 3) + 0x7FFF8000) )
    {
      v17 = *(_QWORD *)(v17 + 8);
      goto LABEL_27;
    }
LABEL_53:
    v17 = (unsigned __int64)v18;
    __asan_report_load8(v18);
    goto LABEL_54;
  }
LABEL_27:
  if ( v17 )
  {
    if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)v17 )
        goto LABEL_30;
LABEL_55:
      v26 = *(_BYTE *)(((v5 + 136) >> 3) + 0x7FFF8000);
      if ( v26 <= (char)((v5 - 120) & 7) && v26 )
      {
        __asan_report_load1(v5 + 136);
      }
      else
      {
        v27 = *(_BYTE *)((v5 >> 3) + 0x7FFF8000);
        if ( v27 > (char)(v5 & 7) || !v27 )
        {
          *(_BYTE *)v5 = *(_BYTE *)(v5 + 136);
          *(_QWORD *)v17 = v5;
          goto LABEL_31;
        }
      }
      v21 = v5;
      __asan_report_store1(v5);
      goto LABEL_62;
    }
LABEL_54:
    *(double *)v14.m128i_i64 = __asan_report_load8(v17);
    goto LABEL_55;
  }
LABEL_30:
  operator delete(*(void **)(v6 + 72));
LABEL_31:
  *(_QWORD *)(v6 + 72) = 0LL;
LABEL_32:
  if ( !owner )
    goto LABEL_65;
  if ( !*(_BYTE *)(v6 + 152) )
    goto LABEL_64;
  *(__m128i *)(v6 + 272) = _mm_load_si128((const __m128i *)(v6 + 192));
  v19 = *(_QWORD *)(v6 + 208);
  *(_QWORD *)(v6 + 288) = v19;
  *(__m128i *)(v6 + 296) = _mm_loadu_si128((const __m128i *)(v6 + 216));
  v20 = *(_QWORD *)(v6 + 232);
  *(_QWORD *)(v6 + 312) = v20;
  v21 = *(_QWORD *)(v6 + 280) + v19;
  v22 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64, unsigned __int64))(v6 + 272);
  v23 = (unsigned __int64)v22;
  if ( ((unsigned __int8)v22 & 1) == 0 )
  {
LABEL_38:
    v22(v21, v6 + 296, v20, v23);
    goto LABEL_65;
  }
  if ( !*(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
    v24 = (char *)v22 + *(_QWORD *)v21 - 1;
    v23 = (v23 + *(_QWORD *)v21 - 1) >> 3;
    if ( !*(_BYTE *)(v23 + 2147450880) )
    {
      v22 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64, unsigned __int64))v24;
      goto LABEL_38;
    }
    goto LABEL_63;
  }
LABEL_62:
  __asan_report_load8(v21);
LABEL_63:
  *(double *)v14.m128i_i64 = __asan_report_load8(v24);
LABEL_64:
  boost::asio::executor::dispatch<boost::asio::detail::binder2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,boost::system::error_code const&,unsigned long>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>,boost::system::error_code,unsigned long>,std::allocator<void>>(
    (const boost::asio::executor *const)(v6 + 144),
    (boost::asio::detail::binder2<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,const boost::system::error_code&,long unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(),boost::arg<2> (*)()> >,boost::system::error_code,long unsigned int> *)(v6 + 192),
    &a);
LABEL_65:
  if ( *(_BYTE *)(v6 + 136) )
    goto LABEL_66;
  v37 = *(_QWORD *)(v6 + 128);
  if ( !v37 )
  {
    *(_QWORD *)(v6 + 32) = &`vtable for'boost::asio::bad_executor + 2;
    __asan_handle_no_return(0LL);
    boost::throw_exception<boost::asio::bad_executor>((const boost::asio::bad_executor *)(v6 + 32));
  }
  if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v37);
    goto LABEL_98;
  }
  v38 = *(_QWORD *)v37 + 32LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    *(double *)v14.m128i_i64 = __asan_report_load8(v38);
    goto LABEL_99;
  }
  (*(void (**)(void))(*(_QWORD *)v37 + 32LL))();
LABEL_66:
  if ( *(_BYTE *)(v6 + 152) )
    goto LABEL_67;
LABEL_99:
  v39 = *(_QWORD *)(v6 + 144);
  if ( !v39 )
  {
    *(_QWORD *)(v6 + 32) = &`vtable for'boost::asio::bad_executor + 2;
    __asan_handle_no_return(0LL);
    boost::throw_exception<boost::asio::bad_executor>((const boost::asio::bad_executor *)(v6 + 32));
  }
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39);
    goto LABEL_105;
  }
  v40 = *(_QWORD *)v39 + 32LL;
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    v28 = v40;
    __asan_report_load8(v40);
LABEL_106:
    __asan_report_load8(v28);
    goto LABEL_107;
  }
  (*(void (__fastcall **)(double))(*(_QWORD *)v39 + 32LL))(*(double *)v14.m128i_i64);
LABEL_67:
  v28 = *(_QWORD *)(v6 + 144);
  if ( !v28 )
    goto LABEL_71;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  v29 = *(_QWORD *)v28 + 8LL;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    v30 = v29;
    __asan_report_load8(v29);
LABEL_108:
    __asan_report_load8(v30);
    goto LABEL_109;
  }
  (*(void (**)(void))(*(_QWORD *)v28 + 8LL))();
LABEL_71:
  v30 = *(_QWORD *)(v6 + 128);
  if ( !v30 )
    goto LABEL_75;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    goto LABEL_108;
  v31 = *(_QWORD *)v30 + 8LL;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    v33 = v31;
    __asan_report_load8(v31);
LABEL_110:
    __asan_report_load8(v33);
    goto LABEL_111;
  }
  (*(void (**)(void))(*(_QWORD *)v30 + 8LL))();
LABEL_75:
  v32 = *(_QWORD *)(v6 + 80);
  if ( !v32 )
    goto LABEL_82;
  v33 = v32 + 120;
  if ( *(_BYTE *)(((unsigned __int64)(v32 + 120) >> 3) + 0x7FFF8000) )
    goto LABEL_110;
  v33 = *(_QWORD *)(v32 + 120);
  if ( v33 )
  {
    if ( !*(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
    {
      v34 = *(_QWORD *)v33 + 8LL;
      if ( !*(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v33 + 8LL))();
        goto LABEL_81;
      }
LABEL_112:
      __asan_report_load8(v34);
      goto LABEL_113;
    }
LABEL_111:
    __asan_report_load8(v33);
    goto LABEL_112;
  }
LABEL_81:
  *(_QWORD *)(v6 + 80) = 0LL;
LABEL_82:
  v7 = *(_QWORD *)(v6 + 72);
  if ( !v7 )
    goto LABEL_90;
  v35 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( v35 )
  {
    v36 = (_QWORD *)(v35 + 8);
    if ( !*(_BYTE *)(((v35 + 8) >> 3) + 0x7FFF8000) )
    {
      v35 = *(_QWORD *)(v35 + 8);
      goto LABEL_86;
    }
LABEL_113:
    v35 = (unsigned __int64)v36;
    __asan_report_load8(v36);
LABEL_114:
    __asan_report_load8(v35);
    goto LABEL_115;
  }
LABEL_86:
  if ( !v35 )
  {
LABEL_89:
    operator delete((void *)v7);
    goto LABEL_90;
  }
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
    goto LABEL_114;
  if ( *(_QWORD *)v35 )
    goto LABEL_89;
LABEL_115:
  v41 = *(_BYTE *)(((v7 + 136) >> 3) + 0x7FFF8000);
  if ( v41 <= (char)((v7 - 120) & 7) && v41 )
  {
    __asan_report_load1(v7 + 136);
    goto LABEL_121;
  }
  v42 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
  if ( v42 <= (char)(v7 & 7) && v42 )
  {
LABEL_121:
    v43 = (struct _Unwind_Exception *)__asan_report_store1(v7);
    boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,boost::system::error_code const&,unsigned long>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor>>::~handler_work((boost::asio::detail::handler_work<boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,const boost::system::error_code&,long unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(),boost::arg<2> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor>,boost::asio::detail::io_object_executor<boost::asio::executor> > *const)(v7 - 224));
    boost::asio::detail::reactive_socket_recvfrom_op<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,boost::system::error_code const&,unsigned long>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::reactive_socket_recvfrom_op<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,const boost::system::error_code&,long unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(),boost::arg<2> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v7 - 288));
    __asan_handle_no_return(v7 - 288);
    _Unwind_Resume(v43);
  }
  *(_BYTE *)v7 = *(_BYTE *)(v7 + 136);
  *(_QWORD *)v35 = v7;
LABEL_90:
  if ( v45 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 577: range 000000000CDEAB1A-000000000CDEB0AD
boost::asio::detail::reactor_op::status __fastcall boost::asio::detail::reactive_socket_recvfrom_op_base<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>>::do_perform(
        boost::asio::detail::reactor_op *base)
{
  boost::system::error_code *p_ec; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // r15
  _DWORD *v5; // r14
  boost::asio::detail::reactor_op *v6; // rdi
  __int64 v7; // rax
  char v8; // al
  char v9; // al
  int *v10; // r13
  char v11; // dl
  signed __int64 v12; // rdx
  char v13; // cl
  char v14; // al
  int val; // eax
  char v16; // al
  boost::system::error_code *v17; // rdi
  char v18; // al
  boost::asio::detail::reactor_op::status result; // eax
  __int64 v20; // rax
  const boost::system::error_category **p_cat; // rdi
  const boost::system::error_category *cat; // rcx
  const boost::system::error_category **p_id; // rdi
  const boost::system::error_category *v24; // rcx
  const boost::system::error_category **v25; // rdi
  const boost::system::error_category *v26; // rax
  std::size_t addr_len; // [rsp+8h] [rbp-150h]
  int flags; // [rsp+18h] [rbp-140h]
  int fd; // [rsp+1Ch] [rbp-13Ch]
  __int64 v30; // [rsp+20h] [rbp-138h]
  std::size_t *p_bytes_transferred; // [rsp+30h] [rbp-128h]
  __int64 v32; // [rsp+38h] [rbp-120h]
  char v33[280]; // [rsp+40h] [rbp-118h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v20 = __asan_stack_malloc_2(224LL);
    if ( v20 )
      v4 = v20;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 2 ec 64 24 7 bufs:54 128 56 3 msg";
  *(_QWORD *)(v4 + 16) = boost::asio::detail::reactive_socket_recvfrom_op_base<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>>::do_perform;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  v6 = (boost::asio::detail::reactor_op *)((char *)base + 64);
  if ( *(_WORD *)(((unsigned __int64)&base[1].func_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load16(v6);
    goto LABEL_33;
  }
  v7 = *(_QWORD *)&base[1].task_result_;
  v2 = v4 + 224;
  *(_QWORD *)(v4 + 64) = base[1].func_;
  *(_QWORD *)(v4 + 72) = v7;
  v6 = (boost::asio::detail::reactor_op *)((char *)base + 72);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].task_result_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(v6);
    goto LABEL_34;
  }
  *(_QWORD *)(v4 + 80) = *(_QWORD *)&base[1].task_result_;
  v6 = (boost::asio::detail::reactor_op *)((char *)base + 80);
  if ( *(_BYTE *)(((unsigned __int64)&base[1].ec_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(v6);
LABEL_35:
    __asan_report_load4(v6);
LABEL_36:
    __asan_report_load4(v6);
    goto LABEL_37;
  }
  p_bytes_transferred = &base->bytes_transferred_;
  p_ec = &base->ec_;
  v30 = *(_QWORD *)&base[1].ec_.val_;
  v6 = (boost::asio::detail::reactor_op *)((char *)base + 88);
  v8 = *(_BYTE *)(((unsigned __int64)&base[1].ec_.cat_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_35;
  flags = (int)base[1].ec_.cat_;
  v6 = base + 1;
  v9 = *(_BYTE *)(((unsigned __int64)&base[1] >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_36;
  fd = (int)base[1].next_;
  addr_len = 28LL;
  do
  {
    v10 = __errno_location();
    v6 = (boost::asio::detail::reactor_op *)v10;
    v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v10 & 7) + 3) >= v11 && v11 )
    {
LABEL_37:
      __asan_report_store4(v6);
LABEL_38:
      __asan_report_load4(v6);
LABEL_39:
      __asan_report_store16(v6, v2);
LABEL_40:
      __asan_report_load4(v6);
      goto LABEL_41;
    }
    *v10 = 0;
    *(_QWORD *)(v4 + 136) = 0LL;
    *(_QWORD *)(v4 + 160) = 0LL;
    *(_QWORD *)(v4 + 168) = 0LL;
    *(_QWORD *)(v4 + 176) = 0LL;
    *(_QWORD *)(v4 + 128) = v30;
    *(_DWORD *)(v4 + 136) = addr_len;
    *(_QWORD *)(v4 + 144) = v4 + 64;
    *(_QWORD *)(v4 + 152) = 1LL;
    v2 = v4 + 128;
    v12 = recvmsg(fd, (struct msghdr *)(v4 + 128), flags);
    v6 = (boost::asio::detail::reactor_op *)v10;
    v13 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v10 & 7) + 3) >= v13 && v13 )
      goto LABEL_38;
    v6 = (boost::asio::detail::reactor_op *)p_ec;
    if ( *(_WORD *)(((unsigned __int64)p_ec >> 3) + 0x7FFF8000) )
      goto LABEL_39;
    *(_QWORD *)&p_ec->val_ = ((unsigned __int64)(*v10 != 0) << 32) | (unsigned int)*v10;
    p_ec->cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
    addr_len = *(unsigned int *)(v4 + 136);
    if ( v12 >= 0 )
      *(_QWORD *)&p_ec->val_ = v32 & 0xFFFFFF0000000000LL;
    v6 = (boost::asio::detail::reactor_op *)p_ec;
    v14 = *(_BYTE *)(((unsigned __int64)p_ec >> 3) + 0x7FFF8000);
    if ( v14 && v14 <= 3 )
      goto LABEL_40;
    val = p_ec->val_;
    if ( p_ec->val_ != 4 )
      break;
LABEL_41:
    p_cat = &p_ec->cat_;
    if ( *(_BYTE *)(((unsigned __int64)&p_ec->cat_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_cat);
LABEL_46:
      __asan_report_load8(p_cat);
      goto LABEL_47;
    }
    cat = p_ec->cat_;
    p_cat = (const boost::system::error_category **)&cat->id_;
    if ( *(_BYTE *)(((unsigned __int64)&cat->id_ >> 3) + 0x7FFF8000) )
      goto LABEL_46;
    v2 = 0x8FAFD21E25C5E09BLL;
  }
  while ( cat->id_ == 0x8FAFD21E25C5E09BLL );
  if ( val != 11 )
    goto LABEL_21;
LABEL_47:
  p_id = &p_ec->cat_;
  if ( *(_BYTE *)(((unsigned __int64)&p_ec->cat_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_id);
    goto LABEL_52;
  }
  v24 = p_ec->cat_;
  p_id = (const boost::system::error_category **)&v24->id_;
  if ( *(_BYTE *)(((unsigned __int64)&v24->id_ >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(p_id);
    goto LABEL_53;
  }
  if ( v24->id_ == 0x8FAFD21E25C5E09BLL )
  {
    v16 = 0;
    goto LABEL_25;
  }
LABEL_21:
  if ( val != 11 )
  {
LABEL_22:
    if ( v12 >= 0 )
    {
      *(_QWORD *)&base->ec_.val_ = 0LL;
      p_ec->cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
      if ( !*(_BYTE *)(((unsigned __int64)p_bytes_transferred >> 3) + 0x7FFF8000) )
      {
        base->bytes_transferred_ = v12;
        v16 = 1;
        goto LABEL_25;
      }
LABEL_59:
      __asan_report_store8();
    }
    if ( !*(_BYTE *)(((unsigned __int64)p_bytes_transferred >> 3) + 0x7FFF8000) )
    {
      base->bytes_transferred_ = 0LL;
      v16 = 1;
      goto LABEL_25;
    }
    v17 = (boost::system::error_code *)p_bytes_transferred;
    __asan_report_store8();
LABEL_63:
    __asan_report_load4(v17);
    goto LABEL_64;
  }
LABEL_53:
  v25 = &p_ec->cat_;
  if ( *(_BYTE *)(((unsigned __int64)&p_ec->cat_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v25);
    goto LABEL_58;
  }
  v26 = p_ec->cat_;
  v25 = (const boost::system::error_category **)&v26->id_;
  if ( *(_BYTE *)(((unsigned __int64)&v26->id_ >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v25);
    goto LABEL_59;
  }
  if ( v26->id_ != 0x8FAFD21E25C5E09BLL )
    goto LABEL_22;
  v16 = 0;
LABEL_25:
  if ( !v16 )
  {
    result = not_done;
    goto LABEL_68;
  }
  v17 = &base->ec_;
  v18 = *(_BYTE *)(((unsigned __int64)&base->ec_ >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_63;
  if ( base->ec_.val_ )
  {
    result = done;
    goto LABEL_68;
  }
LABEL_64:
  if ( addr_len > 0x80 )
  {
    *(_QWORD *)(v4 + 32) = 0x100000016LL;
    *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    __asan_handle_no_return(v17);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v4 + 32));
  }
  result = done;
LABEL_68:
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};
