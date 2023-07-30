// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/coroutine/src/coroutine.cpp

// Line 20: range 0000000019AF6472-0000000019AF64C9
void __cdecl _tls_init_6()
{
  if ( !*(_BYTE *)(__readfsqword(0) - 336) )
  {
    *(_BYTE *)(__readfsqword(0) - 336) = 1;
    __cxa_thread_atexit(
      (void (__fastcall *)(void *))std::weak_ptr<common::minet::Coroutine>::~weak_ptr,
      (char *)&common::minet::Coroutine::this_coro_wtr + __readfsqword(0),
      &_dso_handle);
  }
};

// Line 22: range 0000000019AF4E08-0000000019AF52A5
// local variable allocation has failed, the output may be wrong!
void __fastcall common::minet::Coroutine::Coroutine(common::minet::Coroutine *const this, uint32_t coro_id)
{
  __int64 v2; // rdx
  unsigned __int64 p_M_refcount; // rdi
  void *p_disabled; // rdi
  char v6; // al
  char v7; // dl
  char v8; // al
  char v9; // dl
  char v10; // al
  std::_Rb_tree_header *v11; // rax
  std::vector<int> *p_yield_time_list; // rdi
  struct _Unwind_Exception *v13; // rbp
  common::minet::CoroutineContext *p_context; // rax
  std::_Function_base::_Manager_type M_manager; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v18; // rdi

  p_M_refcount = (unsigned __int64)&this->std::enable_shared_from_this<common::minet::Coroutine>;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_M_refcount, *(_QWORD *)&coro_id);
    goto LABEL_27;
  }
  this->_M_weak_this._M_ptr = 0LL;
  p_M_refcount = (unsigned __int64)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8(p_M_refcount, *(_QWORD *)&coro_id);
    goto LABEL_28;
  }
  this->_M_weak_this._M_refcount._M_pi = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    p_disabled = this;
    __asan_report_store8(this, *(_QWORD *)&coro_id);
    goto LABEL_29;
  }
  this->_vptr_Coroutine = (int (**)(...))(&`vtable for'common::minet::Coroutine + 2);
  p_disabled = &this->disabled;
  if ( *(char *)(((unsigned __int64)&this->disabled >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_29:
    __asan_report_store1(p_disabled, *(_QWORD *)&coro_id, v2);
    goto LABEL_30;
  }
  this->disabled = 1;
  p_disabled = &this->config_base_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_base_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
    goto LABEL_31;
  }
  this->config_base_ptr._M_ptr = 0LL;
  p_disabled = &this->config_base_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_base_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
LABEL_32:
    __asan_report_store4(p_disabled, *(_QWORD *)&coro_id);
LABEL_33:
    __asan_report_store4(p_disabled, *(_QWORD *)&coro_id);
LABEL_34:
    __asan_report_store4(p_disabled, *(_QWORD *)&coro_id);
LABEL_35:
    __asan_report_store4(p_disabled, *(_QWORD *)&coro_id);
    goto LABEL_36;
  }
  this->config_base_ptr._M_refcount._M_pi = 0LL;
  p_disabled = &this->yield_id_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_32;
  this->yield_id_ = 0;
  p_disabled = &this->coro_id_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->coro_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 52) & 7) + 3) >= v7 && v7 )
    goto LABEL_33;
  this->coro_id_ = coro_id;
  p_disabled = &this->retcode_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_34;
  this->retcode_ = 0;
  p_disabled = &this->state_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v9 && v9 )
    goto LABEL_35;
  this->state_ = CORO_STATE_DONE;
  p_disabled = &this->pull_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pull_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
    goto LABEL_37;
  }
  this->pull_ptr_._M_ptr = 0LL;
  p_disabled = &this->pull_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->pull_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
    goto LABEL_38;
  }
  this->pull_ptr_._M_refcount._M_pi = 0LL;
  p_disabled = &this->push_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->push_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
    goto LABEL_39;
  }
  this->push_ptr_ = 0LL;
  p_disabled = &this->func_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&this->func_._M_manager >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
LABEL_40:
    __asan_report_store4(p_disabled, *(_QWORD *)&coro_id);
    goto LABEL_41;
  }
  this->func_._M_manager = 0LL;
  p_disabled = &this->context_.container_._M_t._M_impl.std::_Rb_tree_header;
  v10 = *(_BYTE *)(((unsigned __int64)&this->context_.container_._M_t._M_impl.std::_Rb_tree_header >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_40;
  this->context_.container_._M_t._M_impl._M_header._M_color = _S_red;
  p_disabled = &this->context_.container_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->context_.container_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
    goto LABEL_42;
  }
  this->context_.container_._M_t._M_impl._M_header._M_parent = 0LL;
  v11 = &this->context_.container_._M_t._M_impl.std::_Rb_tree_header;
  p_disabled = &this->context_.container_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->context_.container_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
    goto LABEL_43;
  }
  this->context_.container_._M_t._M_impl._M_header._M_left = &v11->_M_header;
  p_disabled = &this->context_.container_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->context_.container_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
    goto LABEL_44;
  }
  this->context_.container_._M_t._M_impl._M_header._M_right = &v11->_M_header;
  p_disabled = &this->context_.container_._M_t._M_impl._M_node_count;
  if ( !*(_BYTE *)(((unsigned __int64)&this->context_.container_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
    this->context_.container_._M_t._M_impl._M_node_count = 0LL;
    common::tools::TimeUtils::Timer::Timer(&this->timer_);
    goto LABEL_45;
  }
LABEL_44:
  __asan_report_store8(p_disabled, *(_QWORD *)&coro_id);
LABEL_45:
  p_yield_time_list = &this->yield_time_list_;
  if ( *(_BYTE *)(((unsigned __int64)&this->yield_time_list_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_yield_time_list, *(_QWORD *)&coro_id);
    goto LABEL_51;
  }
  this->yield_time_list_._M_impl._M_start = 0LL;
  p_yield_time_list = (std::vector<int> *)&this->yield_time_list_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->yield_time_list_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_51:
    __asan_report_store8(p_yield_time_list, *(_QWORD *)&coro_id);
    goto LABEL_52;
  }
  this->yield_time_list_._M_impl._M_finish = 0LL;
  p_yield_time_list = (std::vector<int> *)&this->yield_time_list_._M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&this->yield_time_list_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_store8(p_yield_time_list, *(_QWORD *)&coro_id);
LABEL_53:
    v13 = (struct _Unwind_Exception *)__asan_report_store8(p_yield_time_list, *(_QWORD *)&coro_id);
    p_context = &this->context_;
    if ( *(_BYTE *)(((unsigned __int64)&this->context_.container_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      p_context = (common::minet::CoroutineContext *)__asan_report_load8(&this->context_.container_._M_t._M_impl._M_header._M_parent);
    std::_Rb_tree<std::type_index,std::pair<std::type_index const,std::any>,std::_Select1st<std::pair<std::type_index const,std::any>>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::any>>>::_M_erase(
      &p_context->container_._M_t,
      (std::_Rb_tree<std::type_index,std::pair<const std::type_index,std::any>,std::_Select1st<std::pair<const std::type_index,std::any> >,std::less<std::type_index>,std::allocator<std::pair<const std::type_index,std::any> > >::_Link_type)this->context_.container_._M_t._M_impl._M_header._M_parent);
    if ( *(_BYTE *)(((unsigned __int64)&this->func_._M_manager >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->func_._M_manager);
    M_manager = this->func_._M_manager;
    if ( M_manager )
      M_manager(&this->func_._M_functor, &this->func_._M_functor, __destroy_functor);
    if ( *(_BYTE *)(((unsigned __int64)&this->pull_ptr_._M_refcount >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pull_ptr_._M_refcount);
    M_pi = this->pull_ptr_._M_refcount._M_pi;
    if ( M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
    if ( *(_BYTE *)(((unsigned __int64)&this->config_base_ptr._M_refcount >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->config_base_ptr._M_refcount);
    v17 = this->config_base_ptr._M_refcount._M_pi;
    if ( v17 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v17);
    if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->_M_weak_this._M_refcount);
    v18 = this->_M_weak_this._M_refcount._M_pi;
    if ( v18 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v18);
    __asan_handle_no_return(v18);
    _Unwind_Resume(v13);
  }
  this->yield_time_list_._M_impl._M_end_of_storage = 0LL;
  p_yield_time_list = (std::vector<int> *)&this->onExitCallback_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&this->onExitCallback_._M_manager >> 3) + 0x7FFF8000) )
    goto LABEL_53;
  this->onExitCallback_._M_manager = 0LL;
};

// Line 27: range 0000000019AF52AA-0000000019AF5809
void __fastcall common::minet::Coroutine::~Coroutine(common::minet::Coroutine *const this)
{
  unsigned __int64 M_pi; // rbp
  std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *p_onExitCallback; // rsi
  common::minet::Coroutine *v3; // rbx
  void (__fastcall *M_manager)(std::function<void()> *, std::function<void()> *, __int64); // rax
  std::_Vector_base<int>::pointer M_start; // rdi
  void (__fastcall *v6)(std::function<void()> *, std::function<void()> *, __int64); // rax
  char v7; // dl
  signed __int32 v8; // eax
  unsigned __int64 p_M_refcount; // rdi
  char v10; // dl
  signed __int32 v11; // eax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char v15; // cl
  signed __int32 v16; // eax
  char v17; // dl
  unsigned __int64 v18; // rdi
  char v19; // dl
  signed __int32 v20; // eax
  char v21; // dl
  char v22; // dl
  unsigned __int64 v23; // rdi
  char v24; // dl
  signed __int32 v25; // eax
  char v26; // dl
  char v27; // cl
  unsigned __int64 v28; // rdx
  common::minet::Coroutine *v29; // rdi

  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, p_onExitCallback);
    goto LABEL_35;
  }
  this->_vptr_Coroutine = (int (**)(...))(&`vtable for'common::minet::Coroutine + 2);
  this = (common::minet::Coroutine *const)((char *)this + 224);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(this);
LABEL_36:
    __asan_report_load8(this);
LABEL_37:
    __asan_report_load8(this);
    goto LABEL_38;
  }
  M_manager = (void (__fastcall *)(std::function<void()> *, std::function<void()> *, __int64))v3->onExitCallback_._M_manager;
  if ( M_manager )
  {
    p_onExitCallback = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)&v3->onExitCallback_;
    M_manager(&v3->onExitCallback_, &v3->onExitCallback_, 3LL);
  }
  this = (common::minet::Coroutine *const)&v3->yield_time_list_;
  if ( *(_BYTE *)(((unsigned __int64)&v3->yield_time_list_ >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  M_start = v3->yield_time_list_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  common::tools::TimeUtils::Timer::~Timer(&v3->timer_);
  this = (common::minet::Coroutine *const)&v3->context_.container_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v3->context_.container_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  p_onExitCallback = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)v3->context_.container_._M_t._M_impl._M_header._M_parent;
  std::_Rb_tree<std::type_index,std::pair<std::type_index const,std::any>,std::_Select1st<std::pair<std::type_index const,std::any>>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::any>>>::_M_erase(
    &v3->context_.container_._M_t,
    p_onExitCallback);
  this = (common::minet::Coroutine *const)&v3->func_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&v3->func_._M_manager >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_load8(this);
LABEL_39:
    __asan_report_load8(this);
    goto LABEL_40;
  }
  v6 = (void (__fastcall *)(std::function<void()> *, std::function<void()> *, __int64))v3->func_._M_manager;
  if ( v6 )
  {
    p_onExitCallback = (std::_Rb_tree_node<std::pair<const std::type_index,std::any> > *)&v3->func_;
    v6(&v3->func_, &v3->func_, 3LL);
  }
  this = (common::minet::Coroutine *const)&v3->pull_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v3->pull_ptr_._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_39;
  M_pi = (unsigned __int64)v3->pull_ptr_._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_19;
  this = (common::minet::Coroutine *const)(M_pi + 8);
  if ( !&_pthread_key_create )
    goto LABEL_41;
  v7 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)this & 7) + 3) < v7 || !v7 )
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF);
    goto LABEL_18;
  }
LABEL_40:
  __asan_report_store4(this, p_onExitCallback);
LABEL_41:
  v17 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) >= v17 && v17 )
  {
    __asan_report_load4(M_pi + 8);
    goto LABEL_45;
  }
  v8 = *(_DWORD *)(M_pi + 8);
  *(_DWORD *)(M_pi + 8) = v8 - 1;
LABEL_18:
  if ( v8 != 1 )
    goto LABEL_19;
LABEL_45:
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    v18 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_56;
  }
  v18 = *(_QWORD *)M_pi + 16LL;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_load8(v18);
    goto LABEL_57;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
  v18 = M_pi + 12;
  if ( !&_pthread_key_create )
    goto LABEL_58;
  v19 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
  if ( (char)((v18 & 7) + 3) < v19 || !v19 )
  {
    v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v18, 0xFFFFFFFF);
    goto LABEL_51;
  }
LABEL_57:
  __asan_report_store4(v18, p_onExitCallback);
LABEL_58:
  v21 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v21 && v21 )
  {
    __asan_report_load4(M_pi + 12);
LABEL_62:
    p_M_refcount = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_63;
  }
  v20 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v20 - 1;
