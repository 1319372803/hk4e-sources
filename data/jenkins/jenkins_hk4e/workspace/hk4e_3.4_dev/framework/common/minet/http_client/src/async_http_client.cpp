// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/http_client/src/async_http_client.cpp

// Line 35: range 000000000CC2BCE8-000000000CC2C830
__int64 __fastcall common::minet::http_client::HttpClient::request(
        common::minet::http_client::HttpClient *const this,
        common::minet::http_client::ResponseCallBackFunc *req,
        uint32_t timeout_ms,
        void *a4)
{
  common::minet::http_client::ResponseCallBackFunc *p_func; // rbp
  unsigned __int64 v6; // r13
  _DWORD *v7; // r15
  common::minet::http_client::ResponseCallBackFunc *p_method; // rdi
  char v9; // al
  char v10; // al
  char v11; // dl
  char v12; // dl
  char v13; // al
  std::_Any_data M_functor; // rax
  bool (*M_manager)(std::_Any_data *, const std::_Any_data *, std::_Manager_operation); // rax
  volatile signed __int32 *p_M_manager; // rdi
  void (*M_invoker)(const std::_Any_data *, common::minet::http_client::HttpRetcode *, common::minet::http_client::HttpRequest *, common::minet::http_client::HttpResponse *); // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v19; // cl
  int v20; // eax
  boost::asio::io_context *ioc; // rsi
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  bool v24; // dl
  boost::context::stack_traits *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  boost::asio::io_context **p_ioc; // rdi
  boost::asio::detail::strand_executor_service *v29; // rax
  __int64 v30; // rax
  char v31; // cl
  pthread_mutex_t *v32; // rbx
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rax
  _Atomic_word *v35; // rdi
  char v36; // dl
  char v37; // cl
  unsigned __int64 p_list; // rdi
  char v39; // dl
  pthread_mutex_t *v40; // r14
  __pthread_internal_list *prev; // rcx
  unsigned __int64 v42; // rcx
  unsigned __int64 p_next; // rdi
  __pthread_internal_list *next; // rax
  __int64 v45; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v46; // rax
  _Atomic_word *v47; // rdi
  char v48; // dl
  void *v49; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v50; // rdi
  int v51; // eax
  pthread_mutex_t *v52; // rax
  struct _Unwind_Exception *v53; // rbx
  char v54; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v55; // rdi
  unsigned __int64 v57; // [rsp+0h] [rbp-138h]
  pthread_mutex_t *timeout_msb; // [rsp+8h] [rbp-130h]
  common::minet::http_client::ResponseCallBackFunc funca; // [rsp+10h] [rbp-128h] BYREF
  common::minet::http_client::HttpClient::request::<lambda(auto:2)> function; // [rsp+30h] [rbp-108h] BYREF
  std::_Any_data v62; // [rsp+40h] [rbp-F8h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v63; // [rsp+50h] [rbp-E8h]
  std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> v64; // [rsp+60h] [rbp-D8h] BYREF
  char v65[184]; // [rsp+80h] [rbp-B8h] BYREF

  p_func = req;
  funca._M_functor._M_unused._M_object = a4;
  v6 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v30 = __asan_stack_malloc_1(128LL);
    if ( v30 )
      v6 = v30;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 4 7 __count 64 16 11 self_ptr:40 96 16 2 ec";
  *(_QWORD *)(v6 + 16) = common::minet::http_client::HttpClient::request;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  std::string::_M_assign(&this->req_, req);
  std::string::_M_assign(&this->req_.port, &req[1]);
  std::string::_M_assign(&this->req_.uri, &req[2]);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator=(
    &this->req_.head_map._M_t,
    (const std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *)&req[3]);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator=(
    &this->req_.param_map._M_t,
    (const std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *)&req[4]._M_manager);
  std::string::_M_assign(&this->req_.body, &req[6]);
  p_method = req + 7;
  v9 = *(_BYTE *)(((unsigned __int64)&req[7] >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(p_method);
LABEL_40:
    __asan_report_store4(p_method);
LABEL_41:
    __asan_report_load4(p_method);
LABEL_42:
    __asan_report_store4(p_method);
    goto LABEL_43;
  }
  p_method = (common::minet::http_client::ResponseCallBackFunc *)&this->req_.method;
  v10 = *(_BYTE *)(((unsigned __int64)&this->req_.method >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_40;
  this->req_.method = (common::minet::http_client::HttpMethod)req[7]._M_functor._M_unused._M_object;
  p_method = (common::minet::http_client::ResponseCallBackFunc *)((char *)req + 228);
  v11 = *(_BYTE *)(((unsigned __int64)&req[7]._M_functor._M_pod_data[4] >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)req - 28) & 7) + 3) >= v11 && v11 )
    goto LABEL_41;
  p_method = (common::minet::http_client::ResponseCallBackFunc *)&this->req_.version;
  v12 = *(_BYTE *)(((unsigned __int64)&this->req_.version >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 92) & 7) + 3) >= v12 && v12 )
    goto LABEL_42;
  this->req_.version = *(_DWORD *)&req[7]._M_functor._M_pod_data[4];
  p_method = (common::minet::http_client::ResponseCallBackFunc *)((char *)req + 232);
  if ( *(char *)(((unsigned __int64)&req[7]._M_functor._M_pod_data[8] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_43:
    __asan_report_load1(p_method);
    goto LABEL_44;
  }
  p_method = (common::minet::http_client::ResponseCallBackFunc *)&this->req_.is_ssl;
  if ( *(char *)(((unsigned __int64)&this->req_.is_ssl >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_44:
    __asan_report_store1(p_method);
LABEL_45:
    __asan_report_store4(p_method);
    goto LABEL_46;
  }
  this->req_.is_ssl = req[7]._M_functor._M_pod_data[8];
  p_method = (common::minet::http_client::ResponseCallBackFunc *)&this->timeout_ms_;
  v13 = *(_BYTE *)(((unsigned __int64)&this->timeout_ms_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_45;
  this->timeout_ms_ = timeout_ms;
  p_func = &this->func_;
  std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function(
    &v64,
    (const std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *)funca._M_functor._M_unused._M_object);
  M_functor = v64._M_functor;
  if ( *(_WORD *)(((unsigned __int64)&this->func_ >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    p_M_manager = (volatile signed __int32 *)p_func;
    __asan_report_load16(p_func);
    goto LABEL_47;
  }
  v64._M_functor = (std::_Any_data)_mm_loadu_si128((const __m128i *)&this->func_);
  this->func_._M_functor = M_functor;
  M_manager = v64._M_manager;
  p_M_manager = (volatile signed __int32 *)&this->func_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&this->func_._M_manager >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(p_M_manager);
    goto LABEL_48;
  }
  v64._M_manager = this->func_._M_manager;
  this->func_._M_manager = M_manager;
  M_invoker = v64._M_invoker;
  p_M_manager = (volatile signed __int32 *)&this->func_._M_invoker;
  if ( *(_BYTE *)(((unsigned __int64)&this->func_._M_invoker >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_load8(p_M_manager);
LABEL_49:
    __asan_report_load8(p_M_manager);
LABEL_50:
    __asan_report_load4(p_M_manager);
LABEL_51:
    __asan_handle_no_return(p_M_manager);
    std::__throw_bad_weak_ptr();
  }
  v64._M_invoker = this->func_._M_invoker;
  this->func_._M_invoker = M_invoker;
  if ( v64._M_manager )
    v64._M_manager((std::_Any_data *)&v64, (const std::_Any_data *)&v64, __destroy_functor);
  p_M_manager = (volatile signed __int32 *)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_49;
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v6 + 72) = M_pi;
  if ( !M_pi )
  {
    __asan_handle_no_return(p_M_manager);
    std::__throw_bad_weak_ptr();
  }
  p_M_manager = &M_pi->_M_use_count;
  v19 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v19 && v19 )
    goto LABEL_50;
  *(_DWORD *)(v6 + 48) = M_pi->_M_use_count;
  do
  {
    v20 = *(_DWORD *)(v6 + 48);
    if ( !v20 )
      goto LABEL_51;
    ioc = (boost::asio::io_context *)(v6 + 128);
    v23 = *(_DWORD *)(v6 + 48);
    v22 = _InterlockedCompareExchange(p_M_manager, v20 + 1, v23);
    v24 = v23 == v22;
    if ( v23 != v22 )
      *(_DWORD *)(v6 + 48) = v22;
  }
  while ( !v24 );
  p_M_use_count = (boost::context::stack_traits *)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_use_count);
  }
  else
  {
    *(_QWORD *)(v6 + 64) = this->_M_weak_this._M_ptr;
    funca._M_invoker = (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)>::_Invoker_type)boost::context::stack_traits::default_size(p_M_use_count);
    function.__self_ptr._M_ptr = *(std::__shared_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::element_type **)(v6 + 64);
    v26 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 72);
    function.__self_ptr._M_refcount._M_pi = v26;
    if ( !v26 )
      goto LABEL_34;
    p_M_use_count = (boost::context::stack_traits *)&v26->_M_use_count;
    if ( !&_pthread_key_create )
      goto LABEL_54;
    v27 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v27 || !v27 )
    {
      _InterlockedAdd((volatile signed __int32 *)p_M_use_count->gap0, 1u);
      goto LABEL_34;
    }
  }
  v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
LABEL_54:
  p_ioc = (boost::asio::io_context **)&v26->_M_use_count;
  v31 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(p_ioc);
    goto LABEL_58;
  }
  ++v26->_M_use_count;
LABEL_34:
  p_ioc = &this->ioc_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ioc_ >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(p_ioc);
    goto LABEL_59;
  }
  ioc = this->ioc_;
  v62._M_unused._M_object = ioc;
  if ( !*(_BYTE *)(((unsigned __int64)ioc >> 3) + 0x7FFF8000) )
  {
    v29 = boost::asio::detail::service_registry::use_service<boost::asio::detail::strand_executor_service>(
            ioc->service_registry_,
            ioc);
    goto LABEL_60;
  }
LABEL_59:
  v29 = (boost::asio::detail::strand_executor_service *)__asan_report_load8(ioc);
