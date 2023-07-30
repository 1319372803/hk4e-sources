// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/detail/slot_call_iterator.hpp

// Line 43: range 0000000014ED9AAC-0000000014ED9EAD
void __fastcall boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession *,unsigned int>>::~slot_call_iterator_cache(
        boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> > *const this)
{
  boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> > *v1; // r13
  unsigned __int64 v2; // rbx
  boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> >::tracked_ptrs_type *p_tracked_ptrs; // rbp
  _DWORD *v4; // r12
  unsigned __int64 p_m_active_slot; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  boost::signals2::detail::connection_body_base **v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 buffer; // rax
  boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> > *p_capacity; // rdi
  unsigned __int64 capacity; // rdx
  __int64 size; // rax
  bool v14; // zf
  void *p_buffer; // rdi
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *v16; // r13
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *v17; // r15
  char v18[376]; // [rsp+10h] [rbp-178h] BYREF

  v1 = this;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(320LL);
    if ( v7 )
      v2 = v7;
  }
  p_tracked_ptrs = (boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> >::tracked_ptrs_type *)(v2 + 320);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 7 visitor 64 192 7 lock:47";
  *(_QWORD *)(v2 + 16) = boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession *,unsigned int>>::~slot_call_iterator_cache;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  p_m_active_slot = (unsigned __int64)&this->m_active_slot;
  if ( *(_BYTE *)(((unsigned __int64)&v1->m_active_slot >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_m_active_slot);
LABEL_10:
    __asan_report_load8(p_m_active_slot);
LABEL_11:
    __asan_report_load8(v6);
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v2 + 64));
    std::terminate();
  }
  p_m_active_slot = (unsigned __int64)v1->m_active_slot;
  if ( !p_m_active_slot )
    goto LABEL_16;
  *(_QWORD *)(v2 + 224) = 10LL;
  *(_QWORD *)(v2 + 232) = v2 + 64;
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_QWORD *)(v2 + 248) = p_m_active_slot;
  if ( *(_BYTE *)((p_m_active_slot >> 3) + 0x7FFF8000) )
    goto LABEL_10;
  v6 = *(_QWORD *)p_m_active_slot + 24LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    goto LABEL_11;
  (*(void (**)(void))(*(_QWORD *)p_m_active_slot + 24LL))();
  v8 = &v1->m_active_slot;
  if ( *(_BYTE *)(((unsigned __int64)&v1->m_active_slot >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v8);
    goto LABEL_32;
  }
  boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
    v1->m_active_slot,
    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v2 + 64));
  v8 = *(boost::signals2::detail::connection_body_base ***)(v2 + 248);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8(v8);
    goto LABEL_33;
  }
  v9 = (unsigned __int64)&(*v8)[1];
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(v9);
    goto LABEL_34;
  }
  ((void (*)(void))(*v8)[1]._vptr_connection_body_base)();
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v2 + 64));
LABEL_16:
  p_tracked_ptrs = &v1->tracked_ptrs;
  v1 = (boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> > *)((char *)v1 + 256);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    p_capacity = v1;
    __asan_report_load8(v1);
    goto LABEL_35;
  }
  buffer = (__int64)p_tracked_ptrs->buffer_;
  if ( !buffer )
    goto LABEL_23;
  p_capacity = (boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> > *)&p_tracked_ptrs->members_.capacity_;
  if ( !*(_BYTE *)(((unsigned __int64)&p_tracked_ptrs->members_.capacity_ >> 3) + 0x7FFF8000) )
  {
    capacity = p_tracked_ptrs->members_.capacity_;
    if ( capacity <= 9 )
      goto LABEL_37;
    if ( (boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> >::tracked_ptrs_type *)buffer != p_tracked_ptrs )
      goto LABEL_21;
    goto LABEL_36;
  }
LABEL_35:
  buffer = __asan_report_load8(p_capacity);
LABEL_36:
  if ( capacity > 0xA )
    goto LABEL_37;
LABEL_21:
  p_capacity = (boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> > *)&p_tracked_ptrs->size_;
  if ( *(_BYTE *)(((unsigned __int64)&p_tracked_ptrs->size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_capacity);
    goto LABEL_39;
  }
  if ( capacity < p_tracked_ptrs->size_ )
  {
LABEL_37:
    __asan_handle_no_return(p_capacity);
    __assert_fail(
      "is_valid()",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/detail/auto_buffer.hpp",
      0xFDu,
      "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::auto_buffer_destroy() [wit"
      "h T = boost::variant<boost::shared_ptr<void>, boost::signals2::detail::foreign_void_shared_ptr>; StackBufferPolicy"
      " = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signals2::detail::default_grow_policy; Alloca"
      "tor = std::allocator<boost::variant<boost::shared_ptr<void>, boost::signals2::detail::foreign_void_shared_ptr> >]");
  }
LABEL_23:
  if ( !buffer )
    goto LABEL_29;
  p_capacity = (boost::signals2::detail::slot_call_iterator_cache<int,boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int> > *)&p_tracked_ptrs->size_;
  if ( !*(_BYTE *)(((unsigned __int64)&p_tracked_ptrs->size_ >> 3) + 0x7FFF8000) )
  {
    size = p_tracked_ptrs->size_;
    v14 = size == 0;
    if ( !size )
      goto LABEL_26;
    goto LABEL_40;
  }
LABEL_39:
  size = __asan_report_load8(p_capacity);
LABEL_40:
  if ( v14 )
  {
    __asan_handle_no_return(p_capacity);
    __assert_fail(
      "n > 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/detail/auto_buffer.hpp",
      0x105u,
      "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::destroy_back_n(boost::sign"
      "als2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type, const false_type&) [with T = bo"
      "ost::variant<boost::shared_ptr<void>, boost::signals2::detail::foreign_void_shared_ptr>; StackBufferPolicy = boost"
      "::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signals2::detail::default_grow_policy; Allocator = st"
      "d::allocator<boost::variant<boost::shared_ptr<void>, boost::signals2::detail::foreign_void_shared_ptr> >; boost::s"
      "ignals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type = long unsigned int; boost::f"
      "alse_type = boost::integral_constant<bool, false>]");
  }
  v16 = &p_tracked_ptrs->buffer_[p_tracked_ptrs->size_ - 1];
  v17 = &v16[-size];
  while ( v17 < v16 )
    boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::internal_apply_visitor<boost::detail::variant::destroyer>(
      v16--,
      (boost::detail::variant::destroyer *)(v2 + 48));
LABEL_26:
  p_buffer = &p_tracked_ptrs->members_.capacity_;
  if ( *(_BYTE *)(((unsigned __int64)&p_tracked_ptrs->members_.capacity_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_buffer);
  }
  else
  {
    p_buffer = &p_tracked_ptrs->buffer_;
    if ( !*(_BYTE *)(((unsigned __int64)&p_tracked_ptrs->buffer_ >> 3) + 0x7FFF8000) )
    {
      p_buffer = p_tracked_ptrs->buffer_;
      if ( p_tracked_ptrs->members_.capacity_ <= 0xA )
        goto LABEL_29;
      goto LABEL_47;
    }
  }
  __asan_report_load8(p_buffer);
LABEL_47:
  operator delete(p_buffer);
LABEL_29:
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 146: range 0000000014EE5986-0000000014EE6A47
void __fastcall boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession *,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>::lock_next_callable(
        const boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *const this)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rbx
  std::__detail::_List_node_base *M_node; // rax
  std::__detail::_List_node_base *v5; // rdx
  std::__detail::_List_node_base *v6; // rcx
  unsigned __int64 M_next; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  std::__detail::_List_node_base *v10; // rdi
  unsigned __int64 v11; // rdx
  struct _Unwind_Exception *v12; // rbx
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v13; // rdi
  std::__detail::_List_node_base *v14; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **v15; // rdi
  const boost::signals2::detail::connection_body_base *v16; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **v17; // rdi
  const boost::signals2::detail::connection_body_base *v18; // rdi
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  char v23; // dl
  int v24; // eax
  struct _Unwind_Exception *v25; // rbx
  unsigned __int64 p_buffer; // rdi
  int v27; // eax
  unsigned __int64 v28; // rdx
  boost::detail::sp_counted_base *v29; // rdi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  char v32; // al
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdi
  std::__detail::_List_node_base *v35; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **p_M_prev; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type *v37; // rax
  char v38; // dl
  unsigned __int64 p_disconnected_slot_count; // rdi
  std::__detail::_List_node_base *v40; // rax
  std::__detail::_List_node_base *v41; // rdi
  char M_prev; // dl
  std::__detail::_List_node_base *v43; // rcx
  char v44; // si
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type *v45; // rax
  char v46; // cl
  unsigned __int64 p_size; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type *v48; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type *p_tracked_ptrs; // r12
  boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > >::size_type size; // r13
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v51; // rdi
  std::__detail::_List_node_base *v52; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **p_m_active_slot; // rdi
  const boost::signals2::detail::connection_body_base *m_active_slot; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **v55; // rdi
  const boost::signals2::detail::connection_body_base *v56; // rdi
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v57; // rdi
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdi
  char v61; // dl
  int v62; // eax
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *v63; // rdi
  std::__detail::_List_node_base *v64; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **v65; // rdi
  const boost::signals2::detail::connection_body_base *v66; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **v67; // rdi
  const boost::signals2::detail::connection_body_base *v68; // rdi
  unsigned __int64 v69; // rdi
  char v70; // dl
  int v71; // eax
  struct _Unwind_Exception *v72; // rbx
  __int64 *v73; // rdi
  __int64 v74; // rax
  unsigned __int64 v75; // [rsp+8h] [rbp-170h]
  _DWORD *v76; // [rsp+10h] [rbp-168h]
  char v77[344]; // [rsp+20h] [rbp-158h] BYREF

  v3 = (unsigned __int64)this;
  v75 = (unsigned __int64)v77;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(288LL);
    if ( v9 )
      v75 = v9;
  }
  *(_QWORD *)v75 = 1102416563LL;
  *(_QWORD *)(v75 + 8) = "1 32 192 8 lock:163";
  *(_QWORD *)(v75 + 16) = boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession *,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>>,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>>::lock_next_callable;
  v76 = (_DWORD *)(v75 >> 3);
  v76[536862720] = -235802127;
  v76[536862727] = -202116109;
  v76[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_15;
  }
  M_node = this->iter._M_node;
  this = (const boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *const)((char *)this + 24);
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(this);
LABEL_16:
    M_node = (std::__detail::_List_node_base *)__asan_report_load8(this);
    goto LABEL_17;
  }
  v5 = *(std::__detail::_List_node_base **)(v3 + 24);
  if ( v5 == M_node )
    goto LABEL_201;
  this = (const boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > *const)(v3 + 8);
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  v6 = *(std::__detail::_List_node_base **)(v3 + 8);
  if ( v6 != M_node )
    goto LABEL_7;
