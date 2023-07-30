// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/smart_ptr/make_shared_object.hpp

// Line 248: range 0000000019B8D8F4-0000000019B8DD6D
unsigned __int64 __fastcall boost::make_shared<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type,std::integral_constant<bool,false>,boost::asio::io_context &>(
        unsigned __int64 a1,
        boost::asio::io_context *a2,
        boost::asio::io_context *args_0,
        boost::asio::io_context *args_1)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // rbx
  char *v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  char v11; // cl
  unsigned __int64 v12; // rdx
  char v13; // cl
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int8 v17; // al
  boost::asio::io_context *v18; // rdx
  boost::asio::io_context *v19; // rcx
  void *v20; // rdi
  unsigned __int64 p_use_count; // rdi
  __int64 v22; // rax
  char v23; // cl
  boost::detail::sp_counted_base *v24; // rdi
  char v25; // dl
  volatile signed __int32 *p_M_i; // rdi
  char v27; // dl
  boost::detail::sp_counted_base *v28; // rdi
  std::integral_constant<bool,false> *v29; // rdi
  std::integral_constant<bool,false> *v30; // rax
  std::integral_constant<bool,false> *v31; // rdi
  char v32; // dl
  boost::detail::sp_counted_base *v33; // rdi
  struct _Unwind_Exception *v35; // rbx
  boost::detail::sp_counted_base *v36; // rdi
  boost::detail::sp_counted_base *v38; // [rsp+18h] [rbp-80h]
  char v39[120]; // [rsp+20h] [rbp-78h] BYREF

  v6 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v6 = v10;
  }
  v7 = (char *)(v6 + 64);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 6 pt:250";
  *(_QWORD *)(v6 + 16) = boost::make_shared<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type,std::integral_constant<bool,false>,boost::asio::io_context &>;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  v9 = operator new(0x178uLL);
  v11 = *(_BYTE *)(((v9 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v9 + 8) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_store4(v9 + 8);
LABEL_18:
    __asan_report_store4(v12);
    goto LABEL_19;
  }
  *(_DWORD *)(v9 + 8) = 1;
  v12 = v9 + 12;
  v13 = *(_BYTE *)(((v9 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v9 + 12) & 7) + 3) >= v13 && v13 )
    goto LABEL_18;
  *(_DWORD *)(v9 + 12) = 1;
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
    goto LABEL_20;
  }
  *(_QWORD *)v9 = &`vtable for'boost::detail::sp_counted_impl_pd<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type *,boost::detail::sp_ms_deleter<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type>>
                + 2;
  if ( *(_BYTE *)(((v9 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8();
LABEL_21:
    v20 = (void *)__asan_report_store1(v14);
    __cxa_begin_catch(v20);
    __asan_handle_no_return(v20);
    __cxa_rethrow();
  }
  *(_QWORD *)(v9 + 16) = 0LL;
  v14 = v9 + 24;
  if ( *(char *)(((v9 + 24) >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_21;
  *(_BYTE *)(v9 + 24) = 0;
  *(_QWORD *)(v6 + 40) = v9;
  v15 = v9;
  if ( !v9 )
  {
LABEL_16:
    v4 = v15 + 8;
    v17 = (unsigned __int8)boost::detail::sp_forward<boost::asio::io_context &>(args_0);
    boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type::impl_type<boost::asio::io_context &>(
      (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type *const)(v15 + 8),
      (std::false_type)v17,
      v18,
      v19);
    goto LABEL_24;
  }
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
  }
  else
  {
    v16 = *(_QWORD *)v9 + 48LL;
    if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    {
      v15 = (*(__int64 (__fastcall **)(unsigned __int64, boost::asio::io_context *))(*(_QWORD *)v9 + 48LL))(v9, a2);
      goto LABEL_16;
    }
  }
  __asan_report_load8(v16);
LABEL_24:
  p_use_count = v15;
  if ( *(char *)((v15 >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(v15);
LABEL_60:
    __asan_report_load8(p_use_count);
    goto LABEL_61;
  }
  *(_BYTE *)v15 = 1;
  if ( !v4 )
    goto LABEL_48;
  p_use_count = v4 + 8;
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_60;
  v22 = *(_QWORD *)(v4 + 8);
  if ( !v22 )
    goto LABEL_31;
  p_use_count = v22 + 8;
  v23 = *(_BYTE *)(((unsigned __int64)(v22 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v22 + 8) & 7) + 3) >= v23 && v23 )
  {
LABEL_61:
    __asan_report_load4(p_use_count);
    goto LABEL_62;
  }
  if ( *(_DWORD *)(v22 + 8) )
    goto LABEL_48;
LABEL_31:
  v24 = *(boost::detail::sp_counted_base **)(v6 + 40);
  v38 = v24;
  if ( !v24 )
    goto LABEL_35;
  p_use_count = (unsigned __int64)&v24->use_count_;
  v25 = *(_BYTE *)((p_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_use_count & 7) + 3) >= v25 && v25 )
  {
LABEL_62:
    __asan_report_store4(p_use_count);
    goto LABEL_63;
  }
  _InterlockedAdd((volatile signed __int32 *)p_use_count, 1u);
LABEL_35:
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_store8();
    goto LABEL_64;
  }
  *(_QWORD *)v4 = v4;
  args_0 = (boost::asio::io_context *)(v4 + 8);
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    p_M_i = (volatile signed __int32 *)args_0;
    __asan_report_load8(args_0);
    goto LABEL_65;
  }
  if ( v38 == *(boost::detail::sp_counted_base **)(v4 + 8) )
    goto LABEL_46;
  if ( v38 )
  {
    p_M_i = &v38->weak_count_._M_i;
    v27 = *(_BYTE *)(((unsigned __int64)&v38->weak_count_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v38 + 12) & 7) + 3) < v27 || !v27 )
    {
      _InterlockedAdd(p_M_i, 1u);
      goto LABEL_42;
    }
LABEL_65:
    __asan_report_store4(p_M_i);
LABEL_66:
    __asan_report_store8();
    goto LABEL_67;
  }
LABEL_42:
  v28 = *(boost::detail::sp_counted_base **)(v4 + 8);
  if ( v28 )
    boost::detail::sp_counted_base::weak_release(v28);
  if ( *(_BYTE *)(((unsigned __int64)args_0 >> 3) + 0x7FFF8000) )
    goto LABEL_66;
  *(_QWORD *)(v4 + 8) = v38;
LABEL_46:
  if ( v38 )
    boost::detail::sp_counted_base::release(v38);
LABEL_48:
  if ( *(_BYTE *)((a1 >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_store8();
    goto LABEL_68;
  }
  *(_QWORD *)a1 = v4;
  v29 = *(std::integral_constant<bool,false> **)(v6 + 40);
  v30 = (std::integral_constant<bool,false> *)(a1 + 8);
  if ( *(_BYTE *)(((a1 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    v31 = v30;
    __asan_report_store8();
    goto LABEL_69;
  }
  *(_QWORD *)(a1 + 8) = v29;
  if ( !v29 )
    goto LABEL_54;
  v31 = v29 + 8;
  v32 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v31 & 7) + 3) >= v32 && v32 )
  {
LABEL_69:
    v35 = (struct _Unwind_Exception *)__asan_report_store4(v31);
    v36 = (boost::detail::sp_counted_base *)*((_QWORD *)v7 - 3);
    if ( v36 )
      boost::detail::sp_counted_base::release(v36);
    __asan_handle_no_return(v36);
    _Unwind_Resume(v35);
  }
  _InterlockedAdd((volatile signed __int32 *)v31->gap0, 1u);
LABEL_54:
  v33 = *(boost::detail::sp_counted_base **)(v6 + 40);
  if ( v33 )
    boost::detail::sp_counted_base::release(v33);
  if ( v39 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return a1;
};