LABEL_60:
  v32 = (pthread_mutex_t *)v29;
  v33 = operator new(0x48uLL);
  if ( *(_BYTE *)(((v33 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_66;
  }
  *(_QWORD *)(v33 + 16) = 0LL;
  if ( *(_BYTE *)(((v33 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_store8();
    goto LABEL_67;
  }
  *(_QWORD *)(v33 + 24) = 0LL;
  if ( *(_BYTE *)(((v33 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_store8();
    goto LABEL_68;
  }
  *(_QWORD *)(v33 + 32) = 0LL;
  if ( *(_BYTE *)(((v33 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    v34 = __asan_report_store8();
    goto LABEL_69;
  }
  *(_QWORD *)(v33 + 40) = 0LL;
  *(_QWORD *)&v62._M_pod_data[8] = v33;
  v34 = operator new(0x18uLL);
LABEL_69:
  v35 = (_Atomic_word *)(v34 + 8);
  v36 = *(_BYTE *)(((v34 + 8) >> 3) + 0x7FFF8000);
  if ( v36 && v36 <= 3 )
  {
    __asan_report_store4(v35);
LABEL_97:
    v34 = __asan_report_store4(v35);
    goto LABEL_98;
  }
  *(_DWORD *)(v34 + 8) = 1;
  v35 = (_Atomic_word *)(v34 + 12);
  v37 = *(_BYTE *)(((v34 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v34 + 12) & 7) + 3) >= v37 && v37 )
    goto LABEL_97;
  *(_DWORD *)(v34 + 12) = 1;
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    p_list = v34;
    __asan_report_store8();
    goto LABEL_99;
  }
  *(_QWORD *)v34 = &`vtable for'std::_Sp_counted_ptr<boost::asio::detail::strand_executor_service::strand_impl *,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  p_list = v34 + 16;
  if ( *(_BYTE *)(((v34 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_store8();
    goto LABEL_100;
  }
  *(_QWORD *)(v34 + 16) = v33;
  v63 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v34;
  p_list = *(_QWORD *)&v62._M_pod_data[8] + 8LL;
  if ( *(char *)(((unsigned __int64)(*(_QWORD *)&v62._M_pod_data[8] + 8LL) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_100:
    __asan_report_store1(p_list);
LABEL_101:
    __asan_report_store1(p_list);
    goto LABEL_102;
  }
  *(_BYTE *)(*(_QWORD *)&v62._M_pod_data[8] + 8LL) = 0;
  p_list = *(_QWORD *)&v62._M_pod_data[8] + 9LL;
  v39 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v62._M_pod_data[8] + 9LL) >> 3) + 0x7FFF8000);
  if ( v39 <= ((v62._M_pod_data[8] + 9) & 7) && v39 )
    goto LABEL_101;
  *(_BYTE *)(*(_QWORD *)&v62._M_pod_data[8] + 9LL) = 0;
  v40 = v32 + 1;
  pthread_mutex_lock(v32 + 1);
  p_list = (unsigned __int64)&v32[40].__data.__list;
  if ( *(_BYTE *)(((unsigned __int64)&v32[40].__data.__list >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    __asan_report_load8(p_list);
LABEL_103:
    v49 = (void *)__asan_report_load8(p_list);
    __cxa_begin_catch(v49);
    if ( v33 )
    {
      boost::asio::detail::strand_executor_service::strand_impl::~strand_impl((boost::asio::detail::strand_executor_service::strand_impl *const)v33);
      v49 = (void *)v33;
      operator delete((void *)v33, 0x48uLL);
    }
    __asan_handle_no_return(v49);
    __cxa_rethrow();
  }
  prev = v32[40].__data.__list.__prev;
  v32[40].__data.__list.__prev = (__pthread_internal_list *)((char *)&prev->__prev + 1);
  v42 = (((*(_QWORD *)&v62._M_pod_data[8] >> 3) + *(_QWORD *)&v62._M_pod_data[8]) ^ ((unsigned __int64)&prev[4 * (*(_QWORD *)&v62._M_pod_data[8] >> 3) + 165902235 + 4 * *(_QWORD *)&v62._M_pod_data[8]].__next
                                                                                   + (((*(_QWORD *)&v62._M_pod_data[8] >> 3)
                                                                                     + *(_QWORD *)&v62._M_pod_data[8]) >> 2)
                                                                                   + 1))
      % 0xC1;
  v33 = v42;
  p_list = (unsigned __int64)&v32[2] + 8 * v42;
  if ( *(_BYTE *)((p_list >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  if ( *(_QWORD *)&v32[2].__size[8 * v42] )
    goto LABEL_81;
  v57 = (unsigned __int64)&v32[2] + 8 * v42;
  timeout_msb = (pthread_mutex_t *)operator new(0x28uLL);
  v51 = pthread_mutex_init(timeout_msb, 0LL);
  *(_DWORD *)(v6 + 96) = v51;
  *(_BYTE *)(v6 + 100) = v51 != 0;
  *(_QWORD *)(v6 + 104) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( v51 )
  {
    __asan_handle_no_return(timeout_msb);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v6 + 96), "mutex");
  }
  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v57);
LABEL_121:
    p_next = v57;
    __asan_report_store8();
    goto LABEL_122;
  }
  v52 = *(pthread_mutex_t **)v57;
  if ( *(_QWORD *)v57 )
  {
    funca._M_functor._M_unused._M_object = *(void **)v57;
    pthread_mutex_destroy(v52);
    operator delete(funca._M_functor._M_unused._M_object, 0x28uLL);
  }
  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
    goto LABEL_121;
  *(_QWORD *)v57 = timeout_msb;
LABEL_81:
  p_next = (unsigned __int64)&v32[2] + 8 * v33;
  if ( *(_BYTE *)((p_next >> 3) + 0x7FFF8000) )
  {
LABEL_122:
    __asan_report_load8(p_next);
    goto LABEL_123;
  }
  p_next = *(_QWORD *)&v62._M_pod_data[8];
  if ( *(_BYTE *)((*(_QWORD *)&v62._M_pod_data[8] >> 3) + 0x7FFF8000LL) )
  {
LABEL_123:
    __asan_report_store8();
    goto LABEL_124;
  }
  **(_QWORD **)&v62._M_pod_data[8] = *(_QWORD *)&v32[2].__size[8 * v33];
  p_next = (unsigned __int64)&v32[40].__data.__list.__next;
  if ( *(_BYTE *)(((unsigned __int64)&v32[40].__data.__list.__next >> 3) + 0x7FFF8000) )
  {
LABEL_124:
    __asan_report_load8(p_next);
    goto LABEL_125;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v62._M_pod_data[8] + 48LL) >> 3) + 0x7FFF8000) )
  {
LABEL_125:
    __asan_report_store8();
    goto LABEL_126;
  }
  *(_QWORD *)(*(_QWORD *)&v62._M_pod_data[8] + 48LL) = v32[40].__data.__list.__next;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v62._M_pod_data[8] + 56LL) >> 3) + 0x7FFF8000) )
  {
LABEL_126:
    __asan_report_store8();
    goto LABEL_127;
  }
  *(_QWORD *)(*(_QWORD *)&v62._M_pod_data[8] + 56LL) = 0LL;
  next = v32[40].__data.__list.__next;
  if ( !next )
    goto LABEL_89;
  if ( *(_BYTE *)(((unsigned __int64)&next[3].__next >> 3) + 0x7FFF8000) )
  {
LABEL_127:
    __asan_report_store8();
    goto LABEL_128;
  }
  next[3].__next = *(__pthread_internal_list **)&v62._M_pod_data[8];
LABEL_89:
  v45 = *(_QWORD *)&v62._M_pod_data[8];
  v32[40].__data.__list.__next = *(__pthread_internal_list **)&v62._M_pod_data[8];
  if ( *(_BYTE *)(((unsigned __int64)(v45 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_128:
    v53 = (struct _Unwind_Exception *)__asan_report_store8();
    pthread_mutex_unlock(v40);
    if ( v63 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v63);
    if ( function.__self_ptr._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(function.__self_ptr._M_refcount._M_pi);
    v50 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 72);
    if ( v50 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v50);
    __asan_handle_no_return(v50);
    _Unwind_Resume(v53);
  }
  *(_QWORD *)(v45 + 64) = v32;
  pthread_mutex_unlock(v32 + 1);
  v64._M_functor = v62;
  v46 = v63;
  v64._M_manager = (std::_Function_base::_Manager_type)v63;
  if ( !v63 )
  {
LABEL_95:
    v64._M_invoker = (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)>::_Invoker_type)boost::asio::detail::default_spawn_handler;
    boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::HttpClient::request(common::minet::http_client::HttpRequest const&,unsigned int,std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse &&)>)::{lambda(boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>)#1},boost::context::basic_fixedsize_stack<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>::stack_traits>>(
      (boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> > *)&v64,
      &function,
      (const boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)&funca._M_invoker,
      0LL);
    goto LABEL_134;
  }
  v47 = &v63->_M_use_count;
  if ( &_pthread_key_create )
  {
    v48 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v47 & 7) + 3) < v48 || !v48 )
    {
      _InterlockedAdd(v47, 1u);
      goto LABEL_95;
    }
    v46 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v47);
  }
  v54 = *(_BYTE *)(((unsigned __int64)&v46->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v46 + 8) & 7) + 3) < v54 || !v54 )
  {
    ++v46->_M_use_count;
    goto LABEL_95;
  }
  __asan_report_load4(&v46->_M_use_count);
LABEL_134:
  if ( v64._M_manager )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release((std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const)v64._M_manager);
  if ( v63 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v63);
  if ( function.__self_ptr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(function.__self_ptr._M_refcount._M_pi);
  v55 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 72);
  if ( v55 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v55);
  if ( v65 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return 0LL;
};

// Line 48: range 000000000CC3BAC0-000000000CC3D2E2
void __fastcall common::minet::http_client::HttpClient::doRequest(
        common::minet::http_client::HttpClient *const this,
        std::__weak_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type *a2)
{
  const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *p_beast_req; // r14
  unsigned __int64 v4; // r12
  _DWORD *v5; // r13
  void *p_client_mgr; // rdi
  char v7; // dl
  char v8; // al
  __int64 v9; // rax
  void *p_is_timeout; // rdi
  char v11; // dl
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  common::minet::http_client::HttpClientMgr *client_mgr; // rdx
  __int64 v15; // rax
  char v16; // cl
  __int64 v17; // rax
  void *p_M_string_length; // rdi
  std::string_view v19; // r8
  std::string_view v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  char v23; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rdi
  char v25; // dl
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  char v28; // al
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  char v31; // al
  common::minet::http_client::HttpRetcode *p_retcode; // rdi
  char v33; // al
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rdx
  bool v39; // al
  char v40; // al
  char v41; // al
  char v42; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v43; // rdi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *p_tcp_stream; // [rsp+8h] [rbp-1C8h]
  boost::asio::yield_context yielda; // [rsp+10h] [rbp-1C0h] BYREF
  std::string v; // [rsp+50h] [rbp-180h] BYREF
  std::string v47; // [rsp+70h] [rbp-160h] BYREF
  std::string v48; // [rsp+90h] [rbp-140h] BYREF
  common::milog::MiLogStream v49; // [rsp+B0h] [rbp-120h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > handler; // [rsp+D0h] [rbp-100h] BYREF
  char v51[208]; // [rsp+100h] [rbp-D0h] BYREF

  yielda.coro_._M_ptr = a2;
  v4 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_2(160LL);
    if ( v17 )
      v4 = v17;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 5 ec:49 64 16 12 self_ptr:113 96 24 10 results:63";
  *(_QWORD *)(v4 + 16) = common::minet::http_client::HttpClient::doRequest;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 36) = 0;
  *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  p_client_mgr = &this->client_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_mgr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_client_mgr);
LABEL_27:
    __asan_report_load4(p_client_mgr);
    goto LABEL_28;
  }
  p_client_mgr = &this->type_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v7 && v7 )
    goto LABEL_27;
  common::minet::http_client::HttpClientMgr::addUnfinishedNum(this->client_mgr_, this->type_);
  p_beast_req = &this->beast_req_;
  if ( !common::minet::http_client::HttpUtils::initBeastRequest(&this->req_, &this->beast_req_) )
    goto LABEL_29;
  p_beast_req = (const boost::beast::http::message<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *)&v49;
  common::milog::MiLogStream::MiLogStream(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/async_http_client.cpp",
    "doRequest",
    57);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v49.ostr_, "init beast req fails");
  common::milog::MiLogStream::~MiLogStream(&v49);
  p_client_mgr = &this->retcode_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( !v8 || v8 > 3 )
  {
    this->retcode_ = HTTP_PARA_ERROR;
    goto LABEL_9;
  }
LABEL_28:
  __asan_report_store4(p_client_mgr);
LABEL_29:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)a2);
  handler.ec_ = (boost::system::error_code *)(v4 + 32);
  p_M_string_length = &this->req_.port._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->req_.port._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_35;
  }
  p_M_string_length = &this->req_.port;
  if ( *(_BYTE *)(((unsigned __int64)&this->req_.port >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_string_length);
    goto LABEL_36;
  }
  p_M_string_length = &this->req_.host._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->req_.host._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_M_string_length);
    goto LABEL_37;
  }
  p_M_string_length = &this->req_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->req_ >> 3) + 0x7FFF8000) )
  {
    v20._M_str = this->req_.host._M_dataplus._M_p;
    v20._M_len = this->req_.host._M_string_length;
    v19._M_len = this->req_.port._M_string_length;
    v19._M_str = this->req_.port._M_dataplus._M_p;
    boost::asio::ip::basic_resolver<boost::asio::ip::tcp,boost::asio::executor>::async_resolve<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
      (boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >::return_type *)(v4 + 96),
      &this->resolver_,
      v20,
      v19,
      (boost::asio::ip::resolver_base::flags)0,
      &handler);
    goto LABEL_38;
  }
LABEL_37:
  __asan_report_load8(p_M_string_length);
LABEL_38:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  if ( !*(_DWORD *)(v4 + 32) )
    goto LABEL_52;
  common::milog::MiLogStream::MiLogStream(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/async_http_client.cpp",
    "doRequest",
    66);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v49.ostr_, "async_resolve fails: ");
  v21 = *(_QWORD *)(v4 + 40);
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
    v22 = *(_QWORD *)(v4 + 40);
    __asan_report_load8(v22);
    goto LABEL_43;
  }
  v22 = *(_QWORD *)v21 + 32LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_load8(v22);
    goto LABEL_44;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v21 + 32LL))(
    &v,
    v21,
    *(unsigned int *)(v4 + 32));
LABEL_44:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v49.ostr_, &v);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v._M_dataplus._M_p != &v._anon_0 )
    operator delete(v._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v49);
  v23 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( !v23 || v23 > 3 )
  {
    this->retcode_ = HTTP_RESOLVE_FAIL;
    goto LABEL_49;
  }
  __asan_report_store4(&this->retcode_);
LABEL_52:
  p_tcp_stream = &this->tcp_stream_;
  v25 = *(_BYTE *)(((unsigned __int64)&this->timeout_ms_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 72) & 7) + 3) >= v25 && v25 )
  {
    __asan_report_load4(&this->timeout_ms_);
  }
  else
  {
    boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::expires_after(
      p_tcp_stream,
      (std::chrono::nanoseconds)(1000000LL * this->timeout_ms_));
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
      &handler,
      (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)yielda.coro_._M_ptr);
    handler.ec_ = (boost::system::error_code *)(v4 + 32);
    boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_connect<boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void>(
      (boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> >::return_type *)&yielda.handler_.target_,
      p_tcp_stream,
      (const boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> *)(v4 + 96),
      &handler);
  }
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  if ( !*(_DWORD *)(v4 + 32) )
    goto LABEL_68;
  common::milog::MiLogStream::MiLogStream(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/async_http_client.cpp",
    "doRequest",
    78);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v49.ostr_, "async_connect fails: ");
  v26 = *(_QWORD *)(v4 + 40);
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    v27 = *(_QWORD *)(v4 + 40);
    __asan_report_load8(v27);
    goto LABEL_61;
  }
  v27 = *(_QWORD *)v26 + 32LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_load8(v27);
    goto LABEL_62;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v26 + 32LL))(
    &v47,
    v26,
    *(unsigned int *)(v4 + 32));
LABEL_62:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v49.ostr_, &v47);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v47._M_dataplus._M_p != &v47._anon_0 )
    operator delete(v47._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v49);
  v28 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( !v28 || v28 > 3 )
  {
    this->retcode_ = HTTP_CONNECT_FAIL;
    goto LABEL_49;
  }
  __asan_report_store4(&this->retcode_);
LABEL_68:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)yielda.coro_._M_ptr);
  handler.ec_ = (boost::system::error_code *)(v4 + 32);
  boost::beast::http::async_write<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
    p_tcp_stream,
    p_beast_req,
    &handler);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  if ( !*(_DWORD *)(v4 + 32) )
    goto LABEL_80;
  common::milog::MiLogStream::MiLogStream(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/async_http_client.cpp",
    "doRequest",
    86);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v49.ostr_, "async_write fails: ");
  v29 = *(_QWORD *)(v4 + 40);
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
    v30 = *(_QWORD *)(v4 + 40);
    __asan_report_load8(v30);
    goto LABEL_73;
  }
  v30 = *(_QWORD *)v29 + 32LL;
  if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v30);
    goto LABEL_74;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v29 + 32LL))(
    &v48,
    v29,
    *(unsigned int *)(v4 + 32));
LABEL_74:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v49.ostr_, &v48);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v48._M_dataplus._M_p != &v48._anon_0 )
    operator delete(v48._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v49);
  v31 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( !v31 || v31 > 3 )
  {
    this->retcode_ = HTTP_SEND_FAIL;
    goto LABEL_49;
  }
  __asan_report_store4(&this->retcode_);
LABEL_80:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    (const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *)yielda.coro_._M_ptr);
  handler.ec_ = (boost::system::error_code *)(v4 + 32);
  boost::beast::http::async_read<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
    p_tcp_stream,
    &this->buffer_,
    &this->beast_res_,
    &handler);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  if ( *(_DWORD *)(v4 + 32) )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client.cpp",
      "doRequest",
      94);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v48._anon_0._M_allocated_capacity + 1),
      "async_read fails: ");
    v34 = *(_QWORD *)(v4 + 40);
    if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
    {
      v35 = *(_QWORD *)(v4 + 40);
      __asan_report_load8(v35);
    }
    else
    {
      v35 = *(_QWORD *)v34 + 32LL;
      if ( !*(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(common::milog::MiLogStream *, unsigned __int64, _QWORD))(*(_QWORD *)v34 + 32LL))(
          &v49,
          v34,
          *(unsigned int *)(v4 + 32));
LABEL_90:
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v48._anon_0._M_allocated_capacity
          + 1),
          (const std::string *)&v49);
        if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v49.log_ != &v49.ostr_ptr_._M_refcount )
          operator delete(v49.log_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
        p_retcode = &this->retcode_;
        v36 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
        if ( !v36 || v36 > 3 )
        {
          this->retcode_ = HTTP_RECV_FAIL;
LABEL_49:
          v24 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 104);
          if ( !v24 )
            goto LABEL_9;
          goto LABEL_50;
        }
        __asan_report_store4(p_retcode);
LABEL_96:
        v9 = __asan_report_store4(p_retcode);
LABEL_97:
        v37 = *(_QWORD *)(v9 - 120);
        if ( *(_BYTE *)(((unsigned __int64)(&boost::beast::make_error_code(boost::beast::error)::cat + 1) >> 3)
                      + 0x7FFF8000) )
        {
          v37 = __asan_report_load8(&boost::beast::make_error_code(boost::beast::error)::cat + 1);
        }
        else
        {
          v38 = (__int64)*(&boost::beast::make_error_code(boost::beast::error)::cat + 1);
          if ( !v38 )
          {
            v39 = &boost::beast::make_error_code(boost::beast::error)::cat == (__int64 (__fastcall ***)(boost::beast::detail::error_codes *__hidden))v37;
            goto LABEL_100;
          }
        }
        p_is_timeout = (void *)(v37 + 8);
        if ( *(_BYTE *)(((unsigned __int64)(v37 + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_is_timeout);
          goto LABEL_110;
        }
        v39 = v38 == *(_QWORD *)(v37 + 8);
LABEL_100:
        if ( !v39 )
          goto LABEL_10;
        common::milog::MiLogStream::MiLogStream(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/async_http_client.cpp",
          "doRequest",
          105);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          v49.ostr_,
          "http request fails: timeout");
        common::milog::MiLogStream::~MiLogStream(&v49);
        p_is_timeout = &this->is_timeout_;
        v40 = *(_BYTE *)(((unsigned __int64)&this->is_timeout_ >> 3) + 0x7FFF8000);
        if ( v40 > (((unsigned __int8)this - 76) & 7) || !v40 )
        {
          this->is_timeout_ = 1;
          p_is_timeout = &this->retcode_;
          v41 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
          if ( !v41 || v41 > 3 )
          {
            this->retcode_ = HTTP_TIMEOUT;
            goto LABEL_10;
          }
LABEL_111:
          __asan_report_store4(p_is_timeout);
LABEL_112:
          __asan_report_load4(p_is_timeout);
          goto LABEL_113;
        }
LABEL_110:
        __asan_report_store1(p_is_timeout);
        goto LABEL_111;
      }
    }
    __asan_report_load8(v35);
    goto LABEL_90;
  }
  p_retcode = &this->retcode_;
  v33 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( v33 && v33 <= 3 )
    goto LABEL_96;
  this->retcode_ = HTTP_SUCCESS;
  v24 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 104);
  if ( v24 )
LABEL_50:
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
LABEL_9:
  v9 = v4 + 160;
  if ( *(_DWORD *)(v4 + 32) == 1 )
    goto LABEL_97;
LABEL_10:
  common::milog::MiLogStream::MiLogStream(
    &v49,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/async_http_client.cpp",
    "doRequest",
    109);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v49.ostr_, "http request while ret: ");
  p_is_timeout = &this->retcode_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 112) & 7) + 3) >= v11 && v11 )
    goto LABEL_112;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v49.ostr_, this->retcode_);
  common::milog::MiLogStream::~MiLogStream(&v49);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    p_M_refcount = (volatile signed __int32 *)this;
    __asan_report_load8(this);
    goto LABEL_114;
  }
  p_M_refcount = (volatile signed __int32 *)(this->_vptr_HttpClient + 3);
  if ( *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_114:
    __asan_report_load8(p_M_refcount);
    goto LABEL_115;
  }
  (*((void (__fastcall **)(common::minet::http_client::HttpClient *const))this->_vptr_HttpClient + 3))(this);
  p_M_refcount = (volatile signed __int32 *)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_115:
    __asan_report_load8(p_M_refcount);
LABEL_116:
    __asan_report_load8(p_M_refcount);
    goto LABEL_117;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v4 + 72) = M_pi;
  if ( !M_pi )
    goto LABEL_123;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock(M_pi);
  p_M_refcount = (volatile signed __int32 *)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient> >> 3)
                + 0x7FFF8000) )
    goto LABEL_116;
  *(_QWORD *)(v4 + 64) = this->_M_weak_this._M_ptr;
  p_M_refcount = (volatile signed __int32 *)&this->client_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_mgr_ >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    __asan_report_load8(p_M_refcount);
    goto LABEL_118;
  }
  client_mgr = this->client_mgr_;
  yielda.ca_ = *(boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> >::caller_type **)(v4 + 64);
  v15 = *(_QWORD *)(v4 + 72);
  yielda.handler_.executor_.impl_ = (boost::asio::executor::impl_base *)v15;
  if ( v15 )
  {
    p_M_refcount = (volatile signed __int32 *)(v15 + 8);
    if ( !&_pthread_key_create )
      goto LABEL_119;
    v16 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v16 || !v16 )
    {
      _InterlockedAdd(p_M_refcount, 1u);
      goto LABEL_23;
    }
LABEL_118:
    v15 = __asan_report_store4(p_M_refcount);
LABEL_119:
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v15 + 8);
    v42 = *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v15 + 8) & 7) + 3) < v42 || !v42 )
    {
      ++*(_DWORD *)(v15 + 8);
      goto LABEL_23;
    }
    __asan_report_load4(M_pi);
LABEL_123:
    __asan_handle_no_return(M_pi);
    std::__throw_bad_weak_ptr();
  }
LABEL_23:
  common::minet::http_client::HttpClientMgr::finishHttpClient(
    client_mgr,
    (common::minet::http_client::HttpClientPtr)__PAIR128__(
                                                 (unsigned __int64)client_mgr,
                                                 (boost::asio::yield_context *)&yielda.ca_));
  if ( yielda.handler_.executor_.impl_ )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release((std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const)yielda.handler_.executor_.impl_);
  v43 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 72);
  if ( v43 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v43);
  if ( v51 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 119: range 000000000CC294DC-000000000CC296D6
void __fastcall common::minet::http_client::HttpClient::onResult(common::minet::http_client::HttpClient *const this)
{
  unsigned __int64 v1; // r12
  _DWORD *v2; // r13
  __int64 v3; // rax
  char v4; // al
  _BYTE *v5; // rdi
  _BYTE v6[200]; // [rsp+0h] [rbp-C8h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v1 = v3;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 88 7 res:122";
  *(_QWORD *)(v1 + 16) = common::minet::http_client::HttpClient::onResult;
  v2 = (_DWORD *)(v1 >> 3);
  v2[536862720] = -235802127;
  v2[536862723] = -218103808;
  v2[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->func_._M_manager >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->func_._M_manager);
  }
  else
  {
    if ( !this->func_._M_manager )
      goto LABEL_15;
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 48) = 0;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_QWORD *)(v1 + 64) = v1 + 48;
    *(_QWORD *)(v1 + 72) = v1 + 48;
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_QWORD *)(v1 + 88) = v1 + 104;
    *(_QWORD *)(v1 + 96) = 0LL;
    *(_BYTE *)(v1 + 104) = 0;
    common::minet::http_client::HttpUtils::initHttpResponse(
      &this->beast_res_,
      (common::minet::http_client::HttpResponse *)(v1 + 32),
      0);
  }
  v4 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    __asan_report_load4(&this->retcode_);
  else
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::operator()(
      &this->func_,
      this->retcode_,
      &this->req_,
      (common::minet::http_client::HttpResponse *)(v1 + 32));
  v5 = *(_BYTE **)(v1 + 88);
  if ( v5 != (_BYTE *)(v1 + 104) )
    operator delete(v5);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v1 + 40),
    *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v1 + 56));
LABEL_15:
  if ( v6 == (_BYTE *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 130: range 000000000CC2A828-000000000CC2AC04
void __fastcall common::minet::http_client::HttpClient::disconnect(common::minet::http_client::HttpClient *const this)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r13
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *p_tcp_stream; // r14
  boost::beast::tcp_stream *v5; // rdi
  boost::shared_ptr<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::impl_type>::element_type *px; // rax
  char v7; // dl
  int socket; // r15d
  int *v9; // rbp
  char v10; // dl
  int v11; // eax
  char v12; // cl
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  char v16; // al
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v21; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-C0h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-B8h] BYREF
  std::string v; // [rsp+40h] [rbp-98h] BYREF
  char v25[120]; // [rsp+60h] [rbp-78h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_0(64LL);
    if ( v13 )
      v2 = v13;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ec:131";
  *(_QWORD *)(v2 + 16) = common::minet::http_client::HttpClient::disconnect;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  p_tcp_stream = &this->tcp_stream_;
  v5 = &this->tcp_stream_;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::cancel(&this->tcp_stream_);
  if ( *(_BYTE *)(((unsigned __int64)&this->tcp_stream_ >> 3) + 0x7FFF8000) )
  {
    v5 = p_tcp_stream;
    __asan_report_load8(p_tcp_stream);
LABEL_19:
    __asan_handle_no_return(v5);
    __assert_fail(
      "px != 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
      0x2DEu,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = boost::beast:"
      ":basic_stream<boost::asio::ip::tcp, boost::asio::executor, boost::beast::unlimited_rate_policy>::impl_type; typena"
      "me boost::detail::sp_member_access<T>::type = boost::beast::basic_stream<boost::asio::ip::tcp, boost::asio::execut"
      "or, boost::beast::unlimited_rate_policy>::impl_type*]");
  }
  px = this->tcp_stream_.impl_.px;
  if ( !px )
    goto LABEL_19;
  v7 = *(_BYTE *)(((unsigned __int64)&px->socket.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(&px->socket.impl_.implementation_);
    goto LABEL_21;
  }
  socket = px->socket.impl_.implementation_.socket_;
  if ( socket == -1 )
  {
LABEL_21:
    *(_QWORD *)(v2 + 32) = 0x100000009LL;
    *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    goto LABEL_13;
  }
  v9 = __errno_location();
  v10 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v9 & 7) + 3) >= v10 && v10 )
  {
    __asan_report_store4(v9);
LABEL_23:
    __asan_report_load4(v9);
    goto LABEL_24;
  }
  *v9 = 0;
  v1 = 2LL;
  v11 = shutdown(socket, 2);
  v12 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v9 & 7) + 3) >= v12 && v12 )
    goto LABEL_23;
  *(_QWORD *)(v2 + 32) = ((unsigned __int64)(*v9 != 0) << 32) | (unsigned int)*v9;
  *(_QWORD *)(v2 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( !v11 )
    *(_QWORD *)(v2 + 32) = 0LL;
LABEL_13:
  if ( !*(_DWORD *)(v2 + 32) )
    goto LABEL_14;
LABEL_24:
  v21 = 0x10000006BLL;
  v22 = (unsigned __int64)&boost::system::detail::cat_holder<void>::generic_category_instance;
  v14 = *(_QWORD *)(v2 + 40);
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v14);
    goto LABEL_35;
  }
  v15 = *(_QWORD *)v14 + 16LL;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    v17 = v15;
    __asan_report_load8(v15);
LABEL_36:
    __asan_report_load8(v17);
    goto LABEL_37;
  }
  v1 = *(unsigned int *)(v2 + 32);
  v16 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, __int64 *))(*(_QWORD *)v14 + 16LL))(
          v14,
          v1,
          &v21);
  if ( v16 )
    goto LABEL_30;
  v17 = v22;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  v18 = *(_QWORD *)v22 + 24LL;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(v18);
LABEL_38:
    v19 = v1;
    __asan_report_load8(v1);
    goto LABEL_39;
  }
  v16 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))(*(_QWORD *)v22 + 24LL))(
          v22,
          v2 + 32,
          (unsigned int)v21);
LABEL_30:
  if ( v16 )
    goto LABEL_14;
  common::milog::MiLogStream::MiLogStream(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/async_http_client.cpp",
    "disconnect",
    137);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v23.ostr_, "socket().shutdown fails: ");
  v1 = *(_QWORD *)(v2 + 40);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    goto LABEL_38;
  v19 = *(_QWORD *)v1 + 32LL;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(v19);
    goto LABEL_40;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v1 + 32LL))(
    &v,
    v1,
    *(unsigned int *)(v2 + 32));
LABEL_40:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v23.ostr_, &v);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v23.ostr_, this);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v._M_dataplus._M_p != &v._anon_0 )
    operator delete(v._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v23);
LABEL_14:
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::close(p_tcp_stream);
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 148: range 000000000CC2D648-000000000CC2E482
__int64 __fastcall common::minet::http_client::SslClient::request(
        common::minet::http_client::SslClient *const this,
        unsigned __int64 req,
        uint32_t timeout_ms,
        void *a4)
{
  common::minet::http_client::ResponseCallBackFunc *p_func; // rbp
  unsigned __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 verify_callback; // rdx
  boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *p_ssl_stream; // rdi
  boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *M_head_impl; // rax
  boost::asio::io_context *M_object; // rsi
  common::minet::http_client::ResponseCallBackFunc *p_method; // rdi
  char v13; // al
  char v14; // al
  char v15; // dl
  char v16; // dl
  char v17; // al
  std::_Any_data M_functor; // rax
  bool (*M_manager)(std::_Any_data *, const std::_Any_data *, std::_Manager_operation); // rax
  volatile signed __int32 *p_M_manager; // rdi
  void (*M_invoker)(const std::_Any_data *, common::minet::http_client::HttpRetcode *, common::minet::http_client::HttpRequest *, common::minet::http_client::HttpResponse *); // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::__weak_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  void *v24; // rax
  __int64 v25; // rax
  char v26; // dl
  __int64 v27; // rax
  unsigned int error; // ebx
  boost::ulong_long_type id; // rax
  int (**v30)(...); // rdi
  char v31; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v32; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v33; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v35; // dl
  boost::asio::io_context **p_ioc; // rdi
  boost::asio::detail::strand_executor_service *v37; // rax
  char v38; // cl
  pthread_mutex_t *v39; // rbx
  unsigned __int64 v40; // rbp
  unsigned __int64 v41; // rax
  _Atomic_word *v42; // rdi
  char v43; // dl
  char v44; // cl
  unsigned __int64 p_list; // rdi
  char v46; // dl
  pthread_mutex_t *v47; // r15
  __pthread_internal_list *prev; // rcx
  unsigned __int64 v49; // rcx
  unsigned __int64 p_next; // rdi
  __pthread_internal_list *next; // rax
  __int64 v52; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v53; // rax
  _Atomic_word *v54; // rdi
  char v55; // dl
  void *v56; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v57; // rdi
  int v58; // eax
  pthread_mutex_t *v59; // rax
  struct _Unwind_Exception *v60; // rbx
  char v61; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v62; // rdi
  unsigned int v64; // [rsp+Ch] [rbp-13Ch]
  unsigned __int64 timeout_msb; // [rsp+18h] [rbp-130h]
  common::minet::http_client::ResponseCallBackFunc funca; // [rsp+20h] [rbp-128h] BYREF
  common::minet::http_client::SslClient::request::<lambda(auto:3)> function; // [rsp+40h] [rbp-108h] BYREF
  std::_Any_data v69; // [rsp+50h] [rbp-F8h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v70; // [rsp+60h] [rbp-E8h]
  common::milog::MiLogStream v71; // [rsp+70h] [rbp-D8h] BYREF
  std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> v72; // [rsp+90h] [rbp-B8h] BYREF
  char v73[152]; // [rsp+B0h] [rbp-98h] BYREF

  p_func = (common::minet::http_client::ResponseCallBackFunc *)req;
  funca._M_functor._M_unused._M_object = a4;
  v6 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v27 = __asan_stack_malloc_1(96LL);
    if ( v27 )
      v6 = v27;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 16 12 self_ptr:160 64 16 2 ec";
  *(_QWORD *)(v6 + 16) = common::minet::http_client::SslClient::request;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -202178560;
  *(_DWORD *)(v6 + 64) = 0;
  *(_BYTE *)(v6 + 68) = 0;
  *(_QWORD *)(v6 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)&this->ssl_ctx_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->ssl_ctx_);
LABEL_38:
    __asan_report_load8(&this->ssl_ctx_);
    __asan_handle_no_return(&this->ssl_ctx_);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v6 + 64), "set_verify_mode");
  }
  verify_callback = SSL_CTX_get_verify_callback(this->ssl_ctx_.handle_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ssl_ctx_ >> 3) + 0x7FFF8000) )
    goto LABEL_38;
  SSL_CTX_set_verify(this->ssl_ctx_.handle_, 0LL, verify_callback);
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_QWORD *)(v6 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v64 = 0;
  if ( *(_BYTE *)((req >> 3) + 0x7FFF8000) )
  {
    p_ssl_stream = (boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)req;
    __asan_report_load8(req);
    goto LABEL_40;
  }
  p_ssl_stream = &this->ssl_stream_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ssl_stream_ >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(p_ssl_stream);
    goto LABEL_41;
  }
  M_head_impl = this->ssl_stream_.p_._M_t._M_t._M_head_impl;
  p_ssl_stream = (boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)&M_head_impl->stream_.core_;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->stream_.core_ >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_ssl_stream);
    goto LABEL_42;
  }
  if ( SSL_ctrl(M_head_impl->stream_.core_.engine_.ssl_, 55LL, 0LL, *(_QWORD *)req) )
  {
    std::string::_M_assign(&this->req_, req);
    std::string::_M_assign(&this->req_.port, req + 32);
    std::string::_M_assign(&this->req_.uri, req + 64);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator=(
      &this->req_.head_map._M_t,
      (const std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *)(req + 96));
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator=(
      &this->req_.param_map._M_t,
      (const std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *)(req + 144));
    M_object = (boost::asio::io_context *)(req + 192);
    std::string::_M_assign(&this->req_.body, &p_func[6]);
    p_method = p_func + 7;
    v13 = *(_BYTE *)(((unsigned __int64)&p_func[7] >> 3) + 0x7FFF8000);
    if ( v13 && v13 <= 3 )
    {
      __asan_report_load4(p_method);
    }
    else
    {
      p_method = (common::minet::http_client::ResponseCallBackFunc *)&this->req_.method;
      v14 = *(_BYTE *)(((unsigned __int64)&this->req_.method >> 3) + 0x7FFF8000);
      if ( !v14 || v14 > 3 )
      {
        this->req_.method = (common::minet::http_client::HttpMethod)p_func[7]._M_functor._M_unused._M_object;
        p_method = (common::minet::http_client::ResponseCallBackFunc *)((char *)p_func + 228);
        v15 = *(_BYTE *)(((unsigned __int64)&p_func[7]._M_functor._M_pod_data[4] >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)p_func - 28) & 7) + 3) < v15 || !v15 )
        {
          p_method = (common::minet::http_client::ResponseCallBackFunc *)&this->req_.version;
          v16 = *(_BYTE *)(((unsigned __int64)&this->req_.version >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)this - 92) & 7) + 3) < v16 || !v16 )
          {
            this->req_.version = *(_DWORD *)&p_func[7]._M_functor._M_pod_data[4];
            p_method = (common::minet::http_client::ResponseCallBackFunc *)((char *)p_func + 232);
            if ( *(char *)(((unsigned __int64)&p_func[7]._M_functor._M_pod_data[8] >> 3) + 0x7FFF8000) >= 0 )
            {
              p_method = (common::minet::http_client::ResponseCallBackFunc *)&this->req_.is_ssl;
              if ( *(char *)(((unsigned __int64)&this->req_.is_ssl >> 3) + 0x7FFF8000) >= 0 )
              {
                this->req_.is_ssl = p_func[7]._M_functor._M_pod_data[8];
                p_method = (common::minet::http_client::ResponseCallBackFunc *)&this->timeout_ms_;
                v17 = *(_BYTE *)(((unsigned __int64)&this->timeout_ms_ >> 3) + 0x7FFF8000);
                if ( !v17 || v17 > 3 )
                {
                  this->timeout_ms_ = timeout_ms;
                  p_func = &this->func_;
                  M_object = (boost::asio::io_context *)funca._M_functor._M_unused._M_object;
                  std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function(
                    &v72,
                    (const std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *)funca._M_functor._M_unused._M_object);
                  M_functor = v72._M_functor;
                  if ( !*(_WORD *)(((unsigned __int64)&this->func_ >> 3) + 0x7FFF8000) )
                  {
                    v72._M_functor = (std::_Any_data)_mm_loadu_si128((const __m128i *)&this->func_);
                    this->func_._M_functor = M_functor;
                    M_manager = v72._M_manager;
                    p_M_manager = (volatile signed __int32 *)&this->func_._M_manager;
                    if ( !*(_BYTE *)(((unsigned __int64)&this->func_._M_manager >> 3) + 0x7FFF8000) )
                    {
                      v72._M_manager = this->func_._M_manager;
                      this->func_._M_manager = M_manager;
                      M_invoker = v72._M_invoker;
                      p_M_manager = (volatile signed __int32 *)&this->func_._M_invoker;
                      if ( !*(_BYTE *)(((unsigned __int64)&this->func_._M_invoker >> 3) + 0x7FFF8000) )
                      {
                        v72._M_invoker = this->func_._M_invoker;
                        this->func_._M_invoker = M_invoker;
                        if ( v72._M_manager )
                        {
                          M_object = (boost::asio::io_context *)&v72;
                          v72._M_manager((std::_Any_data *)&v72, (const std::_Any_data *)&v72, __destroy_functor);
                        }
                        p_M_manager = (volatile signed __int32 *)&this->_M_weak_this._M_refcount;
                        if ( !*(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
                        {
                          M_pi = this->_M_weak_this._M_refcount._M_pi;
                          *(_QWORD *)(v6 + 72) = M_pi;
                          if ( !M_pi )
                          {
                            __asan_handle_no_return(0LL);
                            std::__throw_bad_weak_ptr();
                          }
                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock(M_pi);
                          p_M_manager = (volatile signed __int32 *)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient>;
                          if ( !*(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient> >> 3)
                                         + 0x7FFF8000) )
                          {
                            M_ptr = this->_M_weak_this._M_ptr;
                            *(_QWORD *)(v6 + 64) = M_ptr;
                            if ( !M_ptr )
                              goto LABEL_70;
                            M_object = (boost::asio::io_context *)&`typeinfo for'common::minet::http_client::HttpClient;
                            v24 = __dynamic_cast(
                                    M_ptr,
                                    (const struct __class_type_info *)&`typeinfo for'common::minet::http_client::HttpClient,
                                    (const struct __class_type_info *)&`typeinfo for'common::minet::http_client::SslClient,
                                    0LL);
                            if ( !v24 )
                              goto LABEL_70;
                            *(_QWORD *)(v6 + 32) = v24;
                            v25 = *(_QWORD *)(v6 + 72);
                            *(_QWORD *)(v6 + 40) = v25;
                            if ( !v25 )
                              goto LABEL_71;
                            p_M_manager = (volatile signed __int32 *)(v25 + 8);
                            if ( !&_pthread_key_create )
                            {
LABEL_66:
                              v31 = *(_BYTE *)(((unsigned __int64)(v25 + 8) >> 3) + 0x7FFF8000);
                              if ( (char)(((v25 + 8) & 7) + 3) < v31 || !v31 )
                              {
                                ++*(_DWORD *)(v25 + 8);
                                goto LABEL_71;
                              }
                              __asan_report_load4(v25 + 8);
LABEL_70:
                              *(_QWORD *)(v6 + 32) = 0LL;
                              *(_QWORD *)(v6 + 40) = 0LL;
LABEL_71:
                              v32 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 72);
                              if ( v32 )
                                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v32);
                              funca._M_invoker = (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)>::_Invoker_type)boost::context::stack_traits::default_size((boost::context::stack_traits *)v32);
                              function.__self_ptr._M_ptr = *(std::__shared_ptr<common::minet::http_client::SslClient,(__gnu_cxx::_Lock_policy)2>::element_type **)(v6 + 32);
                              v33 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 40);
                              function.__self_ptr._M_refcount._M_pi = v33;
                              if ( v33 )
                              {
                                p_M_use_count = &v33->_M_use_count;
                                if ( &_pthread_key_create )
                                {
                                  v35 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
                                  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v35 || !v35 )
                                  {
                                    _InterlockedAdd(p_M_use_count, 1u);
                                    goto LABEL_78;
                                  }
                                  v33 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
                                }
                                p_ioc = (boost::asio::io_context **)&v33->_M_use_count;
                                v38 = *(_BYTE *)(((unsigned __int64)&v33->_M_use_count >> 3) + 0x7FFF8000);
                                if ( (char)((((_BYTE)v33 + 8) & 7) + 3) >= v38 && v38 )
                                {
                                  __asan_report_load4(p_ioc);
                                  goto LABEL_87;
                                }
                                ++v33->_M_use_count;
                              }
LABEL_78:
                              p_ioc = &this->ioc_;
                              if ( !*(_BYTE *)(((unsigned __int64)&this->ioc_ >> 3) + 0x7FFF8000) )
                              {
                                M_object = this->ioc_;
                                v69._M_unused._M_object = M_object;
                                if ( !*(_BYTE *)(((unsigned __int64)M_object >> 3) + 0x7FFF8000) )
                                {
                                  v37 = boost::asio::detail::service_registry::use_service<boost::asio::detail::strand_executor_service>(
                                          M_object->service_registry_,
                                          M_object);
                                  goto LABEL_89;
                                }
LABEL_88:
                                v37 = (boost::asio::detail::strand_executor_service *)__asan_report_load8(M_object);
LABEL_89:
                                v39 = (pthread_mutex_t *)v37;
                                v40 = operator new(0x48uLL);
                                if ( *(_BYTE *)(((v40 + 16) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store8();
                                }
                                else
                                {
                                  *(_QWORD *)(v40 + 16) = 0LL;
                                  if ( !*(_BYTE *)(((v40 + 24) >> 3) + 0x7FFF8000) )
                                  {
                                    *(_QWORD *)(v40 + 24) = 0LL;
                                    if ( !*(_BYTE *)(((v40 + 32) >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)(v40 + 32) = 0LL;
                                      if ( !*(_BYTE *)(((v40 + 40) >> 3) + 0x7FFF8000) )
                                      {
                                        *(_QWORD *)(v40 + 40) = 0LL;
                                        *(_QWORD *)&v69._M_pod_data[8] = v40;
                                        v41 = operator new(0x18uLL);
LABEL_98:
                                        v42 = (_Atomic_word *)(v41 + 8);
                                        v43 = *(_BYTE *)(((v41 + 8) >> 3) + 0x7FFF8000);
                                        if ( v43 && v43 <= 3 )
                                        {
                                          __asan_report_store4(v42);
                                        }
                                        else
                                        {
                                          *(_DWORD *)(v41 + 8) = 1;
                                          v42 = (_Atomic_word *)(v41 + 12);
                                          v44 = *(_BYTE *)(((v41 + 12) >> 3) + 0x7FFF8000);
                                          if ( (char)(((v41 + 12) & 7) + 3) < v44 || !v44 )
                                          {
                                            *(_DWORD *)(v41 + 12) = 1;
                                            if ( !*(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
                                            {
                                              *(_QWORD *)v41 = &`vtable for'std::_Sp_counted_ptr<boost::asio::detail::strand_executor_service::strand_impl *,(__gnu_cxx::_Lock_policy)2>
                                                             + 2;
                                              p_list = v41 + 16;
                                              if ( !*(_BYTE *)(((v41 + 16) >> 3) + 0x7FFF8000) )
                                              {
                                                *(_QWORD *)(v41 + 16) = v40;
                                                v70 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v41;
                                                p_list = *(_QWORD *)&v69._M_pod_data[8] + 8LL;
                                                if ( *(char *)(((unsigned __int64)(*(_QWORD *)&v69._M_pod_data[8] + 8LL) >> 3)
                                                             + 0x7FFF8000) >= 0 )
                                                {
                                                  *(_BYTE *)(*(_QWORD *)&v69._M_pod_data[8] + 8LL) = 0;
                                                  p_list = *(_QWORD *)&v69._M_pod_data[8] + 9LL;
                                                  v46 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v69._M_pod_data[8]
                                                                                     + 9LL) >> 3)
                                                                 + 0x7FFF8000);
                                                  if ( v46 > ((v69._M_pod_data[8] + 9) & 7) || !v46 )
                                                  {
                                                    *(_BYTE *)(*(_QWORD *)&v69._M_pod_data[8] + 9LL) = 0;
                                                    v47 = v39 + 1;
                                                    pthread_mutex_lock(v39 + 1);
                                                    p_list = (unsigned __int64)&v39[40].__data.__list;
                                                    if ( !*(_BYTE *)(((unsigned __int64)&v39[40].__data.__list >> 3)
                                                                   + 0x7FFF8000) )
                                                    {
                                                      prev = v39[40].__data.__list.__prev;
                                                      v39[40].__data.__list.__prev = (__pthread_internal_list *)((char *)&prev->__prev + 1);
                                                      v49 = (((*(_QWORD *)&v69._M_pod_data[8] >> 3)
                                                            + *(_QWORD *)&v69._M_pod_data[8]) ^ ((unsigned __int64)&prev[4 * (*(_QWORD *)&v69._M_pod_data[8] >> 3) + 165902235 + 4 * *(_QWORD *)&v69._M_pod_data[8]].__next
                                                                                               + (((*(_QWORD *)&v69._M_pod_data[8] >> 3)
                                                                                                 + *(_QWORD *)&v69._M_pod_data[8]) >> 2)
                                                                                               + 1))
                                                          % 0xC1;
                                                      v40 = v49;
                                                      p_list = (unsigned __int64)&v39[2] + 8 * v49;
                                                      if ( !*(_BYTE *)((p_list >> 3) + 0x7FFF8000) )
                                                      {
                                                        if ( *(_QWORD *)&v39[2].__size[8 * v49] )
                                                          goto LABEL_110;
                                                        timeout_msb = (unsigned __int64)&v39[2] + 8 * v49;
                                                        funca._M_functor._M_unused._M_object = (void *)operator new(0x28uLL);
                                                        v58 = pthread_mutex_init(
                                                                (pthread_mutex_t *)funca._M_functor._M_unused._M_object,
                                                                0LL);
                                                        *(_DWORD *)(v6 + 64) = v58;
                                                        *(_BYTE *)(v6 + 68) = v58 != 0;
                                                        *(_QWORD *)(v6 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                                        if ( v58 )
                                                        {
                                                          __asan_handle_no_return(funca._M_functor._M_unused._M_object);
                                                          boost::asio::detail::do_throw_error(
                                                            (const boost::system::error_code *)(v6 + 64),
                                                            "mutex");
                                                        }
                                                        if ( *(_BYTE *)((timeout_msb >> 3) + 0x7FFF8000) )
                                                        {
                                                          __asan_report_load8(timeout_msb);
                                                        }
                                                        else
                                                        {
                                                          v59 = *(pthread_mutex_t **)timeout_msb;
                                                          if ( *(_QWORD *)timeout_msb )
                                                          {
                                                            *(_QWORD *)&funca._M_functor._M_pod_data[8] = *(_QWORD *)timeout_msb;
                                                            pthread_mutex_destroy(v59);
                                                            operator delete(
                                                              *(void **)&funca._M_functor._M_pod_data[8],
                                                              0x28uLL);
                                                          }
                                                          if ( !*(_BYTE *)((timeout_msb >> 3) + 0x7FFF8000) )
                                                          {
                                                            *(_QWORD *)timeout_msb = funca._M_functor._M_unused._M_object;
LABEL_110:
                                                            p_next = (unsigned __int64)&v39[2] + 8 * v40;
                                                            if ( !*(_BYTE *)((p_next >> 3) + 0x7FFF8000) )
                                                            {
                                                              p_next = *(_QWORD *)&v69._M_pod_data[8];
                                                              if ( !*(_BYTE *)((*(_QWORD *)&v69._M_pod_data[8] >> 3)
                                                                             + 0x7FFF8000LL) )
                                                              {
                                                                **(_QWORD **)&v69._M_pod_data[8] = *(_QWORD *)&v39[2].__size[8 * v40];
                                                                p_next = (unsigned __int64)&v39[40].__data.__list.__next;
                                                                if ( !*(_BYTE *)(((unsigned __int64)&v39[40].__data.__list.__next >> 3)
                                                                               + 0x7FFF8000) )
                                                                {
                                                                  if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v69._M_pod_data[8] + 48LL) >> 3)
                                                                                 + 0x7FFF8000) )
                                                                  {
                                                                    *(_QWORD *)(*(_QWORD *)&v69._M_pod_data[8] + 48LL) = v39[40].__data.__list.__next;
                                                                    if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v69._M_pod_data[8] + 56LL) >> 3)
                                                                                   + 0x7FFF8000) )
                                                                    {
                                                                      *(_QWORD *)(*(_QWORD *)&v69._M_pod_data[8] + 56LL) = 0LL;
                                                                      next = v39[40].__data.__list.__next;
                                                                      if ( !next )
                                                                        goto LABEL_118;
                                                                      if ( !*(_BYTE *)(((unsigned __int64)&next[3].__next >> 3)
                                                                                     + 0x7FFF8000) )
                                                                      {
                                                                        next[3].__next = *(__pthread_internal_list **)&v69._M_pod_data[8];
LABEL_118:
                                                                        v52 = *(_QWORD *)&v69._M_pod_data[8];
                                                                        v39[40].__data.__list.__next = *(__pthread_internal_list **)&v69._M_pod_data[8];
                                                                        if ( !*(_BYTE *)(((unsigned __int64)(v52 + 64) >> 3)
                                                                                       + 0x7FFF8000) )
                                                                        {
                                                                          *(_QWORD *)(v52 + 64) = v39;
                                                                          pthread_mutex_unlock(v39 + 1);
                                                                          v72._M_functor = v69;
                                                                          v53 = v70;
                                                                          v72._M_manager = (std::_Function_base::_Manager_type)v70;
                                                                          if ( v70 )
                                                                          {
                                                                            v54 = &v70->_M_use_count;
                                                                            if ( &_pthread_key_create )
                                                                            {
                                                                              v55 = *(_BYTE *)(((unsigned __int64)v54 >> 3)
                                                                                             + 0x7FFF8000);
                                                                              if ( (char)(((unsigned __int8)v54 & 7) + 3) < v55
                                                                                || !v55 )
                                                                              {
                                                                                _InterlockedAdd(v54, 1u);
                                                                                goto LABEL_124;
                                                                              }
                                                                              v53 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v54);
                                                                            }
                                                                            v61 = *(_BYTE *)(((unsigned __int64)&v53->_M_use_count >> 3)
                                                                                           + 0x7FFF8000);
                                                                            if ( (char)((((_BYTE)v53 + 8) & 7) + 3) >= v61
                                                                              && v61 )
                                                                            {
                                                                              __asan_report_load4(&v53->_M_use_count);
                                                                              goto LABEL_163;
                                                                            }
                                                                            ++v53->_M_use_count;
                                                                          }
LABEL_124:
                                                                          v72._M_invoker = (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)>::_Invoker_type)boost::asio::detail::default_spawn_handler;
                                                                          boost::asio::spawn<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>,common::minet::http_client::SslClient::request(common::minet::http_client::HttpRequest const&,unsigned int,std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse &&)>)::{lambda(boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>)#1},boost::context::basic_fixedsize_stack<boost::asio::executor_binder<void (*)(void),boost::asio::strand<boost::asio::io_context::executor_type>>::stack_traits>>(
                                                                            (boost::asio::executor_binder<void (*)(),boost::asio::strand<boost::asio::io_context::executor_type> > *)&v72,
                                                                            &function,
                                                                            (const boost::context::basic_fixedsize_stack<boost::context::stack_traits> *)&funca._M_invoker,
                                                                            0LL);
LABEL_163:
                                                                          if ( v72._M_manager )
                                                                            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release((std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const)v72._M_manager);
                                                                          if ( v70 )
                                                                            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v70);
                                                                          if ( function.__self_ptr._M_refcount._M_pi )
                                                                            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(function.__self_ptr._M_refcount._M_pi);
                                                                          v62 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 40);
                                                                          if ( v62 )
                                                                            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v62);
                                                                          goto LABEL_171;
                                                                        }
LABEL_157:
                                                                        v60 = (struct _Unwind_Exception *)__asan_report_store8();
                                                                        pthread_mutex_unlock(v47);
                                                                        if ( v70 )
                                                                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v70);
                                                                        if ( function.__self_ptr._M_refcount._M_pi )
                                                                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(function.__self_ptr._M_refcount._M_pi);
                                                                        v57 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 40);
                                                                        if ( v57 )
                                                                          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v57);
                                                                        __asan_handle_no_return(v57);
                                                                        _Unwind_Resume(v60);
                                                                      }
LABEL_156:
                                                                      __asan_report_store8();
                                                                      goto LABEL_157;
                                                                    }
LABEL_155:
                                                                    __asan_report_store8();
                                                                    goto LABEL_156;
                                                                  }
LABEL_154:
                                                                  __asan_report_store8();
                                                                  goto LABEL_155;
                                                                }
LABEL_153:
                                                                __asan_report_load8(p_next);
                                                                goto LABEL_154;
                                                              }
LABEL_152:
                                                              __asan_report_store8();
                                                              goto LABEL_153;
                                                            }
LABEL_151:
                                                            __asan_report_load8(p_next);
                                                            goto LABEL_152;
                                                          }
                                                        }
                                                        p_next = timeout_msb;
                                                        __asan_report_store8();
                                                        goto LABEL_151;
                                                      }
LABEL_132:
                                                      v56 = (void *)__asan_report_load8(p_list);
                                                      __cxa_begin_catch(v56);
                                                      if ( v40 )
                                                      {
                                                        boost::asio::detail::strand_executor_service::strand_impl::~strand_impl((boost::asio::detail::strand_executor_service::strand_impl *const)v40);
                                                        v56 = (void *)v40;
                                                        operator delete((void *)v40, 0x48uLL);
                                                      }
                                                      __asan_handle_no_return(v56);
                                                      __cxa_rethrow();
                                                    }
LABEL_131:
                                                    __asan_report_load8(p_list);
                                                    goto LABEL_132;
                                                  }
LABEL_130:
                                                  __asan_report_store1(p_list);
                                                  goto LABEL_131;
                                                }
LABEL_129:
                                                __asan_report_store1(p_list);
                                                goto LABEL_130;
                                              }
LABEL_128:
                                              __asan_report_store8();
                                              goto LABEL_129;
                                            }
LABEL_127:
                                            p_list = v41;
                                            __asan_report_store8();
                                            goto LABEL_128;
                                          }
                                        }
                                        v41 = __asan_report_store4(v42);
                                        goto LABEL_127;
                                      }
LABEL_97:
                                      v41 = __asan_report_store8();
                                      goto LABEL_98;
                                    }
LABEL_96:
                                    __asan_report_store8();
                                    goto LABEL_97;
                                  }
                                }
                                __asan_report_store8();
                                goto LABEL_96;
                              }
LABEL_87:
                              __asan_report_load8(p_ioc);
                              goto LABEL_88;
                            }
                            v26 = *(_BYTE *)(((unsigned __int64)p_M_manager >> 3) + 0x7FFF8000);
                            if ( (char)(((unsigned __int8)p_M_manager & 7) + 3) < v26 || !v26 )
                            {
                              _InterlockedAdd(p_M_manager, 1u);
                              goto LABEL_71;
                            }
LABEL_65:
                            v25 = __asan_report_store4(p_M_manager);
                            goto LABEL_66;
                          }
LABEL_64:
                          __asan_report_load8(p_M_manager);
                          goto LABEL_65;
                        }
LABEL_63:
                        __asan_report_load8(p_M_manager);
                        goto LABEL_64;
                      }
LABEL_62:
                      __asan_report_load8(p_M_manager);
                      goto LABEL_63;
                    }
LABEL_61:
                    __asan_report_load8(p_M_manager);
                    goto LABEL_62;
                  }
LABEL_60:
                  p_M_manager = (volatile signed __int32 *)p_func;
                  __asan_report_load16(p_func);
                  goto LABEL_61;
                }
LABEL_59:
                __asan_report_store4(p_method);
                goto LABEL_60;
              }
LABEL_58:
              __asan_report_store1(p_method);
              goto LABEL_59;
            }
LABEL_57:
            __asan_report_load1(p_method);
            goto LABEL_58;
          }
LABEL_56:
          __asan_report_store4(p_method);
          goto LABEL_57;
        }
LABEL_55:
        __asan_report_load4(p_method);
        goto LABEL_56;
      }
    }
    __asan_report_store4(p_method);
    goto LABEL_55;
  }
LABEL_42:
  error = ERR_get_error();
  id = boost::asio::error::get_ssl_category(void)::instance.id_;
  if ( id != 0x8FAFD21E25C5E09BLL && id != 0xB2AB117A257EDF0DLL )
  {
    v30 = boost::asio::error::get_ssl_category(void)::instance._vptr_error_category + 6;
    if ( *(_BYTE *)(((unsigned __int64)(boost::asio::error::get_ssl_category(void)::instance._vptr_error_category + 6) >> 3)
                  + 0x7FFF8000) )
    {
      __asan_report_load8(v30);
      goto LABEL_49;
    }
    (*((void (__fastcall **)(boost::asio::error::detail::ssl_category *, _QWORD))boost::asio::error::get_ssl_category(void)::instance._vptr_error_category
     + 6))(
      &boost::asio::error::get_ssl_category(void)::instance,
      error);
  }
  common::milog::MiLogStream::MiLogStream(
    &v71,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/async_http_client.cpp",
    "request",
    154);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    v71.ostr_,
    "SSL_set_tlsext_host_name fails: ");
  v30 = boost::asio::error::get_ssl_category(void)::instance._vptr_error_category + 4;
  if ( *(_BYTE *)(((unsigned __int64)(boost::asio::error::get_ssl_category(void)::instance._vptr_error_category + 4) >> 3)
                + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(v30);
    goto LABEL_50;
  }
  (*((void (__fastcall **)(std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *, boost::asio::error::detail::ssl_category *, _QWORD))boost::asio::error::get_ssl_category(void)::instance._vptr_error_category
   + 4))(
    &v72,
    &boost::asio::error::get_ssl_category(void)::instance,
    error);
LABEL_50:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v71.ostr_, (const std::string *)&v72);
  if ( v72._M_functor._M_unused._M_object != &v72._M_manager )
    operator delete(v72._M_functor._M_unused._M_object);
  common::milog::MiLogStream::~MiLogStream(&v71);
  v64 = -1;
LABEL_171:
  if ( v73 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v64;
};

// Line 167: range 000000000CC3D2E8-000000000CC3F948
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::http_client::SslClient::doSslRequest(
        common::minet::http_client::SslClient *const this,
        const boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > *a2)
{
  common::minet::http_client::BeastHttpRequest *p_beast_req; // r15
  unsigned __int64 v4; // r13
  _DWORD *v5; // r12
  void *p_client_mgr; // rdi
  char v7; // dl
  int32_t inited; // eax
  __int64 v9; // rax
  char v10; // al
  int v11; // r14d
  __int64 v12; // rax
  void *p_is_timeout; // rdi
  char v14; // dl
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  common::minet::http_client::HttpClientMgr *client_mgr; // rdx
  __int64 v18; // rax
  char v19; // cl
  void *p_M_string_length; // rdi
  std::string_view v21; // r8
  std::string_view v22; // rdx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  char v25; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rdi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v27; // rdi
  char v28; // cl
  int v29; // eax
  boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *M_head_impl; // r14
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdi
  char v33; // al
  boost::asio::executor::impl_base *p_ssl_stream; // rdi
  int (**vptr_impl_base)(...); // rax
  boost::asio::executor::impl_base *impl; // rdi
  int (**v37)(...); // rax
  char *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rsi OVERLAPPED
  const boost::system::detail::system_error_category *v41; // rdx
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v44; // rax
  __int64 v45; // rax
  struct _Unwind_Exception *v46; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v47; // rdi
  boost::coroutines2::detail::pull_coroutine<void>::control_block *const *v48; // rdi
  std::runtime_error *exception; // r12
  __int64 v50; // r14
  __int64 v51; // r15
  __int64 v52; // rax
  char *v53; // rdi
  char v54; // al
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rdi
  char v57; // al
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rdi
  char v60; // al
  common::minet::http_client::HttpRetcode *p_retcode; // rdi
  char v62; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v63; // rdi
  unsigned __int64 v64; // rsi
  unsigned __int64 v65; // rdi
  char v66; // al
  __int64 v67; // rax
  __int64 v68; // rdx
  bool v69; // al
  char v70; // al
  char v71; // al
  char v72; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v73; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v74; // rdi
  boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *t; // [rsp+0h] [rbp-380h]
  int p5_cost; // [rsp+18h] [rbp-368h]
  int p4_cost; // [rsp+20h] [rbp-360h]
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *p4_costa; // [rsp+20h] [rbp-360h]
  int p6_cost; // [rsp+28h] [rbp-358h]
  unsigned int p3_cost; // [rsp+2Ch] [rbp-354h]
  int p2_cost; // [rsp+30h] [rbp-350h]
  int v; // [rsp+34h] [rbp-34Ch]
  boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> >::return_type v84; // [rsp+40h] [rbp-340h] BYREF
  common::milog::MiLogStream v85; // [rsp+60h] [rbp-320h] BYREF
  std::string v86; // [rsp+80h] [rbp-300h] BYREF
  std::string v87; // [rsp+A0h] [rbp-2E0h] BYREF
  std::string v88; // [rsp+C0h] [rbp-2C0h] BYREF
  std::string v89; // [rsp+E0h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v90; // [rsp+100h] [rbp-280h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > v91; // [rsp+120h] [rbp-260h] BYREF
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(),boost::asio::executor> > handler; // [rsp+150h] [rbp-230h] BYREF
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> > v93; // [rsp+180h] [rbp-200h] BYREF
  char v94[400]; // [rsp+1F0h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(352LL);
    if ( v9 )
      v4 = v9;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 16 6 ec:168 80 16 12 self_ptr:259 112 16 9 timer:180 144 24 11 results:190 208 104 10 completion";
  *(_QWORD *)(v4 + 16) = common::minet::http_client::SslClient::doSslRequest;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  *(_DWORD *)(v4 + 48) = 0;
  *(_BYTE *)(v4 + 52) = 0;
  *(_QWORD *)(v4 + 56) = &boost::system::detail::cat_holder<void>::system_category_instance;
  p_client_mgr = &this->client_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_mgr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_client_mgr);
  }
  else
  {
    p_client_mgr = &this->type_;
    v7 = *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 68) & 7) + 3) < v7 || !v7 )
    {
      common::minet::http_client::HttpClientMgr::addUnfinishedNum(this->client_mgr_, this->type_);
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 112));
      p_beast_req = &this->beast_req_;
      inited = common::minet::http_client::HttpUtils::initBeastRequest(&this->req_, &this->beast_req_);
      goto LABEL_10;
    }
  }
  inited = __asan_report_load4(p_client_mgr);
LABEL_10:
  if ( inited )
  {
    common::milog::MiLogStream::MiLogStream(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/async_http_client.cpp",
      "doSslRequest",
      183);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v85.ostr_, "init beast req fails");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v85.ostr_, &this->req_.host);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v85.ostr_, " port:");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v85.ostr_, &this->req_.port);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v85.ostr_, " uri:");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v85.ostr_, &this->req_.uri);
    common::milog::MiLogStream::~MiLogStream(&v85);
    v10 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
    if ( !v10 || v10 > 3 )
    {
      this->retcode_ = HTTP_PARA_ERROR;
      v11 = 0;
      p6_cost = 0;
      p5_cost = 0;
      p4_cost = 0;
      p3_cost = 0;
      p2_cost = 0;
      v = 0;
      goto LABEL_14;
    }
    __asan_report_store4(&this->retcode_);
  }
  v = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 112));
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    a2);
  handler.ec_ = (boost::system::error_code *)(v4 + 48);
  p_M_string_length = &this->req_.port._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->req_.port._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_36;
  }
  p_M_string_length = &this->req_.port;
  if ( *(_BYTE *)(((unsigned __int64)&this->req_.port >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_M_string_length);
    goto LABEL_37;
  }
  p_M_string_length = &this->req_.host._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->req_.host._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_M_string_length);
    goto LABEL_38;
  }
  p_M_string_length = &this->req_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->req_ >> 3) + 0x7FFF8000) )
  {
    v22._M_str = this->req_.host._M_dataplus._M_p;
    v22._M_len = this->req_.host._M_string_length;
    v21._M_len = this->req_.port._M_string_length;
    v21._M_str = this->req_.port._M_dataplus._M_p;
    boost::asio::ip::basic_resolver<boost::asio::ip::tcp,boost::asio::executor>::async_resolve<boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
      (boost::asio::detail::coro_async_result<boost::asio::executor_binder<void (*)(),boost::asio::executor>,boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> >::return_type *)(v4 + 144),
      &this->resolver_,
      v22,
      v21,
      (boost::asio::ip::resolver_base::flags)0,
      &handler);
    goto LABEL_39;
  }
LABEL_38:
  __asan_report_load8(p_M_string_length);
LABEL_39:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  if ( !*(_DWORD *)(v4 + 48) )
    goto LABEL_53;
  common::milog::MiLogStream::MiLogStream(
    &v90,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/async_http_client.cpp",
    "doSslRequest",
    193);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, "async_resolve fails: ");
  v23 = *(_QWORD *)(v4 + 56);
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    v24 = *(_QWORD *)(v4 + 56);
    __asan_report_load8(v24);
    goto LABEL_44;
  }
  v24 = *(_QWORD *)v23 + 32LL;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(v24);
    goto LABEL_45;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v23 + 32LL))(
    &v86,
    v23,
    *(unsigned int *)(v4 + 48));
LABEL_45:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &v86);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.host);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " port:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.port);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " uri:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.uri);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v86._M_dataplus._M_p != &v86._anon_0 )
    operator delete(v86._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v90);
  v25 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( !v25 || v25 > 3 )
  {
    this->retcode_ = HTTP_RESOLVE_FAIL;
    v11 = 0;
    p6_cost = 0;
    p5_cost = 0;
    p4_cost = 0;
    p3_cost = 0;
    p2_cost = 0;
    goto LABEL_50;
  }
  __asan_report_store4(&this->retcode_);
LABEL_53:
  p2_cost = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 112));
  t = &this->ssl_stream_;
  v27 = boost::beast::get_lowest_layer<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>(&this->ssl_stream_);
  v28 = *(_BYTE *)(((unsigned __int64)&this->timeout_ms_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 72) & 7) + 3) >= v28 && v28 )
  {
    v29 = __asan_report_load4(&this->timeout_ms_);
  }
  else
  {
    boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::expires_after(
      v27,
      (std::chrono::nanoseconds)(1000000LL * this->timeout_ms_));
    v29 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 112));
  }
  p3_cost = v29;
  p4_costa = boost::beast::get_lowest_layer<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>(t);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    a2);
  handler.ec_ = (boost::system::error_code *)(v4 + 48);
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_connect<boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>,void>(
    &v84,
    p4_costa,
    (const boost::asio::ip::basic_resolver_results<boost::asio::ip::tcp> *)(v4 + 144),
    &handler);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  M_head_impl = (boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > > *)(v4 + 352);
  p4_cost = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 112));
  if ( !*(_DWORD *)(v4 + 48) )
    goto LABEL_69;
  common::milog::MiLogStream::MiLogStream(
    &v90,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/async_http_client.cpp",
    "doSslRequest",
    208);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, "async_connect fails: ");
  v31 = *(_QWORD *)(v4 + 56);
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
  {
    v32 = *(_QWORD *)(v4 + 56);
    __asan_report_load8(v32);
    goto LABEL_62;
  }
  v32 = *(_QWORD *)v31 + 32LL;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(v32);
    goto LABEL_63;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v31 + 32LL))(
    &v87,
    v31,
    *(unsigned int *)(v4 + 48));
LABEL_63:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &v87);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.host);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " port:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.port);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " uri:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.uri);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v87._M_dataplus._M_p != &v87._anon_0 )
    operator delete(v87._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v90);
  v33 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( !v33 || v33 > 3 )
  {
    this->retcode_ = HTTP_CONNECT_FAIL;
    v11 = 0;
    p6_cost = 0;
    p5_cost = 0;
    goto LABEL_50;
  }
  __asan_report_store4(&this->retcode_);
LABEL_69:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &v91,
    a2);
  v91.ec_ = (boost::system::error_code *)(v4 + 48);
  p_ssl_stream = (boost::asio::executor::impl_base *)&this->ssl_stream_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ssl_stream_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_ssl_stream);
LABEL_81:
    vptr_impl_base = (int (**)(...))__asan_report_load8(p_ssl_stream);
    goto LABEL_82;
  }
  M_head_impl = this->ssl_stream_.p_._M_t._M_t._M_head_impl;
  handler.coro_._M_ptr = v91.coro_._M_ptr;
  handler.coro_._M_refcount._M_pi = v91.coro_._M_refcount._M_pi;
  v91.coro_._M_refcount._M_pi = 0LL;
  v91.coro_._M_ptr = 0LL;
  handler.ca_ = v91.ca_;
  p_ssl_stream = v91.handler_.executor_.impl_;
  if ( !v91.handler_.executor_.impl_ )
    goto LABEL_74;
  if ( *(_BYTE *)(((unsigned __int64)v91.handler_.executor_.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_81;
  vptr_impl_base = v91.handler_.executor_.impl_->_vptr_impl_base;
  if ( *(_BYTE *)(((unsigned __int64)v91.handler_.executor_.impl_->_vptr_impl_base >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    impl = (boost::asio::executor::impl_base *)vptr_impl_base;
    __asan_report_load8(vptr_impl_base);
LABEL_83:
    v37 = (int (**)(...))__asan_report_load8(impl);
    goto LABEL_84;
  }
  p_ssl_stream = (boost::asio::executor::impl_base *)((__int64 (*)(void))*vptr_impl_base)();
LABEL_74:
  handler.handler_.executor_.impl_ = p_ssl_stream;
  handler.handler_.target_ = v91.handler_.target_;
  handler.ec_ = v91.ec_;
  std::__shared_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<boost::coroutines2::detail::push_coroutine<void>,(__gnu_cxx::_Lock_policy)2> *const)(v4 + 208),
    &handler.coro_,
    (std::nothrow_t)((_BYTE)this - 40));
  *(_QWORD *)(v4 + 224) = handler.ca_;
  impl = handler.handler_.executor_.impl_;
  if ( !handler.handler_.executor_.impl_ )
    goto LABEL_78;
  if ( *(_BYTE *)(((unsigned __int64)handler.handler_.executor_.impl_ >> 3) + 0x7FFF8000) )
    goto LABEL_83;
  v37 = handler.handler_.executor_.impl_->_vptr_impl_base;
  if ( *(_BYTE *)(((unsigned __int64)handler.handler_.executor_.impl_->_vptr_impl_base >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(v37);
    goto LABEL_85;
  }
  impl = (boost::asio::executor::impl_base *)((__int64 (*)(void))*v37)();
LABEL_78:
  *(_QWORD *)(v4 + 232) = impl;
  *(_QWORD *)(v4 + 240) = handler.handler_.target_;
  *(_QWORD *)(v4 + 248) = 0LL;
  *(_QWORD *)(v4 + 256) = handler.ec_;
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  v38 = (char *)(v4 + 352);
  *(_QWORD *)(v4 + 264) = v4 + 208;
  *(_QWORD *)(v4 + 272) = *(_QWORD *)(v4 + 224);
  *(_QWORD *)(v4 + 280) = 2LL;
  *(_DWORD *)(v4 + 296) = 0;
  *(_BYTE *)(v4 + 300) = 0;
  *(_QWORD *)(v4 + 304) = &boost::system::detail::cat_holder<void>::system_category_instance;
  *(_QWORD *)(v4 + 248) = v4 + 280;
  v39 = *(_QWORD *)(v4 + 256);
  *(_QWORD *)(v4 + 288) = v39;
  if ( !v39 )
LABEL_85:
    *((_QWORD *)v38 - 12) = v38 - 56;
  v93.next_layer_ = &M_head_impl->stream_.next_layer_;
  v93.core_ = &M_head_impl->stream_.core_;
  v93.op_.type_ = client;
  v93.start_ = 0;
  v93.want_ = want_nothing;
  v93.ec_.val_ = 0;
  v93.ec_.failed_ = 0;
  v93.ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
  v93.bytes_transferred_ = 0LL;
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::coro_handler(
    &v93.handler_,
    (boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *)this);
  v40 = 0LL;
  v41 = &boost::system::detail::cat_holder<void>::system_category_instance;
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::handshake_op,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>>::operator()(
    &v93,
    *(boost::system::error_code *)&v40,
    0LL,
    1);
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler(&v93.handler_);
  v42 = *(_QWORD *)(v4 + 264);
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
  {
    v43 = __asan_report_store8();
LABEL_96:
    v46 = (struct _Unwind_Exception *)__asan_report_load8(v43);
    boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler(&v93.handler_);
    boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v4 + 208));
    boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v91);
    v47 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 152);
    if ( v47 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v47);
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 112));
    __asan_handle_no_return(v4 + 112);
    _Unwind_Resume(v46);
  }
  *(_QWORD *)v42 = 0LL;
  v43 = v42 + 8;
  if ( *(_BYTE *)(((v42 + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_96;
  v44 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v42 + 8);
  *(_QWORD *)(v42 + 8) = 0LL;
  if ( v44 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v44);
  if ( *(_BYTE *)(((v4 + 280) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v4 + 280) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v4 + 24) & 7)
    || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v4 + 31) & 7) )
  {
    __asan_report_store_n(v4 + 280, 8LL);
  }
  else if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 280), 0xFFFFFFFFFFFFFFFFLL) == 1 )
  {
    goto LABEL_93;
  }
  v48 = *(boost::coroutines2::detail::pull_coroutine<void>::control_block *const **)(v4 + 272);
  if ( !*(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
  {
    boost::coroutines2::detail::pull_coroutine<void>::control_block::resume(*v48);
LABEL_93:
    v45 = v4 + 352;
    if ( *(_QWORD *)(v4 + 288) )
      goto LABEL_94;
    goto LABEL_102;
  }
  v45 = __asan_report_load8(v48);
LABEL_102:
  if ( *(_DWORD *)(v45 - 56) )
  {
    exception = (std::runtime_error *)__cxa_allocate_exception(0x40uLL);
    v50 = *(_QWORD *)(v4 + 296);
    v51 = *(_QWORD *)(v4 + 304);
    std::runtime_error::runtime_error(exception, byte_1A20F4E0);
    if ( *(_BYTE *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)exception = &`vtable for'boost::system::system_error + 2;
    if ( *(_WORD *)((((unsigned __int64)exception + 16) >> 3) + 0x7FFF8000) )
      __asan_report_store16((char *)exception + 16, byte_1A20F4E0);
    *((_QWORD *)exception + 2) = v50;
    *((_QWORD *)exception + 3) = v51;
    v52 = (__int64)exception + 48;
    if ( *(_BYTE *)((((unsigned __int64)exception + 32) >> 3) + 0x7FFF8000) )
      v52 = __asan_report_store8();
    *((_QWORD *)exception + 4) = v52;
    if ( *(_BYTE *)((((unsigned __int64)exception + 40) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *((_QWORD *)exception + 5) = 0LL;
    v53 = (char *)exception + 48;
    v54 = *(_BYTE *)((((unsigned __int64)exception + 48) >> 3) + 0x7FFF8000);
    if ( v54 <= (((unsigned __int8)exception + 48) & 7) && v54 )
      __asan_report_store1(v53);
    *((_BYTE *)exception + 48) = 0;
    __asan_handle_no_return(v53);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'boost::system::system_error,
      (void (__fastcall *)(void *))boost::system::system_error::~system_error);
  }
LABEL_94:
  boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,void>::~coro_handler((boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,void> *const)(v4 + 208));
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&v91);
  p5_cost = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 112));
  if ( !*(_DWORD *)(v4 + 48) )
    goto LABEL_127;
  common::milog::MiLogStream::MiLogStream(
    &v90,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/async_http_client.cpp",
    "doSslRequest",
    218);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, "async_handshake fails: ");
  v55 = *(_QWORD *)(v4 + 56);
  if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
  {
    v56 = *(_QWORD *)(v4 + 56);
    __asan_report_load8(v56);
    goto LABEL_120;
  }
  v56 = *(_QWORD *)v55 + 32LL;
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
  {
LABEL_120:
    __asan_report_load8(v56);
    goto LABEL_121;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v55 + 32LL))(
    &v88,
    v55,
    *(unsigned int *)(v4 + 48));
LABEL_121:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &v88);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.host);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " port:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.port);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " uri:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.uri);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v88._M_dataplus._M_p != &v88._anon_0 )
    operator delete(v88._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v90);
  v57 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( !v57 || v57 > 3 )
  {
    this->retcode_ = HTTP_HANDSHAKE_FAIL;
    v11 = 0;
    p6_cost = 0;
    goto LABEL_50;
  }
  __asan_report_store4(&this->retcode_);
LABEL_127:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    a2);
  handler.ec_ = (boost::system::error_code *)(v4 + 48);
  boost::beast::http::async_write<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
    t,
    p_beast_req,
    &handler);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  p6_cost = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 112));
  if ( !*(_DWORD *)(v4 + 48) )
    goto LABEL_139;
  common::milog::MiLogStream::MiLogStream(
    &v90,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/async_http_client.cpp",
    "doSslRequest",
    227);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, "async_write fails: ");
  v58 = *(_QWORD *)(v4 + 56);
  if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
  {
    v59 = *(_QWORD *)(v4 + 56);
    __asan_report_load8(v59);
    goto LABEL_132;
  }
  v59 = *(_QWORD *)v58 + 32LL;
  if ( *(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
  {
LABEL_132:
    __asan_report_load8(v59);
    goto LABEL_133;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v58 + 32LL))(
    &v89,
    v58,
    *(unsigned int *)(v4 + 48));
LABEL_133:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &v89);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.host);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " port:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.port);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " uri:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.uri);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v89._M_dataplus._M_p != &v89._anon_0 )
    operator delete(v89._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v90);
  v60 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( !v60 || v60 > 3 )
  {
    this->retcode_ = HTTP_SEND_FAIL;
    v11 = 0;
    goto LABEL_50;
  }
  __asan_report_store4(&this->retcode_);
LABEL_139:
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::basic_yield_context(
    &handler,
    a2);
  handler.ec_ = (boost::system::error_code *)(v4 + 48);
  boost::beast::http::async_read<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>>(
    t,
    &this->buffer_,
    &this->beast_res_,
    &handler);
  boost::asio::basic_yield_context<boost::asio::executor_binder<void (*)(void),boost::asio::executor>>::~basic_yield_context(&handler);
  v11 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 112));
  if ( *(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v89,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client.cpp",
      "doSslRequest",
      236);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v89._anon_0._M_allocated_capacity + 1),
      "async_read fails: ");
    v64 = *(_QWORD *)(v4 + 56);
    if ( *(_BYTE *)((v64 >> 3) + 0x7FFF8000) )
    {
      v65 = *(_QWORD *)(v4 + 56);
      __asan_report_load8(v65);
    }
    else
    {
      v65 = *(_QWORD *)v64 + 32LL;
      if ( !*(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(common::milog::MiLogStream *, unsigned __int64, _QWORD))(*(_QWORD *)v64 + 32LL))(
          &v90,
          v64,
          *(unsigned int *)(v4 + 48));
LABEL_150:
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v89._anon_0._M_allocated_capacity
          + 1),
          (const std::string *)&v90);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v89._anon_0._M_allocated_capacity
          + 1),
          &this->req_.host);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v89._anon_0._M_allocated_capacity
          + 1),
          " port:");
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v89._anon_0._M_allocated_capacity
          + 1),
          &this->req_.port);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v89._anon_0._M_allocated_capacity
          + 1),
          " uri:");
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&v89._anon_0._M_allocated_capacity
          + 1),
          &this->req_.uri);
        if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v90.log_ != &v90.ostr_ptr_._M_refcount )
          operator delete(v90.log_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v89);
        p_retcode = &this->retcode_;
        v66 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
        if ( !v66 || v66 > 3 )
        {
          this->retcode_ = HTTP_RECV_FAIL;
LABEL_50:
          v26 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 152);
          if ( v26 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v26);
          goto LABEL_14;
        }
        __asan_report_store4(p_retcode);