LABEL_17:
  if ( v6 == v5 )
  {
LABEL_7:
    M_next = (unsigned __int64)&M_node[1];
    if ( !*(_BYTE *)(((unsigned __int64)&M_node[1] >> 3) + 0x7FFF8000) )
    {
      M_next = (unsigned __int64)M_node[1]._M_next;
      if ( M_next )
      {
        *(_QWORD *)(v75 + 192) = 10LL;
        *(_QWORD *)(v75 + 200) = v75 + 32;
        *(_QWORD *)(v75 + 208) = 0LL;
        *(_QWORD *)(v75 + 216) = M_next;
        if ( *(_BYTE *)((M_next >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(M_next);
        }
        else
        {
          v8 = *(_QWORD *)M_next + 24LL;
          if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          {
            (*(void (**)(void))(*(_QWORD *)M_next + 24LL))();
            while ( 1 )
            {
              p_size = v3;
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v3);
LABEL_68:
                __asan_report_load8(p_size);
LABEL_69:
                __asan_report_load8(p_size);
LABEL_70:
                __asan_report_load8(p_size);
LABEL_71:
                __asan_report_load8(p_size);
                __asan_handle_no_return(p_size);
                __assert_fail(
                  "n <= size_",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/de"
                  "tail/auto_buffer.hpp",
                  0x38Eu,
                  "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::pop_back_n(boo"
                  "st::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type) [with T = b"
                  "oost::variant<boost::shared_ptr<void>, boost::signals2::detail::foreign_void_shared_ptr>; StackBufferP"
                  "olicy = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signals2::detail::default_gr"
                  "ow_policy; Allocator = std::allocator<boost::variant<boost::shared_ptr<void>, boost::signals2::detail:"
                  ":foreign_void_shared_ptr> >; boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Al"
                  "locator>::size_type = long unsigned int]");
              }
              p_size = v3 + 8;
              if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                goto LABEL_68;
              if ( *(_QWORD *)v3 == *(_QWORD *)(v3 + 8) )
                goto LABEL_195;
              p_size = v3 + 16;
              if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                goto LABEL_69;
              v48 = *(boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
              p_tracked_ptrs = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type *)&v48->tracked_ptrs;
              p_size = (unsigned __int64)&v48->tracked_ptrs.size_;
              if ( *(_BYTE *)(((unsigned __int64)&v48->tracked_ptrs.size_ >> 3) + 0x7FFF8000) )
                goto LABEL_70;
              size = v48->tracked_ptrs.size_;
              p_size = (unsigned __int64)&v48->tracked_ptrs.size_;
              if ( *(_BYTE *)(((unsigned __int64)&v48->tracked_ptrs.size_ >> 3) + 0x7FFF8000) )
                goto LABEL_71;
              if ( size )
              {
                p_buffer = (unsigned __int64)&v48->tracked_ptrs.buffer_;
                if ( !*(_BYTE *)(((unsigned __int64)&v48->tracked_ptrs.buffer_ >> 3) + 0x7FFF8000) )
                {
                  v1 = (unsigned __int64)&v48->tracked_ptrs.buffer_[v48->tracked_ptrs.size_ - 1];
                  v2 = v1 - 24 * size;
                  goto LABEL_87;
                }
                __asan_report_load8(p_buffer);
LABEL_75:
                __asan_report_load4(p_buffer);
LABEL_76:
                v27 = ~v27;
                while ( 1 )
                {
                  switch ( v27 )
                  {
                    case 0:
                      if ( *(_BYTE *)(((v28 + 8) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8(v28 + 8);
LABEL_81:
                        v30 = v28;
                        if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(v28);
LABEL_93:
                          __asan_report_load8(v30);
LABEL_94:
                          p_buffer = v31;
                          __asan_report_load8(v31);
LABEL_95:
                          __asan_handle_no_return(p_buffer);
                          boost::detail::variant::forced_return<void>();
                        }
                        v30 = *(_QWORD *)v28;
                        if ( *(_QWORD *)v28 )
                        {
                          if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                            goto LABEL_93;
                          v31 = *(_QWORD *)v30 + 8LL;
                          if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
                            goto LABEL_94;
                          (*(void (**)(void))(*(_QWORD *)v30 + 8LL))();
                        }
                      }
                      else
                      {
                        v29 = *(boost::detail::sp_counted_base **)(v28 + 8);
                        if ( v29 )
                          boost::detail::sp_counted_base::release(v29);
                      }
                      v1 -= 24LL;
LABEL_87:
                      if ( v2 >= v1 )
                      {
                        v33 = (unsigned __int64)&p_tracked_ptrs->tracked_ptrs.buffer_;
                        if ( !*(_BYTE *)(((unsigned __int64)&p_tracked_ptrs->tracked_ptrs.buffer_ >> 3) + 0x7FFF8000) )
                        {
                          p_tracked_ptrs->tracked_ptrs.buffer_ = (boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > >::pointer)((char *)p_tracked_ptrs->tracked_ptrs.buffer_ - size);
                          goto LABEL_168;
                        }
                        __asan_report_load8(v33);
LABEL_117:
                        __asan_report_load8(v33);
LABEL_118:
                        __asan_report_load8(v33);
LABEL_119:
                        __asan_handle_no_return(v33);
                        __assert_fail(
                          "px != 0",
                          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/sma"
                          "rt_ptr/shared_ptr.hpp",
                          0x2DEu,
                          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [wi"
                          "th T = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_g"
                          "roup, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*, unsign"
                          "ed int), boost::function<int(common::minet::AServerSession*, unsigned int)> >, boost::signals2"
                          "::mutex>; typename boost::detail::sp_member_access<T>::type = boost::signals2::detail::connect"
                          "ion_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::si"
                          "gnals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function<int(common::mi"
                          "net::AServerSession*, unsigned int)> >, boost::signals2::mutex>*]");
                      }
                      v28 = v1 + 8;
                      p_buffer = v1;
                      v32 = *(_BYTE *)((v1 >> 3) + 0x7FFF8000);
                      if ( v32 && v32 <= 3 )
                        goto LABEL_75;
                      v27 = *(_DWORD *)v1;
                      if ( *(int *)v1 < 0 )
                        goto LABEL_76;
                      break;
                    case 1:
                      goto LABEL_81;
                    case 2:
                      goto LABEL_95;
                    case 3:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 4:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 5:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 6:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 7:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 8:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 9:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 10:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 11:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 12:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 13:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 14:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 15:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 16:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 17:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 18:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 19:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    default:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                  }
                }
              }
LABEL_168:
              v33 = v3;
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                goto LABEL_117;
              v33 = *(_QWORD *)v3 + 16LL;
              if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                goto LABEL_118;
              v33 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
              if ( !v33 )
                goto LABEL_119;
              if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                __asan_report_load8(v3 + 16);
              else
                boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *,unsigned int),boost::function<int ()(common::minet::AServerSession *,unsigned int)>>,boost::signals2::mutex>::nolock_grab_tracked_objects<boost::signals2::detail::connection_body_base,std::back_insert_iterator<boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>>>>(
                  (const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> *const)v33,
                  (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v75 + 32),
                  (std::back_insert_iterator<boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > > >)(*(_QWORD *)(v3 + 16) + 8LL));
              v34 = v3;
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v3);
LABEL_141:
                __asan_report_load8(v34);
LABEL_142:
                __asan_handle_no_return(v34);
                __assert_fail(
                  "px != 0",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
                  0x2DEu,
                  "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = b"
                  "oost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::opt"
                  "ional<int> >, boost::signals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function"
                  "<int(common::minet::AServerSession*, unsigned int)> >, boost::signals2::mutex>; typename boost::detail"
                  "::sp_member_access<T>::type = boost::signals2::detail::connection_body<std::pair<boost::signals2::deta"
                  "il::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*,"
                  " unsigned int), boost::function<int(common::minet::AServerSession*, unsigned int)> >, boost::signals2::mutex>*]");
              }
              v34 = *(_QWORD *)v3 + 16LL;
              if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                goto LABEL_141;
              v35 = *(std::__detail::_List_node_base **)(*(_QWORD *)v3 + 16LL);
              if ( !v35 )
                goto LABEL_142;
              p_M_prev = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)&v35[1]._M_prev;
              if ( *(char *)(((unsigned __int64)&v35[1]._M_prev >> 3) + 0x7FFF8000) < 0 )
                break;
              if ( LOBYTE(v35[1]._M_prev) )
              {
                p_M_prev = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                if ( !*(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                {
                  v37 = *(boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                  p_M_prev = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)&v37->connected_slot_count;
                  v38 = *(_BYTE *)(((unsigned __int64)&v37->connected_slot_count >> 3) + 0x7FFF8000);
                  if ( !v38 || v38 > 3 )
                  {
                    ++v37->connected_slot_count;
                    goto LABEL_130;
                  }
                  goto LABEL_145;
                }
LABEL_144:
                __asan_report_load8(p_M_prev);
LABEL_145:
                __asan_report_load4(p_M_prev);
              }
              p_disconnected_slot_count = v3 + 16;
              if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_disconnected_slot_count);
LABEL_151:
                __asan_report_load4(p_disconnected_slot_count);
LABEL_152:
                __asan_report_load8(p_disconnected_slot_count);
LABEL_153:
                __asan_handle_no_return(p_disconnected_slot_count);
                __assert_fail(
                  "px != 0",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
                  0x2DEu,
                  "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = b"
                  "oost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::opt"
                  "ional<int> >, boost::signals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function"
                  "<int(common::minet::AServerSession*, unsigned int)> >, boost::signals2::mutex>; typename boost::detail"
                  "::sp_member_access<T>::type = boost::signals2::detail::connection_body<std::pair<boost::signals2::deta"
                  "il::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*,"
                  " unsigned int), boost::function<int(common::minet::AServerSession*, unsigned int)> >, boost::signals2::mutex>*]");
              }
              v45 = *(boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
              p_disconnected_slot_count = (unsigned __int64)&v45->disconnected_slot_count;
              v46 = *(_BYTE *)(((unsigned __int64)&v45->disconnected_slot_count >> 3) + 0x7FFF8000);
              if ( (char)((((_BYTE)v45 + 36) & 7) + 3) >= v46 && v46 )
                goto LABEL_151;
              ++v45->disconnected_slot_count;
LABEL_130:
              p_disconnected_slot_count = *(_QWORD *)v3 + 16LL;
              if ( *(_BYTE *)((p_disconnected_slot_count >> 3) + 0x7FFF8000) )
                goto LABEL_152;
              v40 = *(std::__detail::_List_node_base **)(*(_QWORD *)v3 + 16LL);
              if ( !v40 )
                goto LABEL_153;
              v41 = (std::__detail::_List_node_base *)((char *)v40 + 24);
              if ( *(char *)(((unsigned __int64)&v40[1]._M_prev >> 3) + 0x7FFF8000) < 0 )
              {
                __asan_report_load1(v41);
LABEL_155:
                __asan_report_load8(v41);
LABEL_156:
                __asan_report_load4(v41);
LABEL_157:
                M_prev = 1;
                goto LABEL_158;
              }
              M_prev = (char)v40[1]._M_prev;
              if ( !M_prev )
                goto LABEL_157;
              v41 = v40 + 1;
              if ( *(_BYTE *)(((unsigned __int64)&v40[1] >> 3) + 0x7FFF8000) )
                goto LABEL_155;
              v43 = v40[1]._M_next;
              if ( v43 )
              {
                v41 = (std::__detail::_List_node_base *)&v43->_M_prev;
                v44 = *(_BYTE *)(((unsigned __int64)&v43->_M_prev >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)v43 + 8) & 7) + 3) >= v44 && v44 )
                  goto LABEL_156;
                if ( !LODWORD(v43->_M_prev) )
                  M_prev = 0;
              }
              else
              {
                M_prev = 0;
              }
LABEL_158:
              if ( !M_prev )
              {
                if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                {
                  v51 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)v3;
                  __asan_report_load8(v3);
                }
                else
                {
                  v51 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 24);
                  if ( !*(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)(v3 + 24) = *(_QWORD *)v3;
                    v51 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 24);
                    if ( !*(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
                    {
                      v52 = *(std::__detail::_List_node_base **)(v3 + 24);
                      v51 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 8);
                      if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                      {
                        if ( v52 != *(std::__detail::_List_node_base **)(v3 + 8) )
                        {
                          p_m_active_slot = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                          if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_load8(p_m_active_slot);
                          }
                          else
                          {
                            p_tracked_ptrs = *(boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                            p_m_active_slot = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)&v52[1];
                            if ( !*(_BYTE *)(((unsigned __int64)&v52[1] >> 3) + 0x7FFF8000) )
                            {
                              v1 = (unsigned __int64)v52[1]._M_next;
                              p_m_active_slot = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)&p_tracked_ptrs->m_active_slot;
                              if ( !*(_BYTE *)(((unsigned __int64)&p_tracked_ptrs->m_active_slot >> 3) + 0x7FFF8000) )
                              {
                                m_active_slot = p_tracked_ptrs->m_active_slot;
                                if ( m_active_slot )
                                  boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
                                    m_active_slot,
                                    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v75 + 32));
LABEL_206:
                                p_tracked_ptrs->m_active_slot = (boost::signals2::detail::connection_body_base *)v1;
                                if ( v1 )
                                {
                                  v60 = v1 + 28;
                                  v61 = *(_BYTE *)(((v1 + 28) >> 3) + 0x7FFF8000);
                                  if ( (char)(((v1 + 28) & 7) + 3) >= v61 && v61 )
                                  {
                                    __asan_report_load4(v60);
                                  }
                                  else
                                  {
                                    v62 = *(_DWORD *)(v1 + 28);
                                    if ( v62 )
                                    {
                                      *(_DWORD *)(v1 + 28) = v62 + 1;
                                      goto LABEL_195;
                                    }
                                  }
                                  __asan_handle_no_return(v60);
                                  __assert_fail(
                                    "m_slot_refcount != 0",
                                    "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d"
                                    "/boost/signals2/connection.hpp",
                                    0x71u,
                                    "void boost::signals2::detail::connection_body_base::inc_slot_refcount(const boost::s"
                                    "ignals2::detail::garbage_collecting_lock<Mutex>&) [with Mutex = boost::signals2::det"
                                    "ail::connection_body_base]");
                                }
LABEL_195:
                                if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                                  goto LABEL_214;
                                v57 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 8);
                                if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                                {
LABEL_215:
                                  __asan_report_load8(v57);
                                }
                                else if ( *(_QWORD *)v3 != *(_QWORD *)(v3 + 8) )
                                {
                                  goto LABEL_198;
                                }
                                v63 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 8);
                                if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(v63);
                                }
                                else
                                {
                                  v63 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 24);
                                  if ( !*(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
                                  {
                                    *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 8);
                                    v63 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 24);
                                    if ( !*(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
                                    {
                                      v64 = *(std::__detail::_List_node_base **)(v3 + 24);
                                      if ( v64 != *(std::__detail::_List_node_base **)(v3 + 8) )
                                      {
                                        v65 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                                        if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_load8(v65);
                                        }
                                        else
                                        {
                                          v3 = *(_QWORD *)(v3 + 16);
                                          v65 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)&v64[1];
                                          if ( !*(_BYTE *)(((unsigned __int64)&v64[1] >> 3) + 0x7FFF8000) )
                                          {
                                            v1 = (unsigned __int64)v64[1]._M_next;
                                            v65 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 296);
                                            if ( !*(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) )
                                            {
                                              v66 = *(const boost::signals2::detail::connection_body_base **)(v3 + 296);
                                              if ( v66 )
                                                boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
                                                  v66,
                                                  (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v75 + 32));
LABEL_238:
                                              *(_QWORD *)(v3 + 296) = v1;
                                              if ( v1 )
                                              {
                                                v69 = v1 + 28;
                                                v70 = *(_BYTE *)(((v1 + 28) >> 3) + 0x7FFF8000);
                                                if ( (char)(((v1 + 28) & 7) + 3) >= v70 && v70 )
                                                {
                                                  __asan_report_load4(v69);
                                                }
                                                else
                                                {
                                                  v71 = *(_DWORD *)(v1 + 28);
                                                  if ( v71 )
                                                  {
                                                    *(_DWORD *)(v1 + 28) = v71 + 1;
                                                    goto LABEL_198;
                                                  }
                                                }
                                                __asan_handle_no_return(v69);
                                                __assert_fail(
                                                  "m_slot_refcount != 0",
                                                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/.."
                                                  "/boost_1_70_0d/boost/signals2/connection.hpp",
                                                  0x71u,
                                                  "void boost::signals2::detail::connection_body_base::inc_slot_refcount("
                                                  "const boost::signals2::detail::garbage_collecting_lock<Mutex>&) [with "
                                                  "Mutex = boost::signals2::detail::connection_body_base]");
                                              }
LABEL_198:
                                              v58 = *(_QWORD *)(v75 + 216);
                                              if ( *(_BYTE *)((v58 >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_load8(v58);
                                              }
                                              else
                                              {
                                                v20 = *(_QWORD *)v58;
                                                v59 = *(_QWORD *)v58 + 32LL;
                                                if ( !*(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
                                                  goto LABEL_200;
                                              }
                                              v72 = (struct _Unwind_Exception *)__asan_report_load8(v59);
                                              v73 = *(__int64 **)(v75 + 216);
                                              if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
                                                __asan_report_load8(v73);
                                              v74 = *v73;
                                              if ( *(_BYTE *)(((unsigned __int64)(*v73 + 32) >> 3) + 0x7FFF8000) )
                                                v74 = __asan_report_load8(*v73 + 32);
                                              (*(void (**)(void))(v74 + 32))();
                                              boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v75 + 32));
                                              __asan_handle_no_return(v75 + 32);
                                              _Unwind_Resume(v72);
                                            }
LABEL_237:
                                            __asan_report_load8(v65);
                                            goto LABEL_238;
                                          }
                                        }
                                        __asan_report_load8(v65);
                                        goto LABEL_237;
                                      }
LABEL_228:
                                      v67 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                                      if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_load8(v67);
                                      }
                                      else
                                      {
                                        v3 = *(_QWORD *)(v3 + 16);
                                        v67 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 296);
                                        if ( !*(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) )
                                        {
                                          v68 = *(const boost::signals2::detail::connection_body_base **)(v3 + 296);
                                          if ( v68 )
                                            boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
                                              v68,
                                              (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v75 + 32));
                                          goto LABEL_234;
                                        }
                                      }
                                      __asan_report_load8(v67);
LABEL_234:
                                      *(_QWORD *)(v3 + 296) = 0LL;
                                      goto LABEL_198;
                                    }
