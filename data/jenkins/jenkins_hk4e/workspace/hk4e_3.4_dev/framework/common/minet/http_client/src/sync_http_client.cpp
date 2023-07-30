// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/http_client/src/sync_http_client.cpp

// Line 34: range 0000000019B70BEE-0000000019B7184C
int32_t __fastcall common::minet::http_client::SyncHttpClient::request(
        common::minet::http_client::SyncHttpClient *const this,
        common::minet::http_client::HttpRequest *request,
        common::minet::http_client::HttpResponse *response,
        uint32_t timeout_ms)
{
  unsigned __int64 v7; // r12
  _DWORD *v8; // r13
  int32_t v9; // ebp
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rdi
  boost::asio::detail::scheduler *v15; // rax
  boost::asio::detail::scheduler *v16; // r14
  boost::asio::detail::service_registry *v17; // rdi
  __int64 v18; // rsi
  boost::asio::detail::strand_executor_service *v19; // rax
  pthread_mutex_t *v20; // rbp
  unsigned __int64 v21; // r14
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *v22; // rdi
  unsigned __int64 v23; // rax
  _Atomic_word *v24; // rdi
  char v25; // dl
  char v26; // cl
  unsigned __int64 p_list; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __pthread_internal_list *prev; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 p_next; // rdi
  __pthread_internal_list *next; // rax
  std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *v34; // rax
  __int64 v35; // rax
  _Atomic_word *p_M_use_count; // rdi
  char v37; // dl
  void *v38; // rdi
  struct _Unwind_Exception *v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // r14
  char v42; // cl
  boost::asio::detail::scheduler *v43; // rdi
  char *v44; // rsi
  char v45; // al
  __int64 v46; // rdx
  char v47; // dl
  __int64 v48; // rdx
  __int64 v49; // rax
  bool v50; // al
  bool *p_is_timeout; // rdi
  char v52; // al
  __int64 v53; // rdx
  std::runtime_error *exception; // rbp
  __int64 v55; // r14
  __int64 v56; // r15
  __int64 v57; // rax
  char *v58; // rdi
  char v59; // al
  __int64 v60; // rdx
  __int64 *v61; // rbx
  __int64 v62; // rax
  const char *v63; // rax
  pthread_mutex_t *responseb; // [rsp+10h] [rbp-178h]
  unsigned __int64 v66; // [rsp+18h] [rbp-170h]
  boost::asio::detail::posix_mutex *v67; // [rsp+20h] [rbp-168h]
  pthread_mutex_t *v68; // [rsp+28h] [rbp-160h]
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> salloc; // [rsp+38h] [rbp-150h] BYREF
  boost::asio::io_context *v70; // [rsp+40h] [rbp-148h]
  unsigned __int64 v71; // [rsp+48h] [rbp-140h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v72; // [rsp+50h] [rbp-138h]
  boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> > handler; // [rsp+60h] [rbp-128h] BYREF
  common::minet::http_client::SyncHttpClient::request::<lambda(boost::asio::yield_context)> function; // [rsp+80h] [rbp-108h] BYREF
  char v75[216]; // [rsp+B0h] [rbp-D8h] BYREF

  v7 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(160LL);
    if ( v11 )
      v7 = v11;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 4 13 timeout_ms:33 64 16 5 ec:41 96 16 6 ioc:42 128 16 2 ec";
  *(_QWORD *)(v7 + 16) = common::minet::http_client::SyncHttpClient::request;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -202178560;
  *(_DWORD *)(v7 + 48) = timeout_ms;
  if ( *(char *)(((unsigned __int64)&request->is_ssl >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(&request->is_ssl, request, response);
  }
  else if ( request->is_ssl )
  {
    v9 = common::minet::http_client::SyncHttpClient::sslRequest(this, request, response, *(_DWORD *)(v7 + 48));
    goto LABEL_5;
  }
  *(_DWORD *)(v7 + 64) = 0;
  *(_BYTE *)(v7 + 68) = 0;
  *(_QWORD *)(v7 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v12 = operator new(0x40uLL);
  v13 = pthread_mutex_init((pthread_mutex_t *)(v12 + 8), 0LL);
  *(_DWORD *)(v7 + 128) = v13;
  *(_BYTE *)(v7 + 132) = v13 != 0;
  *(_QWORD *)(v7 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( v13 )
  {
    __asan_handle_no_return(v12 + 8);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v7 + 128), "mutex");
  }
  v14 = v12 + 48;
  if ( *(_BYTE *)(((unsigned __int64)(v12 + 48) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v14, 0LL);
  }
  else
  {
    *(_QWORD *)(v12 + 48) = v7 + 96;
    v14 = v12 + 56;
    if ( !*(_BYTE *)(((unsigned __int64)(v12 + 56) >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v12 + 56) = 0LL;
      *(_QWORD *)(v7 + 96) = v12;
      v15 = (boost::asio::detail::scheduler *)operator new(0xF8uLL);
      goto LABEL_20;
    }
  }
  v15 = (boost::asio::detail::scheduler *)__asan_report_store8(v14, 0LL);
LABEL_20:
  v16 = v15;
  boost::asio::detail::scheduler::scheduler(v15, (boost::asio::execution_context *)(v7 + 96), -1, 0);
  v17 = *(boost::asio::detail::service_registry **)(v7 + 96);
  boost::asio::detail::service_registry::add_service<boost::asio::detail::scheduler>(v17, v16);
  *(_QWORD *)(v7 + 104) = v16;
  salloc.size_ = boost::context::stack_traits::default_size((boost::context::stack_traits *)v17);
  v18 = v7 + 96;
  function.__ioc = (boost::asio::io_context *)(v7 + 96);
  function.__request = request;
  function.__ec = (boost::beast::error_code *)(v7 + 64);
  function.__this = this;
  function.__timeout_ms = (uint32_t *)(v7 + 48);
  function.__response = response;
  v70 = (boost::asio::io_context *)(v7 + 96);
  if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
    v19 = (boost::asio::detail::strand_executor_service *)__asan_report_load8(v7 + 96);
  else
    v19 = boost::asio::detail::service_registry::use_service<boost::asio::detail::strand_executor_service>(
            *(boost::asio::detail::service_registry *const *)(v7 + 96),
            (boost::asio::io_context *)v18);
  v20 = (pthread_mutex_t *)v19;
  v21 = operator new(0x48uLL);
  v22 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v21 + 16);
  if ( *(_BYTE *)(((v21 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v22, v18);
    goto LABEL_29;
  }
  *(_QWORD *)(v21 + 16) = 0LL;
  v22 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v21 + 24);
  if ( *(_BYTE *)(((v21 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_store8(v22, v18);
    goto LABEL_30;
  }
  *(_QWORD *)(v21 + 24) = 0LL;
  v22 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v21 + 32);
  if ( *(_BYTE *)(((v21 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8(v22, v18);
    goto LABEL_31;
  }
  *(_QWORD *)(v21 + 32) = 0LL;
  v22 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v21 + 40);
  if ( *(_BYTE *)(((v21 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    v23 = __asan_report_store8(v22, v18);
    goto LABEL_32;
  }
  *(_QWORD *)(v21 + 40) = 0LL;
  v71 = v21;
  v23 = operator new(0x18uLL);
LABEL_32:
  v24 = (_Atomic_word *)(v23 + 8);
  v25 = *(_BYTE *)(((v23 + 8) >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
  {
    __asan_report_store4(v24, v18);
LABEL_60:
    v23 = __asan_report_store4(v24, v18);
    goto LABEL_61;
  }
  *(_DWORD *)(v23 + 8) = 1;
  v24 = (_Atomic_word *)(v23 + 12);
  v26 = *(_BYTE *)(((v23 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v23 + 12) & 7) + 3) >= v26 && v26 )
    goto LABEL_60;
  *(_DWORD *)(v23 + 12) = 1;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    p_list = v23;
    __asan_report_store8(v23, v18);
    goto LABEL_62;
  }
  *(_QWORD *)v23 = &`vtable for'std::_Sp_counted_ptr<boost::asio::detail::strand_executor_service::strand_impl *,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  p_list = v23 + 16;
  if ( *(_BYTE *)(((v23 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_store8(p_list, v18);
    goto LABEL_63;
  }
  *(_QWORD *)(v23 + 16) = v21;
  v72 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v23;
  p_list = v71 + 8;
  v28 = *(unsigned __int8 *)(((v71 + 8) >> 3) + 0x7FFF8000);
  if ( (v28 & 0x80u) != 0LL )
  {
LABEL_63:
    __asan_report_store1(p_list, v18, v28);
LABEL_64:
    __asan_report_store1(p_list, v18, v29);
    goto LABEL_65;
  }
  *(_BYTE *)(v71 + 8) = 0;
  p_list = v71 + 9;
  v29 = *(unsigned __int8 *)(((v71 + 9) >> 3) + 0x7FFF8000);
  if ( (char)v29 <= (char)((v71 + 9) & 7) && (_BYTE)v29 )
    goto LABEL_64;
  *(_BYTE *)(v71 + 9) = 0;
  responseb = v20 + 1;
  pthread_mutex_lock(v20 + 1);
  p_list = (unsigned __int64)&v20[40].__data.__list;
  if ( *(_BYTE *)(((unsigned __int64)&v20[40].__data.__list >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(p_list);
LABEL_66:
    v38 = (void *)__asan_report_load8(p_list);
    __cxa_begin_catch(v38);
    if ( v21 )
    {
      boost::asio::detail::strand_executor_service::strand_impl::~strand_impl((boost::asio::detail::strand_executor_service::strand_impl *const)v21);
      v38 = (void *)v21;
      operator delete((void *)v21, 0x48uLL);
    }
    __asan_handle_no_return(v38);
    __cxa_rethrow();
  }
  prev = v20[40].__data.__list.__prev;
  v20[40].__data.__list.__prev = (__pthread_internal_list *)((char *)&prev->__prev + 1);
  v31 = (((v71 >> 3) + v71) ^ ((unsigned __int64)&prev[4 * (v71 >> 3) + 165902235 + 4 * v71].__next
                             + (((v71 >> 3) + v71) >> 2)
                             + 1))
      % 0xC1;
  v21 = v31;
  p_list = (unsigned __int64)&v20[2] + 8 * v31;
  if ( *(_BYTE *)((p_list >> 3) + 0x7FFF8000) )
    goto LABEL_66;
  if ( *(_QWORD *)&v20[2].__size[8 * v31] )
    goto LABEL_44;
  v66 = (unsigned __int64)&v20[2] + 8 * v31;
  v67 = (boost::asio::detail::posix_mutex *)operator new(0x28uLL);
  boost::asio::detail::posix_mutex::posix_mutex(v67);
  if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v66);
LABEL_76:
    p_next = v66;
    __asan_report_store8(v66, v18);
    goto LABEL_77;
  }
  if ( *(_QWORD *)v66 )
  {
    v68 = *(pthread_mutex_t **)v66;
    pthread_mutex_destroy(*(pthread_mutex_t **)v66);
    v18 = 40LL;
    operator delete(v68, 0x28uLL);
  }
  if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
    goto LABEL_76;
  v18 = (__int64)v67;
  *(_QWORD *)v66 = v67;
LABEL_44:
  p_next = (unsigned __int64)&v20[2] + 8 * v21;
  if ( *(_BYTE *)((p_next >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_load8(p_next);
    goto LABEL_78;
  }
  p_next = v71;
  if ( *(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_store8(p_next, v18);
    goto LABEL_79;
  }
  *(_QWORD *)v71 = *(_QWORD *)&v20[2].__size[8 * v21];
  p_next = (unsigned __int64)&v20[40].__data.__list.__next;
  if ( *(_BYTE *)(((unsigned __int64)&v20[40].__data.__list.__next >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_load8(p_next);
    goto LABEL_80;
  }
  p_next = v71 + 48;
  if ( *(_BYTE *)(((v71 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_store8(p_next, v18);
    goto LABEL_81;
  }
  *(_QWORD *)(v71 + 48) = v20[40].__data.__list.__next;
  p_next = v71 + 56;
  if ( *(_BYTE *)(((v71 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8(p_next, v18);
    goto LABEL_82;
  }
  *(_QWORD *)(v71 + 56) = 0LL;
  next = v20[40].__data.__list.__next;
  if ( !next )
    goto LABEL_52;
  p_next = (unsigned __int64)&next[3].__next;
  if ( *(_BYTE *)(((unsigned __int64)&next[3].__next >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_store8(p_next, v18);
    goto LABEL_83;
  }
  next[3].__next = (__pthread_internal_list *)v71;
LABEL_52:
  v34 = (std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *)v71;
  v20[40].__data.__list.__next = (__pthread_internal_list *)v71;
  p_next = (unsigned __int64)&v34->service_;
  if ( !*(_BYTE *)(((unsigned __int64)&v34->service_ >> 3) + 0x7FFF8000) )
  {
    v34->service_ = (boost::asio::detail::strand_executor_service *)v20;
    pthread_mutex_unlock(responseb);
    handler.executor_.executor_.io_context_ = v70;
    handler.executor_.impl_._M_ptr = (std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *)v71;
    v35 = (__int64)v72;
    handler.executor_.impl_._M_refcount._M_pi = v72;
    if ( v72 )
    {
      p_M_use_count = &v72->_M_use_count;
      if ( &_pthread_key_create )
      {
        v37 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v37 || !v37 )
        {
          _InterlockedAdd(p_M_use_count, 1u);
          goto LABEL_58;
        }
        v35 = __asan_report_store4(p_M_use_count, v18);
      }
      v42 = *(_BYTE *)(((unsigned __int64)(v35 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v35 + 8) & 7) + 3) >= v42 && v42 )
      {
        __asan_report_load4(v35 + 8);
LABEL_90:
        if ( handler.executor_.impl_._M_refcount._M_pi )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(handler.executor_.impl_._M_refcount._M_pi);
        if ( v72 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v72);
        *(_DWORD *)(v7 + 128) = 0;
        *(_BYTE *)(v7 + 132) = 0;
        *(_QWORD *)(v7 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
        v43 = *(boost::asio::detail::scheduler **)(v7 + 104);
        v44 = (char *)(v7 + 128);
        boost::asio::detail::scheduler::run(v43, (boost::system::error_code *)(v7 + 128));
        if ( *(_DWORD *)(v7 + 128) )
        {
          __asan_handle_no_return(v43);
          boost::asio::detail::do_throw_error((const boost::system::error_code *)(v7 + 128));
        }
        if ( *(_DWORD *)(v7 + 64) != 1 )
        {
LABEL_96:
          v9 = *(_DWORD *)(v7 + 64);
          if ( !v9 )
          {
            boost::asio::execution_context::~execution_context((boost::asio::execution_context *const)(v7 + 96));
            v45 = *(_BYTE *)(((unsigned __int64)&this->is_timeout_ >> 3) + 0x7FFF8000);
            v46 = ((_BYTE)this + 4) & 7;
            if ( v45 <= (char)v46 && v45 )
            {
              __asan_report_load1(&this->is_timeout_, v44, v46);
            }
            else
            {
              if ( this->is_timeout_ )
              {
LABEL_130:
                v9 = 2;
                goto LABEL_5;
              }
              v47 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)this & 7) + 3) < v47 || !v47 )
              {
                this->ret_ = HTTP_SUCCESS;
                goto LABEL_5;
              }
            }
            __asan_report_store4(this, v44);
            goto LABEL_130;
          }
LABEL_116:
          exception = (std::runtime_error *)__cxa_allocate_exception(0x40uLL);
          v55 = *(_QWORD *)(v7 + 64);
          v56 = *(_QWORD *)(v7 + 72);
          std::runtime_error::runtime_error(exception, byte_1B5D8A60);
          if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
            __asan_report_store8(exception, byte_1B5D8A60);
          *(_QWORD *)exception = &`vtable for'boost::system::system_error + 2;
          if ( *(_WORD *)((((unsigned __int64)exception + 16) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          *((_QWORD *)exception + 2) = v55;
          *((_QWORD *)exception + 3) = v56;
          v57 = (__int64)exception + 48;
          if ( *(_BYTE *)((((unsigned __int64)exception + 32) >> 3) + 0x7FFF8000) )
            v57 = __asan_report_store8((char *)exception + 32, byte_1B5D8A60);
          *((_QWORD *)exception + 4) = v57;
          if ( *(_BYTE *)((((unsigned __int64)exception + 40) >> 3) + 0x7FFF8000) )
            __asan_report_store8((char *)exception + 40, byte_1B5D8A60);
          *((_QWORD *)exception + 5) = 0LL;
          v58 = (char *)exception + 48;
          v59 = *(_BYTE *)((((unsigned __int64)exception + 48) >> 3) + 0x7FFF8000);
          v60 = ((_BYTE)exception + 48) & 7;
          if ( v59 <= (char)v60 && v59 )
            __asan_report_store1(v58, byte_1B5D8A60, v60);
          *((_BYTE *)exception + 48) = 0;
          __asan_handle_no_return(v58);
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'boost::system::system_error,
            (void (__fastcall *)(void *))boost::system::system_error::~system_error);
        }
        v48 = *(_QWORD *)(v7 + 72);
        if ( *(_BYTE *)(((unsigned __int64)(&boost::beast::make_error_code(boost::beast::error)::cat + 1) >> 3)
                      + 0x7FFF8000) )
        {
          v49 = __asan_report_load8(&boost::beast::make_error_code(boost::beast::error)::cat + 1);
        }
        else
        {
          v49 = (__int64)*(&boost::beast::make_error_code(boost::beast::error)::cat + 1);
          if ( !v49 )
          {
            v50 = &boost::beast::make_error_code(boost::beast::error)::cat == (__int64 (__fastcall ***)(boost::beast::detail::error_codes *__hidden))v48;
            goto LABEL_107;
          }
        }
        p_is_timeout = (bool *)(v48 + 8);
        if ( *(_BYTE *)(((unsigned __int64)(v48 + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_is_timeout);
          goto LABEL_115;
        }
        v50 = v49 == *(_QWORD *)(v48 + 8);
LABEL_107:
        if ( !v50 )
          goto LABEL_96;
        p_is_timeout = &this->is_timeout_;
        v52 = *(_BYTE *)(((unsigned __int64)&this->is_timeout_ >> 3) + 0x7FFF8000);
        v53 = ((_BYTE)this + 4) & 7;
        if ( v52 > (char)v53 || !v52 )
        {
          this->is_timeout_ = 1;
          *(_QWORD *)(v7 + 64) = 0LL;
          *(_QWORD *)(v7 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
          goto LABEL_96;
        }
LABEL_115:
        __asan_report_store1(p_is_timeout, v44, v53);
        goto LABEL_116;
      }
      ++*(_DWORD *)(v35 + 8);
    }
LABEL_58:
    handler.target_ = boost::asio::detail::default_spawn_handler;
    boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
      &handler,
      &function,
      &salloc,
      0LL);
    goto LABEL_90;
  }
LABEL_83:
  v39 = (struct _Unwind_Exception *)__asan_report_store8(p_next, v18);
  v41 = v40;
  operator delete(v67, 0x28uLL);
  pthread_mutex_unlock(responseb);
  if ( v72 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v72);
  boost::asio::execution_context::~execution_context((boost::asio::execution_context *const)(v7 + 96));
  if ( v41 != 1 )
  {
    __asan_handle_no_return(v7 + 96);
    _Unwind_Resume(v39);
  }
  v61 = (__int64 *)__cxa_begin_catch(v39);
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&handler,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/sync_http_client.cpp",
    "request",
    108);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)handler.target_,
    "Error: ");
  if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v61);
  v62 = *v61;
  if ( *(_BYTE *)(((unsigned __int64)(*v61 + 16) >> 3) + 0x7FFF8000) )
    v62 = __asan_report_load8(*v61 + 16);
  v63 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v62 + 16))(v61);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)handler.target_,
    v63);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&handler);
  __cxa_end_catch();
  v9 = -1;
LABEL_5:
  if ( v75 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v9;
};

// Line 46: range 0000000019B71852-0000000019B72FA2
void __fastcall common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1}::operator()(
        unsigned __int64 __closure,
        __int64 a2)
{
  boost::system::error_code *p_handler; // r15
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r13
  _DWORD *v5; // r12
  __int64 v6; // rax
  boost::asio::io_context::impl_type **v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  std::string_view v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  std::string_view v13; // rdx
  unsigned __int64 v14; // rdi
  char v15; // al
  char v16; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rdi
  unsigned __int64 v18; // rdi
  char v19; // dl
  unsigned __int64 v20; // rdi
  char v21; // al
  char v22; // dl
  int32_t inited; // eax
  unsigned __int64 p_cat; // rdi
  char v25; // dl
  unsigned __int64 v26; // rdi
  char v27; // al
  char v28; // dl
  common::minet::http_client::HttpResponse *v29; // rsi
  unsigned __int64 v30; // rdi
  char v31; // al
  char v32; // dl
  unsigned __int64 v33; // rdi
  int32_t v34; // eax
  __int64 v35; // rax
  boost::asio::io_context *v36; // rdi
  char v37; // dl
  int v38; // r15d
  unsigned __int64 v39; // rcx
  char v40; // dl
  int v41; // eax
  char v42; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v43; // rdi
  char v44; // dl
  struct _Unwind_Exception *v45; // r14
  boost::system::error_code *v46; // [rsp+8h] [rbp-2F8h]
  boost::system::error_code *v47; // [rsp+8h] [rbp-2F8h]
  boost::system::error_code *v48; // [rsp+8h] [rbp-2F8h]
  unsigned __int64 ioc; // [rsp+18h] [rbp-2E8h]
  boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> >::return_type v50; // [rsp+20h] [rbp-2E0h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > handler; // [rsp+40h] [rbp-2C0h] BYREF
  char v52[656]; // [rsp+70h] [rbp-290h] BYREF

  ioc = __closure;
  v3 = a2;
  v4 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(608LL);
    if ( v6 )
      v4 = v6;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 16 9 stream:49 64 24 10 results:51 128 40 11 resolver:48 208 48 9 buffer:80 288 128 12 beas"
                        "t_req:66 448 128 12 beast_rsp:67";
  *(_QWORD *)(v4 + 16) = common::minet::http_client::SyncHttpClient::request(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1}::operator();
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862728] = -218959118;
  v5[536862733] = -218959118;
  v5[536862738] = -202116109;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(__closure);
  }
  else
  {
    p_handler = (boost::system::error_code *)__closure;
    a2 = *(_QWORD *)__closure;
    boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::io_object_impl<boost::asio::io_context>(
      (boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *const)(v4 + 128),
      *(boost::asio::io_context **)__closure,
      0LL);
    if ( !*(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    {
      p_handler = (boost::system::error_code *)__closure;
      a2 = *(_QWORD *)__closure;
      ZN5boost5beast12basic_streamINS_4asio2ip3tcpENS2_8executorENS0_21unlimited_rate_policyEEC2IRNS2_10io_contextEJEvEEOT_DpOT0_(
        (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *const)(v4 + 32),
        *(boost::asio::io_context **)__closure);
      goto LABEL_9;
    }
  }
  __asan_report_load8(__closure);
LABEL_9:
  v7 = (boost::asio::io_context::impl_type **)&p_handler[1];
  if ( *(_BYTE *)(((unsigned __int64)&p_handler[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7);
    goto LABEL_17;
  }
  p_handler = *(boost::system::error_code **)(ioc + 16);
  a2 = v3;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)v3);
  handler.ec_ = p_handler;
  v7 = (boost::asio::io_context::impl_type **)(ioc + 8);
  if ( *(_BYTE *)(((ioc + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    v9 = __asan_report_load8(v7);
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(ioc + 8);
  v9 = v8 + 40;
  if ( *(_BYTE *)(((v8 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    v11 = __asan_report_load8(v9);
    goto LABEL_19;
  }
  v11 = v8 + 32;
  if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    v12 = __asan_report_load8(v11);
    goto LABEL_20;
  }
  v12 = v8 + 8;
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    v8 = v12;
    __asan_report_load8(v12);
    goto LABEL_21;
  }
  if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v13._M_str = *(const char **)v8;
    a2 = v4 + 128;
    v13._M_len = *(_QWORD *)(v8 + 8);
    v10._M_len = *(_QWORD *)(v8 + 40);
    v10._M_str = *(const char **)(v8 + 32);
    boost::asio::ip::basic_resolver<boost::asio::ip::tcp,boost::asio::executor>::async_resolve<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
      (boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >::return_type *)(v4 + 64),
      (boost::asio::ip::basic_resolver<boost::asio::ip::tcp,boost::asio::executor> *const)(v4 + 128),
      v13,
      v10,
      (boost::asio::ip::resolver_base::flags)0,
      &handler);
    goto LABEL_22;
  }
LABEL_21:
  __asan_report_load8(v8);
LABEL_22:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  v14 = ioc + 16;
  if ( *(_BYTE *)(((ioc + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v14);
LABEL_35:
    __asan_report_load4(v14);
    goto LABEL_36;
  }
  v14 = *(_QWORD *)(ioc + 16);
  v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_35;
  if ( !*(_DWORD *)v14 )
    goto LABEL_38;
  v14 = ioc + 24;
  if ( !*(_BYTE *)(((ioc + 24) >> 3) + 0x7FFF8000) )
  {
    v14 = *(_QWORD *)(ioc + 24);
    v16 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
    if ( (char)((v14 & 7) + 3) < v16 || !v16 )
    {
      *(_DWORD *)v14 = 3;
      goto LABEL_30;
    }
    goto LABEL_37;
  }
LABEL_36:
  __asan_report_load8(v14);
LABEL_37:
  __asan_report_store4(v14, a2);
LABEL_38:
  v18 = ioc + 32;
  if ( *(_BYTE *)(((ioc + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v18);
LABEL_44:
    __asan_report_load4(v18);
    goto LABEL_45;
  }
  v18 = *(_QWORD *)(ioc + 32);
  v19 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
  if ( (char)((v18 & 7) + 3) >= v19 && v19 )
    goto LABEL_44;
  a2 = 1000000LL * *(unsigned int *)v18;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::expires_after(
    (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *const)(v4 + 32),
    (std::chrono::nanoseconds)a2);
  v18 = ioc + 16;
  if ( !*(_BYTE *)(((ioc + 16) >> 3) + 0x7FFF8000) )
  {
    v46 = *(boost::system::error_code **)(ioc + 16);
    p_handler = (boost::system::error_code *)&handler;
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
      &handler,
      (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)v3);
    handler.ec_ = v46;
    a2 = v4 + 32;
    boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_connect<boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void>(
      &v50,
      (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *const)(v4 + 32),
      (const boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> *)(v4 + 64),
      &handler);
    goto LABEL_46;
  }
LABEL_45:
  __asan_report_load8(v18);
LABEL_46:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)p_handler);
  v20 = ioc + 16;
  if ( *(_BYTE *)(((ioc + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v20);
LABEL_55:
    __asan_report_load4(v20);
    goto LABEL_56;
  }
  v20 = *(_QWORD *)(ioc + 16);
  v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_55;
  if ( !*(_DWORD *)v20 )
    goto LABEL_58;
  v20 = ioc + 24;
  if ( !*(_BYTE *)(((ioc + 24) >> 3) + 0x7FFF8000) )
  {
    v20 = *(_QWORD *)(ioc + 24);
    v22 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
    if ( (char)((v20 & 7) + 3) < v22 || !v22 )
    {
      *(_DWORD *)v20 = 5;
      goto LABEL_30;
    }
    goto LABEL_57;
  }
LABEL_56:
  __asan_report_load8(v20);
LABEL_57:
  __asan_report_store4(v20, a2);
LABEL_58:
  *(_QWORD *)(v4 + 296) = 0LL;
  *(_DWORD *)(v4 + 320) = 0;
  *(_QWORD *)(v4 + 304) = v4 + 296;
  *(_QWORD *)(v4 + 312) = v4 + 296;
  *(_QWORD *)(v4 + 288) = 0LL;
  *(_QWORD *)(v4 + 328) = v4 + 328;
  *(_QWORD *)(v4 + 336) = v4 + 328;
  *(_QWORD *)(v4 + 344) = 0LL;
  *(_QWORD *)(v4 + 352) = 0LL;
  *(_QWORD *)(v4 + 360) = 0LL;
  *(_QWORD *)(v4 + 368) = 0LL;
  *(_DWORD *)(v4 + 376) = 11;
  *(_DWORD *)(v4 + 380) = 0;
  *(_QWORD *)(v4 + 384) = v4 + 400;
  *(_QWORD *)(v4 + 392) = 0LL;
  *(_BYTE *)(v4 + 400) = 0;
  *(_QWORD *)(v4 + 456) = 0LL;
  *(_DWORD *)(v4 + 480) = 0;
  *(_QWORD *)(v4 + 464) = v4 + 456;
  *(_QWORD *)(v4 + 472) = v4 + 456;
  *(_QWORD *)(v4 + 448) = 0LL;
  *(_QWORD *)(v4 + 488) = v4 + 488;
  *(_QWORD *)(v4 + 496) = v4 + 488;
  *(_QWORD *)(v4 + 504) = 0LL;
  *(_QWORD *)(v4 + 512) = 0LL;
  *(_QWORD *)(v4 + 520) = 0LL;
  *(_QWORD *)(v4 + 528) = 0LL;
  *(_DWORD *)(v4 + 536) = 11;
  *(_DWORD *)(v4 + 540) = 200;
  *(_QWORD *)(v4 + 544) = v4 + 560;
  *(_QWORD *)(v4 + 552) = 0LL;
  *(_BYTE *)(v4 + 560) = 0;
  if ( *(_BYTE *)(((ioc + 8) >> 3) + 0x7FFF8000) )
  {
    inited = __asan_report_load8(ioc + 8);
  }
  else
  {
    p_handler = (boost::system::error_code *)ioc;
    a2 = v4 + 288;
    inited = common::minet::http_client::HttpUtils::initBeastRequest(
               *(const common::minet::http_client::HttpRequest **)(ioc + 8),
               (common::minet::http_client::BeastHttpRequest *)(v4 + 288));
  }
  if ( inited )
  {
    p_cat = (unsigned __int64)&p_handler[1].cat_;
    if ( *(_BYTE *)(((unsigned __int64)&p_handler[1].cat_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_cat);
    }
    else
    {
      p_cat = *(_QWORD *)(ioc + 24);
      v25 = *(_BYTE *)((p_cat >> 3) + 0x7FFF8000);
      if ( (char)((p_cat & 7) + 3) < v25 || !v25 )
      {
        *(_DWORD *)p_cat = 1;
LABEL_66:
        boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 448));
        boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 288));
LABEL_30:
        v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 72);
        if ( v17 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v17);
        goto LABEL_32;
      }
    }
    __asan_report_store4(p_cat, a2);
  }
  if ( *(_BYTE *)(((ioc + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(ioc + 16);
  }
  else
  {
    v47 = *(boost::system::error_code **)(ioc + 16);
    p_handler = (boost::system::error_code *)&handler;
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
      &handler,
      (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)v3);
    handler.ec_ = v47;
    a2 = v4 + 288;
    boost::beast::http::async_write<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
      (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *)(v4 + 32),
      (const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v4 + 288),
      &handler);
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)p_handler);
  v26 = ioc + 16;
  if ( *(_BYTE *)(((ioc + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v26);
LABEL_81:
    __asan_report_load4(v26);
    goto LABEL_82;
  }
  v26 = *(_QWORD *)(ioc + 16);
  v27 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
  if ( v27 && v27 <= 3 )
    goto LABEL_81;
  if ( !*(_DWORD *)v26 )
    goto LABEL_84;
  v26 = ioc + 24;
  if ( !*(_BYTE *)(((ioc + 24) >> 3) + 0x7FFF8000) )
  {
    v26 = *(_QWORD *)(ioc + 24);
    v28 = *(_BYTE *)((v26 >> 3) + 0x7FFF8000);
    if ( (char)((v26 & 7) + 3) < v28 || !v28 )
    {
      *(_DWORD *)v26 = 6;
      goto LABEL_66;
    }
    goto LABEL_83;
  }
LABEL_82:
  __asan_report_load8(v26);
LABEL_83:
  __asan_report_store4(v26, a2);
LABEL_84:
  boost::beast::basic_flat_buffer<std::allocator<char>>::basic_flat_buffer((boost::beast::basic_flat_buffer<std::allocator<char> > *const)(v4 + 208));
  v48 = *(boost::system::error_code **)(ioc + 16);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)v3);
  handler.ec_ = v48;
  v29 = (common::minet::http_client::HttpResponse *)(v4 + 208);
  boost::beast::http::async_read<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
    (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *)(v4 + 32),
    (boost::beast::basic_flat_buffer<std::allocator<char> > *)(v4 + 208),
    (boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v4 + 448),
    &handler);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  v30 = ioc + 16;
  if ( *(_BYTE *)(((ioc + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v30);
LABEL_94:
    __asan_report_load4(v30);
    goto LABEL_95;
  }
  v30 = *(_QWORD *)(ioc + 16);
  v31 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
    goto LABEL_94;
  if ( !*(_DWORD *)v30 )
    goto LABEL_97;
  v30 = ioc + 24;
  if ( !*(_BYTE *)(((ioc + 24) >> 3) + 0x7FFF8000) )
  {
    v30 = *(_QWORD *)(ioc + 24);
    v32 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
    if ( (char)((v30 & 7) + 3) < v32 || !v32 )
    {
      *(_DWORD *)v30 = 7;
LABEL_92:
      boost::beast::basic_flat_buffer<std::allocator<char>>::~basic_flat_buffer((boost::beast::basic_flat_buffer<std::allocator<char> > *const)(v4 + 208));
      goto LABEL_66;
    }
    goto LABEL_96;
  }
LABEL_95:
  __asan_report_load8(v30);
LABEL_96:
  __asan_report_store4(v30, v29);
LABEL_97:
  v33 = ioc + 40;
  if ( *(_BYTE *)(((ioc + 40) >> 3) + 0x7FFF8000) )
  {
    v34 = __asan_report_load8(v33);
  }
  else
  {
    v29 = *(common::minet::http_client::HttpResponse **)(ioc + 40);
    v33 = v4 + 448;
    v34 = common::minet::http_client::HttpUtils::initHttpResponse(
            (const common::minet::http_client::BeastHttpResponse *)(v4 + 448),
            v29,
            1);
  }
  if ( v34 )
  {
    v33 = ioc + 24;
    if ( *(_BYTE *)(((ioc + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v33);
    }
    else
    {
      v33 = *(_QWORD *)(ioc + 24);
      v44 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
      if ( (char)((v33 & 7) + 3) < v44 || !v44 )
      {
        *(_DWORD *)v33 = 7;
        goto LABEL_92;
      }
    }
    __asan_report_store4(v33, v29);
LABEL_122:
    __asan_handle_no_return(v33);
    __assert_fail(
      "px != 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
      0x2DEu,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = boost::beast:"
      ":basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy>::impl_type; typena"
      "me boost::detail::sp_member_access<T>::type = boost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::execut"
      "or, boost::beast::unlimited_rate_policy>::impl_type*]");
  }
  v35 = *(_QWORD *)(v4 + 32);
  if ( !v35 )
    goto LABEL_122;
  v36 = (boost::asio::io_context *)(ioc + 16);
  if ( *(_BYTE *)(((ioc + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v36);
LABEL_124:
    __asan_report_load4(v36);
    goto LABEL_125;
  }
  v3 = *(_QWORD *)(ioc + 16);
  v36 = (boost::asio::io_context *)(v35 + 24);
  v37 = *(_BYTE *)(((unsigned __int64)(v35 + 24) >> 3) + 0x7FFF8000);
  if ( v37 && v37 <= 3 )
    goto LABEL_124;
  v38 = *(_DWORD *)(v35 + 24);
  if ( v38 != -1 )
  {
    v39 = (unsigned __int64)__errno_location();
    ioc = v39;
    v40 = *(_BYTE *)((v39 >> 3) + 0x7FFF8000);
    if ( (char)((v39 & 7) + 3) < v40 || !v40 )
    {
      *(_DWORD *)v39 = 0;
      v41 = shutdown(v38, 2);
      v42 = *(_BYTE *)((ioc >> 3) + 0x7FFF8000);
      if ( (char)((ioc & 7) + 3) < v42 || !v42 )
      {
        if ( !*(_WORD *)((v3 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v3 = ((unsigned __int64)(*(_DWORD *)ioc != 0) << 32) | *(unsigned int *)ioc;
          *(_QWORD *)(v3 + 8) = &boost::system::detail::cat_holder<void>::system_category_instance;
          if ( !v41 )
            *(_QWORD *)v3 = 0LL;
          goto LABEL_113;
        }
LABEL_130:
        v45 = (struct _Unwind_Exception *)__asan_report_store16();
        boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
        boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::~basic_stream((boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *const)(v4 + 32));
        boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl((boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *const)(v4 + 128));
        __asan_handle_no_return(v4 + 128);
        _Unwind_Resume(v45);
      }
LABEL_129:
      __asan_report_load4(ioc);
      goto LABEL_130;
    }
LABEL_128:
    __asan_report_store4(v39, v29);
    goto LABEL_129;
  }
LABEL_125:
  if ( *(_WORD *)((v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16();
    goto LABEL_128;
  }
  *(_QWORD *)v3 = 0x100000009LL;
  *(_QWORD *)(v3 + 8) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_113:
  boost::beast::basic_flat_buffer<std::allocator<char>>::~basic_flat_buffer((boost::beast::basic_flat_buffer<std::allocator<char> > *const)(v4 + 208));
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 448));
  boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 288));
  v43 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 72);
  if ( v43 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v43);
LABEL_32:
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::~basic_stream((boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *const)(v4 + 32));
  boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl((boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *const)(v4 + 128));
  if ( v52 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
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
};

// Line 117: range 0000000019B6FDDA-0000000019B70BE8
int32_t __fastcall common::minet::http_client::SyncHttpClient::sslRequest(
        common::minet::http_client::SyncHttpClient *const this,
        common::minet::http_client::HttpRequest *request,
        common::minet::http_client::HttpResponse *response,
        uint32_t timeout_ms)
{
  unsigned __int64 v7; // r15
  _DWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rdi
  boost::asio::detail::scheduler *v13; // rax
  boost::asio::detail::scheduler *v14; // rbp
  std::shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init> v15; // rax
  __int64 (__fastcall ***v16)(boost::asio::error::detail::ssl_category *__hidden); // rdi
  __int64 v17; // rax
  __int64 error; // rsi
  __int64 v19; // rax
  char v20; // al
  __int64 verify_callback; // rax
  boost::context::stack_traits *v22; // rdi
  __int64 v23; // rsi
  boost::asio::detail::strand_executor_service *v24; // rax
  pthread_mutex_t *v25; // rbp
  unsigned __int64 v26; // r12
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *v27; // rdi
  unsigned __int64 v28; // rax
  _Atomic_word *v29; // rdi
  char v30; // dl
  char v31; // cl
  unsigned __int64 p_list; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __pthread_internal_list *prev; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 p_next; // rdi
  __pthread_internal_list *next; // rax
  std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *v39; // rax
  __int64 v40; // rax
  _Atomic_word *p_M_use_count; // rdi
  char v42; // dl
  void *v43; // rdi
  pthread_mutex_t *v44; // rax
  struct _Unwind_Exception *v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // r12
  char v48; // cl
  boost::asio::detail::scheduler *v49; // rdi
  char *v50; // rsi
  int32_t v51; // ebp
  char v52; // al
  __int64 v53; // rdx
  char v54; // dl
  __int64 v56; // rdx
  __int64 v57; // rax
  bool v58; // al
  bool *p_is_timeout; // rdi
  char v60; // al
  __int64 v61; // rdx
  __m128i *exception; // rbp
  __int64 m128i_i64; // rax
  __m128i *v64; // rdi
  char v65; // al
  __int64 v66; // rdx
  __int64 *v67; // rbx
  __int64 v68; // rax
  const char *v69; // rax
  pthread_mutex_t *mutex[2]; // [rsp+0h] [rbp-1D8h] BYREF
  char *v71; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v72; // [rsp+18h] [rbp-1C0h]
  void *v73; // [rsp+20h] [rbp-1B8h]
  void *v74; // [rsp+28h] [rbp-1B0h]
  boost::context::basic_fixedsize_stack<boost::context::stack_traits> salloc; // [rsp+38h] [rbp-1A0h] BYREF
  boost::asio::io_context *v76; // [rsp+40h] [rbp-198h]
  unsigned __int64 v77; // [rsp+48h] [rbp-190h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v78; // [rsp+50h] [rbp-188h]
  boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> > handler; // [rsp+60h] [rbp-178h] BYREF
  common::minet::http_client::SyncHttpClient::sslRequest::<lambda(boost::asio::yield_context)> function; // [rsp+80h] [rbp-158h] BYREF
  char v81[280]; // [rsp+C0h] [rbp-118h] BYREF

  mutex[0] = (pthread_mutex_t *)response;
  v7 = (unsigned __int64)v81;
  v71 = v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(224LL);
    if ( v9 )
      v7 = v9;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "5 48 4 14 timeout_ms:116 64 16 6 ec:120 96 16 7 ioc:121 128 16 2 ec 160 24 7 ctx:122";
  *(_QWORD *)(v7 + 16) = common::minet::http_client::SyncHttpClient::sslRequest;
  v8 = (_DWORD *)(v7 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862725] = -218103808;
  v8[536862726] = -202116109;
  *(_DWORD *)(v7 + 48) = timeout_ms;
  *(_DWORD *)(v7 + 64) = 0;
  *(_BYTE *)(v7 + 68) = 0;
  *(_QWORD *)(v7 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v10 = operator new(0x40uLL);
  v11 = pthread_mutex_init((pthread_mutex_t *)(v10 + 8), 0LL);
  *(_DWORD *)(v7 + 128) = v11;
  *(_BYTE *)(v7 + 132) = v11 != 0;
  *(_QWORD *)(v7 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( v11 )
  {
    __asan_handle_no_return(v10 + 8);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v7 + 128), "mutex");
  }
  v12 = v10 + 48;
  if ( *(_BYTE *)(((unsigned __int64)(v10 + 48) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v12, 0LL);
  }
  else
  {
    *(_QWORD *)(v10 + 48) = v7 + 96;
    v12 = v10 + 56;
    if ( !*(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v10 + 56) = 0LL;
      *(_QWORD *)(v7 + 96) = v10;
      v13 = (boost::asio::detail::scheduler *)operator new(0xF8uLL);
      goto LABEL_14;
    }
  }
  v13 = (boost::asio::detail::scheduler *)__asan_report_store8(v12, 0LL);
LABEL_14:
  v14 = v13;
  boost::asio::detail::scheduler::scheduler(v13, (boost::asio::execution_context *)(v7 + 96), -1, 0);
  boost::asio::detail::service_registry::add_service<boost::asio::detail::scheduler>(
    *(boost::asio::detail::service_registry *const *)(v7 + 96),
    v14);
  *(_QWORD *)(v7 + 104) = v14;
  *(_QWORD *)(v7 + 160) = 0LL;
  v15 = boost::asio::ssl::detail::openssl_init_base::instance();
  ERR_clear_error(v7 + 168, v14, v15._M_refcount._M_pi);
  v16 = (__int64 (__fastcall ***)(boost::asio::error::detail::ssl_category *__hidden))TLS_client_method();
  v17 = SSL_CTX_new(v16);
  *(_QWORD *)(v7 + 160) = v17;
  if ( v17 )
  {
    SSL_CTX_ctrl(v17, 123LL, 771LL, 0LL);
    v16 = *(__int64 (__fastcall ****)(boost::asio::error::detail::ssl_category *__hidden))(v7 + 160);
    SSL_CTX_ctrl(v16, 124LL, 771LL, 0LL);
  }
  if ( *(_QWORD *)(v7 + 160) )
    goto LABEL_17;
  error = ERR_get_error();
  *(_DWORD *)(v7 + 128) = error;
  v19 = (__int64)*(&boost::asio::error::get_ssl_category(void)::instance + 1);
  if ( v19 == 0x8FAFD21E25C5E09BLL || v19 == 0xB2AB117A257EDF0DLL )
  {
    v20 = (_DWORD)error != 0;
LABEL_22:
    *(_BYTE *)(v7 + 132) = v20;
    *(_QWORD *)(v7 + 136) = &boost::asio::error::get_ssl_category(void)::instance;
    if ( *(_DWORD *)(v7 + 128) )
    {
      __asan_handle_no_return(v16);
      boost::asio::detail::do_throw_error((const boost::system::error_code *)(v7 + 128), "context");
    }
LABEL_17:
    SSL_CTX_set_options(*(_QWORD *)(v7 + 160), 0x20000LL);
    goto LABEL_26;
  }
  if ( !*(_BYTE *)(((unsigned __int64)(boost::asio::error::get_ssl_category(void)::instance + 6) >> 3) + 0x7FFF8000) )
  {
    v16 = &boost::asio::error::get_ssl_category(void)::instance;
    v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(boost::asio::error::detail::ssl_category *__hidden), __int64))boost::asio::error::get_ssl_category(void)::instance[6])(
            &boost::asio::error::get_ssl_category(void)::instance,
            error);
    goto LABEL_22;
  }
  __asan_report_load8(boost::asio::error::get_ssl_category(void)::instance + 6);
LABEL_26:
  *(_DWORD *)(v7 + 128) = 0;
  *(_BYTE *)(v7 + 132) = 0;
  *(_QWORD *)(v7 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  verify_callback = SSL_CTX_get_verify_callback(*(_QWORD *)(v7 + 160));
  v22 = *(boost::context::stack_traits **)(v7 + 160);
  SSL_CTX_set_verify(v22, 0LL, verify_callback);
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_QWORD *)(v7 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  salloc.size_ = boost::context::stack_traits::default_size(v22);
  v23 = v7 + 96;
  function.__ioc = (boost::asio::io_context *)(v7 + 96);
  function.__ctx = (boost::asio::ssl::context *)(v7 + 160);
  function.__request = request;
  function.__ec = (boost::beast::error_code *)(v7 + 64);
  function.__this = this;
  function.__timeout_ms = (uint32_t *)(v7 + 48);
  function.__response = (common::minet::http_client::HttpResponse *)mutex[0];
  v76 = (boost::asio::io_context *)(v7 + 96);
  if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
    v24 = (boost::asio::detail::strand_executor_service *)__asan_report_load8(v7 + 96);
  else
    v24 = boost::asio::detail::service_registry::use_service<boost::asio::detail::strand_executor_service>(
            *(boost::asio::detail::service_registry *const *)(v7 + 96),
            (boost::asio::io_context *)v23);
  v25 = (pthread_mutex_t *)v24;
  v26 = operator new(0x48uLL);
  v27 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v26 + 16);
  if ( *(_BYTE *)(((v26 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v27, v23);
    goto LABEL_35;
  }
  *(_QWORD *)(v26 + 16) = 0LL;
  v27 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v26 + 24);
  if ( *(_BYTE *)(((v26 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8(v27, v23);
    goto LABEL_36;
  }
  *(_QWORD *)(v26 + 24) = 0LL;
  v27 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v26 + 32);
  if ( *(_BYTE *)(((v26 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_store8(v27, v23);
    goto LABEL_37;
  }
  *(_QWORD *)(v26 + 32) = 0LL;
  v27 = (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v26 + 40);
  if ( *(_BYTE *)(((v26 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    v28 = __asan_report_store8(v27, v23);
    goto LABEL_38;
  }
  *(_QWORD *)(v26 + 40) = 0LL;
  v77 = v26;
  v28 = operator new(0x18uLL);
LABEL_38:
  v29 = (_Atomic_word *)(v28 + 8);
  v30 = *(_BYTE *)(((v28 + 8) >> 3) + 0x7FFF8000);
  if ( v30 && v30 <= 3 )
  {
    __asan_report_store4(v29, v23);
LABEL_66:
    v28 = __asan_report_store4(v29, v23);
    goto LABEL_67;
  }
  *(_DWORD *)(v28 + 8) = 1;
  v29 = (_Atomic_word *)(v28 + 12);
  v31 = *(_BYTE *)(((v28 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v28 + 12) & 7) + 3) >= v31 && v31 )
    goto LABEL_66;
  *(_DWORD *)(v28 + 12) = 1;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    p_list = v28;
    __asan_report_store8(v28, v23);
    goto LABEL_68;
  }
  *(_QWORD *)v28 = &`vtable for'std::_Sp_counted_ptr<boost::asio::detail::strand_executor_service::strand_impl *,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  p_list = v28 + 16;
  if ( *(_BYTE *)(((v28 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_store8(p_list, v23);
    goto LABEL_69;
  }
  *(_QWORD *)(v28 + 16) = v26;
  v78 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v28;
  p_list = v77 + 8;
  v33 = *(unsigned __int8 *)(((v77 + 8) >> 3) + 0x7FFF8000);
  if ( (v33 & 0x80u) != 0LL )
  {
LABEL_69:
    __asan_report_store1(p_list, v23, v33);
LABEL_70:
    __asan_report_store1(p_list, v23, v34);
    goto LABEL_71;
  }
  *(_BYTE *)(v77 + 8) = 0;
  p_list = v77 + 9;
  v34 = *(unsigned __int8 *)(((v77 + 9) >> 3) + 0x7FFF8000);
  if ( (char)v34 <= (char)((v77 + 9) & 7) && (_BYTE)v34 )
    goto LABEL_70;
  *(_BYTE *)(v77 + 9) = 0;
  mutex[0] = v25 + 1;
  pthread_mutex_lock(v25 + 1);
  p_list = (unsigned __int64)&v25[40].__data.__list;
  if ( *(_BYTE *)(((unsigned __int64)&v25[40].__data.__list >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8(p_list);
LABEL_72:
    v43 = (void *)__asan_report_load8(p_list);
    __cxa_begin_catch(v43);
    if ( v26 )
    {
      boost::asio::detail::strand_executor_service::strand_impl::~strand_impl((boost::asio::detail::strand_executor_service::strand_impl *const)v26);
      v43 = (void *)v26;
      operator delete((void *)v26, 0x48uLL);
    }
    __asan_handle_no_return(v43);
    __cxa_rethrow();
  }
  prev = v25[40].__data.__list.__prev;
  v25[40].__data.__list.__prev = (__pthread_internal_list *)((char *)&prev->__prev + 1);
  v36 = (((v77 >> 3) + v77) ^ ((unsigned __int64)&prev[4 * (v77 >> 3) + 165902235 + 4 * v77].__next
                             + (((v77 >> 3) + v77) >> 2)
                             + 1))
      % 0xC1;
  v26 = v36;
  p_list = (unsigned __int64)&v25[2] + 8 * v36;
  if ( *(_BYTE *)((p_list >> 3) + 0x7FFF8000) )
    goto LABEL_72;
  if ( *(_QWORD *)&v25[2].__size[8 * v36] )
    goto LABEL_50;
  v72 = (unsigned __int64)&v25[2] + 8 * v36;
  v73 = (void *)operator new(0x28uLL);
  boost::asio::detail::posix_mutex::posix_mutex((boost::asio::detail::posix_mutex *const)v73);
  if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v72);
LABEL_82:
    p_next = v72;
    __asan_report_store8(v72, v23);
    goto LABEL_83;
  }
  v44 = *(pthread_mutex_t **)v72;
  if ( *(_QWORD *)v72 )
  {
    v74 = *(void **)v72;
    pthread_mutex_destroy(v44);
    v23 = 40LL;
    operator delete(v74, 0x28uLL);
  }
  if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
    goto LABEL_82;
  v23 = (__int64)v73;
  *(_QWORD *)v72 = v73;
LABEL_50:
  p_next = (unsigned __int64)&v25[2] + 8 * v26;
  if ( *(_BYTE *)((p_next >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_load8(p_next);
    goto LABEL_84;
  }
  p_next = v77;
  if ( *(_BYTE *)((v77 >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_store8(p_next, v23);
    goto LABEL_85;
  }
  *(_QWORD *)v77 = *(_QWORD *)&v25[2].__size[8 * v26];
  p_next = (unsigned __int64)&v25[40].__data.__list.__next;
  if ( *(_BYTE *)(((unsigned __int64)&v25[40].__data.__list.__next >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8(p_next);
    goto LABEL_86;
  }
  p_next = v77 + 48;
  if ( *(_BYTE *)(((v77 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_store8(p_next, v23);
    goto LABEL_87;
  }
  *(_QWORD *)(v77 + 48) = v25[40].__data.__list.__next;
  p_next = v77 + 56;
  if ( *(_BYTE *)(((v77 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    __asan_report_store8(p_next, v23);
    goto LABEL_88;
  }
  *(_QWORD *)(v77 + 56) = 0LL;
  next = v25[40].__data.__list.__next;
  if ( !next )
    goto LABEL_58;
  p_next = (unsigned __int64)&next[3].__next;
  if ( *(_BYTE *)(((unsigned __int64)&next[3].__next >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    __asan_report_store8(p_next, v23);
    goto LABEL_89;
  }
  next[3].__next = (__pthread_internal_list *)v77;
LABEL_58:
  v39 = (std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *)v77;
  v25[40].__data.__list.__next = (__pthread_internal_list *)v77;
  p_next = (unsigned __int64)&v39->service_;
  if ( !*(_BYTE *)(((unsigned __int64)&v39->service_ >> 3) + 0x7FFF8000) )
  {
    v39->service_ = (boost::asio::detail::strand_executor_service *)v25;
    pthread_mutex_unlock(mutex[0]);
    handler.executor_.executor_.io_context_ = v76;
    handler.executor_.impl_._M_ptr = (std::__shared_ptr<boost::asio::detail::strand_executor_service::strand_impl,(__gnu_cxx::_Lock_policy)2>::element_type *)v77;
    v40 = (__int64)v78;
    handler.executor_.impl_._M_refcount._M_pi = v78;
    if ( v78 )
    {
      p_M_use_count = &v78->_M_use_count;
      if ( &_pthread_key_create )
      {
        v42 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v42 || !v42 )
        {
          _InterlockedAdd(p_M_use_count, 1u);
          goto LABEL_64;
        }
        v40 = __asan_report_store4(p_M_use_count, v23);
      }
      v48 = *(_BYTE *)(((unsigned __int64)(v40 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v40 + 8) & 7) + 3) >= v48 && v48 )
      {
        __asan_report_load4(v40 + 8);
LABEL_96:
        if ( handler.executor_.impl_._M_refcount._M_pi )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(handler.executor_.impl_._M_refcount._M_pi);
        if ( v78 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v78);
        *(_DWORD *)(v7 + 128) = 0;
        *(_BYTE *)(v7 + 132) = 0;
        *(_QWORD *)(v7 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
        v49 = *(boost::asio::detail::scheduler **)(v7 + 104);
        v50 = (char *)(v7 + 128);
        boost::asio::detail::scheduler::run(v49, (boost::system::error_code *)(v7 + 128));
        if ( *(_DWORD *)(v7 + 128) )
        {
          __asan_handle_no_return(v49);
          boost::asio::detail::do_throw_error((const boost::system::error_code *)(v7 + 128));
        }
        if ( *(_DWORD *)(v7 + 64) != 1 )
        {
LABEL_102:
          v51 = *(_DWORD *)(v7 + 64);
          if ( !v51 )
          {
            boost::asio::ssl::context::~context((boost::asio::ssl::context *const)(v7 + 160));
            boost::asio::execution_context::~execution_context((boost::asio::execution_context *const)(v7 + 96));
            v52 = *(_BYTE *)(((unsigned __int64)&this->is_timeout_ >> 3) + 0x7FFF8000);
            v53 = ((_BYTE)this + 4) & 7;
            if ( v52 <= (char)v53 && v52 )
            {
              __asan_report_load1(&this->is_timeout_, v50, v53);
            }
            else
            {
              if ( this->is_timeout_ )
              {
LABEL_139:
                v51 = 2;
                goto LABEL_109;
              }
              v54 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)this & 7) + 3) < v54 || !v54 )
              {
                this->ret_ = HTTP_SUCCESS;
                goto LABEL_109;
              }
            }
            __asan_report_store4(this, v50);
            goto LABEL_139;
          }
LABEL_125:
          exception = (__m128i *)__cxa_allocate_exception(0x40uLL);
          *(__m128i *)mutex = _mm_load_si128((const __m128i *)(v7 + 64));
          std::runtime_error::runtime_error((std::runtime_error *)exception, byte_1B5D8A60);
          if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
            __asan_report_store8(exception, byte_1B5D8A60);
          exception->m128i_i64[0] = (__int64)(&`vtable for'boost::system::system_error + 2);
          if ( *(_WORD *)(((unsigned __int64)&exception[1] >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          exception[1] = _mm_load_si128((const __m128i *)mutex);
          m128i_i64 = (__int64)exception[3].m128i_i64;
          if ( *(_BYTE *)(((unsigned __int64)&exception[2] >> 3) + 0x7FFF8000) )
            m128i_i64 = __asan_report_store8(&exception[2], byte_1B5D8A60);
          exception[2].m128i_i64[0] = m128i_i64;
          if ( *(_BYTE *)(((unsigned __int64)&exception[2].m128i_u64[1] >> 3) + 0x7FFF8000) )
            __asan_report_store8(&exception[2].m128i_u64[1], byte_1B5D8A60);
          exception[2].m128i_i64[1] = 0LL;
          v64 = exception + 3;
          v65 = *(_BYTE *)(((unsigned __int64)&exception[3] >> 3) + 0x7FFF8000);
          v66 = ((_BYTE)exception + 48) & 7;
          if ( v65 <= (char)v66 && v65 )
            __asan_report_store1(v64, byte_1B5D8A60, v66);
          exception[3].m128i_i8[0] = 0;
          __asan_handle_no_return(v64);
          _cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'boost::system::system_error,
            (void (__fastcall *)(void *))boost::system::system_error::~system_error);
        }
        v56 = *(_QWORD *)(v7 + 72);
        if ( *(_BYTE *)(((unsigned __int64)(&boost::beast::make_error_code(boost::beast::error)::cat + 1) >> 3)
                      + 0x7FFF8000) )
        {
          v57 = __asan_report_load8(&boost::beast::make_error_code(boost::beast::error)::cat + 1);
        }
        else
        {
          v57 = (__int64)*(&boost::beast::make_error_code(boost::beast::error)::cat + 1);
          if ( !v57 )
          {
            v58 = &boost::beast::make_error_code(boost::beast::error)::cat == (__int64 (__fastcall ***)(boost::beast::detail::error_codes *__hidden))v56;
            goto LABEL_116;
          }
        }
        p_is_timeout = (bool *)(v56 + 8);
        if ( *(_BYTE *)(((unsigned __int64)(v56 + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_is_timeout);
          goto LABEL_124;
        }
        v58 = v57 == *(_QWORD *)(v56 + 8);
LABEL_116:
        if ( !v58 )
          goto LABEL_102;
        p_is_timeout = &this->is_timeout_;
        v60 = *(_BYTE *)(((unsigned __int64)&this->is_timeout_ >> 3) + 0x7FFF8000);
        v61 = ((_BYTE)this + 4) & 7;
        if ( v60 > (char)v61 || !v60 )
        {
          this->is_timeout_ = 1;
          *(_QWORD *)(v7 + 64) = 0LL;
          *(_QWORD *)(v7 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
          goto LABEL_102;
        }
LABEL_124:
        __asan_report_store1(p_is_timeout, v50, v61);
        goto LABEL_125;
      }
      ++*(_DWORD *)(v40 + 8);
    }
LABEL_64:
    handler.target_ = boost::asio::detail::default_spawn_handler;
    boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1},boost::context::basic_fixedsize_stack<boost::context::stack_traits>>(
      &handler,
      &function,
      &salloc,
      0LL);
    goto LABEL_96;
  }
LABEL_89:
  v45 = (struct _Unwind_Exception *)__asan_report_store8(p_next, v23);
  v47 = v46;
  operator delete(v73, 0x28uLL);
  pthread_mutex_unlock(mutex[0]);
  if ( v78 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v78);
  boost::asio::ssl::context::~context((boost::asio::ssl::context *const)(v7 + 160));
  boost::asio::execution_context::~execution_context((boost::asio::execution_context *const)(v7 + 96));
  if ( v47 != 1 )
  {
    __asan_handle_no_return(v7 + 96);
    _Unwind_Resume(v45);
  }
  v67 = (__int64 *)__cxa_begin_catch(v45);
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&handler,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/sync_http_client.cpp",
    "sslRequest",
    201);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)handler.target_,
    "Error: ");
  if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v67);
  v68 = *v67;
  if ( *(_BYTE *)(((unsigned __int64)(*v67 + 16) >> 3) + 0x7FFF8000) )
    v68 = __asan_report_load8(*v67 + 16);
  v69 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v68 + 16))(v67);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<16384> > *const)handler.target_,
    v69);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&handler);
  __cxa_end_catch();
  v51 = -1;
LABEL_109:
  if ( v71 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v51;
};

// Line 126: range 0000000019B72FA8-0000000019B7496E
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1}::operator()(
        unsigned __int64 __closure,
        std::__weak_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type *a2)
{
  boost::asio::io_context *exception; // r15
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *v5; // rax
  boost::asio::ssl::context *v6; // rcx
  boost::asio::ssl::context *v7; // r8
  __int64 v8; // rax
  unsigned __int64 p_handler; // r14
  __int64 M_ptr; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  std::string_view v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  std::string_view v21; // rdx
  const char *error; // rsi
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int8 v25; // al
  __int64 v26; // rax
  boost::asio::io_context *v27; // rdi
  char v28; // al
  __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  char v31; // al
  char v32; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v33; // rdi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v34; // rdi
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *v35; // rdx
  char v36; // cl
  boost::asio::executor_binder<void (*)(),boost::asio::executor> *v37; // rdi
  boost::system::error_code *v38; // r15
  char v39; // al
  unsigned __int64 v40; // rdi
  char v41; // dl
  __int64 v42; // r14
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *v43; // r14
  char *v44; // rsi
  const boost::system::detail::system_error_category *v45; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rdi
  unsigned __int64 v47; // rdi
  char v48; // al
  unsigned __int64 v49; // rdi
  char v50; // dl
  struct _Unwind_Exception *v51; // rbx
  int32_t inited; // eax
  unsigned __int64 v53; // rdi
  char v54; // dl
  boost::system::error_code *v55; // r15
  unsigned __int64 v56; // rdi
  char v57; // al
  char v58; // dl
  common::minet::http_client::HttpResponse *v59; // rsi
  unsigned __int64 v60; // rdi
  char v61; // al
  char v62; // dl
  int32_t v63; // eax
  unsigned __int64 v64; // rdi
  char v65; // dl
  boost::system::error_code *v66; // r14
  boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > **v67; // rcx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v68; // rdi
  _DWORD *v69; // [rsp+8h] [rbp-418h]
  boost::asio::io_context *v70; // [rsp+10h] [rbp-410h]
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v71; // [rsp+10h] [rbp-410h]
  boost::system::error_code *v72; // [rsp+10h] [rbp-410h]
  boost::asio::yield_context yielda; // [rsp+18h] [rbp-408h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > handler; // [rsp+50h] [rbp-3D0h] BYREF
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> > v75; // [rsp+80h] [rbp-3A0h] BYREF
  char v76[816]; // [rsp+F0h] [rbp-330h] BYREF

  v3 = __closure;
  yielda.coro_._M_ptr = a2;
  v4 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_4(768LL);
    if ( v8 )
      v4 = v8;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 8 10 stream:129 80 24 11 results:137 144 40 12 resolver:128 224 48 10 buffer:174 304 104 10"
                        " completion 448 128 13 beast_req:160 608 128 13 beast_rsp:161";
  *(_QWORD *)(v4 + 16) = common::minet::http_client::SyncHttpClient::sslRequest(common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse &,unsigned int)::{lambda(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>)#1}::operator();
  v69 = (_DWORD *)(v4 >> 3);
  v69[536862720] = -235802127;
  v69[536862721] = -234881024;
  v69[536862722] = 62194;
  v69[536862723] = -218959360;
  v69[536862724] = 62194;
  v69[536862725] = -234881024;
  v69[536862726] = -218959118;
  v69[536862728] = -219021312;
  v69[536862729] = 62194;
  v69[536862732] = -234881024;
  v69[536862733] = -218959118;
  v69[536862738] = -218959118;
  v69[536862743] = -202116109;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(__closure);
    goto LABEL_9;
  }
  boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::io_object_impl<boost::asio::io_context>(
    (boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *const)(v4 + 144),
    *(boost::asio::io_context **)__closure,
    0LL);
  __closure += 8LL;
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(__closure);
    goto LABEL_10;
  }
  exception = *(boost::asio::io_context **)(v3 + 8);
  if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    v70 = *(boost::asio::io_context **)v3;
    v5 = (boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *)operator new(0x150uLL);
    goto LABEL_11;
  }
LABEL_10:
  v5 = (boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *)__asan_report_load8(v3);
LABEL_11:
  p_handler = (unsigned __int64)v5;
  M_ptr = (__int64)v70;
  boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::flat_stream<boost::asio::io_context &,boost::asio::ssl::context &>(
    v5,
    v70,
    exception,
    v6,
    v7);
  *(_QWORD *)(v4 + 48) = p_handler;
  v11 = v3 + 16;
  if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v11);
    goto LABEL_16;
  }
  v11 = *(_QWORD *)(v3 + 16);
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(v11);
    goto LABEL_17;
  }
  v12 = *(_QWORD *)v11;
  v13 = *(_QWORD *)(v4 + 48);
  v11 = v13 + 16;
  if ( !*(_BYTE *)(((unsigned __int64)(v13 + 16) >> 3) + 0x7FFF8000) )
  {
    M_ptr = 55LL;
    v14 = SSL_ctrl(*(_QWORD *)(v13 + 16), 55LL, 0LL, v12);
    goto LABEL_18;
  }
LABEL_17:
  v14 = __asan_report_load8(v11);
LABEL_18:
  if ( !v14 )
  {
    error = (const char *)ERR_get_error();
    v23 = (unsigned int)error;
    v24 = (__int64)*(&boost::asio::error::get_ssl_category(void)::instance + 1);
    if ( v24 == 0x8FAFD21E25C5E09BLL || v24 == 0xB2AB117A257EDF0DLL )
    {
      v25 = (_DWORD)error != 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)(boost::asio::error::get_ssl_category(void)::instance + 6) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(boost::asio::error::get_ssl_category(void)::instance + 6);
LABEL_33:
        if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
          __asan_report_store8(exception, error);
        exception->service_registry_ = (boost::asio::detail::service_registry *)(&`vtable for'boost::system::system_error
                                                                               + 2);
        if ( *(_WORD *)(((unsigned __int64)&exception[1] >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        exception[1].service_registry_ = (boost::asio::detail::service_registry *)v23;
        exception[1].impl_ = (boost::asio::io_context::impl_type *)&boost::asio::error::get_ssl_category(void)::instance;
        v26 = (__int64)&exception[3];
        if ( *(_BYTE *)(((unsigned __int64)&exception[2] >> 3) + 0x7FFF8000) )
          v26 = __asan_report_store8(&exception[2], error);
        exception[2].service_registry_ = (boost::asio::detail::service_registry *)v26;
        if ( *(_BYTE *)(((unsigned __int64)&exception[2].impl_ >> 3) + 0x7FFF8000) )
          __asan_report_store8(&exception[2].impl_, error);
        exception[2].impl_ = 0LL;
        v27 = exception + 3;
        v28 = *(_BYTE *)(((unsigned __int64)&exception[3] >> 3) + 0x7FFF8000);
        v29 = ((_BYTE)exception + 48) & 7;
        if ( v28 <= (char)v29 && v28 )
          __asan_report_store1(v27, error, v29);
        LOBYTE(exception[3].service_registry_) = 0;
        __asan_handle_no_return(v27);
        _cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'boost::system::system_error,
          (void (__fastcall *)(void *))boost::system::system_error::~system_error);
      }
      v25 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(boost::asio::error::detail::ssl_category *__hidden), const char *))boost::asio::error::get_ssl_category(void)::instance[6])(
              &boost::asio::error::get_ssl_category(void)::instance,
              error);
    }
    v23 = ((unsigned __int64)v25 << 32) | (unsigned int)error;
    exception = (boost::asio::io_context *)__cxa_allocate_exception(0x40uLL);
    error = byte_1B5D8A60;
    std::runtime_error::runtime_error((std::runtime_error *)exception, byte_1B5D8A60);
    goto LABEL_33;
  }
  v15 = (void *)(v3 + 24);
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v15);
    goto LABEL_46;
  }
  p_handler = *(_QWORD *)(v3 + 24);
  M_ptr = (__int64)yielda.coro_._M_ptr;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)yielda.coro_._M_ptr);
  handler.ec_ = (boost::system::error_code *)p_handler;
  v15 = (void *)(v3 + 16);
  if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    v17 = __asan_report_load8(v15);
    goto LABEL_47;
  }
  v16 = *(_QWORD *)(v3 + 16);
  v17 = v16 + 40;
  if ( *(_BYTE *)(((v16 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    v19 = __asan_report_load8(v17);
    goto LABEL_48;
  }
  v19 = v16 + 32;
  if ( *(_BYTE *)(((v16 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    v20 = __asan_report_load8(v19);
    goto LABEL_49;
  }
  v20 = v16 + 8;
  if ( *(_BYTE *)(((v16 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    v16 = v20;
    __asan_report_load8(v20);
    goto LABEL_50;
  }
  if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
  {
    v21._M_str = *(const char **)v16;
    M_ptr = v4 + 144;
    v21._M_len = *(_QWORD *)(v16 + 8);
    v18._M_len = *(_QWORD *)(v16 + 40);
    v18._M_str = *(const char **)(v16 + 32);
    boost::asio::ip::basic_resolver<boost::asio::ip::tcp,boost::asio::executor>::async_resolve<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
      (boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >::return_type *)(v4 + 80),
      (boost::asio::ip::basic_resolver<boost::asio::ip::tcp,boost::asio::executor> *const)(v4 + 144),
      v21,
      v18,
      (boost::asio::ip::resolver_base::flags)0,
      &handler);
    goto LABEL_51;
  }
LABEL_50:
  __asan_report_load8(v16);
LABEL_51:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  v30 = v3 + 24;
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v30);
LABEL_65:
    __asan_report_load4(v30);
    goto LABEL_66;
  }
  v30 = *(_QWORD *)(v3 + 24);
  v31 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
    goto LABEL_65;
  if ( !*(_DWORD *)v30 )
    goto LABEL_68;
  v30 = v3 + 32;
  if ( !*(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
  {
    v30 = *(_QWORD *)(v3 + 32);
    v32 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
    if ( (char)((v30 & 7) + 3) < v32 || !v32 )
    {
      *(_DWORD *)v30 = 3;
LABEL_59:
      v33 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 88);
      if ( v33 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v33);
      std::unique_ptr<boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>>::~unique_ptr((std::unique_ptr<boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >> *const)(v4 + 48));
      boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl((boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *const)(v4 + 144));
      goto LABEL_62;
    }
    goto LABEL_67;
  }
LABEL_66:
  __asan_report_load8(v30);
LABEL_67:
  __asan_report_store4(v30, M_ptr);
LABEL_68:
  v34 = boost::beast::get_lowest_layer<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>((boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)(v4 + 48));
  if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v3 + 40);
LABEL_74:
    v37 = v35;
    __asan_report_load4(v35);
    goto LABEL_75;
  }
  v35 = *(boost::asio::executor_binder<void (*)(),boost::asio::executor> **)(v3 + 40);
  v36 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v35 & 7) + 3) >= v36 && v36 )
    goto LABEL_74;
  M_ptr = 1000000LL * LODWORD(v35->executor_.impl_);
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::expires_after(
    v34,
    (std::chrono::nanoseconds)M_ptr);
  v71 = boost::beast::get_lowest_layer<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>((boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)(v4 + 48));
  v37 = (boost::asio::executor_binder<void (*)(),boost::asio::executor> *)(v3 + 24);
  if ( !*(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
    v38 = *(boost::system::error_code **)(v3 + 24);
    p_handler = (unsigned __int64)&handler;
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
      &handler,
      (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)yielda.coro_._M_ptr);
    handler.ec_ = v38;
    M_ptr = (__int64)v71;
    boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_connect<boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void>(
      (boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> >::return_type *)&yielda.handler_,
      v71,
      (const boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> *)(v4 + 80),
      &handler);
    goto LABEL_76;
  }
LABEL_75:
  __asan_report_load8(v37);
LABEL_76:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)p_handler);
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v3 + 24);
LABEL_85:
    v40 = p_handler;
    __asan_report_load4(p_handler);
    goto LABEL_86;
  }
  p_handler = *(_QWORD *)(v3 + 24);
  v39 = *(_BYTE *)((p_handler >> 3) + 0x7FFF8000);
  if ( v39 && v39 <= 3 )
    goto LABEL_85;
  if ( *(_DWORD *)p_handler )
  {
    v40 = v3 + 32;
    if ( !*(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    {
      v40 = *(_QWORD *)(v3 + 32);
      v41 = *(_BYTE *)((v40 >> 3) + 0x7FFF8000);
      if ( (char)((v40 & 7) + 3) < v41 || !v41 )
      {
        *(_DWORD *)v40 = 5;
        goto LABEL_59;
      }
      goto LABEL_87;
    }
LABEL_86:
    __asan_report_load8(v40);
LABEL_87:
    __asan_report_store4(v40, M_ptr);
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)yielda.coro_._M_ptr);
  handler.ec_ = (boost::system::error_code *)p_handler;
  v42 = *(_QWORD *)(v4 + 48);
  boost::asio::async_completion<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void ()(boost::system::error_code)>::async_completion(
    (boost::asio::async_completion<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >,void(boost::system::error_code)> *const)(v4 + 304),
    &handler);
  v75.next_layer_ = (boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *)v42;
  v75.core_ = (boost::asio::ssl::detail::stream_core *)(v42 + 16);
  v75.op_.type_ = client;
  v75.start_ = 0;
  v75.want_ = want_nothing;
  v75.ec_.val_ = 0;
  v75.ec_.failed_ = 0;
  v75.ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  v75.bytes_transferred_ = 0LL;
  v43 = (boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)&v75;
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_handler(
    &v75.handler_,
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)(v4 + 304));
  v44 = 0LL;
  v45 = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>::operator()(
    &v75,
    *(boost::system::error_code *)&v44,
    0LL,
    1);
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler(&v75.handler_);
  boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::get((boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v4 + 360));
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v4 + 304));
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  v47 = v3 + 24;
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v47);
    goto LABEL_100;
  }
  v47 = *(_QWORD *)(v3 + 24);
  v48 = *(_BYTE *)((v47 >> 3) + 0x7FFF8000);
  if ( v48 && v48 <= 3 )
  {
LABEL_100:
    v51 = (struct _Unwind_Exception *)__asan_report_load4(v47);
    boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v4 + 304));
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
    v46 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 88);
    if ( v46 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v46);
    std::unique_ptr<boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>>::~unique_ptr((std::unique_ptr<boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >> *const)(v4 + 48));
    boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl((boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *const)(v4 + 144));
    __asan_handle_no_return(v4 + 144);
    _Unwind_Resume(v51);
  }
  if ( *(_DWORD *)v47 )
  {
    v49 = v3 + 32;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v49);
    }
    else
    {
      v49 = *(_QWORD *)(v3 + 32);
      v50 = *(_BYTE *)((v49 >> 3) + 0x7FFF8000);
      if ( (char)((v49 & 7) + 3) < v50 || !v50 )
      {
        *(_DWORD *)v49 = 4;
        goto LABEL_59;
      }
    }
    __asan_report_store4(v49, 0LL);
  }
  *(_QWORD *)(v4 + 456) = 0LL;
  *(_DWORD *)(v4 + 480) = 0;
  *(_QWORD *)(v4 + 464) = v4 + 456;
  *(_QWORD *)(v4 + 472) = v4 + 456;
  *(_QWORD *)(v4 + 448) = 0LL;
  *(_QWORD *)(v4 + 488) = v4 + 488;
  *(_QWORD *)(v4 + 496) = v4 + 488;
  *(_QWORD *)(v4 + 504) = 0LL;
  *(_QWORD *)(v4 + 512) = 0LL;
  *(_QWORD *)(v4 + 520) = 0LL;
  *(_QWORD *)(v4 + 528) = 0LL;
  *(_DWORD *)(v4 + 536) = 11;
  *(_DWORD *)(v4 + 540) = 0;
  *(_QWORD *)(v4 + 544) = v4 + 560;
  *(_QWORD *)(v4 + 552) = 0LL;
  *(_BYTE *)(v4 + 560) = 0;
  *(_QWORD *)(v4 + 616) = 0LL;
  *(_DWORD *)(v4 + 640) = 0;
  *(_QWORD *)(v4 + 624) = v4 + 616;
  *(_QWORD *)(v4 + 632) = v4 + 616;
  *(_QWORD *)(v4 + 608) = 0LL;
  *(_QWORD *)(v4 + 648) = v4 + 648;
  *(_QWORD *)(v4 + 656) = v4 + 648;
  *(_QWORD *)(v4 + 664) = 0LL;
  *(_QWORD *)(v4 + 672) = 0LL;
  *(_QWORD *)(v4 + 680) = 0LL;
  *(_QWORD *)(v4 + 688) = 0LL;
  *(_DWORD *)(v4 + 696) = 11;
  *(_DWORD *)(v4 + 700) = 200;
  *(_QWORD *)(v4 + 704) = v4 + 720;
  *(_QWORD *)(v4 + 712) = 0LL;
  *(_BYTE *)(v4 + 720) = 0;
  if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
  {
    inited = __asan_report_load8(v3 + 16);
  }
  else
  {
    v44 = (char *)(v4 + 448);
    inited = common::minet::http_client::HttpUtils::initBeastRequest(
               *(const common::minet::http_client::HttpRequest **)(v3 + 16),
               (common::minet::http_client::BeastHttpRequest *)(v4 + 448));
  }
  if ( inited )
  {
    v53 = v3 + 32;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v53);
    }
    else
    {
      v53 = *(_QWORD *)(v3 + 32);
      v54 = *(_BYTE *)((v53 >> 3) + 0x7FFF8000);
      if ( (char)((v53 & 7) + 3) < v54 || !v54 )
      {
        *(_DWORD *)v53 = 1;
LABEL_111:
        boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 608));
        boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 448));
        goto LABEL_59;
      }
    }
    __asan_report_store4(v53, v44);
  }
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v3 + 24);
  }
  else
  {
    v55 = *(boost::system::error_code **)(v3 + 24);
    v43 = &handler;
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
      &handler,
      (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)yielda.coro_._M_ptr);
    handler.ec_ = v55;
    v44 = (char *)(v4 + 448);
    boost::beast::http::async_write<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
      (boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)(v4 + 48),
      (const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v4 + 448),
      &handler);
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(v43);
  v56 = v3 + 24;
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v56);
LABEL_126:
    __asan_report_load4(v56);
    goto LABEL_127;
  }
  v56 = *(_QWORD *)(v3 + 24);
  v57 = *(_BYTE *)((v56 >> 3) + 0x7FFF8000);
  if ( v57 && v57 <= 3 )
    goto LABEL_126;
  if ( !*(_DWORD *)v56 )
    goto LABEL_129;
  v56 = v3 + 32;
  if ( !*(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
  {
    v56 = *(_QWORD *)(v3 + 32);
    v58 = *(_BYTE *)((v56 >> 3) + 0x7FFF8000);
    if ( (char)((v56 & 7) + 3) < v58 || !v58 )
    {
      *(_DWORD *)v56 = 6;
      goto LABEL_111;
    }
    goto LABEL_128;
  }
LABEL_127:
  __asan_report_load8(v56);
LABEL_128:
  __asan_report_store4(v56, v44);
LABEL_129:
  boost::beast::basic_flat_buffer<std::allocator<char>>::basic_flat_buffer((boost::beast::basic_flat_buffer<std::allocator<char> > *const)(v4 + 224));
  v72 = *(boost::system::error_code **)(v3 + 24);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)yielda.coro_._M_ptr);
  handler.ec_ = v72;
  v59 = (common::minet::http_client::HttpResponse *)(v4 + 224);
  boost::beast::http::async_read<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
    (boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)(v4 + 48),
    (boost::beast::basic_flat_buffer<std::allocator<char> > *)(v4 + 224),
    (boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)(v4 + 608),
    &handler);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  v60 = v3 + 24;
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v60);
LABEL_139:
    __asan_report_load4(v60);
    goto LABEL_140;
  }
  v60 = *(_QWORD *)(v3 + 24);
  v61 = *(_BYTE *)((v60 >> 3) + 0x7FFF8000);
  if ( v61 && v61 <= 3 )
    goto LABEL_139;
  if ( !*(_DWORD *)v60 )
    goto LABEL_142;
  v60 = v3 + 32;
  if ( !*(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
  {
    v60 = *(_QWORD *)(v3 + 32);
    v62 = *(_BYTE *)((v60 >> 3) + 0x7FFF8000);
    if ( (char)((v60 & 7) + 3) < v62 || !v62 )
    {
      *(_DWORD *)v60 = 7;
LABEL_137:
      boost::beast::basic_flat_buffer<std::allocator<char>>::~basic_flat_buffer((boost::beast::basic_flat_buffer<std::allocator<char> > *const)(v4 + 224));
      goto LABEL_111;
    }
    goto LABEL_141;
  }
LABEL_140:
  __asan_report_load8(v60);
LABEL_141:
  __asan_report_store4(v60, v59);
LABEL_142:
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
  {
    v63 = __asan_report_load8(v3 + 48);
  }
  else
  {
    v59 = *(common::minet::http_client::HttpResponse **)(v3 + 48);
    v63 = common::minet::http_client::HttpUtils::initHttpResponse(
            (const common::minet::http_client::BeastHttpResponse *)(v4 + 608),
            v59,
            1);
  }
  if ( v63 )
  {
    v64 = v3 + 32;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v64);
    }
    else
    {
      v64 = *(_QWORD *)(v3 + 32);
      v65 = *(_BYTE *)((v64 >> 3) + 0x7FFF8000);
      if ( (char)((v64 & 7) + 3) < v65 || !v65 )
      {
        *(_DWORD *)v64 = 7;
        goto LABEL_137;
      }
    }
    __asan_report_store4(v64, v59);
  }
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v3 + 24);
  }
  else
  {
    v66 = *(boost::system::error_code **)(v3 + 24);
    v3 = (unsigned __int64)&handler;
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
      &handler,
      (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)yielda.coro_._M_ptr);
    handler.ec_ = v66;
    yielda.ca_ = *(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type **)(v4 + 48);
    boost::asio::async_initiate<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void ()(boost::system::error_code),boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>::initiate_async_shutdown,boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>*>(
      (boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >::initiate_async_shutdown *)&yielda.coro_._M_refcount._M_pi
    + 7,
      &handler,
      (boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > **)&yielda.ca_,
      v67);
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context((boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *const)v3);
  boost::beast::basic_flat_buffer<std::allocator<char>>::~basic_flat_buffer((boost::beast::basic_flat_buffer<std::allocator<char> > *const)(v4 + 224));
  boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 608));
  boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~message((boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)(v4 + 448));
  v68 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 88);
  if ( v68 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v68);
  std::unique_ptr<boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>>::~unique_ptr((std::unique_ptr<boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >> *const)(v4 + 48));
  boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor>::~io_object_impl((boost::asio::detail::io_object_impl<boost::asio::detail::resolver_service<boost::asio::ip::tcp>,boost::asio::executor> *const)(v4 + 144));
LABEL_62:
  if ( v76 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 210: range 0000000019B74973-0000000019B7498A
void __cdecl GLOBAL__sub_I_sync_http_client_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 210: range 0000000019B6BC41-0000000019B6BF87
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  std::ios_base::Init *v2; // rsi
  _BYTE *v3; // rax
  _BYTE *v4; // rax

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/sync_http_client.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    v2 = &std::__ioinit;
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ )
    {
      `guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ = 1;
      if ( *(_WORD *)(((unsigned __int64)&boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3) + 0x7FFF8000) )
      {
        v3 = (_BYTE *)__asan_report_store16();
LABEL_33:
        *v3 = 1;
        v2 = (std::ios_base::Init *)&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
LABEL_8:
        if ( !`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id )
        {
          `guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id = 1;
          v2 = (std::ios_base::Init *)&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
          __cxa_atexit(
            (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
            &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
            &_dso_handle);
        }
        if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ )
        {
          `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ = 1;
          v2 = (std::ios_base::Init *)&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
          __cxa_atexit(
            (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
            &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
            &_dso_handle);
        }
        if ( !`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ )
        {
          `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ = 1;
          v2 = (std::ios_base::Init *)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
          __cxa_atexit(
            (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
            &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            &_dso_handle);
        }
        if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id )
        {
          `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id = 1;
          v2 = (std::ios_base::Init *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
          __cxa_atexit(
            (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
            &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            &_dso_handle);
        }
        if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id )
        {
          `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id = 1;
          v2 = (std::ios_base::Init *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
          __cxa_atexit(
            (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
            &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            &_dso_handle);
        }
        if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
        {
          `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
          if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                        + 0x7FFF8000) )
          {
            v4 = (_BYTE *)__asan_report_store8(
                            &common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
                            v2);
            goto LABEL_35;
          }
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                               + 9;
        }
        v4 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        if ( `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id[0] )
        {
LABEL_22:
          if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::strand_executor_service>::id )
          {
            `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::strand_executor_service>::id = 1;
            __cxa_atexit(
              (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_executor_service>::~service_id,
              &boost::asio::detail::execution_context_service_base<boost::asio::detail::strand_executor_service>::id,
              &_dso_handle);
          }
          if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id )
          {
            `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id = 1;
            __cxa_atexit(
              (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id,
              &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
              &_dso_handle);
          }
          if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id )
          {
            `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id = 1;
            __cxa_atexit(
              (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::~service_id,
              &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
              &_dso_handle);
          }
          if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id[0] )
          {
            `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id[0] = 1;
            __cxa_atexit(
              (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
              &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
              &_dso_handle);
          }
          goto LABEL_3;
        }
LABEL_35:
        *v4 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
        goto LABEL_22;
      }
      boost::asio::ssl::detail::openssl_init_base::instance();
      v2 = (std::ios_base::Init *)&boost::asio::ssl::detail::openssl_init<true>::instance_;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::ssl::detail::openssl_init<true>::~openssl_init,
        &boost::asio::ssl::detail::openssl_init<true>::instance_,
        &_dso_handle);
    }
    v3 = `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
    if ( `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_[0] )
      goto LABEL_8;
    goto LABEL_33;
  }
};