LABEL_156:
        v12 = __asan_report_store4(p_retcode);
LABEL_157:
        v67 = *(_QWORD *)(v12 - 296);
        if ( *(_BYTE *)(((unsigned __int64)(&boost::beast::make_error_code(boost::beast::error)::cat + 1) >> 3)
                      + 0x7FFF8000) )
        {
          v67 = __asan_report_load8(&boost::beast::make_error_code(boost::beast::error)::cat + 1);
        }
        else
        {
          v68 = (__int64)*(&boost::beast::make_error_code(boost::beast::error)::cat + 1);
          if ( !v68 )
          {
            v69 = &boost::beast::make_error_code(boost::beast::error)::cat == (__int64 (__fastcall ***)(boost::beast::detail::error_codes *__hidden))v67;
            goto LABEL_160;
          }
        }
        p_is_timeout = (void *)(v67 + 8);
        if ( *(_BYTE *)(((unsigned __int64)(v67 + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_is_timeout);
          goto LABEL_170;
        }
        v69 = v68 == *(_QWORD *)(v67 + 8);
LABEL_160:
        if ( !v69 )
          goto LABEL_15;
        common::milog::MiLogStream::MiLogStream(
          &v90,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/async_http_client.cpp",
          "doSslRequest",
          247);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          v90.ostr_,
          "[NETWORK] ssl request fails: timeout");
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.host);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " port:");
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.port);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " uri:");
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, &this->req_.uri);
        common::milog::MiLogStream::~MiLogStream(&v90);
        p_is_timeout = &this->is_timeout_;
        v70 = *(_BYTE *)(((unsigned __int64)&this->is_timeout_ >> 3) + 0x7FFF8000);
        if ( v70 > (((unsigned __int8)this - 76) & 7) || !v70 )
        {
          this->is_timeout_ = 1;
          p_is_timeout = &this->retcode_;
          v71 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
          if ( !v71 || v71 > 3 )
          {
            this->retcode_ = HTTP_TIMEOUT;
            goto LABEL_15;
          }
LABEL_171:
          __asan_report_store4(p_is_timeout);
LABEL_172:
          __asan_report_load4(p_is_timeout);
          goto LABEL_173;
        }