LABEL_227:
                                    __asan_report_load8(v63);
                                    goto LABEL_228;
                                  }
                                }
                                __asan_report_store8();
                                goto LABEL_227;
                              }
LABEL_205:
                              __asan_report_load8(p_m_active_slot);
                              goto LABEL_206;
                            }
                          }
                          __asan_report_load8(p_m_active_slot);
                          goto LABEL_205;
                        }
LABEL_188:
                        v55 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                        if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(v55);
                        }
                        else
                        {
                          v1 = *(_QWORD *)(v3 + 16);
                          v55 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v1 + 296);
                          if ( !*(_BYTE *)(((v1 + 296) >> 3) + 0x7FFF8000) )
                          {
                            v56 = *(const boost::signals2::detail::connection_body_base **)(v1 + 296);
                            if ( v56 )
                              boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
                                v56,
                                (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v75 + 32));
                            goto LABEL_194;
                          }
                        }
                        __asan_report_load8(v55);
LABEL_194:
                        *(_QWORD *)(v1 + 296) = 0LL;
                        goto LABEL_195;
                      }
LABEL_187:
                      __asan_report_load8(v51);
                      goto LABEL_188;
                    }
LABEL_186:
                    __asan_report_load8(v51);
                    goto LABEL_187;
                  }
                }
                __asan_report_store8();
                goto LABEL_186;
              }
              if ( *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
              {
                __asan_report_load8(*(_QWORD *)v3);
LABEL_214:
                v57 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)v3;
                __asan_report_load8(v3);
                goto LABEL_215;
              }
              *(_QWORD *)v3 = **(_QWORD **)v3;
            }
            __asan_report_load1(p_M_prev);
            goto LABEL_144;
          }
        }
        v25 = (struct _Unwind_Exception *)__asan_report_load8(v8);
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v75 + 32));
        __asan_handle_no_return(v75 + 32);
        _Unwind_Resume(v25);
      }