LABEL_51:
  if ( v20 != 1 )
    goto LABEL_19;
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_62;
  p_M_refcount = *(_QWORD *)M_pi + 24LL;
  if ( *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    __asan_report_load8(p_M_refcount);
    goto LABEL_64;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
LABEL_19:
  p_M_refcount = (unsigned __int64)&v3->config_base_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v3->config_base_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(p_M_refcount);
    goto LABEL_65;
  }
  M_pi = (unsigned __int64)v3->config_base_ptr._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_26;
  p_M_refcount = M_pi + 8;
  if ( !&_pthread_key_create )
    goto LABEL_66;
  v10 = *(_BYTE *)((p_M_refcount >> 3) + 0x7FFF8000);
  if ( (char)((p_M_refcount & 7) + 3) < v10 || !v10 )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)p_M_refcount, 0xFFFFFFFF);
    goto LABEL_25;
  }
LABEL_65:
  __asan_report_store4(p_M_refcount, p_onExitCallback);
LABEL_66:
  v22 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) >= v22 && v22 )
  {
    __asan_report_load4(M_pi + 8);
    goto LABEL_70;
  }
  v11 = *(_DWORD *)(M_pi + 8);
  *(_DWORD *)(M_pi + 8) = v11 - 1;
LABEL_25:
  if ( v11 != 1 )
    goto LABEL_26;
LABEL_70:
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    v23 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_81;
  }
  v23 = *(_QWORD *)M_pi + 16LL;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(v23);
    goto LABEL_82;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
  v23 = M_pi + 12;
  if ( !&_pthread_key_create )
    goto LABEL_83;
  v24 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
  if ( (char)((v23 & 7) + 3) < v24 || !v24 )
  {
    v25 = _InterlockedExchangeAdd((volatile signed __int32 *)v23, 0xFFFFFFFF);
    goto LABEL_76;
  }
LABEL_82:
  __asan_report_store4(v23, p_onExitCallback);
LABEL_83:
  v26 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v26 && v26 )
  {
    __asan_report_load4(M_pi + 12);
LABEL_87:
    v12 = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_88;
  }
  v25 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v25 - 1;
LABEL_76:
  if ( v25 != 1 )
    goto LABEL_26;
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_87;
  v12 = *(_QWORD *)M_pi + 24LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    __asan_report_load8(v12);
    goto LABEL_89;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
LABEL_26:
  v12 = (unsigned __int64)&v3->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    v14 = __asan_report_load8(v12);
LABEL_90:
    v13 = v14;
    __asan_report_store4(v14, p_onExitCallback);
    goto LABEL_91;
  }
  v13 = (unsigned __int64)v3->_M_weak_this._M_refcount._M_pi;
  if ( !v13 )
    return;
  v14 = v13 + 12;
  if ( &_pthread_key_create )
  {
    v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
    if ( (char)((v14 & 7) + 3) < v15 || !v15 )
    {
      v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF);
      goto LABEL_32;
    }
    goto LABEL_90;
  }
LABEL_91:
  v27 = *(_BYTE *)(((v13 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v13 + 12) & 7) + 3) < v27 || !v27 )
  {
    v16 = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 12) = v16 - 1;
LABEL_32:
    if ( v16 != 1 )
      return;
    goto LABEL_95;
  }
  v13 += 12LL;
  __asan_report_load4(v13);
LABEL_95:
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v13);
  }
  else
  {
    v28 = *(_QWORD *)v13 + 24LL;
    if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    {
      (*(void (**)(void))(*(_QWORD *)v13 + 24LL))();
      return;
    }
  }
  v29 = (common::minet::Coroutine *)v28;
  __asan_report_load8(v28);
  common::minet::Coroutine::~Coroutine(v29);
};

// Line 33: range 0000000019AF5AA8-0000000019AF6433
void __fastcall common::minet::Coroutine::start(
        common::minet::Coroutine *const this,
        const std::function<void()> *M_object,
        void *a3)
{
  std::function<void()> *v4; // r15
  unsigned __int64 v5; // r12
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r14
  _DWORD *v7; // r13
  std::function<void()> *p_func; // rbp
  std::_Any_data M_functor; // rax
  bool (*M_manager)(std::_Any_data *, const std::_Any_data *, std::_Manager_operation); // rax
  std::function<void()> *p_M_manager; // rdi
  void (*M_invoker)(const std::_Any_data *); // rax
  std::_Any_data v13; // rax
  bool (*v14)(std::_Any_data *, const std::_Any_data *, std::_Manager_operation); // rax
  void *p_M_invoker; // rdi
  void (*v16)(const std::_Any_data *); // rax
  __int64 v17; // rax
  bool *v18; // rdi
  char v19; // al
  std::forward_iterator_tag v20; // cl
  char v21; // al
  char v22; // dl
  boost::coroutines2::fixedsize_stack *v23; // rsi
  volatile signed __int32 *p_pull_ptr; // rdi
  char v25; // dl
  signed __int32 M_use_count; // eax
  common::minet::Coroutine::State *p_state; // rdi
  char v28; // dl
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rdi
  char v31; // al
  char v32; // dl
  char v33; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v35; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v37; // rdi
  char v38; // dl
  char v39; // dl
  _Atomic_word v40; // eax
  volatile signed __int32 *v41; // rdi
  char v42; // dl
  signed __int32 v43; // eax
  char v44; // dl
  std::function<void()> onExitCallbacka; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v46; // [rsp+28h] [rbp-D0h]
  common::minet::Coroutine *v47; // [rsp+30h] [rbp-C8h]
  std::function<void()> v48; // [rsp+40h] [rbp-B8h] BYREF
  char v49[152]; // [rsp+60h] [rbp-98h] BYREF

  v4 = (std::function<void()> *)M_object;
  onExitCallbacka._M_functor._M_unused._M_object = a3;
  v5 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(96LL);
    if ( v17 )
      v5 = v17;
  }
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v5 + 96);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v5 + 16) = common::minet::Coroutine::start;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  p_func = &this->func_;
  std::function<void ()(void)>::function(&v48, M_object);
  M_functor = v48._M_functor;
  if ( *(_WORD *)(((unsigned __int64)&this->func_ >> 3) + 0x7FFF8000) )
  {
    p_M_manager = &this->func_;
    __asan_report_load16(&this->func_);
    goto LABEL_19;
  }
  v48._M_functor = (std::_Any_data)_mm_loadu_si128((const __m128i *)&this->func_);
  this->func_._M_functor = M_functor;
  M_manager = v48._M_manager;
  p_M_manager = (std::function<void()> *)&this->func_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&this->func_._M_manager >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(p_M_manager);
    goto LABEL_20;
  }
  v48._M_manager = this->func_._M_manager;
  this->func_._M_manager = M_manager;
  M_invoker = v48._M_invoker;
  p_M_manager = (std::function<void()> *)&this->func_._M_invoker;
  if ( *(_BYTE *)(((unsigned __int64)&this->func_._M_invoker >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(p_M_manager);
LABEL_21:
    p_M_invoker = p_func;
    __asan_report_load16(p_func);
    goto LABEL_22;
  }
  v48._M_invoker = this->func_._M_invoker;
  this->func_._M_invoker = M_invoker;
  if ( v48._M_manager )
    v48._M_manager((std::_Any_data *)&v48, (const std::_Any_data *)&v48, __destroy_functor);
  p_func = &this->onExitCallback_;
  M_object = (const std::function<void()> *)onExitCallbacka._M_functor._M_unused._M_object;
  std::function<void ()(void)>::function(
    &v48,
    (const std::function<void()> *)onExitCallbacka._M_functor._M_unused._M_object);
  v13 = v48._M_functor;
  if ( *(_WORD *)(((unsigned __int64)&this->onExitCallback_ >> 3) + 0x7FFF8000) )
    goto LABEL_21;
  v48._M_functor = (std::_Any_data)_mm_loadu_si128((const __m128i *)&this->onExitCallback_);
  this->onExitCallback_._M_functor = v13;
  v14 = v48._M_manager;
  p_M_invoker = &this->onExitCallback_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&this->onExitCallback_._M_manager >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_invoker);
    goto LABEL_23;
  }
  v48._M_manager = this->onExitCallback_._M_manager;
  this->onExitCallback_._M_manager = v14;
  v16 = v48._M_invoker;
  p_M_invoker = &this->onExitCallback_._M_invoker;
  if ( *(_BYTE *)(((unsigned __int64)&this->onExitCallback_._M_invoker >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_M_invoker);
LABEL_24:
    __asan_report_load8(p_M_invoker);
    goto LABEL_25;
  }
  v48._M_invoker = this->onExitCallback_._M_invoker;
  this->onExitCallback_._M_invoker = v16;
  if ( v48._M_manager )
  {
    M_object = &v48;
    v48._M_manager((std::_Any_data *)&v48, (const std::_Any_data *)&v48, __destroy_functor);
  }
  p_M_invoker = &this->pull_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pull_ptr_ >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  if ( this->pull_ptr_._M_ptr )
    goto LABEL_14;
LABEL_25:
  onExitCallbacka._M_invoker = (std::function<void()>::_Invoker_type)common::minet::Coroutine::startFunc;
  v46 = 0LL;
  v47 = this;
  v18 = &common::tools::perf::MemoryPerf::is_record;
  v19 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v19 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v19 )
  {
    __asan_report_load1(
      &common::tools::perf::MemoryPerf::is_record,
      M_object,
      (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
    goto LABEL_36;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    M_object = (const std::function<void()> *)(v5 + 48);
    std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<boost::coroutines2::detail::pull_coroutine<void>,common::tools::perf::allocator<boost::coroutines2::detail::pull_coroutine<void>,boost::coroutines2::detail::pull_coroutine<void>>,(__gnu_cxx::_Lock_policy)2>,boost::coroutines2::detail::pull_coroutine<void>>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<boost::coroutines2::detail::pull_coroutine<void>,common::tools::perf::allocator<boost::coroutines2::detail::pull_coroutine<void>,boost::coroutines2::detail::pull_coroutine<void> >,(__gnu_cxx::_Lock_policy)2>,boost::coroutines2::detail::pull_coroutine<void> > *)(v5 + 48));
    v4 = *(std::function<void()> **)(v5 + 72);
    v18 = (bool *)&v4->_M_functor._M_pod_data[8];
    v21 = *(_BYTE *)(((unsigned __int64)&v4->_M_functor._M_pod_data[8] >> 3) + 0x7FFF8000);
    if ( !v21 || v21 > 3 )
    {
      *(_DWORD *)&v4->_M_functor._M_pod_data[8] = 1;
      v18 = (bool *)&v4->_M_functor._M_pod_data[12];
      v22 = *(_BYTE *)(((unsigned __int64)&v4->_M_functor._M_pod_data[12] >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v4 + 12) & 7) + 3) < v22 || !v22 )
      {
        *(_DWORD *)&v4->_M_functor._M_pod_data[12] = 1;
        if ( !*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          v4->_M_functor._M_unused._M_object = &`vtable for'std::_Sp_counted_ptr_inplace<boost::coroutines2::detail::pull_coroutine<void>,common::tools::perf::allocator<boost::coroutines2::detail::pull_coroutine<void>,boost::coroutines2::detail::pull_coroutine<void>>,(__gnu_cxx::_Lock_policy)2>
                                             + 2;
          onExitCallbacka._M_functor._M_unused._M_object = &v4->_M_manager;
          if ( !common::tools::perf::MemoryPerf::is_record )
          {
LABEL_41:
            v23 = &common::minet::Coroutine::size_stack;
            boost::coroutines2::detail::pull_coroutine<void>::pull_coroutine<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,std::_Bind<void (common::minet::Coroutine::*)(boost::coroutines2::detail::push_coroutine<void> &) ()(common::minet::Coroutine*,std::_Placeholder<1>)>>(
              (boost::coroutines2::detail::pull_coroutine<void> *const)onExitCallbacka._M_functor._M_unused._M_object,
              &common::minet::Coroutine::size_stack,
              (std::_Bind<void (common::minet::Coroutine::*(common::minet::Coroutine*,std::_Placeholder<1>))(boost::coroutines2::detail::push_coroutine<void>&)> *)&onExitCallbacka._M_invoker);
            *(_QWORD *)(v5 + 72) = 0LL;
            onExitCallbacka._M_manager = (std::_Function_base::_Manager_type)v4;
            *(_QWORD *)&onExitCallbacka._M_functor._M_pod_data[8] = onExitCallbacka._M_functor._M_unused._M_object;
            goto LABEL_42;
          }
          v48._M_functor._M_unused._M_object = &v48._M_manager;
          std::string::_M_construct<char const*>(
            (std::string *const)&v48,
            "N5boost11coroutines26detail14pull_coroutineIvEE",
            "",
            v20);
LABEL_39:
          common::tools::perf::MemoryPerfRecorder::construct(
            &common::tools::perf::MemoryPerf::recorder,
            (const std::string *)&v48,
            8uLL);
          if ( v48._M_functor._M_unused._M_object != &v48._M_manager )
            operator delete(v48._M_functor._M_unused._M_object);
          goto LABEL_41;
        }
LABEL_38:
        __asan_report_store8(v4, M_object);
        goto LABEL_39;
      }
LABEL_37:
      __asan_report_store4(v18, M_object);
      goto LABEL_38;
    }
LABEL_36:
    __asan_report_store4(v18, M_object);
    goto LABEL_37;
  }
  v23 = (boost::coroutines2::fixedsize_stack *)(v5 + 48);
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<boost::coroutines2::detail::pull_coroutine<void>,std::allocator<boost::coroutines2::detail::pull_coroutine<void>>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<boost::coroutines2::detail::pull_coroutine<void>,std::allocator<boost::coroutines2::detail::pull_coroutine<void> >,(__gnu_cxx::_Lock_policy)2> > *)(v5 + 48));
  v29 = *(_QWORD *)(v5 + 72);
  v30 = v29 + 8;
  v31 = *(_BYTE *)(((v29 + 8) >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
  {
    __asan_report_store4(v30, v23);
LABEL_65:
    __asan_report_store4(v30, v23);
    goto LABEL_66;
  }
  *(_DWORD *)(v29 + 8) = 1;
  v30 = v29 + 12;
  v32 = *(_BYTE *)(((v29 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v29 + 12) & 7) + 3) >= v32 && v32 )
    goto LABEL_65;
  *(_DWORD *)(v29 + 12) = 1;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_store8(v29, v23);
    goto LABEL_67;
  }
  *(_QWORD *)v29 = &`vtable for'std::_Sp_counted_ptr_inplace<boost::coroutines2::detail::pull_coroutine<void>,std::allocator<boost::coroutines2::detail::pull_coroutine<void>>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  v23 = &common::minet::Coroutine::size_stack;
  onExitCallbacka._M_functor._M_unused._M_object = (void *)(v29 + 16);
  boost::coroutines2::detail::pull_coroutine<void>::pull_coroutine<boost::context::basic_fixedsize_stack<boost::context::stack_traits> &,std::_Bind<void (common::minet::Coroutine::*)(boost::coroutines2::detail::push_coroutine<void> &) ()(common::minet::Coroutine*,std::_Placeholder<1>)>>(
    (boost::coroutines2::detail::pull_coroutine<void> *const)(v29 + 16),
    &common::minet::Coroutine::size_stack,
    (std::_Bind<void (common::minet::Coroutine::*(common::minet::Coroutine*,std::_Placeholder<1>))(boost::coroutines2::detail::push_coroutine<void>&)> *)&onExitCallbacka._M_invoker);
LABEL_67:
  *(_QWORD *)(v5 + 72) = 0LL;
  onExitCallbacka._M_manager = (std::_Function_base::_Manager_type)v29;
  *(_QWORD *)&onExitCallbacka._M_functor._M_pod_data[8] = onExitCallbacka._M_functor._M_unused._M_object;
LABEL_42:
  p_pull_ptr = (volatile signed __int32 *)&this->pull_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pull_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_pull_ptr, v23);
    goto LABEL_69;
  }
  this->pull_ptr_._M_ptr = *(std::__shared_ptr<boost::coroutines2::detail::pull_coroutine<void>,(__gnu_cxx::_Lock_policy)2>::element_type **)&onExitCallbacka._M_functor._M_pod_data[8];
  p_pull_ptr = (volatile signed __int32 *)&this->pull_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->pull_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    __asan_report_load8(p_pull_ptr);
    goto LABEL_70;
  }
  M_pi = this->pull_ptr_._M_refcount._M_pi;
  this->pull_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)onExitCallbacka._M_manager;
  if ( !M_pi )
    goto LABEL_52;
  p_pull_ptr = &M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_71;
  v25 = *(_BYTE *)(((unsigned __int64)p_pull_ptr >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_pull_ptr & 7) + 3) < v25 || !v25 )
  {
    M_use_count = _InterlockedExchangeAdd(p_pull_ptr, 0xFFFFFFFF);
    goto LABEL_49;
  }