LABEL_170:
        __asan_report_store1(p_is_timeout);
        goto LABEL_171;
      }
    }
    __asan_report_load8(v65);
    goto LABEL_150;
  }
  p_retcode = &this->retcode_;
  v62 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( v62 && v62 <= 3 )
    goto LABEL_156;
  this->retcode_ = HTTP_SUCCESS;
  v63 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 152);
  if ( v63 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v63);
LABEL_14:
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 112));
  v12 = v4 + 352;
  if ( *(_DWORD *)(v4 + 48) == 1 )
    goto LABEL_157;
LABEL_15:
  common::milog::MiLogStream::MiLogStream(
    &v90,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/async_http_client.cpp",
    "doSslRequest",
    252);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, "ssl request while ret: ");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, this);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " ");
  p_is_timeout = &this->retcode_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 112) & 7) + 3) >= v14 && v14 )
    goto LABEL_172;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, this->retcode_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " p1:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, v);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " p2:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, p2_cost);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " p3:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, p3_cost);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " p4:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, p4_cost);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " p5:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, p5_cost);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " p6:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, p6_cost);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, " p7:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v90.ostr_, v11);
  common::milog::MiLogStream::~MiLogStream(&v90);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_173:
    p_M_refcount = (volatile signed __int32 *)this;
    __asan_report_load8(this);
    goto LABEL_174;
  }
  p_M_refcount = (volatile signed __int32 *)(this->_vptr_HttpClient + 3);
  if ( *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_174:
    __asan_report_load8(p_M_refcount);
    goto LABEL_175;
  }
  (*((void (__fastcall **)(common::minet::http_client::SslClient *const))this->_vptr_HttpClient + 3))(this);
  p_M_refcount = (volatile signed __int32 *)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_175:
    __asan_report_load8(p_M_refcount);