LABEL_64:
      __asan_handle_no_return(M_next);
      __assert_fail(
        "px != 0",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
        0x2D8u,
        "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = boost::signals"
        "2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::si"
        "gnals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function<int(common::minet::AServerSessio"
        "n*, unsigned int)> >, boost::signals2::mutex>; typename boost::detail::sp_dereference<T>::type = boost::signals2"
        "::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::sig"
        "nals2::slot<int(common::minet::AServerSession*, unsigned int), boost::function<int(common::minet::AServerSession"
        "*, unsigned int)> >, boost::signals2::mutex>&]");
    }
LABEL_63:
    __asan_report_load8(M_next);
    goto LABEL_64;
  }
  v10 = v5 + 1;
  if ( *(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
LABEL_24:
    __asan_handle_no_return(v10);
    __assert_fail(
      "px != 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
      0x2D8u,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = boost::signals2:"
      ":detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::signal"
      "s2::slot<int(common::minet::AServerSession*, unsigned int), boost::function<int(common::minet::AServerSession*, un"
      "signed int)> >, boost::signals2::mutex>; typename boost::detail::sp_dereference<T>::type = boost::signals2::detail"
      "::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slo"
      "t<int(common::minet::AServerSession*, unsigned int), boost::function<int(common::minet::AServerSession*, unsigned "
      "int)> >, boost::signals2::mutex>&]");
  }
  v10 = v5[1]._M_next;
  if ( !v10 )
    goto LABEL_24;
  *(_QWORD *)(v75 + 192) = 10LL;
  *(_QWORD *)(v75 + 200) = v75 + 32;
  *(_QWORD *)(v75 + 208) = 0LL;
  *(_QWORD *)(v75 + 216) = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
LABEL_26:
    v12 = (struct _Unwind_Exception *)__asan_report_load8(v11);
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v75 + 32));
    __asan_handle_no_return(v75 + 32);
    _Unwind_Resume(v12);
  }
  v11 = (unsigned __int64)&v10->_M_next[1]._M_prev;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  ((void (*)(void))v10->_M_next[1]._M_prev)();
  v13 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 8);
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v13);
    goto LABEL_38;
  }
  v13 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 24);
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_store8();
    goto LABEL_39;
  }
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 8);
  v13 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 24);
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(v13);
    goto LABEL_40;
  }
  v14 = *(std::__detail::_List_node_base **)(v3 + 24);
  v13 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > > *)(v3 + 8);
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(v13);
LABEL_41:
    v17 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
    if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
    }
    else
    {
      v3 = *(_QWORD *)(v3 + 16);
      v17 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 296);
      if ( !*(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) )
      {
        v18 = *(const boost::signals2::detail::connection_body_base **)(v3 + 296);
        if ( v18 )
          boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
            v18,
            (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v75 + 32));
        goto LABEL_47;
      }
    }
    __asan_report_load8(v17);