LABEL_70:
  __asan_report_store4(p_pull_ptr, v23);
LABEL_71:
  v33 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_75;
  }
  M_use_count = M_pi->_M_use_count;
  M_pi->_M_use_count = M_use_count - 1;
LABEL_49:
  if ( M_use_count != 1 )
    goto LABEL_52;
LABEL_75:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_86;
  }
  p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_87;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  p_M_weak_count = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_88;
  v35 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v35 || !v35 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_81;
  }
LABEL_87:
  __asan_report_store4(p_M_weak_count, v23);
LABEL_88:
  v38 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v38 && v38 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
LABEL_92:
    v37 = (unsigned __int64)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_93;
  }
  M_weak_count = M_pi->_M_weak_count;
  M_pi->_M_weak_count = M_weak_count - 1;
LABEL_81:
  if ( M_weak_count != 1 )
    goto LABEL_52;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_92;
  v37 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
  if ( !*(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
    goto LABEL_106;
LABEL_93:
  __asan_report_load8(v37);
  __asan_report_store4(v37, v23);
  v39 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v39 && v39 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_97;
  }
  v40 = M_pi->_M_use_count;
  M_pi->_M_use_count = v40 - 1;
  if ( v40 == 1 )
  {
LABEL_97:
    if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    {
      v41 = (volatile signed __int32 *)M_pi;
      __asan_report_load8(M_pi);
    }
    else
    {
      v41 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
        v41 = &M_pi->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_110;
        v42 = *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v41 & 7) + 3) < v42 || !v42 )
        {
          v43 = _InterlockedExchangeAdd(v41, 0xFFFFFFFF);
          goto LABEL_103;
        }
LABEL_109:
        __asan_report_store4(v41, v23);
LABEL_110:
        v44 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v44 && v44 )
        {
          __asan_report_load4(&M_pi->_M_weak_count);
          goto LABEL_114;
        }
        v43 = M_pi->_M_weak_count;
        M_pi->_M_weak_count = v43 - 1;
LABEL_103:
        if ( v43 != 1 )
          goto LABEL_52;
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          p_state = (common::minet::Coroutine::State *)(M_pi->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
          {
LABEL_106:
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base
             + 3))(M_pi);
            goto LABEL_52;
          }
LABEL_115:
          __asan_report_load8(p_state);
LABEL_116:
          __asan_report_load4(p_state);
          goto LABEL_117;
        }
LABEL_114:
        p_state = (common::minet::Coroutine::State *)M_pi;
        __asan_report_load8(M_pi);
        goto LABEL_115;
      }
    }
    __asan_report_load8(v41);
    goto LABEL_109;
  }
LABEL_52:
  p_state = &this->state_;
  v28 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v28 && v28 )
    goto LABEL_116;
  if ( this->state_ )
    goto LABEL_14;
  p_state = (common::minet::Coroutine::State *)&this->onExitCallback_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&this->onExitCallback_._M_manager >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    __asan_report_load8(p_state);
    goto LABEL_118;
  }
  if ( this->onExitCallback_._M_manager )
    std::function<void ()(void)>::operator()(p_func);
LABEL_14:
  if ( v49 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_118:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 50: range 0000000019AF64CC-0000000019AF6B0E
void __fastcall common::minet::Coroutine::startFunc(
        common::minet::Coroutine *const this,
        common::minet::CoroutinePushType *yield)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v8; // cl
  int v9; // eax
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  bool v12; // dl
  __int64 v13; // rax
  volatile signed __int32 *v14; // r14
  volatile signed __int32 *p_M_weak_count; // rdi
  char v16; // dl
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  char v19; // cl
  signed __int32 v20; // eax
  unsigned __int64 p_M_use_count; // rdi
  char v22; // dl
  signed __int32 v23; // eax
  volatile signed __int32 *p_push_ptr; // rdi
  char v25; // dl
  char v26; // dl
  _QWORD *v27; // rbx
  char v28; // dl
  signed __int32 v29; // eax
  char v30; // dl
  char v31; // cl
  unsigned __int64 v32; // rdx
  char v33; // dl
  volatile signed __int32 *v34; // rdi
  char v35; // dl
  signed __int32 v36; // eax
  char v37; // dl
  char v38; // dl
  unsigned __int64 v39; // rdi
  struct _Unwind_Exception *v40; // rbx
  std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+10h] [rbp-88h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v42; // [rsp+18h] [rbp-80h]
  char v43[120]; // [rsp+20h] [rbp-78h] BYREF

  v3 = (unsigned __int64)yield;
  v4 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_0(64LL);
    if ( v13 )
      v4 = v13;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 7 __count";
  *(_QWORD *)(v4 + 16) = common::minet::Coroutine::startFunc;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  common::tools::TimeUtils::Timer::reset(&this->timer_);
  p_M_refcount = (volatile signed __int32 *)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
    goto LABEL_16;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  v42 = M_pi;
  if ( !M_pi )
    goto LABEL_19;
  p_M_refcount = &M_pi->_M_use_count;
  v8 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v8 && v8 )
  {
LABEL_16:
    __asan_report_load4(p_M_refcount);
LABEL_17:
    __asan_handle_no_return(p_M_refcount);
    std::__throw_bad_weak_ptr();
  }
  *(_DWORD *)(v4 + 32) = M_pi->_M_use_count;
  do
  {
    v9 = *(_DWORD *)(v4 + 32);
    if ( !v9 )
      goto LABEL_17;
    v11 = *(_DWORD *)(v4 + 32);
    v10 = _InterlockedCompareExchange(p_M_refcount, v9 + 1, v11);
    v12 = v11 == v10;
    if ( v11 != v10 )
      *(_DWORD *)(v4 + 32) = v10;
  }
  while ( !v12 );
  p_M_refcount = (volatile signed __int32 *)&this->std::enable_shared_from_this<common::minet::Coroutine>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::Coroutine> >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
LABEL_19:
    __asan_handle_no_return(p_M_refcount);
    std::__throw_bad_weak_ptr();
  }
  M_ptr = this->_M_weak_this._M_ptr;
  _tls_init_6();
  *(std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::minet::Coroutine::this_coro_wtr._M_ptr
                                                                                         + __readfsqword(0)) = M_ptr;
  v14 = (volatile signed __int32 *)v42;
  if ( v42 )
  {
    p_M_weak_count = &v42->_M_weak_count;
    if ( &_pthread_key_create )
    {
      v16 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v16 || !v16 )
      {
        _InterlockedAdd(p_M_weak_count, 1u);
        goto LABEL_25;
      }
      __asan_report_store4(p_M_weak_count, yield);
    }
    v30 = *(_BYTE *)(((unsigned __int64)&v42->_M_weak_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v42 + 12) & 7) + 3) >= v30 && v30 )
    {
      v18 = __asan_report_load4(&v42->_M_weak_count);
      goto LABEL_55;
    }
    ++v42->_M_weak_count;
  }
LABEL_25:
  v17 = *(unsigned __int64 *)((char *)&common::minet::Coroutine::this_coro_wtr._M_refcount._M_pi + __readfsqword(0));
  if ( v17 )
  {
    v18 = v17 + 12;
    if ( !&_pthread_key_create )
      goto LABEL_56;
    v19 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
    if ( (char)((v18 & 7) + 3) < v19 || !v19 )
    {
      v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v18, 0xFFFFFFFF);
      goto LABEL_30;
    }
LABEL_55:
    v17 = v18;
    __asan_report_store4(v18, yield);
LABEL_56:
    v31 = *(_BYTE *)(((v17 + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((v17 + 12) & 7) + 3) >= v31 && v31 )
    {
      v17 += 12LL;
      __asan_report_load4(v17);
      goto LABEL_60;
    }
    v20 = *(_DWORD *)(v17 + 12);
    *(_DWORD *)(v17 + 12) = v20 - 1;
LABEL_30:
    if ( v20 != 1 )
      goto LABEL_31;
LABEL_60:
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
    }
    else
    {
      v32 = *(_QWORD *)v17 + 24LL;
      if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v17 + 24LL))();
        goto LABEL_31;
      }
    }
    p_M_use_count = v32;
    __asan_report_load8(v32);
    goto LABEL_65;
  }
LABEL_31:
  *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((char *)&common::minet::Coroutine::this_coro_wtr._M_refcount._M_pi
                                                        + __readfsqword(0)) = v42;
  v14 = (volatile signed __int32 *)v42;
  if ( !v42 )
    goto LABEL_37;
  p_M_use_count = (unsigned __int64)&v42->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_66;
  v22 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v22 || !v22 )
  {
    v23 = _InterlockedExchangeAdd((volatile signed __int32 *)p_M_use_count, 0xFFFFFFFF);
    goto LABEL_36;
  }
LABEL_65:
  __asan_report_store4(p_M_use_count, yield);
LABEL_66:
  v33 = *(_BYTE *)(((unsigned __int64)(v14 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v14 + 8) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(v14 + 2);
    goto LABEL_70;
  }
  v23 = *((_DWORD *)v14 + 2);
  *((_DWORD *)v14 + 2) = v23 - 1;
LABEL_36:
  if ( v23 != 1 )
    goto LABEL_37;
LABEL_70:
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    v34 = v14;
    __asan_report_load8(v14);
    goto LABEL_81;
  }
  v34 = (volatile signed __int32 *)(*(_QWORD *)v14 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(v34);
    goto LABEL_82;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
  v34 = v14 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_83;
  v35 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v34 & 7) + 3) < v35 || !v35 )
  {
    v36 = _InterlockedExchangeAdd(v34, 0xFFFFFFFF);
    goto LABEL_76;
  }
LABEL_82:
  __asan_report_store4(v34, yield);
LABEL_83:
  v37 = *(_BYTE *)(((unsigned __int64)(v14 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v14 + 12) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v14 + 3);
LABEL_87:
    p_push_ptr = v14;
    __asan_report_load8(v14);
    goto LABEL_88;
  }
  v36 = *((_DWORD *)v14 + 3);
  *((_DWORD *)v14 + 3) = v36 - 1;