LABEL_176:
    __asan_report_load8(p_M_refcount);
    goto LABEL_177;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v4 + 88) = M_pi;
  if ( !M_pi )
    goto LABEL_183;
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_add_ref_lock(M_pi);
  p_M_refcount = (volatile signed __int32 *)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient> >> 3)
                + 0x7FFF8000) )
    goto LABEL_176;
  *(_QWORD *)(v4 + 80) = this->_M_weak_this._M_ptr;
  p_M_refcount = (volatile signed __int32 *)&this->client_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_mgr_ >> 3) + 0x7FFF8000) )
  {
LABEL_177:
    __asan_report_load8(p_M_refcount);
    goto LABEL_178;
  }
  client_mgr = this->client_mgr_;
  *(_QWORD *)(v4 + 112) = *(_QWORD *)(v4 + 80);
  v18 = *(_QWORD *)(v4 + 88);
  *(_QWORD *)(v4 + 120) = v18;
  if ( v18 )
  {
    p_M_refcount = (volatile signed __int32 *)(v18 + 8);
    if ( !&_pthread_key_create )
      goto LABEL_179;
    v19 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v19 || !v19 )
    {
      _InterlockedAdd(p_M_refcount, 1u);
      goto LABEL_28;
    }
LABEL_178:
    v18 = __asan_report_store4(p_M_refcount);