LABEL_47:
    *(_QWORD *)(v3 + 296) = 0LL;
    goto LABEL_48;
  }
  if ( v14 == *(std::__detail::_List_node_base **)(v3 + 8) )
    goto LABEL_41;
  v15 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
  if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v15);
    goto LABEL_52;
  }
  v3 = *(_QWORD *)(v3 + 16);
  v15 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)&v14[1];
  if ( *(_BYTE *)(((unsigned __int64)&v14[1] >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(v15);
    goto LABEL_53;
  }
  v1 = (unsigned __int64)v14[1]._M_next;
  v15 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*,unsigned int>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*,unsigned int),boost::function<int(common::minet::AServerSession*,unsigned int)> >,boost::signals2::mutex> >::cache_type **)(v3 + 296);
  if ( *(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(v15);
    goto LABEL_54;
  }
  v16 = *(const boost::signals2::detail::connection_body_base **)(v3 + 296);
  if ( v16 )
    boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
      v16,
      (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v75 + 32));
LABEL_54:
  *(_QWORD *)(v3 + 296) = v1;
  if ( !v1 )
    goto LABEL_48;
  v22 = v1 + 28;
  v23 = *(_BYTE *)(((v1 + 28) >> 3) + 0x7FFF8000);
  if ( (char)(((v1 + 28) & 7) + 3) >= v23 && v23 )
  {
    __asan_report_load4(v22);
LABEL_60:
    __asan_handle_no_return(v22);
    __assert_fail(
      "m_slot_refcount != 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/connection.hpp",
      0x71u,
      "void boost::signals2::detail::connection_body_base::inc_slot_refcount(const boost::signals2::detail::garbage_colle"
      "cting_lock<Mutex>&) [with Mutex = boost::signals2::detail::connection_body_base]");
  }
  v24 = *(_DWORD *)(v1 + 28);
  if ( !v24 )
    goto LABEL_60;
  *(_DWORD *)(v1 + 28) = v24 + 1;
LABEL_48:
  v19 = *(_QWORD *)(v75 + 216);
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v19);
    goto LABEL_62;
  }
  v20 = *(_QWORD *)v19;
  v21 = *(_QWORD *)v19 + 32LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    M_next = v21;
    __asan_report_load8(v21);
    goto LABEL_63;
  }
LABEL_200:
  (*(void (**)(void))(v20 + 32))();
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v75 + 32));
LABEL_201:
  if ( v77 == (char *)v75 )
  {
    *(_DWORD *)((v75 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v75 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v75 = 1172321806LL;
    *(_QWORD *)((v75 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v75 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v75 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v75 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v75 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 146: range 0000000014EE3144-0000000014EE431D
void __fastcall boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession *>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>::lock_next_callable(
        const boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *const this)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rbx
  std::__detail::_List_node_base *M_node; // rax
  std::__detail::_List_node_base *v5; // rdx
  std::__detail::_List_node_base *v6; // rcx
  unsigned __int64 M_next; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  std::__detail::_List_node_base *v10; // rdi
  unsigned __int64 v11; // rdx
  struct _Unwind_Exception *v12; // rbx
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v13; // rdi
  std::__detail::_List_node_base *v14; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **v15; // rdi
  const boost::signals2::detail::connection_body_base *v16; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **v17; // rdi
  const boost::signals2::detail::connection_body_base *v18; // rdi
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  char v23; // dl
  int v24; // eax
  struct _Unwind_Exception *v25; // rbx
  unsigned __int64 p_buffer; // rdi
  int v27; // eax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  volatile signed __int32 *v30; // r13
  char v31; // cl
  char v32; // cl
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  char v35; // al
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rdi
  std::__detail::_List_node_base *v38; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **p_M_prev; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type *v40; // rax
  char v41; // dl
  unsigned __int64 p_disconnected_slot_count; // rdi
  std::__detail::_List_node_base *v43; // rax
  std::__detail::_List_node_base *v44; // rdi
  char M_prev; // dl
  std::__detail::_List_node_base *v46; // rcx
  char v47; // si
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type *v48; // rax
  char v49; // cl
  unsigned __int64 p_size; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type *v51; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type *p_tracked_ptrs; // r12
  boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > >::size_type size; // r14
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v54; // rdi
  std::__detail::_List_node_base *v55; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **p_m_active_slot; // rdi
  const boost::signals2::detail::connection_body_base *m_active_slot; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **v58; // rdi
  const boost::signals2::detail::connection_body_base *v59; // rdi
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v60; // rdi
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rdi
  char v64; // dl
  int v65; // eax
  std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *v66; // rdi
  std::__detail::_List_node_base *v67; // rax
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **v68; // rdi
  const boost::signals2::detail::connection_body_base *v69; // rdi
  boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **v70; // rdi
  const boost::signals2::detail::connection_body_base *v71; // rdi
  unsigned __int64 v72; // rdi
  char v73; // dl
  int v74; // eax
  struct _Unwind_Exception *v75; // rbx
  __int64 *v76; // rdi
  __int64 v77; // rax
  unsigned __int64 v78; // [rsp+18h] [rbp-170h]
  _DWORD *v79; // [rsp+20h] [rbp-168h]
  char v80[344]; // [rsp+30h] [rbp-158h] BYREF

  v3 = (unsigned __int64)this;
  v78 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(288LL);
    if ( v9 )
      v78 = v9;
  }
  *(_QWORD *)v78 = 1102416563LL;
  *(_QWORD *)(v78 + 8) = "1 32 192 8 lock:163";
  *(_QWORD *)(v78 + 16) = boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession *>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>>,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>>::lock_next_callable;
  v79 = (_DWORD *)(v78 >> 3);
  v79[536862720] = -235802127;
  v79[536862727] = -202116109;
  v79[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_15;
  }
  M_node = this->iter._M_node;
  this = (const boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *const)((char *)this + 24);
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(this);
LABEL_16:
    M_node = (std::__detail::_List_node_base *)__asan_report_load8(this);
    goto LABEL_17;
  }
  v5 = *(std::__detail::_List_node_base **)(v3 + 24);
  if ( v5 == M_node )
    goto LABEL_217;
  this = (const boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > *const)(v3 + 8);
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  v6 = *(std::__detail::_List_node_base **)(v3 + 8);
  if ( v6 != M_node )
    goto LABEL_7;
LABEL_17:
  if ( v6 == v5 )
  {
LABEL_7:
    M_next = (unsigned __int64)&M_node[1];
    if ( !*(_BYTE *)(((unsigned __int64)&M_node[1] >> 3) + 0x7FFF8000) )
    {
      M_next = (unsigned __int64)M_node[1]._M_next;
      if ( M_next )
      {
        *(_QWORD *)(v78 + 192) = 10LL;
        *(_QWORD *)(v78 + 200) = v78 + 32;
        *(_QWORD *)(v78 + 208) = 0LL;
        *(_QWORD *)(v78 + 216) = M_next;
        if ( *(_BYTE *)((M_next >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(M_next);
        }
        else
        {
          v8 = *(_QWORD *)M_next + 24LL;
          if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          {
            (*(void (**)(void))(*(_QWORD *)M_next + 24LL))();
            while ( 1 )
            {
              p_size = v3;
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v3);
LABEL_68:
                __asan_report_load8(p_size);
LABEL_69:
                __asan_report_load8(p_size);
LABEL_70:
                __asan_report_load8(p_size);
LABEL_71:
                __asan_report_load8(p_size);
                __asan_handle_no_return(p_size);
                __assert_fail(
                  "n <= size_",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/de"
                  "tail/auto_buffer.hpp",
                  0x38Eu,
                  "void boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::pop_back_n(boo"
                  "st::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Allocator>::size_type) [with T = b"
                  "oost::variant<boost::shared_ptr<void>, boost::signals2::detail::foreign_void_shared_ptr>; StackBufferP"
                  "olicy = boost::signals2::detail::store_n_objects<10>; GrowPolicy = boost::signals2::detail::default_gr"
                  "ow_policy; Allocator = std::allocator<boost::variant<boost::shared_ptr<void>, boost::signals2::detail:"
                  ":foreign_void_shared_ptr> >; boost::signals2::detail::auto_buffer<T, StackBufferPolicy, GrowPolicy, Al"
                  "locator>::size_type = long unsigned int]");
              }
              p_size = v3 + 8;
              if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                goto LABEL_68;
              if ( *(_QWORD *)v3 == *(_QWORD *)(v3 + 8) )
                goto LABEL_211;
              p_size = v3 + 16;
              if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                goto LABEL_69;
              v51 = *(boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
              p_tracked_ptrs = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type *)&v51->tracked_ptrs;
              p_size = (unsigned __int64)&v51->tracked_ptrs.size_;
              if ( *(_BYTE *)(((unsigned __int64)&v51->tracked_ptrs.size_ >> 3) + 0x7FFF8000) )
                goto LABEL_70;
              size = v51->tracked_ptrs.size_;
              p_size = (unsigned __int64)&v51->tracked_ptrs.size_;
              if ( *(_BYTE *)(((unsigned __int64)&v51->tracked_ptrs.size_ >> 3) + 0x7FFF8000) )
                goto LABEL_71;
              if ( size )
              {
                p_buffer = (unsigned __int64)&v51->tracked_ptrs.buffer_;
                if ( !*(_BYTE *)(((unsigned __int64)&v51->tracked_ptrs.buffer_ >> 3) + 0x7FFF8000) )
                {
                  v1 = (unsigned __int64)&v51->tracked_ptrs.buffer_[v51->tracked_ptrs.size_ - 1];
                  v2 = v1 - 24 * size;
                  goto LABEL_103;
                }
                __asan_report_load8(p_buffer);
LABEL_75:
                __asan_report_load4(p_buffer);
LABEL_76:
                v27 = ~v27;
                while ( 1 )
                {
                  switch ( v27 )
                  {
                    case 0:
                      v29 = v28 + 8;
                      if ( *(_BYTE *)(((v28 + 8) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8(v29);
LABEL_91:
                        __asan_report_store4(v29);
LABEL_92:
                        __asan_report_load8(v29);
LABEL_93:
                        __asan_report_load8(v29);
LABEL_94:
                        __asan_report_store4(v29);
LABEL_95:
                        __asan_report_load8(v29);
                        goto LABEL_96;
                      }
                      v30 = *(volatile signed __int32 **)(v28 + 8);
                      if ( !v30 )
                        goto LABEL_102;
                      v29 = (unsigned __int64)(v30 + 2);
                      v31 = *(_BYTE *)(((unsigned __int64)(v30 + 2) >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)v30 + 8) & 7) + 3) >= v31 && v31 )
                        goto LABEL_91;
                      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) != 1 )
                        goto LABEL_102;
                      v29 = (unsigned __int64)v30;
                      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
                        goto LABEL_92;
                      v29 = *(_QWORD *)v30 + 16LL;
                      if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
                        goto LABEL_93;
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
                      v29 = (unsigned __int64)(v30 + 3);
                      v32 = *(_BYTE *)(((unsigned __int64)(v30 + 3) >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)v30 + 12) & 7) + 3) >= v32 && v32 )
                        goto LABEL_94;
                      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) != 1 )
                        goto LABEL_102;
                      v29 = (unsigned __int64)v30;
                      if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
                        goto LABEL_95;
                      v29 = *(_QWORD *)v30 + 24LL;
                      if ( !*(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
                      {
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 24LL))(v30);
                        goto LABEL_102;
                      }
LABEL_96:
                      __asan_report_load8(v29);
LABEL_97:
                      v33 = v28;
                      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8(v28);
LABEL_109:
                        __asan_report_load8(v33);
LABEL_110:
                        p_buffer = v34;
                        __asan_report_load8(v34);
LABEL_111:
                        __asan_handle_no_return(p_buffer);
                        boost::detail::variant::forced_return<void>();
                      }
                      v33 = *(_QWORD *)v28;
                      if ( *(_QWORD *)v28 )
                      {
                        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                          goto LABEL_109;
                        v34 = *(_QWORD *)v33 + 8LL;
                        if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                          goto LABEL_110;
                        (*(void (**)(void))(*(_QWORD *)v33 + 8LL))();
                      }
LABEL_102:
                      v1 -= 24LL;
LABEL_103:
                      if ( v2 >= v1 )
                      {
                        v36 = (unsigned __int64)&p_tracked_ptrs->tracked_ptrs.buffer_;
                        if ( !*(_BYTE *)(((unsigned __int64)&p_tracked_ptrs->tracked_ptrs.buffer_ >> 3) + 0x7FFF8000) )
                        {
                          p_tracked_ptrs->tracked_ptrs.buffer_ = (boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > >::pointer)((char *)p_tracked_ptrs->tracked_ptrs.buffer_ - size);
                          goto LABEL_184;
                        }
                        __asan_report_load8(v36);
LABEL_133:
                        __asan_report_load8(v36);
LABEL_134:
                        __asan_report_load8(v36);
LABEL_135:
                        __asan_handle_no_return(v36);
                        __assert_fail(
                          "px != 0",
                          "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/sma"
                          "rt_ptr/shared_ptr.hpp",
                          0x2DEu,
                          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [wi"
                          "th T = boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_g"
                          "roup, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*), boost"
                          "::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex>; typename boost::de"
                          "tail::sp_member_access<T>::type = boost::signals2::detail::connection_body<std::pair<boost::si"
                          "gnals2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::min"
                          "et::AServerSession*), boost::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex>*]");
                      }
                      v28 = v1 + 8;
                      p_buffer = v1;
                      v35 = *(_BYTE *)((v1 >> 3) + 0x7FFF8000);
                      if ( v35 && v35 <= 3 )
                        goto LABEL_75;
                      v27 = *(_DWORD *)v1;
                      if ( *(int *)v1 < 0 )
                        goto LABEL_76;
                      break;
                    case 1:
                      goto LABEL_97;
                    case 2:
                      goto LABEL_111;
                    case 3:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 4:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 5:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 6:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 7:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 8:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 9:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 10:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 11:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 12:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 13:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 14:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 15:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 16:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 17:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 18:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    case 19:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                    default:
                      __asan_handle_no_return(p_buffer);
                      boost::detail::variant::forced_return<void>();
                      return;
                  }
                }
              }
LABEL_184:
              v36 = v3;
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                goto LABEL_133;
              v36 = *(_QWORD *)v3 + 16LL;
              if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                goto LABEL_134;
              v36 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
              if ( !v36 )
                goto LABEL_135;
              if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                __asan_report_load8(v3 + 16);
              else
                boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int>>,boost::signals2::slot<int ()(common::minet::AServerSession *),boost::function<int ()(common::minet::AServerSession *)>>,boost::signals2::mutex>::nolock_grab_tracked_objects<boost::signals2::detail::connection_body_base,std::back_insert_iterator<boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>>>>(
                  (const boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> *const)v36,
                  (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v78 + 32),
                  (std::back_insert_iterator<boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > > >)(*(_QWORD *)(v3 + 16) + 8LL));
              v37 = v3;
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v3);
LABEL_157:
                __asan_report_load8(v37);