LABEL_76:
  if ( v36 != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    goto LABEL_87;
  p_push_ptr = (volatile signed __int32 *)(*(_QWORD *)v14 + 24LL);
  if ( *(_BYTE *)(((unsigned __int64)p_push_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    __asan_report_load8(p_push_ptr);
    goto LABEL_89;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 24LL))(v14);
LABEL_37:
  p_push_ptr = (volatile signed __int32 *)&this->push_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->push_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_store8(p_push_ptr, yield);
LABEL_90:
    __asan_report_store4(p_push_ptr, yield);
LABEL_91:
    __asan_report_store4(p_push_ptr, yield);
    goto LABEL_92;
  }
  this->push_ptr_ = yield;
  p_push_ptr = (volatile signed __int32 *)&this->state_;
  v25 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v25 && v25 )
    goto LABEL_90;
  this->state_ = CORO_STATE_RUNNING;
  std::function<void ()(void)>::operator()(&this->func_);
  p_push_ptr = (volatile signed __int32 *)&this->state_;
  v26 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v26 && v26 )
    goto LABEL_91;
  this->state_ = CORO_STATE_DONE;
  _tls_init_6();
  v27 = (std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::minet::Coroutine::this_coro_wtr._M_ptr
                                                                                              + __readfsqword(0));
  *v27 = 0LL;
  v3 = v27[1];
  v27[1] = 0LL;
  if ( !v3 )
    goto LABEL_48;
  p_push_ptr = (volatile signed __int32 *)(v3 + 12);
  if ( !&_pthread_key_create )
    goto LABEL_93;
  v28 = *(_BYTE *)(((unsigned __int64)p_push_ptr >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_push_ptr & 7) + 3) < v28 || !v28 )
  {
    v29 = _InterlockedExchangeAdd(p_push_ptr, 0xFFFFFFFF);
    goto LABEL_47;
  }
LABEL_92:
  __asan_report_store4(p_push_ptr, yield);
LABEL_93:
  v38 = *(_BYTE *)(((v3 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 12) & 7) + 3) >= v38 && v38 )
  {
    __asan_report_load4(v3 + 12);
    goto LABEL_97;
  }
  v29 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v3 + 12) = v29 - 1;
LABEL_47:
  if ( v29 != 1 )
    goto LABEL_48;
LABEL_97:
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    v39 = v3;
    __asan_report_load8(v3);
LABEL_101:
    v40 = (struct _Unwind_Exception *)__asan_report_load8(v39);
    if ( v42 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v42);
    __asan_handle_no_return(v42);
    _Unwind_Resume(v40);
  }
  v39 = *(_QWORD *)v3 + 24LL;
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
    goto LABEL_101;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
LABEL_48:
  if ( v43 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 94: range 0000000019AF8694-0000000019AF9C53
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall common::minet::Coroutine::resume(
        common::minet::Coroutine *const this,
        uint32_t yield_id,
        int32_t ret)
{
  unsigned int v4; // r12d
  unsigned __int64 ostr; // r15
  unsigned __int64 v6; // rbp
  size_t v7; // r14
  unsigned __int64 v8; // r13
  void *p_pull_ptr; // rdi
  char v10; // al
  size_t p_coro_id; // rdi
  char v12; // dl
  char **v13; // rdi
  char *v14; // rdi
  char **v15; // rdi
  char *v16; // rdi
  size_t v17; // r14
  size_t p_state; // rdi
  char *v19; // rdi
  size_t v20; // r12
  char v21; // dl
  size_t v22; // rdi
  char *v23; // rdi
  size_t v24; // r12
  char v25; // dl
  int32_t result; // eax
  __int64 v27; // rax
  void *p_cur; // rdi
  char *cur; // rdi
  char v30; // dl
  char **v31; // rdi
  char *v32; // rdi
  size_t v33; // r14
  char *v34; // rdi
  size_t v35; // r12
  char v36; // dl
  unsigned __int64 p_retcode; // rdi
  char v38; // al
  __int64 v39; // r12
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  boost::context::detail::fiber_activation_record *v42; // rdi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdi
  __int64 v46; // rdi
  ucontext_t *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  boost::context::detail::fiber_activation_record *v50; // rdi
  __int64 v51; // r12
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  boost::context::detail::fiber_activation_record *v54; // rdi
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rdi
  boost::context::detail::fiber_activation_record *v58; // rdi
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  boost::context::detail::fiber_activation_record *v61; // rdi
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  boost::context::detail::fiber_activation_record *v65; // rdi
  __int64 v66; // rdx
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  boost::context::detail::fiber_activation_record *v69; // rdi
  unsigned __int64 v70; // rdx
  char *v71; // rax
  _BYTE *v72; // rax
  char *v73; // rdi
  common::minet::Coroutine::State *p_M_manager; // rdi
  char v75; // dl
  unsigned __int64 exception; // rbx
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  char *v79; // rdi
  unsigned __int64 v80; // rax
  std::function<boost::context::detail::fiber_activation_record*(boost::context::detail::fiber_activation_record*&)> *v81; // rdi
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rdi
  void (__fastcall *v84)(__int64, __int64, __int64); // rax
  boost::context::detail::fiber_activation_record *v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  boost::context::detail::fiber_activation_record *v91; // rdi
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rdi
  __int64 v95; // rdi
  ucontext_t *v96; // rdi
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  boost::context::detail::fiber_activation_record *v99; // rdi
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  boost::context::detail::fiber_activation_record *v102; // rdi
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int64 v105; // rdi
  boost::context::detail::fiber_activation_record *v106; // rdi
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rdx
  unsigned __int64 v112; // rdi
  unsigned __int64 v113; // rdx
  boost::context::detail::fiber_activation_record *v114; // rdi
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rdx
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  boost::context::detail::fiber_activation_record *v120; // rdi
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rdi
  __int64 v124; // rdi
  ucontext_t *v125; // rdi
  unsigned __int64 v126; // rax
  __int64 v127; // rax
  boost::context::detail::fiber_activation_record *v128; // rdi
  __int64 v129; // r12
  unsigned __int64 v130; // rax
  __int64 v131; // rax
  boost::context::detail::fiber_activation_record *v132; // rdi
  unsigned __int64 v133; // rax
  __int64 v134; // rax
  unsigned __int64 v135; // rdi
  boost::context::detail::fiber_activation_record *v136; // rdi
  unsigned __int64 v137; // rax
  __int64 v138; // rax
  unsigned __int64 v139; // rdi
  __int64 v140; // rdx
  unsigned __int64 v141; // rdx
  struct _Unwind_Exception *v142; // rbx
  __int64 v143; // [rsp+8h] [rbp-B0h]
  __int64 v144; // [rsp+8h] [rbp-B0h]
  __int64 v145; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v146; // [rsp+18h] [rbp-A0h] BYREF
  common::milog::MiLogStream v147; // [rsp+20h] [rbp-98h] BYREF
  char v148[120]; // [rsp+40h] [rbp-78h] BYREF

  v4 = yield_id;
  ostr = (unsigned int)ret;
  v6 = (unsigned __int64)v148;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v27 = __asan_stack_malloc_0(64LL);
    if ( v27 )
      v6 = v27;
  }
  v7 = v6 + 64;
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 8 3 ptr";
  *(_QWORD *)(v6 + 16) = common::minet::Coroutine::resume;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202116352;
  p_pull_ptr = &this->pull_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pull_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_pull_ptr);
LABEL_36:
    __asan_report_load4(p_pull_ptr);
LABEL_37:
    *(_QWORD *)&yield_id = &common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v147,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/coroutine.cpp",
      "resume",
      101);
    ostr = (unsigned __int64)v147.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v147.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v147.ostr_;
      __asan_report_load8(v147.ostr_);
    }
    else
    {
      v7 = (size_t)(v147.ostr_->buffer_.data_ + 0x4000);
      p_cur = &v147.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v147.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v147.ostr_->buffer_.cur_;
        v7 = (int)v7 - (int)cur;
        if ( v7 > 0x25 )
          v7 = 38LL;
        *(_QWORD *)&yield_id = "[ECS] coroutine yield id is not right:";
        memcpy(cur, "[ECS] coroutine yield id is not right:", v7);
        *(_QWORD *)(ostr + 8) += v7;
        p_cur = &this->yield_id_;
        v30 = *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 48) & 7) + 3) < v30 || !v30 )
        {
          *(_QWORD *)&yield_id = this->yield_id_;
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v147.ostr_, yield_id);
          ostr = (unsigned __int64)v147.ostr_;
          if ( !*(_BYTE *)(((unsigned __int64)v147.ostr_ >> 3) + 0x7FFF8000) )
          {
            v7 = (size_t)(v147.ostr_->buffer_.data_ + 0x4000);
            v31 = &v147.ostr_->buffer_.cur_;
            if ( !*(_BYTE *)(((unsigned __int64)&v147.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
            {
              v32 = v147.ostr_->buffer_.cur_;
              v33 = (_DWORD)v7 - (_DWORD)v32 != 0LL;
              memcpy(v32, ":", v33);
              *(_QWORD *)(ostr + 8) += v33;
              *(_QWORD *)&yield_id = v4;
              common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v147.ostr_, v4);
              v7 = (size_t)v147.ostr_;
              if ( !*(_BYTE *)(((unsigned __int64)v147.ostr_ >> 3) + 0x7FFF8000) )
              {
                p_coro_id = (size_t)&v147.ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v147.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  v34 = v147.ostr_->buffer_.cur_;
                  v35 = (size_t)&v147.ostr_->buffer_.data_[-(int)v34 + 0x4000];
                  if ( v35 > 8 )
                    v35 = 9LL;
                  *(_QWORD *)&yield_id = ",coro id:";
                  memcpy(v34, ",coro id:", v35);
                  *(_QWORD *)(v7 + 8) += v35;
                  p_coro_id = (size_t)&this->coro_id_;
                  v36 = *(_BYTE *)(((unsigned __int64)&this->coro_id_ >> 3) + 0x7FFF8000);
                  if ( (char)((((_BYTE)this + 52) & 7) + 3) < v36 || !v36 )
                    goto LABEL_30;
                  goto LABEL_59;
                }
LABEL_58:
                __asan_report_load8(p_coro_id);
LABEL_59:
                __asan_report_load4(p_coro_id);
LABEL_60:
                __asan_report_load4(p_coro_id);
                goto LABEL_61;
              }
LABEL_57:
              p_coro_id = v7;
              __asan_report_load8(v7);
              goto LABEL_58;
            }
LABEL_56:
            __asan_report_load8(v31);
            goto LABEL_57;
          }
LABEL_55:
          v31 = (char **)ostr;
          __asan_report_load8(ostr);
          goto LABEL_56;
        }
LABEL_54:
        __asan_report_load4(p_cur);
        goto LABEL_55;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_54;
  }
  if ( !this->pull_ptr_._M_ptr )
  {
LABEL_283:
    result = 1;
    goto LABEL_31;
  }
  p_pull_ptr = &this->yield_id_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_36;
  if ( this->yield_id_ != yield_id )
    goto LABEL_37;
  p_coro_id = (size_t)&this->state_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v12 && v12 )
    goto LABEL_60;
  if ( this->state_ != CORO_STATE_YIELD )
  {
    *(_QWORD *)&yield_id = &common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v147,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/coroutine.cpp",
      "resume",
      106);
    ostr = (unsigned __int64)v147.ostr_;
    if ( !*(_BYTE *)(((unsigned __int64)v147.ostr_ >> 3) + 0x7FFF8000) )
    {
      v7 = (size_t)(v147.ostr_->buffer_.data_ + 0x4000);
      v13 = &v147.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v147.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        v14 = v147.ostr_->buffer_.cur_;
        v7 = (int)v7 - (int)v14;
        if ( v7 > 0x1C )
          v7 = 29LL;
        *(_QWORD *)&yield_id = "coroutine state  is not yield";
        memcpy(v14, "coroutine state  is not yield", v7);
        *(_QWORD *)(ostr + 8) += v7;
        ostr = (unsigned __int64)v147.ostr_;
        if ( !*(_BYTE *)(((unsigned __int64)v147.ostr_ >> 3) + 0x7FFF8000) )
        {
          v7 = (size_t)(v147.ostr_->buffer_.data_ + 0x4000);
          v15 = &v147.ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v147.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            v16 = v147.ostr_->buffer_.cur_;
            v17 = (int)v7 - (int)v16;
            if ( v17 > 9 )
              v17 = 10LL;
            memcpy(v16, ",yield id:", v17);
            *(_QWORD *)(ostr + 8) += v17;
            *(_QWORD *)&yield_id = v4;
            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v147.ostr_, v4);
            v7 = (size_t)v147.ostr_;
            if ( !*(_BYTE *)(((unsigned __int64)v147.ostr_ >> 3) + 0x7FFF8000) )
            {
              p_state = (size_t)&v147.ostr_->buffer_.cur_;
              if ( !*(_BYTE *)(((unsigned __int64)&v147.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
              {
                v19 = v147.ostr_->buffer_.cur_;
                v20 = (size_t)&v147.ostr_->buffer_.data_[-(int)v19 + 0x4000];
                if ( v20 > 7 )
                  v20 = 8LL;
                *(_QWORD *)&yield_id = ", state:";
                memcpy(v19, ", state:", v20);
                *(_QWORD *)(v7 + 8) += v20;
                p_state = (size_t)&this->state_;
                v21 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)this + 60) & 7) + 3) < v21 || !v21 )
                {
                  *(_QWORD *)&yield_id = (unsigned int)this->state_;
                  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v147.ostr_, yield_id);
                  v7 = (size_t)v147.ostr_;
                  if ( !*(_BYTE *)(((unsigned __int64)v147.ostr_ >> 3) + 0x7FFF8000) )
                  {
                    v22 = (size_t)&v147.ostr_->buffer_.cur_;
                    if ( !*(_BYTE *)(((unsigned __int64)&v147.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                    {
                      v23 = v147.ostr_->buffer_.cur_;
                      v24 = (size_t)&v147.ostr_->buffer_.data_[-(int)v23 + 0x4000];
                      if ( v24 > 8 )
                        v24 = 9LL;
                      *(_QWORD *)&yield_id = ",coro id:";
                      memcpy(v23, ",coro id:", v24);
                      *(_QWORD *)(v7 + 8) += v24;
                      v22 = (size_t)&this->coro_id_;
                      v25 = *(_BYTE *)(((unsigned __int64)&this->coro_id_ >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)this + 52) & 7) + 3) < v25 || !v25 )
                      {
LABEL_30:
                        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                          v147.ostr_,
                          this->coro_id_);
                        common::milog::MiLogStream::~MiLogStream(&v147);
                        result = 1;
                        goto LABEL_31;
                      }
                      goto LABEL_70;
                    }
LABEL_69:
                    __asan_report_load8(v22);
LABEL_70:
                    __asan_report_load4(v22);
                    goto LABEL_71;
                  }