LABEL_179:
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v18 + 8);
    v72 = *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v18 + 8) & 7) + 3) < v72 || !v72 )
    {
      ++*(_DWORD *)(v18 + 8);
      goto LABEL_28;
    }
    __asan_report_load4(M_pi);
LABEL_183:
    __asan_handle_no_return(M_pi);
    std::__throw_bad_weak_ptr();
  }
LABEL_28:
  common::minet::http_client::HttpClientMgr::finishHttpClient(
    client_mgr,
    (common::minet::http_client::HttpClientPtr)__PAIR128__((unsigned __int64)client_mgr, v4 + 112));
  v73 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 120);
  if ( v73 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v73);
  v74 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 88);
  if ( v74 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v74);
  if ( v94 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 266: range 000000000CC32372-000000000CC32786
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::http_client::SslClient::disconnect(common::minet::http_client::SslClient *const this)
{
  unsigned __int64 v2; // rbp
  _DWORD *v3; // r13
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v4; // rax
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v7; // cl
  int v8; // eax
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  bool v11; // dl
  std::enable_shared_from_this<common::minet::http_client::HttpClient> *p_M_use_count; // rdi
  std::__weak_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  void *v14; // rax
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rax
  char v18; // cl
  __int64 v19; // rax
  volatile signed __int32 *v20; // rdi
  char v21; // dl
  boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *p_ssl_stream; // rdi
  const boost::system::detail::system_error_category *v23; // rdx OVERLAPPED
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rax
  __int64 v25; // rsi OVERLAPPED
  char v26; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v27; // rdi
  std::__shared_ptr<common::minet::http_client::SslClient,(__gnu_cxx::_Lock_policy)2>::element_type *v28; // [rsp+0h] [rbp-F8h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // [rsp+8h] [rbp-F0h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v30; // [rsp+8h] [rbp-F0h]
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,common::minet::http_client::SslClient::disconnect()::<lambda(boost::beast::error_code)> > v31; // [rsp+10h] [rbp-E8h] BYREF
  char v32[152]; // [rsp+60h] [rbp-98h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(96LL);
    if ( v17 )
      v2 = v17;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 __count 64 16 12 self_ptr:270";
  *(_QWORD *)(v2 + 16) = common::minet::http_client::SslClient::disconnect;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  v4 = boost::beast::get_lowest_layer<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>(&this->ssl_stream_);
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::cancel(v4);
  p_M_refcount = &this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
LABEL_22:
    __asan_report_load4(p_M_refcount);
LABEL_23:
    __asan_handle_no_return(p_M_refcount);
    std::__throw_bad_weak_ptr();
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  v29 = M_pi;
  if ( !M_pi )
  {
    __asan_handle_no_return(p_M_refcount);
    std::__throw_bad_weak_ptr();
  }
  p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
  v7 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v7 && v7 )
    goto LABEL_22;
  *(_DWORD *)(v2 + 48) = M_pi->_M_use_count;
  do
  {
    v8 = *(_DWORD *)(v2 + 48);
    if ( !v8 )
      goto LABEL_23;
    v10 = *(_DWORD *)(v2 + 48);
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)p_M_refcount, v8 + 1, v10);
    v11 = v10 == v9;
    if ( v10 != v9 )
      *(_DWORD *)(v2 + 48) = v9;
  }
  while ( !v11 );
  p_M_use_count = &this->std::enable_shared_from_this<common::minet::http_client::HttpClient>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::http_client::HttpClient> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_use_count);