LABEL_158:
                __asan_handle_no_return(v37);
                __assert_fail(
                  "px != 0",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
                  0x2DEu,
                  "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = b"
                  "oost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::opt"
                  "ional<int> >, boost::signals2::slot<int(common::minet::AServerSession*), boost::function<int(common::m"
                  "inet::AServerSession*)> >, boost::signals2::mutex>; typename boost::detail::sp_member_access<T>::type "
                  "= boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::"
                  "optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*), boost::function<int(common"
                  "::minet::AServerSession*)> >, boost::signals2::mutex>*]");
              }
              v37 = *(_QWORD *)v3 + 16LL;
              if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                goto LABEL_157;
              v38 = *(std::__detail::_List_node_base **)(*(_QWORD *)v3 + 16LL);
              if ( !v38 )
                goto LABEL_158;
              p_M_prev = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)&v38[1]._M_prev;
              if ( *(char *)(((unsigned __int64)&v38[1]._M_prev >> 3) + 0x7FFF8000) < 0 )
                break;
              if ( LOBYTE(v38[1]._M_prev) )
              {
                p_M_prev = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                if ( !*(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                {
                  v40 = *(boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                  p_M_prev = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)&v40->connected_slot_count;
                  v41 = *(_BYTE *)(((unsigned __int64)&v40->connected_slot_count >> 3) + 0x7FFF8000);
                  if ( !v41 || v41 > 3 )
                  {
                    ++v40->connected_slot_count;
                    goto LABEL_146;
                  }
                  goto LABEL_161;
                }
LABEL_160:
                __asan_report_load8(p_M_prev);
LABEL_161:
                __asan_report_load4(p_M_prev);
              }
              p_disconnected_slot_count = v3 + 16;
              if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(p_disconnected_slot_count);
LABEL_167:
                __asan_report_load4(p_disconnected_slot_count);
LABEL_168:
                __asan_report_load8(p_disconnected_slot_count);
LABEL_169:
                __asan_handle_no_return(p_disconnected_slot_count);
                __assert_fail(
                  "px != 0",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
                  0x2DEu,
                  "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = b"
                  "oost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::opt"
                  "ional<int> >, boost::signals2::slot<int(common::minet::AServerSession*), boost::function<int(common::m"
                  "inet::AServerSession*)> >, boost::signals2::mutex>; typename boost::detail::sp_member_access<T>::type "
                  "= boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::"
                  "optional<int> >, boost::signals2::slot<int(common::minet::AServerSession*), boost::function<int(common"
                  "::minet::AServerSession*)> >, boost::signals2::mutex>*]");
              }
              v48 = *(boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
              p_disconnected_slot_count = (unsigned __int64)&v48->disconnected_slot_count;
              v49 = *(_BYTE *)(((unsigned __int64)&v48->disconnected_slot_count >> 3) + 0x7FFF8000);
              if ( (char)((((_BYTE)v48 + 28) & 7) + 3) >= v49 && v49 )
                goto LABEL_167;
              ++v48->disconnected_slot_count;
LABEL_146:
              p_disconnected_slot_count = *(_QWORD *)v3 + 16LL;
              if ( *(_BYTE *)((p_disconnected_slot_count >> 3) + 0x7FFF8000) )
                goto LABEL_168;
              v43 = *(std::__detail::_List_node_base **)(*(_QWORD *)v3 + 16LL);
              if ( !v43 )
                goto LABEL_169;
              v44 = (std::__detail::_List_node_base *)((char *)v43 + 24);
              if ( *(char *)(((unsigned __int64)&v43[1]._M_prev >> 3) + 0x7FFF8000) < 0 )
              {
                __asan_report_load1(v44);
LABEL_171:
                __asan_report_load8(v44);
LABEL_172:
                __asan_report_load4(v44);
LABEL_173:
                M_prev = 1;
                goto LABEL_174;
              }
              M_prev = (char)v43[1]._M_prev;
              if ( !M_prev )
                goto LABEL_173;
              v44 = v43 + 1;
              if ( *(_BYTE *)(((unsigned __int64)&v43[1] >> 3) + 0x7FFF8000) )
                goto LABEL_171;
              v46 = v43[1]._M_next;
              if ( v46 )
              {
                v44 = (std::__detail::_List_node_base *)&v46->_M_prev;
                v47 = *(_BYTE *)(((unsigned __int64)&v46->_M_prev >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)v46 + 8) & 7) + 3) >= v47 && v47 )
                  goto LABEL_172;
                if ( !LODWORD(v46->_M_prev) )
                  M_prev = 0;
              }
              else
              {
                M_prev = 0;
              }