LABEL_68:
                  v22 = v7;
                  __asan_report_load8(v7);
                  goto LABEL_69;
                }
LABEL_67:
                __asan_report_load4(p_state);
                goto LABEL_68;
              }
LABEL_66:
              __asan_report_load8(p_state);
              goto LABEL_67;
            }
LABEL_65:
            p_state = v7;
            __asan_report_load8(v7);
            goto LABEL_66;
          }
LABEL_64:
          __asan_report_load8(v15);
          goto LABEL_65;
        }
LABEL_63:
        v15 = (char **)ostr;
        __asan_report_load8(ostr);
        goto LABEL_64;
      }
LABEL_62:
      __asan_report_load8(v13);
      goto LABEL_63;
    }
LABEL_61:
    v13 = (char **)ostr;
    __asan_report_load8(ostr);
    goto LABEL_62;
  }
LABEL_71:
  p_retcode = (unsigned __int64)&this->retcode_;
  v38 = *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000);
  if ( v38 && v38 <= 3 )
  {
    __asan_report_store4(p_retcode, *(_QWORD *)&yield_id);
    goto LABEL_116;
  }
  this->retcode_ = ostr;
  common::minet::Coroutine::onResume(this);
  p_retcode = (unsigned __int64)&this->pull_ptr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->pull_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_116:
    __asan_report_load8(p_retcode);
    goto LABEL_117;
  }
  p_retcode = (unsigned __int64)this->pull_ptr_._M_ptr;
  if ( *(_BYTE *)((p_retcode >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    __asan_report_load8(p_retcode);
    goto LABEL_118;
  }
  ostr = *(_QWORD *)p_retcode;
  if ( *(_BYTE *)((*(_QWORD *)p_retcode >> 3) + 0x7FFF8000LL) )
  {
LABEL_118:
    p_retcode = ostr;
    __asan_report_load8(ostr);
LABEL_119:
    __asan_handle_no_return(p_retcode);
    __assert_fail(
      "nullptr != ptr_",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fiber_ucontext.hpp",
      0x1B7u,
      "boost::context::fiber boost::context::fiber::resume() &&");
  }
  v39 = *(_QWORD *)ostr;
  if ( !*(_QWORD *)ostr )
    goto LABEL_119;
  if ( *(_BYTE *)((ostr >> 3) + 0x7FFF8000) )
  {
    v40 = __asan_report_store8(*(_QWORD *)p_retcode, *(_QWORD *)&yield_id);
    goto LABEL_121;
  }
  *(_QWORD *)ostr = 0LL;
  v40 = boost::context::detail::fiber_activation_record::current((boost::context::detail::fiber_activation_record *)p_retcode);
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
LABEL_121:
    v42 = (boost::context::detail::fiber_activation_record *)v40;
    __asan_report_load8(v40);
    goto LABEL_122;
  }
  v41 = *(_QWORD *)v40;
  v42 = (boost::context::detail::fiber_activation_record *)(v39 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v39 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_122:
    v43 = __asan_report_store8(v42, *(_QWORD *)&yield_id);
    goto LABEL_123;
  }
  *(_QWORD *)(v39 + 968) = v41;
  v43 = boost::context::detail::fiber_activation_record::current(v42);
  v44 = v43 >> 3;
  if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
  {
LABEL_123:
    v45 = v43;
    __asan_report_store8(v43, *(_QWORD *)&yield_id);
    goto LABEL_124;
  }
  *(_QWORD *)v43 = v39;
  v45 = v39 + 1008;
  if ( *(char *)(((unsigned __int64)(v39 + 1008) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_124:
    __asan_report_load1(v45, *(_QWORD *)&yield_id, v44);
    goto LABEL_125;
  }
  if ( !*(_BYTE *)(v39 + 1008) )
    goto LABEL_127;
  v45 = v39 + 1032;
  if ( !*(_BYTE *)(((unsigned __int64)(v39 + 1032) >> 3) + 0x7FFF8000) )
  {
    v45 = v39 + 1024;
    if ( !*(_BYTE *)(((unsigned __int64)(v39 + 1024) >> 3) + 0x7FFF8000) )
    {
      __sanitizer_start_switch_fiber(0LL, *(_QWORD *)(v39 + 1024), *(_QWORD *)(v39 + 1032));
      goto LABEL_86;
    }
    goto LABEL_126;
  }
LABEL_125:
  __asan_report_load8(v45);
LABEL_126:
  __asan_report_load8(v45);
LABEL_127:
  v46 = v39 + 1032;
  if ( *(_BYTE *)(((unsigned __int64)(v39 + 1032) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v46);
    goto LABEL_132;
  }
  v46 = v39 + 1024;
  if ( *(_BYTE *)(((unsigned __int64)(v39 + 1024) >> 3) + 0x7FFF8000) )
  {
LABEL_132:
    __asan_report_load8(v46);
    goto LABEL_133;
  }
  *(_QWORD *)&yield_id = *(_QWORD *)(v39 + 1024);
  v46 = v39 + 968;
  if ( *(_BYTE *)(((unsigned __int64)(v39 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_133:
    __asan_report_load8(v46);
    goto LABEL_134;
  }
  __sanitizer_start_switch_fiber(*(_QWORD *)(v39 + 968) + 1016LL, *(_QWORD *)&yield_id, *(_QWORD *)(v39 + 1032));
LABEL_86:
  *(_QWORD *)&yield_id = v39 + 8;
  v46 = v39 + 968;
  if ( *(_BYTE *)(((unsigned __int64)(v39 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_134:
    v48 = __asan_report_load8(v46);
    goto LABEL_135;
  }
  v47 = (ucontext_t *)(*(_QWORD *)(v39 + 968) + 8LL);
  swapcontext(v47, *(const ucontext_t **)&yield_id);
  v48 = boost::context::detail::fiber_activation_record::current((boost::context::detail::fiber_activation_record *)v47);
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
  {
LABEL_135:
    v50 = (boost::context::detail::fiber_activation_record *)v48;
    __asan_report_load8(v48);
    goto LABEL_136;
  }
  v49 = *(_QWORD *)v48;
  v50 = (boost::context::detail::fiber_activation_record *)(v49 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v49 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_136:
    v52 = __asan_report_load8(v50);
    goto LABEL_137;
  }
  v51 = *(_QWORD *)(v49 + 968) + 1032LL;
  v52 = boost::context::detail::fiber_activation_record::current(v50);
  if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
  {
LABEL_137:
    v54 = (boost::context::detail::fiber_activation_record *)v52;
    __asan_report_load8(v52);
    goto LABEL_138;
  }
  v53 = *(_QWORD *)v52;
  v54 = (boost::context::detail::fiber_activation_record *)(v53 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v53 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    v55 = __asan_report_load8(v54);
    goto LABEL_139;
  }
  v143 = *(_QWORD *)(v53 + 968) + 1024LL;
  v55 = boost::context::detail::fiber_activation_record::current(v54);
  if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
  {
LABEL_139:
    v57 = v55;
    __asan_report_load8(v55);
    goto LABEL_140;
  }
  v56 = *(_QWORD *)v55;
  v57 = v56 + 1016;
  if ( *(_BYTE *)(((unsigned __int64)(v56 + 1016) >> 3) + 0x7FFF8000) )
  {
LABEL_140:
    v59 = __asan_report_load8(v57);
    goto LABEL_141;
  }
  v58 = *(boost::context::detail::fiber_activation_record **)(v56 + 1016);
  *(_QWORD *)&yield_id = v143;
  __sanitizer_finish_switch_fiber(v58, v143, v51);
  v59 = boost::context::detail::fiber_activation_record::current(v58);
  if ( *(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
  {
LABEL_141:
    v61 = (boost::context::detail::fiber_activation_record *)v59;
    __asan_report_load8(v59);
    goto LABEL_142;
  }
  v60 = *(_QWORD *)v59;
  v61 = (boost::context::detail::fiber_activation_record *)(v60 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v60 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_142:
    v63 = __asan_report_load8(v61);
    goto LABEL_143;
  }
  v62 = *(_QWORD *)(v60 + 968);
  *(_QWORD *)(v60 + 968) = 0LL;
  *(_QWORD *)(v7 - 32) = v62;
  v63 = boost::context::detail::fiber_activation_record::current(v61);
  if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
  {
LABEL_143:
    v65 = (boost::context::detail::fiber_activation_record *)v63;
    __asan_report_load8(v63);
LABEL_144:
    __asan_report_load1(v65, *(_QWORD *)&yield_id, v66);
LABEL_145:
    exception = (unsigned __int64)__cxa_allocate_exception(0x10uLL);
    v77 = *(_QWORD *)(v7 - 32);
    v78 = exception >> 3;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      v77 = __asan_report_store8(exception, *(_QWORD *)&yield_id);
    *(_QWORD *)exception = v77;
    v79 = (char *)(exception + 8);
    if ( *(char *)(((exception + 8) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v79, *(_QWORD *)&yield_id, v78);
    *(_BYTE *)(exception + 8) = 0;
    __asan_handle_no_return(v79);
    _cxa_throw(
      (void *)exception,
      (struct type_info *)&`typeinfo for'boost::context::detail::forced_unwind,
      (void (__fastcall *)(void *))boost::context::detail::forced_unwind::~forced_unwind);
  }
  v64 = *(_QWORD *)v63;
  v65 = (boost::context::detail::fiber_activation_record *)(v64 + 1009);
  v66 = *(unsigned __int8 *)(((unsigned __int64)(v64 + 1009) >> 3) + 0x7FFF8000);
  if ( (char)v66 <= ((v64 - 15) & 7) && (_BYTE)v66 )
    goto LABEL_144;
  if ( *(_BYTE *)(v64 + 1009) )
    goto LABEL_145;
  v67 = boost::context::detail::fiber_activation_record::current(v65);
  if ( *(_BYTE *)((v67 >> 3) + 0x7FFF8000) )
  {
    v69 = (boost::context::detail::fiber_activation_record *)v67;
    __asan_report_load8(v67);
    goto LABEL_151;
  }
  v68 = *(_QWORD *)v67;
  v69 = (boost::context::detail::fiber_activation_record *)(v68 + 992);
  if ( *(_BYTE *)(((unsigned __int64)(v68 + 992) >> 3) + 0x7FFF8000) )
  {
LABEL_151:
    __asan_report_load8(v69);
    goto LABEL_152;
  }
  if ( !*(_QWORD *)(v68 + 992) )
    goto LABEL_102;
LABEL_152:
  v80 = boost::context::detail::fiber_activation_record::current(v69);
  if ( *(_BYTE *)((v80 >> 3) + 0x7FFF8000) )
  {
    v82 = __asan_report_load8(v80);
    goto LABEL_160;
  }
  *(_QWORD *)&yield_id = v7 - 32;
  v81 = (std::function<boost::context::detail::fiber_activation_record*(boost::context::detail::fiber_activation_record*&)> *)(*(_QWORD *)v80 + 976LL);
  *(_QWORD *)(v7 - 32) = std::function<boost::context::detail::fiber_activation_record * ()(boost::context::detail::fiber_activation_record *&)>::operator()(
                           v81,
                           (boost::context::detail::fiber_activation_record **)(v7 - 32));
  v82 = boost::context::detail::fiber_activation_record::current((boost::context::detail::fiber_activation_record *)v81);
  if ( *(_BYTE *)((v82 >> 3) + 0x7FFF8000) )
  {
LABEL_160:
    v83 = v82;
    __asan_report_load8(v82);
    goto LABEL_161;
  }
  v51 = *(_QWORD *)v82;
  v83 = *(_QWORD *)v82 + 992LL;
  if ( *(_BYTE *)((v83 >> 3) + 0x7FFF8000) )
  {
LABEL_161:
    __asan_report_load8(v83);
LABEL_162:
    __asan_report_store8(v83, *(_QWORD *)&yield_id);
    goto LABEL_163;
  }
  v84 = *(void (__fastcall **)(__int64, __int64, __int64))(v51 + 992);
  if ( !v84 )
    goto LABEL_102;
  *(_QWORD *)&yield_id = v51 + 976;
  v84(v51 + 976, v51 + 976, 3LL);
  v83 = v51 + 992;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 992) >> 3) + 0x7FFF8000) )
    goto LABEL_162;
  *(_QWORD *)(v51 + 992) = 0LL;
  v83 = v51 + 1000;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 1000) >> 3) + 0x7FFF8000) )
  {
LABEL_163:
    __asan_report_store8(v83, *(_QWORD *)&yield_id);
LABEL_164:
    v71 = (char *)__asan_report_load8(ostr);
    goto LABEL_165;
  }
  *(_QWORD *)(v51 + 1000) = 0LL;
LABEL_102:
  v146 = *(_QWORD *)(v7 - 32);
  if ( (unsigned __int64 *)ostr == &v146 )
    goto LABEL_105;
  v70 = v146;
  v146 = 0LL;
  if ( *(_BYTE *)((ostr >> 3) + 0x7FFF8000) )
    goto LABEL_164;
  v71 = *(char **)ostr;
  *(_QWORD *)ostr = v70;
  *(_QWORD *)(v7 - 32) = v71;
  if ( !v71 )
    goto LABEL_105;
LABEL_165:
  v85 = (boost::context::detail::fiber_activation_record *)(v71 + 960);
  v86 = *(unsigned __int8 *)(((unsigned __int64)(v71 + 960) >> 3) + 0x7FFF8000);
  if ( (v86 & 0x80u) != 0LL )
  {
    __asan_report_load1(v85, *(_QWORD *)&yield_id, v86);
LABEL_194:
    __asan_report_load1(v85, *(_QWORD *)&yield_id, v87);
LABEL_195:
    v89 = __asan_report_store1(v85, *(_QWORD *)&yield_id, v88);
    goto LABEL_196;
  }
  if ( v71[960] )
    goto LABEL_105;
  v85 = (boost::context::detail::fiber_activation_record *)(v71 + 1008);
  v87 = *(unsigned __int8 *)(((unsigned __int64)(v71 + 1008) >> 3) + 0x7FFF8000);
  if ( (v87 & 0x80u) != 0LL )
    goto LABEL_194;
  if ( v71[1008] == 1 )
    goto LABEL_190;
  v85 = (boost::context::detail::fiber_activation_record *)(v71 + 1009);
  v88 = *(unsigned __int8 *)(((unsigned __int64)(v71 + 1009) >> 3) + 0x7FFF8000);
  if ( (char)v88 <= (((unsigned __int8)v71 - 15) & 7) && (_BYTE)v88 )
    goto LABEL_195;
  v71[1009] = 1;
  v51 = *(_QWORD *)(v7 - 32);
  v89 = boost::context::detail::fiber_activation_record::current(v85);
  if ( *(_BYTE *)((v89 >> 3) + 0x7FFF8000) )
  {
LABEL_196:
    v91 = (boost::context::detail::fiber_activation_record *)v89;
    __asan_report_load8(v89);
    goto LABEL_197;
  }
  v90 = *(_QWORD *)v89;
  v91 = (boost::context::detail::fiber_activation_record *)(v51 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_197:
    v92 = __asan_report_store8(v91, *(_QWORD *)&yield_id);
    goto LABEL_198;
  }
  *(_QWORD *)(v51 + 968) = v90;
  v92 = boost::context::detail::fiber_activation_record::current(v91);
  v93 = v92 >> 3;
  if ( *(_BYTE *)((v92 >> 3) + 0x7FFF8000) )
  {
LABEL_198:
    v94 = v92;
    __asan_report_store8(v92, *(_QWORD *)&yield_id);
    goto LABEL_199;
  }
  *(_QWORD *)v92 = v51;
  v94 = v51 + 1008;
  if ( *(char *)(((unsigned __int64)(v51 + 1008) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_199:
    __asan_report_load1(v94, *(_QWORD *)&yield_id, v93);
    goto LABEL_200;
  }
  if ( !*(_BYTE *)(v51 + 1008) )
    goto LABEL_202;
  v94 = v51 + 1032;
  if ( !*(_BYTE *)(((unsigned __int64)(v51 + 1032) >> 3) + 0x7FFF8000) )
  {
    v94 = v51 + 1024;
    if ( !*(_BYTE *)(((unsigned __int64)(v51 + 1024) >> 3) + 0x7FFF8000) )
    {
      __sanitizer_start_switch_fiber(0LL, *(_QWORD *)(v51 + 1024), *(_QWORD *)(v51 + 1032));
      goto LABEL_179;
    }
    goto LABEL_201;
  }
LABEL_200:
  __asan_report_load8(v94);
LABEL_201:
  __asan_report_load8(v94);
LABEL_202:
  v95 = v51 + 1032;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 1032) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v95);
    goto LABEL_207;
  }
  v95 = v51 + 1024;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 1024) >> 3) + 0x7FFF8000) )
  {
LABEL_207:
    __asan_report_load8(v95);
    goto LABEL_208;
  }
  *(_QWORD *)&yield_id = *(_QWORD *)(v51 + 1024);
  v95 = v51 + 968;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_208:
    __asan_report_load8(v95);
    goto LABEL_209;
  }
  __sanitizer_start_switch_fiber(*(_QWORD *)(v51 + 968) + 1016LL, *(_QWORD *)&yield_id, *(_QWORD *)(v51 + 1032));
LABEL_179:
  *(_QWORD *)&yield_id = v51 + 8;
  v95 = v51 + 968;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_209:
    v97 = __asan_report_load8(v95);
    goto LABEL_210;
  }
  v96 = (ucontext_t *)(*(_QWORD *)(v51 + 968) + 8LL);
  swapcontext(v96, *(const ucontext_t **)&yield_id);
  v97 = boost::context::detail::fiber_activation_record::current((boost::context::detail::fiber_activation_record *)v96);
  if ( *(_BYTE *)((v97 >> 3) + 0x7FFF8000) )
  {
LABEL_210:
    v99 = (boost::context::detail::fiber_activation_record *)v97;
    __asan_report_load8(v97);
    goto LABEL_211;
  }
  v98 = *(_QWORD *)v97;
  v99 = (boost::context::detail::fiber_activation_record *)(v98 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v98 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_211:
    v100 = __asan_report_load8(v99);
    goto LABEL_212;
  }
  v51 = *(_QWORD *)(v98 + 968) + 1032LL;
  v100 = boost::context::detail::fiber_activation_record::current(v99);
  if ( *(_BYTE *)((v100 >> 3) + 0x7FFF8000) )
  {
LABEL_212:
    v102 = (boost::context::detail::fiber_activation_record *)v100;
    __asan_report_load8(v100);
    goto LABEL_213;
  }
  v101 = *(_QWORD *)v100;
  v102 = (boost::context::detail::fiber_activation_record *)(v101 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v101 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_213:
    v103 = __asan_report_load8(v102);
    goto LABEL_214;
  }
  v144 = *(_QWORD *)(v101 + 968) + 1024LL;
  v103 = boost::context::detail::fiber_activation_record::current(v102);
  if ( *(_BYTE *)((v103 >> 3) + 0x7FFF8000) )
  {
LABEL_214:
    v105 = v103;
    __asan_report_load8(v103);
    goto LABEL_215;
  }
  v104 = *(_QWORD *)v103;
  v105 = v104 + 1016;
  if ( *(_BYTE *)(((unsigned __int64)(v104 + 1016) >> 3) + 0x7FFF8000) )
  {
LABEL_215:
    v107 = __asan_report_load8(v105);
    goto LABEL_216;
  }
  v106 = *(boost::context::detail::fiber_activation_record **)(v104 + 1016);
  *(_QWORD *)&yield_id = v144;
  __sanitizer_finish_switch_fiber(v106, v144, v51);
  v107 = boost::context::detail::fiber_activation_record::current(v106);
  if ( *(_BYTE *)((v107 >> 3) + 0x7FFF8000) )
  {
LABEL_216:
    v109 = v107;
    __asan_report_load8(v107);
    goto LABEL_217;
  }
  v108 = *(_QWORD *)v107;
  v109 = v108 + 968;
  if ( *(_BYTE *)(((unsigned __int64)(v108 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_217:
    __asan_report_store8(v109, *(_QWORD *)&yield_id);
    goto LABEL_218;
  }
  *(_QWORD *)(v108 + 968) = 0LL;
  v110 = *(_QWORD *)(v7 - 32);
  v109 = v110 + 1008;
  v111 = *(unsigned __int8 *)(((unsigned __int64)(v110 + 1008) >> 3) + 0x7FFF8000);
  if ( (v111 & 0x80u) != 0LL )
  {
LABEL_218:
    __asan_report_load1(v109, *(_QWORD *)&yield_id, v111);
LABEL_219:
    __asan_handle_no_return(v109);
    __assert_fail(
      "ptr_->terminated",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fiber_ucontext.hpp",
      0x1A1u,
      "boost::context::fiber::~fiber()");
  }
  if ( !*(_BYTE *)(v110 + 1008) )
    goto LABEL_219;
LABEL_190:
  v112 = *(_QWORD *)(v7 - 32);
  if ( *(_BYTE *)((v112 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v112);
    goto LABEL_221;
  }
  v113 = *(_QWORD *)v112 + 16LL;
  if ( *(_BYTE *)((v113 >> 3) + 0x7FFF8000) )
  {
LABEL_221:
    v72 = (_BYTE *)__asan_report_load8(v113);
    goto LABEL_222;
  }
  (*(void (**)(void))(*(_QWORD *)v112 + 16LL))();
LABEL_105:
  v72 = (_BYTE *)v146;
  if ( !v146 )
    goto LABEL_106;
LABEL_222:
  v114 = (boost::context::detail::fiber_activation_record *)(v72 + 960);
  v115 = *(unsigned __int8 *)(((unsigned __int64)(v72 + 960) >> 3) + 0x7FFF8000);
  if ( (v115 & 0x80u) != 0LL )
  {
    __asan_report_load1(v114, *(_QWORD *)&yield_id, v115);
LABEL_251:
    __asan_report_load1(v114, *(_QWORD *)&yield_id, v116);
LABEL_252:
    v118 = __asan_report_store1(v114, *(_QWORD *)&yield_id, v117);
    goto LABEL_253;
  }
  if ( v72[960] )
    goto LABEL_106;
  v114 = (boost::context::detail::fiber_activation_record *)(v72 + 1008);
  v116 = *(unsigned __int8 *)(((unsigned __int64)(v72 + 1008) >> 3) + 0x7FFF8000);
  if ( (v116 & 0x80u) != 0LL )
    goto LABEL_251;
  if ( v72[1008] == 1 )
    goto LABEL_247;
  v114 = (boost::context::detail::fiber_activation_record *)(v72 + 1009);
  v117 = *(unsigned __int8 *)(((unsigned __int64)(v72 + 1009) >> 3) + 0x7FFF8000);
  if ( (char)v117 <= (((unsigned __int8)v72 - 15) & 7) && (_BYTE)v117 )
    goto LABEL_252;
  v72[1009] = 1;
  v51 = v146;
  v118 = boost::context::detail::fiber_activation_record::current(v114);
  if ( *(_BYTE *)((v118 >> 3) + 0x7FFF8000) )
  {
LABEL_253:
    v120 = (boost::context::detail::fiber_activation_record *)v118;
    __asan_report_load8(v118);
    goto LABEL_254;
  }
  v119 = *(_QWORD *)v118;
  v120 = (boost::context::detail::fiber_activation_record *)(v51 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_254:
    v121 = __asan_report_store8(v120, *(_QWORD *)&yield_id);
    goto LABEL_255;
  }
  *(_QWORD *)(v51 + 968) = v119;
  v121 = boost::context::detail::fiber_activation_record::current(v120);
  v122 = v121 >> 3;
  if ( *(_BYTE *)((v121 >> 3) + 0x7FFF8000) )
  {
LABEL_255:
    v123 = v121;
    __asan_report_store8(v121, *(_QWORD *)&yield_id);
    goto LABEL_256;
  }
  *(_QWORD *)v121 = v51;
  v123 = v51 + 1008;
  if ( *(char *)(((unsigned __int64)(v51 + 1008) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_256:
    __asan_report_load1(v123, *(_QWORD *)&yield_id, v122);
    goto LABEL_257;
  }
  if ( !*(_BYTE *)(v51 + 1008) )
    goto LABEL_259;
  v123 = v51 + 1032;
  if ( !*(_BYTE *)(((unsigned __int64)(v51 + 1032) >> 3) + 0x7FFF8000) )
  {
    v123 = v51 + 1024;
    if ( !*(_BYTE *)(((unsigned __int64)(v51 + 1024) >> 3) + 0x7FFF8000) )
    {
      __sanitizer_start_switch_fiber(0LL, *(_QWORD *)(v51 + 1024), *(_QWORD *)(v51 + 1032));
      goto LABEL_236;
    }
    goto LABEL_258;
  }
LABEL_257:
  __asan_report_load8(v123);
LABEL_258:
  __asan_report_load8(v123);
LABEL_259:
  v124 = v51 + 1032;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 1032) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v124);
    goto LABEL_264;
  }
  v124 = v51 + 1024;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 1024) >> 3) + 0x7FFF8000) )
  {
LABEL_264:
    __asan_report_load8(v124);
    goto LABEL_265;
  }
  *(_QWORD *)&yield_id = *(_QWORD *)(v51 + 1024);
  v124 = v51 + 968;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_265:
    __asan_report_load8(v124);
    goto LABEL_266;
  }
  __sanitizer_start_switch_fiber(*(_QWORD *)(v51 + 968) + 1016LL, *(_QWORD *)&yield_id, *(_QWORD *)(v51 + 1032));
LABEL_236:
  *(_QWORD *)&yield_id = v51 + 8;
  v124 = v51 + 968;
  if ( *(_BYTE *)(((unsigned __int64)(v51 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_266:
    v126 = __asan_report_load8(v124);
    goto LABEL_267;
  }
  v125 = (ucontext_t *)(*(_QWORD *)(v51 + 968) + 8LL);
  swapcontext(v125, *(const ucontext_t **)&yield_id);
  v126 = boost::context::detail::fiber_activation_record::current((boost::context::detail::fiber_activation_record *)v125);
  if ( *(_BYTE *)((v126 >> 3) + 0x7FFF8000) )
  {
LABEL_267:
    v128 = (boost::context::detail::fiber_activation_record *)v126;
    __asan_report_load8(v126);
    goto LABEL_268;
  }
  v127 = *(_QWORD *)v126;
  v128 = (boost::context::detail::fiber_activation_record *)(v127 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v127 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_268:
    v130 = __asan_report_load8(v128);
    goto LABEL_269;
  }
  v129 = *(_QWORD *)(v127 + 968) + 1032LL;
  v130 = boost::context::detail::fiber_activation_record::current(v128);
  if ( *(_BYTE *)((v130 >> 3) + 0x7FFF8000) )
  {
LABEL_269:
    v132 = (boost::context::detail::fiber_activation_record *)v130;
    __asan_report_load8(v130);
    goto LABEL_270;
  }
  v131 = *(_QWORD *)v130;
  v132 = (boost::context::detail::fiber_activation_record *)(v131 + 968);
  if ( *(_BYTE *)(((unsigned __int64)(v131 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_270:
    v133 = __asan_report_load8(v132);
    goto LABEL_271;
  }
  v145 = *(_QWORD *)(v131 + 968) + 1024LL;
  v133 = boost::context::detail::fiber_activation_record::current(v132);
  if ( *(_BYTE *)((v133 >> 3) + 0x7FFF8000) )
  {
LABEL_271:
    v135 = v133;
    __asan_report_load8(v133);
    goto LABEL_272;
  }
  v134 = *(_QWORD *)v133;
  v135 = v134 + 1016;
  if ( *(_BYTE *)(((unsigned __int64)(v134 + 1016) >> 3) + 0x7FFF8000) )
  {
LABEL_272:
    v137 = __asan_report_load8(v135);
    goto LABEL_273;
  }
  v136 = *(boost::context::detail::fiber_activation_record **)(v134 + 1016);
  *(_QWORD *)&yield_id = v145;
  __sanitizer_finish_switch_fiber(v136, v145, v129);
  v137 = boost::context::detail::fiber_activation_record::current(v136);
  if ( *(_BYTE *)((v137 >> 3) + 0x7FFF8000) )
  {
LABEL_273:
    v139 = v137;
    __asan_report_load8(v137);
    goto LABEL_274;
  }
  v138 = *(_QWORD *)v137;
  v139 = v138 + 968;
  if ( *(_BYTE *)(((unsigned __int64)(v138 + 968) >> 3) + 0x7FFF8000) )
  {
LABEL_274:
    __asan_report_store8(v139, *(_QWORD *)&yield_id);
    goto LABEL_275;
  }
  *(_QWORD *)(v138 + 968) = 0LL;
  v139 = v146 + 1008;
  v140 = *(unsigned __int8 *)(((v146 + 1008) >> 3) + 0x7FFF8000);
  if ( (v140 & 0x80u) != 0LL )
  {
LABEL_275:
    __asan_report_load1(v139, *(_QWORD *)&yield_id, v140);
LABEL_276:
    __asan_handle_no_return(v139);
    __assert_fail(
      "ptr_->terminated",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/context/fiber_ucontext.hpp",
      0x1A1u,
      "boost::context::fiber::~fiber()");
  }
  if ( !*(_BYTE *)(v146 + 1008) )
    goto LABEL_276;
LABEL_247:
  if ( *(_BYTE *)((v146 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v146);
    goto LABEL_278;
  }
  v141 = *(_QWORD *)v146 + 16LL;
  if ( *(_BYTE *)((v141 >> 3) + 0x7FFF8000) )
  {
LABEL_278:
    v73 = (char *)v141;
    __asan_report_load8(v141);
    goto LABEL_279;
  }
  (*(void (**)(void))(*(_QWORD *)v146 + 16LL))();
LABEL_106:
  v73 = (char *)(ostr + 24);
  if ( *(_BYTE *)(((ostr + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_279:
    __asan_report_load8(v73);
LABEL_280:
    std::__exception_ptr::exception_ptr::exception_ptr(
      (std::__exception_ptr::exception_ptr *)(v7 - 32),
      (const std::__exception_ptr::exception_ptr *)(ostr + 24));
    __asan_handle_no_return(v7 - 32);
    v142 = (struct _Unwind_Exception *)std::rethrow_exception((std::__exception_ptr::exception_ptr)(v7 - 32));
    std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)(v7 - 32));
    __asan_handle_no_return(v7 - 32);
    _Unwind_Resume(v142);
  }
  if ( *(_QWORD *)(ostr + 24) )
    goto LABEL_280;
  p_M_manager = &this->state_;
  v75 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v75 && v75 )
  {
    __asan_report_load4(p_M_manager);
LABEL_282:
    __asan_report_load8(p_M_manager);
    goto LABEL_283;
  }
  if ( this->state_ )
  {
    result = 0;
    goto LABEL_31;
  }
  p_M_manager = (common::minet::Coroutine::State *)&this->onExitCallback_._M_manager;
  if ( *(_BYTE *)(((unsigned __int64)&this->onExitCallback_._M_manager >> 3) + 0x7FFF8000) )
    goto LABEL_282;
  if ( this->onExitCallback_._M_manager )
    std::function<void ()(void)>::operator()(&this->onExitCallback_);
  result = 0;
LABEL_31:
  if ( v148 == (char *)v6 )
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

// Line 121: range 0000000019AF9C58-0000000019AF9CE6
void __fastcall common::minet::Coroutine::notify(common::minet::Coroutine *const this, uint32_t yield_id)
{
  uint32_t *p_yield_id; // rdx
  char v3; // al
  common::minet::Coroutine *p_state; // rdx
  char v5; // cl

  if ( *(_BYTE *)(((unsigned __int64)&this->pull_ptr_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->pull_ptr_);
LABEL_11:
    __asan_report_load4(p_yield_id);
LABEL_12:
    this = p_state;
    __asan_report_load4(p_state);
    goto LABEL_13;
  }
  if ( !this->pull_ptr_._M_ptr )
    return;
  p_yield_id = &this->yield_id_;
  v3 = *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000);
  if ( v3 && v3 <= 3 )
    goto LABEL_11;
  if ( this->yield_id_ != yield_id )
    return;
  p_state = (common::minet::Coroutine *)&this->state_;
  v5 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v5 && v5 )
    goto LABEL_12;
  if ( this->state_ == CORO_STATE_YIELD )
LABEL_13:
    common::minet::Coroutine::resume(this, yield_id, 0);
};

// Line 130: range 0000000019AF9CE8-0000000019AF9E68
int32_t __fastcall common::minet::Coroutine::forceAwake(common::minet::Coroutine *const this)
{
  unsigned __int64 p_pull_ptr; // rdi
  char v3; // dl
  common::milog::MilogStringStream *ostr; // r12
  void *p_cur; // rdi
  char *cur; // rdi
  size_t v8; // rbp
  char v9; // dl
  char v10; // al
  common::milog::MiLogStream v11; // [rsp+0h] [rbp-38h] BYREF

  p_pull_ptr = (unsigned __int64)&this->pull_ptr_;
  if ( *(_BYTE *)((p_pull_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_pull_ptr);
    goto LABEL_8;
  }
  if ( this->pull_ptr_._M_ptr )
  {
    p_pull_ptr = (unsigned __int64)&this->state_;
    v3 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 60) & 7) + 3) < v3 || !v3 )
    {
      if ( this->state_ != CORO_STATE_YIELD )
        return 0;
LABEL_9:
      common::milog::MiLogStream::MiLogStream(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/coroutine.cpp",
        "forceAwake",
        135);
      ostr = v11.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v11.ostr_ >> 3) + 0x7FFF8000) )
      {
        p_cur = v11.ostr_;
        __asan_report_load8(v11.ostr_);
      }
      else
      {
        p_cur = &v11.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v11.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          cur = v11.ostr_->buffer_.cur_;
          v8 = (size_t)&v11.ostr_->buffer_.data_[-(int)cur + 0x4000];
          if ( v8 > 0x20 )
            v8 = 33LL;
          memcpy(cur, "coroutine is forceAwake, coro id:", v8);
          ostr->buffer_.cur_ += v8;
          p_cur = &this->coro_id_;
          v9 = *(_BYTE *)(((unsigned __int64)&this->coro_id_ >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)this + 52) & 7) + 3) < v9 || !v9 )
          {
            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v11.ostr_, this->coro_id_);
            common::milog::MiLogStream::~MiLogStream(&v11);
            p_cur = &this->yield_id_;
            v10 = *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000);
            if ( !v10 || v10 > 3 )
              return common::minet::Coroutine::resume(this, this->yield_id_, 0);
            goto LABEL_21;
          }
LABEL_20:
          __asan_report_load4(p_cur);
LABEL_21:
          __asan_report_load4(p_cur);
          return 0;
        }
      }
      __asan_report_load8(p_cur);
      goto LABEL_20;
    }
LABEL_8:
    __asan_report_load4(p_pull_ptr);
    goto LABEL_9;
  }
  return 0;
};

// Line 141: range 0000000019AF6B14-0000000019AF81A6
void __fastcall common::minet::Coroutine::onYield(common::minet::Coroutine *const this)
{
  __int64 v1; // rsi
  _QWORD *v3; // rbp
  unsigned __int64 v4; // r12
  volatile signed __int32 *v5; // rdi
  char v6; // dl
  signed __int32 v7; // eax
  unsigned __int64 p_state; // rdi
  char v9; // dl
  int *v10; // rdx
  char v11; // dl
  int v12[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  _tls_init_6();
  v3 = (std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::minet::Coroutine::this_coro_wtr._M_ptr
                                                                                             + __readfsqword(0));
  *v3 = 0LL;
  v4 = v3[1];
  v3[1] = 0LL;
  if ( v4 )
  {
    v5 = (volatile signed __int32 *)(v4 + 12);
    if ( &_pthread_key_create )
    {
      v6 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v5 & 7) + 3) < v6 || !v6 )
      {
        v7 = _InterlockedExchangeAdd(v5, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(v5, v1);
    }
    v11 = *(_BYTE *)(((v4 + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((v4 + 12) & 7) + 3) >= v11 && v11 )
    {
      __asan_report_load4(v4 + 12);
      goto LABEL_15;
    }
    v7 = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 12) = v7 - 1;
LABEL_6:
    if ( v7 != 1 )
      goto LABEL_7;
LABEL_15:
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      p_state = v4;
      __asan_report_load8(v4);
    }
    else
    {
      p_state = *(_QWORD *)v4 + 24LL;
      if ( !*(_BYTE *)((p_state >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 24LL))(v4);
        goto LABEL_7;
      }
    }
    __asan_report_load8(p_state);
    goto LABEL_20;
  }
LABEL_7:
  p_state = (unsigned __int64)&this->state_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v9 && v9 )
  {
LABEL_20:
    __asan_report_store4(p_state, v1);
    JUMPOUT(0x19AF6C73LL);
  }
  this->state_ = CORO_STATE_YIELD;
  v12[0] = common::tools::TimeUtils::Timer::time(&this->timer_);
  std::vector<int>::emplace_back<int>(&this->yield_time_list_, v12, v10);
};

// Line 147: range 0000000019AF81AC-0000000019AF868F
void __fastcall common::minet::Coroutine::onResume(common::minet::Coroutine *const this)
{
  unsigned __int64 v2; // rbp
  char *v3; // rsi
  unsigned __int64 v4; // r12
  volatile signed __int32 *p_state; // rdi
  char v6; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v8; // r8
  int v9; // eax
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  bool v12; // dl
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  volatile signed __int32 *p_M_weak_count; // rdi
  char v16; // dl
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  char v19; // cl
  signed __int32 v20; // eax
  unsigned __int64 p_M_use_count; // rdi
  char v22; // dl
  signed __int32 v23; // eax
  char v24; // dl
  char v25; // cl
  unsigned __int64 v26; // rdx
  char v27; // dl
  unsigned __int64 v28; // rdi
  char v29; // dl
  signed __int32 v30; // eax
  unsigned __int64 v31; // rdi
  char v32; // dl
  struct _Unwind_Exception *v33; // rbx
  std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // [rsp+0h] [rbp-78h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // [rsp+8h] [rbp-70h]
  char v36[104]; // [rsp+10h] [rbp-68h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_0(64LL);
    if ( v13 )
      v2 = v13;
  }
  v3 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 __count";
  *(_QWORD *)(v2 + 16) = common::minet::Coroutine::onResume;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  p_state = (volatile signed __int32 *)&this->state_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 60) & 7) + 3) >= v6 && v6 )
  {
    __asan_report_store4(p_state, v3);
    goto LABEL_18;
  }
  this->state_ = CORO_STATE_RUNNING;
  p_state = (volatile signed __int32 *)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_state);
    goto LABEL_19;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  v35 = M_pi;
  if ( !M_pi )
    goto LABEL_22;
  p_state = &M_pi->_M_use_count;
  v8 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v8 && v8 )
  {
LABEL_19:
    __asan_report_load4(p_state);
LABEL_20:
    __asan_handle_no_return(p_state);
    std::__throw_bad_weak_ptr();
  }
  *(_DWORD *)(v2 + 32) = M_pi->_M_use_count;
  do
  {
    v9 = *(_DWORD *)(v2 + 32);
    if ( !v9 )
      goto LABEL_20;
    v11 = *(_DWORD *)(v2 + 32);
    v10 = _InterlockedCompareExchange(p_state, v9 + 1, v11);
    v12 = v11 == v10;
    if ( v11 != v10 )
      *(_DWORD *)(v2 + 32) = v10;
  }
  while ( !v12 );
  p_state = (volatile signed __int32 *)&this->std::enable_shared_from_this<common::minet::Coroutine>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::Coroutine> >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_state);
LABEL_22:
    __asan_handle_no_return(p_state);
    std::__throw_bad_weak_ptr();
  }
  M_ptr = this->_M_weak_this._M_ptr;
  _tls_init_6();
  *(std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::minet::Coroutine::this_coro_wtr._M_ptr
                                                                                         + __readfsqword(0)) = M_ptr;
  v14 = (unsigned __int64)v35;
  if ( v35 )
  {
    p_M_weak_count = &v35->_M_weak_count;
    if ( &_pthread_key_create )
    {
      v16 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v16 || !v16 )
      {
        _InterlockedAdd(p_M_weak_count, 1u);
        goto LABEL_28;
      }
      __asan_report_store4(p_M_weak_count, v3);
    }
    v24 = *(_BYTE *)(((unsigned __int64)&v35->_M_weak_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v35 + 12) & 7) + 3) >= v24 && v24 )
    {
      v18 = __asan_report_load4(&v35->_M_weak_count);
      goto LABEL_47;
    }
    ++v35->_M_weak_count;
  }
LABEL_28:
  v17 = *(unsigned __int64 *)((char *)&common::minet::Coroutine::this_coro_wtr._M_refcount._M_pi + __readfsqword(0));
  if ( v17 )
  {
    v18 = v17 + 12;
    if ( !&_pthread_key_create )
      goto LABEL_48;
    v19 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
    if ( (char)((v18 & 7) + 3) < v19 || !v19 )
    {
      v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v18, 0xFFFFFFFF);
      goto LABEL_33;
    }
LABEL_47:
    v17 = v18;
    __asan_report_store4(v18, v3);
LABEL_48:
    v25 = *(_BYTE *)(((v17 + 12) >> 3) + 0x7FFF8000);
    if ( (char)(((v17 + 12) & 7) + 3) >= v25 && v25 )
    {
      v17 += 12LL;
      __asan_report_load4(v17);
      goto LABEL_52;
    }
    v20 = *(_DWORD *)(v17 + 12);
    *(_DWORD *)(v17 + 12) = v20 - 1;
LABEL_33:
    if ( v20 != 1 )
      goto LABEL_34;
LABEL_52:
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
    }
    else
    {
      v26 = *(_QWORD *)v17 + 24LL;
      if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v17 + 24LL))();
        goto LABEL_34;
      }
    }
    p_M_use_count = v26;
    __asan_report_load8(v26);
    goto LABEL_57;
  }
LABEL_34:
  *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((char *)&common::minet::Coroutine::this_coro_wtr._M_refcount._M_pi
                                                        + __readfsqword(0)) = v35;
  v14 = (unsigned __int64)v35;
  if ( !v35 )
    goto LABEL_40;
  p_M_use_count = (unsigned __int64)&v35->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_58;
  v22 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((p_M_use_count & 7) + 3) < v22 || !v22 )
  {
    v23 = _InterlockedExchangeAdd((volatile signed __int32 *)p_M_use_count, 0xFFFFFFFF);
    goto LABEL_39;
  }
LABEL_57:
  __asan_report_store4(p_M_use_count, v3);
LABEL_58:
  v27 = *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v14 + 8) & 7) + 3) >= v27 && v27 )
  {
    __asan_report_load4(v14 + 8);
    goto LABEL_62;
  }
  v23 = *(_DWORD *)(v14 + 8);
  *(_DWORD *)(v14 + 8) = v23 - 1;
LABEL_39:
  if ( v23 != 1 )
    goto LABEL_40;
LABEL_62:
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
  {
    v28 = v14;
    __asan_report_load8(v14);
    goto LABEL_73;
  }
  v28 = *(_QWORD *)v14 + 16LL;
  if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_load8(v28);
    goto LABEL_74;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  v28 = v14 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_75;
  v29 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
  if ( (char)((v28 & 7) + 3) < v29 || !v29 )
  {
    v30 = _InterlockedExchangeAdd((volatile signed __int32 *)v28, 0xFFFFFFFF);
    goto LABEL_68;
  }
LABEL_74:
  __asan_report_store4(v28, v3);
LABEL_75:
  v32 = *(_BYTE *)(((v14 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v14 + 12) & 7) + 3) >= v32 && v32 )
  {
    __asan_report_load4(v14 + 12);
LABEL_79:
    v31 = v14;
    __asan_report_load8(v14);
LABEL_80:
    v33 = (struct _Unwind_Exception *)__asan_report_load8(v31);
    if ( v35 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v35);
    __asan_handle_no_return(v35);
    _Unwind_Resume(v33);
  }
  v30 = *(_DWORD *)(v14 + 12);
  *(_DWORD *)(v14 + 12) = v30 - 1;
LABEL_68:
  if ( v30 != 1 )
    goto LABEL_40;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    goto LABEL_79;
  v31 = *(_QWORD *)v14 + 24LL;
  if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
    goto LABEL_80;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 24LL))(v14);
LABEL_40:
  common::tools::TimeUtils::Timer::reset(&this->timer_);
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 170: range 0000000019AF580A-0000000019AF5AA6
std::string *__fastcall common::minet::Coroutine::debugTime[abi:cxx11](
        std::string *retstr,
        common::minet::Coroutine *const this)
{
  int *v2; // r12
  std::_Vector_base<int>::pointer M_finish; // r14
  unsigned __int64 v4; // r15
  char *v5; // rdi
  std::vector<int> *p_yield_time_list; // rdi
  std::_Vector_base<int>::pointer M_start; // rax
  __int64 v8; // rax
  char *v9; // rax
  char *v10; // rdi
  size_t v11; // rbx
  char v12; // dl
  int v13; // eax
  char *v14; // rax
  char *v15; // rdi
  size_t v16; // rbx
  size_t v17; // rbx
  const char *v18; // rsi
  int v19; // ebx
  char *v20; // rdi
  unsigned __int64 v23; // [rsp+18h] [rbp-80h]
  char v24[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v4 = v8;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 7 oss:171";
  *(_QWORD *)(v4 + 16) = common::minet::Coroutine::debugTime[abi:cxx11];
  v23 = v4 >> 3;
  *(_DWORD *)(v23 + 2147450880) = -235802127;
  *(_DWORD *)(v23 + 2147450884) = -202178560;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  v5 = (char *)operator new[](0x1000uLL);
  *(_QWORD *)(v4 + 32) = v5;
  *(_QWORD *)(v4 + 40) = v5;
  memcpy(v5, "{", sizeof(char));
  ++*(_QWORD *)(v4 + 40);
  p_yield_time_list = &this->yield_time_list_;
  if ( *(_BYTE *)(((unsigned __int64)&this->yield_time_list_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_yield_time_list);
    goto LABEL_8;
  }
  M_start = this->yield_time_list_._M_impl._M_start;
  p_yield_time_list = (std::vector<int> *)&this->yield_time_list_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->yield_time_list_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_yield_time_list);
    goto LABEL_9;
  }
  M_finish = this->yield_time_list_._M_impl._M_finish;
  while ( 1 )
  {
    v2 = M_start;
    if ( M_finish == M_start )
      break;
    v12 = *(_BYTE *)(((unsigned __int64)M_start >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)M_start & 7) + 3) >= v12 && v12 )
    {
      __asan_report_load4(M_start);
      break;
    }
LABEL_9:
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32),
      *v2);
    v9 = *(char **)(v4 + 32);
    v10 = *(char **)(v4 + 40);
    v11 = (int)v9 + 4096 - (int)v10;
    if ( (_DWORD)v9 + 4096 != (_DWORD)v10 )
      v11 = 1LL;
    memcpy(v10, ",", v11);
    *(_QWORD *)(v4 + 40) += v11;
    M_start = v2 + 1;
  }
  v13 = common::tools::TimeUtils::Timer::time(&this->timer_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 32),
    v13);
  v14 = *(char **)(v4 + 32);
  v15 = *(char **)(v4 + 40);
  v16 = (int)v14 + 4096 - (int)v15;
  if ( (_DWORD)v14 + 4096 != (_DWORD)v15 )
    v16 = 1LL;
  memcpy(v15, "}", v16);
  v17 = *(_QWORD *)(v4 + 40) + v16;
  *(_QWORD *)(v4 + 40) = v17;
  v18 = *(const char **)(v4 + 32);
  v19 = v17 - (_DWORD)v18;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr, v18);
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      retstr,
      v18,
      &v18[v19],
      (std::forward_iterator_tag)((unsigned __int64)retstr >> 3));
  }
  v20 = *(char **)(v4 + 32);
  if ( v20 )
    operator delete[](v20);
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 186: range 0000000019AF9E6E-0000000019AFA044
std::shared_ptr<common::minet::Coroutine> __cdecl common::minet::Coroutine::thisCoro()
{
  std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *v0; // rdi
  __int64 v1; // rsi
  std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *v2; // rbx
  unsigned __int64 v3; // r12
  std::enable_shared_from_this<common::minet::Coroutine> *v4; // rdi
  std::shared_ptr<common::minet::Coroutine> result; // rax
  char v6; // cl
  signed __int32 v7; // ett
  std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  signed __int32 M_ptr; // [rsp+20h] [rbp+20h]

  v2 = v0;
  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_0(64LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 4 7 __count";
  vars0[2] = (__int64)common::minet::Coroutine::thisCoro;
  v3 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  _tls_init_6();
  result._M_ptr = *(std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::minet::Coroutine::this_coro_wtr._M_refcount._M_pi + __readfsqword(0));
  v4 = &v0->std::enable_shared_from_this<common::minet::Coroutine>;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((unsigned __int64)&v2->std::enable_shared_from_this<common::minet::Coroutine> >> 3);
  if ( LOBYTE(result._M_refcount._M_pi[134215680]._vptr__Sp_counted_base) )
  {
    __asan_report_store8(v4, v1);
  }
  else
  {
    v2->_M_weak_this._M_ptr = result._M_ptr;
    if ( !result._M_ptr )
      goto LABEL_14;
    v4 = &result._M_ptr->std::enable_shared_from_this<common::minet::Coroutine>;
    v6 = *(_BYTE *)(((unsigned __int64)&result._M_ptr->std::enable_shared_from_this<common::minet::Coroutine> >> 3)
                  + 0x7FFF8000);
    if ( (char)(((LOBYTE(result._M_ptr) + 8) & 7) + 3) < v6 || !v6 )
    {
      M_ptr = (signed __int32)result._M_ptr->_M_weak_this.std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::_M_ptr;
      while ( M_ptr )
      {
        result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(M_ptr + 1);
        v7 = M_ptr;
        LODWORD(result._M_ptr) = _InterlockedCompareExchange(
                                   (volatile signed __int32 *)v4,
                                   (signed __int32)result._M_refcount._M_pi,
                                   M_ptr);
        LOBYTE(result._M_refcount._M_pi) = v7 == LODWORD(result._M_ptr);
        if ( v7 != LODWORD(result._M_ptr) )
          M_ptr = (signed __int32)result._M_ptr;
        if ( LOBYTE(result._M_refcount._M_pi) )
          goto LABEL_12;
      }
      goto LABEL_21;
    }
  }
  __asan_report_load4(v4);
LABEL_21:
  result._M_refcount._M_pi = 0LL;
LABEL_12:
  if ( !LOBYTE(result._M_refcount._M_pi) )
    v2->_M_weak_this._M_ptr = 0LL;
LABEL_14:
  v8 = v2->_M_weak_this._M_ptr;
  if ( !v8 )
    goto LABEL_24;
  v9 = (unsigned __int64)&v8->std::enable_shared_from_this<common::minet::Coroutine>;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)((v9 >> 3) + 0x7FFF8000);
  if ( (char)((v9 & 7) + 3) >= SLOBYTE(result._M_refcount._M_pi) && LOBYTE(result._M_refcount._M_pi) )
  {
    __asan_report_load4(v9);
  }
  else if ( *(_DWORD *)v9 )
  {
    v8 = *(std::__weak_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::minet::Coroutine::this_coro_wtr._M_ptr
                                                                                                + __readfsqword(0));
    goto LABEL_24;
  }
  v8 = 0LL;
LABEL_24:
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v2, v1);
    vars0[0] = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  else
  {
    v2->_vptr_Coroutine = (int (**)(...))v8;
    *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
  }
  result._M_ptr = v2;
  return result;
};

// Line 189: range 0000000019AFA046-0000000019AFA05D
void __cdecl GLOBAL__sub_I_coroutine_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 189: range 0000000019AF4BBC-0000000019AF4E07
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/coroutine.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    if ( *(_BYTE *)(((unsigned __int64)&common::minet::Coroutine::size_stack >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8(&common::minet::Coroutine::size_stack, &std::__ioinit);
    }
    else
    {
      common::minet::Coroutine::size_stack.size_ = 0x200000LL;
      if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
LABEL_8:
        if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero )
          goto LABEL_3;
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = 1;
        if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000) )
        {
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits
                                                                              + 9;
          goto LABEL_3;
        }
LABEL_13:
        __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, &std::__ioinit);
        JUMPOUT(0x19AF4CCFLL);
      }
      `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
      if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                     + 0x7FFF8000) )
      {
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
        goto LABEL_8;
      }
    }
    __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, &std::__ioinit);
    goto LABEL_13;
  }
};