LABEL_25:
    v15 = __asan_report_store4(p_M_use_count);
    goto LABEL_26;
  }
  M_ptr = this->_M_weak_this._M_ptr;
  if ( !M_ptr )
    goto LABEL_30;
  v14 = __dynamic_cast(
          M_ptr,
          (const struct __class_type_info *)&`typeinfo for'common::minet::http_client::HttpClient,
          (const struct __class_type_info *)&`typeinfo for'common::minet::http_client::SslClient,
          0LL);
  if ( !v14 )
    goto LABEL_30;
  *(_QWORD *)(v2 + 64) = v14;
  v15 = (__int64)v29;
  *(_QWORD *)(v2 + 72) = v29;
  if ( !v29 )
    goto LABEL_31;
  p_M_use_count = (std::enable_shared_from_this<common::minet::http_client::HttpClient> *)&v29->_M_use_count;
  if ( &_pthread_key_create )
  {
    v16 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v16 || !v16 )
    {
      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
      goto LABEL_31;
    }
    goto LABEL_25;
  }
LABEL_26:
  v18 = *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 8) & 7) + 3) < v18 || !v18 )
  {
    ++*(_DWORD *)(v15 + 8);
    goto LABEL_31;
  }
  __asan_report_load4(v15 + 8);
LABEL_30:
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
LABEL_31:
  if ( v29 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v29);
  v28 = *(std::__shared_ptr<common::minet::http_client::SslClient,(__gnu_cxx::_Lock_policy)2>::element_type **)(v2 + 64);
  v19 = *(_QWORD *)(v2 + 72);
  v30 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v19;
  if ( v19 )
  {
    v20 = (volatile signed __int32 *)(v19 + 8);
    if ( &_pthread_key_create )
    {
      v21 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v20 & 7) + 3) < v21 || !v21 )
      {
        _InterlockedAdd(v20, 1u);
        goto LABEL_38;
      }
      v19 = __asan_report_store4(v20);
    }
    p_ssl_stream = (boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)(v19 + 8);
    v26 = *(_BYTE *)(((unsigned __int64)(v19 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v19 + 8) & 7) + 3) >= v26 && v26 )
    {
      __asan_report_load4(p_ssl_stream);
      goto LABEL_46;
    }
    ++*(_DWORD *)(v19 + 8);
  }