LABEL_174:
              if ( !M_prev )
              {
                if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                {
                  v54 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)v3;
                  __asan_report_load8(v3);
                }
                else
                {
                  v54 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 24);
                  if ( !*(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)(v3 + 24) = *(_QWORD *)v3;
                    v54 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 24);
                    if ( !*(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
                    {
                      v55 = *(std::__detail::_List_node_base **)(v3 + 24);
                      v54 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 8);
                      if ( !*(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                      {
                        if ( v55 != *(std::__detail::_List_node_base **)(v3 + 8) )
                        {
                          p_m_active_slot = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                          if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_load8(p_m_active_slot);
                          }
                          else
                          {
                            p_tracked_ptrs = *(boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                            p_m_active_slot = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)&v55[1];
                            if ( !*(_BYTE *)(((unsigned __int64)&v55[1] >> 3) + 0x7FFF8000) )
                            {
                              v1 = (unsigned __int64)v55[1]._M_next;
                              p_m_active_slot = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)&p_tracked_ptrs->m_active_slot;
                              if ( !*(_BYTE *)(((unsigned __int64)&p_tracked_ptrs->m_active_slot >> 3) + 0x7FFF8000) )
                              {
                                m_active_slot = p_tracked_ptrs->m_active_slot;
                                if ( m_active_slot )
                                  boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
                                    m_active_slot,
                                    (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v78 + 32));
LABEL_222:
                                p_tracked_ptrs->m_active_slot = (boost::signals2::detail::connection_body_base *)v1;
                                if ( v1 )
                                {
                                  v63 = v1 + 28;
                                  v64 = *(_BYTE *)(((v1 + 28) >> 3) + 0x7FFF8000);
                                  if ( (char)(((v1 + 28) & 7) + 3) >= v64 && v64 )
                                  {
                                    __asan_report_load4(v63);
                                  }
                                  else
                                  {
                                    v65 = *(_DWORD *)(v1 + 28);
                                    if ( v65 )
                                    {
                                      *(_DWORD *)(v1 + 28) = v65 + 1;
                                      goto LABEL_211;
                                    }
                                  }
                                  __asan_handle_no_return(v63);
                                  __assert_fail(
                                    "m_slot_refcount != 0",
                                    "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d"
                                    "/boost/signals2/connection.hpp",
                                    0x71u,
                                    "void boost::signals2::detail::connection_body_base::inc_slot_refcount(const boost::s"
                                    "ignals2::detail::garbage_collecting_lock<Mutex>&) [with Mutex = boost::signals2::det"
                                    "ail::connection_body_base]");
                                }
LABEL_211:
                                if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                                  goto LABEL_230;
                                v60 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 8);
                                if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                                {
LABEL_231:
                                  __asan_report_load8(v60);
                                }
                                else if ( *(_QWORD *)v3 != *(_QWORD *)(v3 + 8) )
                                {
                                  goto LABEL_214;
                                }
                                v66 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 8);
                                if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(v66);
                                }
                                else
                                {
                                  v66 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 24);
                                  if ( !*(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
                                  {
                                    *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 8);
                                    v66 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 24);
                                    if ( !*(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
                                    {
                                      v67 = *(std::__detail::_List_node_base **)(v3 + 24);
                                      if ( v67 != *(std::__detail::_List_node_base **)(v3 + 8) )
                                      {
                                        v68 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                                        if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_load8(v68);
                                        }
                                        else
                                        {
                                          v3 = *(_QWORD *)(v3 + 16);
                                          v68 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)&v67[1];
                                          if ( !*(_BYTE *)(((unsigned __int64)&v67[1] >> 3) + 0x7FFF8000) )
                                          {
                                            v1 = (unsigned __int64)v67[1]._M_next;
                                            v68 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 288);
                                            if ( !*(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
                                            {
                                              v69 = *(const boost::signals2::detail::connection_body_base **)(v3 + 288);
                                              if ( v69 )
                                                boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
                                                  v69,
                                                  (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v78 + 32));
LABEL_254:
                                              *(_QWORD *)(v3 + 288) = v1;
                                              if ( v1 )
                                              {
                                                v72 = v1 + 28;
                                                v73 = *(_BYTE *)(((v1 + 28) >> 3) + 0x7FFF8000);
                                                if ( (char)(((v1 + 28) & 7) + 3) >= v73 && v73 )
                                                {
                                                  __asan_report_load4(v72);
                                                }
                                                else
                                                {
                                                  v74 = *(_DWORD *)(v1 + 28);
                                                  if ( v74 )
                                                  {
                                                    *(_DWORD *)(v1 + 28) = v74 + 1;
                                                    goto LABEL_214;
                                                  }
                                                }
                                                __asan_handle_no_return(v72);
                                                __assert_fail(
                                                  "m_slot_refcount != 0",
                                                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/.."
                                                  "/boost_1_70_0d/boost/signals2/connection.hpp",
                                                  0x71u,
                                                  "void boost::signals2::detail::connection_body_base::inc_slot_refcount("
                                                  "const boost::signals2::detail::garbage_collecting_lock<Mutex>&) [with "
                                                  "Mutex = boost::signals2::detail::connection_body_base]");
                                              }
LABEL_214:
                                              v61 = *(_QWORD *)(v78 + 216);
                                              if ( *(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_load8(v61);
                                              }
                                              else
                                              {
                                                v20 = *(_QWORD *)v61;
                                                v62 = *(_QWORD *)v61 + 32LL;
                                                if ( !*(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
                                                  goto LABEL_216;
                                              }
                                              v75 = (struct _Unwind_Exception *)__asan_report_load8(v62);
                                              v76 = *(__int64 **)(v78 + 216);
                                              if ( *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
                                                __asan_report_load8(v76);
                                              v77 = *v76;
                                              if ( *(_BYTE *)(((unsigned __int64)(*v76 + 32) >> 3) + 0x7FFF8000) )
                                                v77 = __asan_report_load8(*v76 + 32);
                                              (*(void (**)(void))(v77 + 32))();
                                              boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v78 + 32));
                                              __asan_handle_no_return(v78 + 32);
                                              _Unwind_Resume(v75);
                                            }
LABEL_253:
                                            __asan_report_load8(v68);
                                            goto LABEL_254;
                                          }
                                        }
                                        __asan_report_load8(v68);
                                        goto LABEL_253;
                                      }
LABEL_244:
                                      v70 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                                      if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_load8(v70);
                                      }
                                      else
                                      {
                                        v3 = *(_QWORD *)(v3 + 16);
                                        v70 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 288);
                                        if ( !*(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
                                        {
                                          v71 = *(const boost::signals2::detail::connection_body_base **)(v3 + 288);
                                          if ( v71 )
                                            boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
                                              v71,
                                              (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v78 + 32));
                                          goto LABEL_250;
                                        }
                                      }
                                      __asan_report_load8(v70);
LABEL_250:
                                      *(_QWORD *)(v3 + 288) = 0LL;
                                      goto LABEL_214;
                                    }
LABEL_243:
                                    __asan_report_load8(v66);
                                    goto LABEL_244;
                                  }
                                }
                                __asan_report_store8();
                                goto LABEL_243;
                              }
LABEL_221:
                              __asan_report_load8(p_m_active_slot);
                              goto LABEL_222;
                            }
                          }
                          __asan_report_load8(p_m_active_slot);
                          goto LABEL_221;
                        }