LABEL_38:
  p_ssl_stream = &this->ssl_stream_;
  if ( !*(_BYTE *)(((unsigned __int64)&this->ssl_stream_ >> 3) + 0x7FFF8000) )
  {
    v31.next_layer_ = &this->ssl_stream_.p_._M_t._M_t._M_head_impl->stream_.next_layer_;
    v31.core_ = (boost::asio::ssl::detail::stream_core *)&v31.next_layer_[1];
    v31.start_ = 0;
    v31.want_ = want_nothing;
    v31.ec_.val_ = 0;
    v31.ec_.failed_ = 0;
    v23 = &boost::system::detail::cat_holder<void>::system_category_instance;
    v31.ec_.cat_ = &boost::system::detail::cat_holder<void>::system_category_instance;
    v31.bytes_transferred_ = 0LL;
    v31.handler_.__self_ptr._M_ptr = v28;
    v24 = v30;
    v30 = 0LL;
    v31.handler_.__self_ptr._M_refcount._M_pi = v24;
    v25 = 0LL;
    boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::shutdown_op,common::minet::http_client::SslClient::disconnect(void)::{lambda(boost::system::error_code)#1}>::operator()(
      &v31,
      *(boost::system::error_code *)(&v23 - 1),
      0LL,
      1);
    goto LABEL_47;
  }
LABEL_46:
  __asan_report_load8(p_ssl_stream);
LABEL_47:
  if ( v31.handler_.__self_ptr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v31.handler_.__self_ptr._M_refcount._M_pi);
  if ( v30 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v30);
  v27 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 72);
  if ( v27 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v27);
  if ( v32 == (char *)v2 )
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

// Line 272: range 000000000CC2A244-000000000CC2A822
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::http_client::SslClient::disconnect(void)::{lambda(boost::system::error_code)#1}::operator()(
        unsigned __int64 __closure,
        boost::beast::error_code ec)
{
  boost::asio::ssl::error::detail::stream_category *v3; // r15
  const boost::system::error_category *cat; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  boost::system::error_code error_code; // rax
  char v9; // cl
  boost::ulong_long_type v10; // rax
  __int64 v11; // rsi
  char v12; // dl
  char *v13; // rdi
  char v14; // al
  unsigned int v15; // r14d
  const char *v16; // rsi
  unsigned __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  boost::ulong_long_type *p_id; // rdi
  boost::ulong_long_type id; // rax
  bool v23; // al
  unsigned __int64 v24; // rdi
  std::string *p_v; // rsi
  boost::ulong_long_type *v26; // rdi
  boost::ulong_long_type v27; // rax
  bool v28; // al
  unsigned __int64 v29; // rdi
  std::string *v30; // rsi
  unsigned __int64 v31; // rsi
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *v32; // rax
  struct _Unwind_Exception *v33; // rbx
  common::milog::MiLogStream v34; // [rsp+10h] [rbp-B8h] BYREF
  std::string v; // [rsp+30h] [rbp-98h] BYREF
  char v36[120]; // [rsp+50h] [rbp-78h] BYREF

  v3 = *(boost::asio::ssl::error::detail::stream_category **)&ec.val_;
  cat = ec.cat_;
  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v20 = __asan_stack_malloc_0(64LL);
    if ( v20 )
      v5 = v20;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 6 ec:272";
  *(_QWORD *)(v5 + 16) = common::minet::http_client::SslClient::disconnect(void)::{lambda(boost::system::error_code)#1}::operator();
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  *(_QWORD *)(v5 + 32) = v7;
  *(_QWORD *)(v5 + 40) = cat;
  error_code = boost::asio::error::make_error_code(eof);
  v9 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(v5 + 32);
  }
  else
  {
    LODWORD(cat) = *(_DWORD *)(v5 + 32);
    if ( error_code.val_ != (_DWORD)cat )
      goto LABEL_5;
  }
  p_id = (boost::ulong_long_type *)(v5 + 40);
  if ( *(_BYTE *)(((v5 + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_id);
    goto LABEL_31;
  }
  v3 = *(boost::asio::ssl::error::detail::stream_category **)(v5 + 40);
  p_id = &error_code.cat_->id_;
  if ( *(_BYTE *)(((unsigned __int64)&error_code.cat_->id_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    id = __asan_report_load8(p_id);
    goto LABEL_32;
  }
  id = error_code.cat_->id_;
  if ( !id )
  {
    v23 = v3 == error_code.cat_;
    goto LABEL_26;
  }
LABEL_32:
  if ( *(_BYTE *)(((unsigned __int64)&v3->id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v3->id_);
LABEL_35:
    v24 = (unsigned __int64)v3;
    __asan_report_load8(v3);
    goto LABEL_36;
  }
  v23 = id == v3->id_;
LABEL_26:
  if ( !v23 )
    goto LABEL_5;
  common::milog::MiLogStream::MiLogStream(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/async_http_client.cpp",
    "operator()",
    278);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    v34.ostr_,
    "ssl short read , just ignore it, msg: ");
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_35;
  v24 = (unsigned __int64)(v3->_vptr_error_category + 4);
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(v24);
    goto LABEL_37;
  }
  (*((void (__fastcall **)(std::string *, boost::asio::ssl::error::detail::stream_category *, _QWORD))v3->_vptr_error_category
   + 4))(
    &v,
    v3,
    (unsigned int)cat);
LABEL_37:
  p_v = &v;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v34.ostr_, &v);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v._M_dataplus._M_p != &v._anon_0 )
    operator delete(v._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v34);
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_5:
  v10 = boost::asio::ssl::error::get_stream_category(void)::instance.id_;
  if ( v10 != 0x8FAFD21E25C5E09BLL && v10 != 0xB2AB117A257EDF0DLL )
  {
    if ( *(_BYTE *)(((unsigned __int64)(boost::asio::ssl::error::get_stream_category(void)::instance._vptr_error_category
                                      + 6) >> 3)
                  + 0x7FFF8000) )
    {
      __asan_report_load8(boost::asio::ssl::error::get_stream_category(void)::instance._vptr_error_category + 6);
    }
    else
    {
      v11 = 1LL;
      (*((void (__fastcall **)(boost::asio::ssl::error::detail::stream_category *, __int64))boost::asio::ssl::error::get_stream_category(void)::instance._vptr_error_category
       + 6))(
        &boost::asio::ssl::error::get_stream_category(void)::instance,
        1LL);
    }
  }
  v12 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    __asan_report_load4(v5 + 32);
  }
  else
  {
    LODWORD(cat) = *(_DWORD *)(v5 + 32);
    if ( (_DWORD)cat != 1 )
      goto LABEL_12;
  }
  v26 = (boost::ulong_long_type *)(v5 + 40);
  if ( *(_BYTE *)(((v5 + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v26);
    goto LABEL_53;
  }
  v3 = *(boost::asio::ssl::error::detail::stream_category **)(v5 + 40);
  v26 = &boost::asio::ssl::error::get_stream_category(void)::instance.id_;
  if ( *(_BYTE *)(((unsigned __int64)&boost::asio::ssl::error::get_stream_category(void)::instance.id_ >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    v27 = __asan_report_load8(v26);
    goto LABEL_54;
  }
  v27 = boost::asio::ssl::error::get_stream_category(void)::instance.id_;
  if ( !v27 )
  {
    v28 = &boost::asio::ssl::error::get_stream_category(void)::instance == v3;
    goto LABEL_48;
  }
LABEL_54:
  if ( *(_BYTE *)(((unsigned __int64)&v3->id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v3->id_);
LABEL_57:
    v29 = (unsigned __int64)v3;
    __asan_report_load8(v3);
    goto LABEL_58;
  }
  v28 = v27 == v3->id_;
LABEL_48:
  if ( !v28 )
    goto LABEL_12;
  common::milog::MiLogStream::MiLogStream(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/async_http_client.cpp",
    "operator()",
    285);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    v34.ostr_,
    "ssl short read, just ignore it, msg: ");
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  v29 = (unsigned __int64)(v3->_vptr_error_category + 4);
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v29);
    goto LABEL_59;
  }
  (*((void (__fastcall **)(std::string *, boost::asio::ssl::error::detail::stream_category *, _QWORD))v3->_vptr_error_category
   + 4))(
    &v,
    v3,
    (unsigned int)cat);
LABEL_59:
  v30 = &v;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v34.ostr_, &v);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v._M_dataplus._M_p != &v._anon_0 )
    operator delete(v._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v34);
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_12:
  v13 = (char *)(v5 + 32);
  v14 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
  {
    __asan_report_load4(v13);
LABEL_63:
    __asan_report_load8(v13);
    goto LABEL_64;
  }
  v15 = *(_DWORD *)(v5 + 32);
  if ( !v15 )
    goto LABEL_69;
  common::milog::MiLogStream::MiLogStream(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/async_http_client.cpp",
    "operator()",
    291);
  v16 = "ssl stream async_shutdown fails, msg: ";
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    v34.ostr_,
    "ssl stream async_shutdown fails, msg: ");
  v13 = (char *)(v5 + 40);
  if ( *(_BYTE *)(((v5 + 40) >> 3) + 0x7FFF8000) )
    goto LABEL_63;
  v17 = *(_QWORD *)(v5 + 40);
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    v19 = v31;
    __asan_report_load8(v31);
    goto LABEL_65;
  }
  v19 = *(_QWORD *)v18 + 32LL;
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(v19);
    goto LABEL_66;
  }
  (*(void (__fastcall **)(std::string *, __int64, _QWORD))(*(_QWORD *)v18 + 32LL))(&v, v18, v15);
LABEL_66:
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v34.ostr_, &v);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v._M_dataplus._M_p != &v._anon_0 )
    operator delete(v._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v34);
LABEL_69:
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
  {
    v33 = (struct _Unwind_Exception *)__asan_report_load8(__closure);
    common::milog::MiLogStream::~MiLogStream(&v34);
    __asan_handle_no_return(&v34);
    _Unwind_Resume(v33);
  }
  v32 = boost::beast::get_lowest_layer<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>((boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > *)(*(_QWORD *)__closure + 728LL));
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::close(v32);
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 299: range 000000000CC3F94D-000000000CC3F964
void __cdecl GLOBAL__sub_I_async_http_client_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 299: range 000000000CC26B04-000000000CC26E7C
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  std::ios_base::Init *v2; // rsi
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rax

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/async_http_client.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    v2 = &std::__ioinit;
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    if ( *(_BYTE *)(((unsigned __int64)&common::minet::http_client::HttpClient::spawn_attr >> 3) + 0x7FFF8000) )
    {
      v3 = (_BYTE *)__asan_report_store8();
    }
    else
    {
      common::minet::http_client::HttpClient::spawn_attr.size_ = 0x100000LL;
      v3 = `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_[0] )
        goto LABEL_6;
    }
    *v3 = 1;
    v2 = (std::ios_base::Init *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
    __cxa_atexit(
      (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
      &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
      &_dso_handle);
LABEL_6:
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
        &_dso_handle);
    }
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
    if ( !`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ )
    {
      `guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ = 1;
      if ( *(_WORD *)(((unsigned __int64)&boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3) + 0x7FFF8000) )
      {
        v4 = (_BYTE *)__asan_report_store16(&boost::asio::ssl::detail::openssl_init<true>::instance_, v2);
LABEL_35:
        *v4 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
LABEL_14:
        if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id[0] )
        {
          `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id[0] = 1;
          __cxa_atexit(
            (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
            &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            &_dso_handle);
        }
        if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id )
        {
          `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id = 1;
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
            v5 = (_BYTE *)__asan_report_store8();
            goto LABEL_37;
          }
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                               + 9;
        }
        v5 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
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
LABEL_37:
        *v5 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
        goto LABEL_22;
      }
      boost::asio::ssl::detail::openssl_init_base::instance();
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::ssl::detail::openssl_init<true>::~openssl_init,
        &boost::asio::ssl::detail::openssl_init<true>::instance_,
        &_dso_handle);
    }
    v4 = `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
    if ( `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_[0] )
      goto LABEL_14;
    goto LABEL_35;
  }
};