LABEL_204:
                        v58 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
                        if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(v58);
                        }
                        else
                        {
                          v1 = *(_QWORD *)(v3 + 16);
                          v58 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v1 + 288);
                          if ( !*(_BYTE *)(((v1 + 288) >> 3) + 0x7FFF8000) )
                          {
                            v59 = *(const boost::signals2::detail::connection_body_base **)(v1 + 288);
                            if ( v59 )
                              boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
                                v59,
                                (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v78 + 32));
                            goto LABEL_210;
                          }
                        }
                        __asan_report_load8(v58);
LABEL_210:
                        *(_QWORD *)(v1 + 288) = 0LL;
                        goto LABEL_211;
                      }
LABEL_203:
                      __asan_report_load8(v54);
                      goto LABEL_204;
                    }
LABEL_202:
                    __asan_report_load8(v54);
                    goto LABEL_203;
                  }
                }
                __asan_report_store8();
                goto LABEL_202;
              }
              if ( *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
              {
                __asan_report_load8(*(_QWORD *)v3);
LABEL_230:
                v60 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)v3;
                __asan_report_load8(v3);
                goto LABEL_231;
              }
              *(_QWORD *)v3 = **(_QWORD **)v3;
            }
            __asan_report_load1(p_M_prev);
            goto LABEL_160;
          }
        }
        v25 = (struct _Unwind_Exception *)__asan_report_load8(v8);
        boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v78 + 32));
        __asan_handle_no_return(v78 + 32);
        _Unwind_Resume(v25);
      }
LABEL_64:
      __asan_handle_no_return(M_next);
      __assert_fail(
        "px != 0",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
        0x2D8u,
        "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = boost::signals"
        "2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::si"
        "gnals2::slot<int(common::minet::AServerSession*), boost::function<int(common::minet::AServerSession*)> >, boost:"
        ":signals2::mutex>; typename boost::detail::sp_dereference<T>::type = boost::signals2::detail::connection_body<st"
        "d::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::mine"
        "t::AServerSession*), boost::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex>&]");
    }
LABEL_63:
    __asan_report_load8(M_next);
    goto LABEL_64;
  }
  v10 = v5 + 1;
  if ( *(_BYTE *)(((unsigned __int64)&v5[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
LABEL_24:
    __asan_handle_no_return(v10);
    __assert_fail(
      "px != 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/smart_ptr/shared_ptr.hpp",
      0x2D8u,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = boost::signals2:"
      ":detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::signal"
      "s2::slot<int(common::minet::AServerSession*), boost::function<int(common::minet::AServerSession*)> >, boost::signa"
      "ls2::mutex>; typename boost::detail::sp_dereference<T>::type = boost::signals2::detail::connection_body<std::pair<"
      "boost::signals2::detail::slot_meta_group, boost::optional<int> >, boost::signals2::slot<int(common::minet::AServer"
      "Session*), boost::function<int(common::minet::AServerSession*)> >, boost::signals2::mutex>&]");
  }
  v10 = v5[1]._M_next;
  if ( !v10 )
    goto LABEL_24;
  *(_QWORD *)(v78 + 192) = 10LL;
  *(_QWORD *)(v78 + 200) = v78 + 32;
  *(_QWORD *)(v78 + 208) = 0LL;
  *(_QWORD *)(v78 + 216) = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v10);
LABEL_26:
    v12 = (struct _Unwind_Exception *)__asan_report_load8(v11);
    boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v78 + 32));
    __asan_handle_no_return(v78 + 32);
    _Unwind_Resume(v12);
  }
  v11 = (unsigned __int64)&v10->_M_next[1]._M_prev;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  ((void (*)(void))v10->_M_next[1]._M_prev)();
  v13 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 8);
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v13);
    goto LABEL_38;
  }
  v13 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 24);
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_store8();
    goto LABEL_39;
  }
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 8);
  v13 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 24);
  if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(v13);
    goto LABEL_40;
  }
  v14 = *(std::__detail::_List_node_base **)(v3 + 24);
  v13 = (std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > > *)(v3 + 8);
  if ( *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_40:
    __asan_report_load8(v13);
LABEL_41:
    v17 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
    if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
    }
    else
    {
      v3 = *(_QWORD *)(v3 + 16);
      v17 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 288);
      if ( !*(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      {
        v18 = *(const boost::signals2::detail::connection_body_base **)(v3 + 288);
        if ( v18 )
          boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
            v18,
            (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v78 + 32));
        goto LABEL_47;
      }
    }
    __asan_report_load8(v17);
LABEL_47:
    *(_QWORD *)(v3 + 288) = 0LL;
    goto LABEL_48;
  }
  if ( v14 == *(std::__detail::_List_node_base **)(v3 + 8) )
    goto LABEL_41;
  v15 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 16);
  if ( *(_BYTE *)(((v3 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v15);
    goto LABEL_52;
  }
  v3 = *(_QWORD *)(v3 + 16);
  v15 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)&v14[1];
  if ( *(_BYTE *)(((unsigned __int64)&v14[1] >> 3) + 0x7FFF8000) )
  {
LABEL_52:
    __asan_report_load8(v15);
    goto LABEL_53;
  }
  v1 = (unsigned __int64)v14[1]._M_next;
  v15 = (boost::signals2::detail::slot_call_iterator_t<boost::signals2::detail::variadic_slot_invoker<int,common::minet::AServerSession*>,std::_List_iterator<boost::shared_ptr<boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> > >,boost::signals2::detail::connection_body<std::pair<boost::signals2::detail::slot_meta_group,boost::optional<int> >,boost::signals2::slot<int(common::minet::AServerSession*),boost::function<int(common::minet::AServerSession*)> >,boost::signals2::mutex> >::cache_type **)(v3 + 288);
  if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_load8(v15);
    goto LABEL_54;
  }
  v16 = *(const boost::signals2::detail::connection_body_base **)(v3 + 288);
  if ( v16 )
    boost::signals2::detail::connection_body_base::dec_slot_refcount<boost::signals2::detail::connection_body_base>(
      v16,
      (boost::signals2::detail::garbage_collecting_lock<boost::signals2::detail::connection_body_base> *)(v78 + 32));
LABEL_54:
  *(_QWORD *)(v3 + 288) = v1;
  if ( !v1 )
    goto LABEL_48;
  v22 = v1 + 28;
  v23 = *(_BYTE *)(((v1 + 28) >> 3) + 0x7FFF8000);
  if ( (char)(((v1 + 28) & 7) + 3) >= v23 && v23 )
  {
    __asan_report_load4(v22);
LABEL_60:
    __asan_handle_no_return(v22);
    __assert_fail(
      "m_slot_refcount != 0",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/signals2/connection.hpp",
      0x71u,
      "void boost::signals2::detail::connection_body_base::inc_slot_refcount(const boost::signals2::detail::garbage_colle"
      "cting_lock<Mutex>&) [with Mutex = boost::signals2::detail::connection_body_base]");
  }
  v24 = *(_DWORD *)(v1 + 28);
  if ( !v24 )
    goto LABEL_60;
  *(_DWORD *)(v1 + 28) = v24 + 1;
LABEL_48:
  v19 = *(_QWORD *)(v78 + 216);
  if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v19);
    goto LABEL_62;
  }
  v20 = *(_QWORD *)v19;
  v21 = *(_QWORD *)v19 + 32LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    M_next = v21;
    __asan_report_load8(v21);
    goto LABEL_63;
  }
LABEL_216:
  (*(void (**)(void))(v20 + 32))();
  boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void>>>::auto_buffer_destroy((boost::signals2::detail::auto_buffer<boost::shared_ptr<void>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::shared_ptr<void> > > *const)(v78 + 32));
LABEL_217:
  if ( v80 == (char *)v78 )
  {
    *(_DWORD *)((v78 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v78 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v78 = 1172321806LL;
    *(_QWORD *)((v78 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v78 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v78 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v78 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v78 >> 3) + 0x7FFF8020) = -168430091;
  }
};
