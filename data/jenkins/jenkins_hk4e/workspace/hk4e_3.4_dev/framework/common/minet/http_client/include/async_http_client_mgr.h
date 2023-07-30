// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/http_client/include/async_http_client_mgr.h

// Line 31: range 000000000C7C1D1E-000000000C7C1EC0
void __cdecl common::minet::http_client::HttpClientMgr::HttpClientMgr(
        common::minet::http_client::HttpClientMgr *const this)
{
  int (**v1)(...); // rdx
  __int64 v2; // r12
  boost::asio::io_context *ioc_arr; // r13

  common::minet::http_client::HttpClientMgrBase::HttpClientMgrBase(this);
  std::enable_shared_from_this<common::minet::http_client::HttpClientMgr>::enable_shared_from_this(&this->std::enable_shared_from_this<common::minet::http_client::HttpClientMgr>);
  v1 = (int (**)(...))(&`vtable for'common::minet::http_client::HttpClientMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HttpClientMgrBase = v1;
  std::atomic<common::minet::http_client::HttpClientMgr::Status>::atomic(&this->status_, STATUS_NONE_1);
  v2 = 15LL;
  ioc_arr = this->ioc_arr_;
  while ( v2 >= 0 )
  {
    boost::asio::io_context::io_context(ioc_arr++);
    --v2;
  }
  common::tools::ThreadGroup::ThreadGroup(&this->thread_group_);
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->thread_num_);
  }
  this->thread_num_ = 1;
  std::map<unsigned int,unsigned int>::map(&this->capacity_map_);
  std::atomic<unsigned int>::atomic(&this->client_seq_, 0);
  std::map<unsigned int,std::atomic<int>>::map(&this->unfinished_num_map_);
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient>>>>::vector(&this->callback_queue_vec_);
};

// Line 31: range 000000000CBDA9BC-000000000CBDB093
void __fastcall common::minet::http_client::HttpClientMgr::~HttpClientMgr(
        common::minet::http_client::HttpClientMgr *const this)
{
  unsigned __int64 p_thread_group; // rbx
  unsigned __int64 i; // rbp
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer M_finish; // r13
  unsigned __int64 p_callback_queue_vec; // r15
  common::minet::http_client::HttpClientMgr *v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 M_parent; // rsi
  __int64 v8; // rax
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // rax
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer M_start; // rdi
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *p_M_parent; // rdi
  std::_Vector_base<std::thread>::pointer v16; // rcx
  unsigned __int64 j; // rax
  unsigned __int64 v18; // rdi
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  unsigned __int64 M_pi; // rdi
  unsigned __int64 v21; // rax
  char v22; // cl
  signed __int32 v23; // eax
  unsigned __int64 v24; // rdi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> > *v29; // rbp
  char v30; // cl
  unsigned __int64 v31; // rdx
  std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator v32; // [rsp-20h] [rbp-158h]
  unsigned __int64 v33; // [rsp+8h] [rbp-130h]
  _DWORD *v34; // [rsp+10h] [rbp-128h]
  __m128i v35; // [rsp+20h] [rbp-118h] BYREF
  __m128i v36; // [rsp+30h] [rbp-108h]
  __int64 v37; // [rsp+40h] [rbp-F8h]
  __int64 v38; // [rsp+48h] [rbp-F0h]
  __int64 v39; // [rsp+50h] [rbp-E8h]
  __int64 v40; // [rsp+58h] [rbp-E0h]
  char v41[216]; // [rsp+60h] [rbp-D8h] BYREF

  v5 = this;
  v33 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v33 = v8;
  }
  v6 = v33 + 160;
  *(_QWORD *)v33 = 1102416563LL;
  *(_QWORD *)(v33 + 8) = "2 32 32 6 __last 96 32 7 __first";
  M_parent = (unsigned __int64)common::minet::http_client::HttpClientMgr::~HttpClientMgr;
  *(_QWORD *)(v33 + 16) = common::minet::http_client::HttpClientMgr::~HttpClientMgr;
  v34 = (_DWORD *)(v33 >> 3);
  v34[536862720] = -235802127;
  v34[536862722] = -218959118;
  v34[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  this->_vptr_HttpClientMgrBase = (int (**)(...))(&`vtable for'common::minet::http_client::HttpClientMgr + 2);
  p_callback_queue_vec = (unsigned __int64)&this->callback_queue_vec_;
  this = (common::minet::http_client::HttpClientMgr *const)((char *)this + 472);
  if ( *(_BYTE *)(((unsigned __int64)&v5->callback_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(this);
    goto LABEL_10;
  }
  M_finish = v5->callback_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)((p_callback_queue_vec >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    v9 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)p_callback_queue_vec;
    __asan_report_load8(p_callback_queue_vec);
    goto LABEL_11;
  }
  for ( i = (unsigned __int64)v5->callback_queue_vec_._M_impl._M_start;
        M_finish != (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)i;
        i += 8LL )
  {
    v9 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)i;
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
    {
LABEL_11:
      __asan_report_load8(v9);
      goto LABEL_12;
    }
    p_thread_group = *(_QWORD *)i;
    if ( *(_QWORD *)i )
    {
      v9 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)(p_thread_group + 48);
      if ( (*(_BYTE *)(((p_thread_group + 79) >> 3) + 0x7FFF8000) == 0
         || *(_BYTE *)(((p_thread_group + 79) >> 3) + 0x7FFF8000) > (unsigned __int8)((p_thread_group + 79) & 7))
        && *(char *)(((p_thread_group + 48) >> 3) + 0x7FFF8000) >= 0 )
      {
        v35 = _mm_loadu_si128((const __m128i *)(p_thread_group + 48));
        v36 = _mm_loadu_si128((const __m128i *)(p_thread_group + 64));
        if ( *(_BYTE *)(((p_thread_group + 47) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((p_thread_group + 47) >> 3) + 0x7FFF8000) <= (unsigned __int8)((p_thread_group + 47) & 7)
          || *(char *)(((p_thread_group + 16) >> 3) + 0x7FFF8000) < 0 )
        {
          M_parent = 32LL;
          __asan_report_load_n(p_thread_group + 16, 32LL);
          break;
        }
        goto LABEL_13;
      }
LABEL_12:
      __asan_report_load_n(v9, 32LL);
LABEL_13:
      v10 = *(_QWORD *)(p_thread_group + 24);
      v37 = *(_QWORD *)(p_thread_group + 16);
      v38 = v10;
      v12 = *(_QWORD *)(p_thread_group + 40);
      v39 = *(_QWORD *)(p_thread_group + 32);
      v11 = v39;
      v40 = v12;
      *(_QWORD *)(v33 + 96) = v37;
      *(_QWORD *)(v33 + 104) = v10;
      *(_QWORD *)(v33 + 112) = v11;
      *(_QWORD *)(v33 + 120) = v12;
      *(__m128i *)(v33 + 32) = _mm_load_si128(&v35);
      v13 = v36;
      *(__m128i *)(v33 + 48) = v36;
      *(__m128i *)&v32._M_last = v13;
      *(_OWORD *)&v32._M_cur = *(_OWORD *)(v33 + 32);
      std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_destroy_data_aux(
        (std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> *const)p_thread_group,
        *(std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator *)(v33 + 96),
        v32);
      std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::~_Deque_base((std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>> *const)p_thread_group);
      M_parent = 128LL;
      operator delete((void *)p_thread_group, 0x80uLL);
      continue;
    }
  }
  if ( *(_BYTE *)((p_callback_queue_vec >> 3) + 0x7FFF8000) )
  {
    p_M_parent = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)p_callback_queue_vec;
    __asan_report_load8(p_callback_queue_vec);
LABEL_32:
    __asan_report_load8(p_M_parent);
    goto LABEL_33;
  }
  M_start = v5->callback_queue_vec_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  p_M_parent = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&v5->unfinished_num_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v5->unfinished_num_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_32;
  M_parent = (unsigned __int64)v5->unfinished_num_map_._M_t._M_impl._M_header._M_parent;
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int>>,std::_Select1st<std::pair<unsigned int const,std::atomic<int>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int>>>>::_M_erase(
    &v5->unfinished_num_map_._M_t,
    (std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int> >,std::_Select1st<std::pair<unsigned int const,std::atomic<int> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int> > > >::_Link_type)M_parent);
  p_M_parent = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&v5->capacity_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v5->capacity_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_parent);
    goto LABEL_34;
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_erase(
    &v5->capacity_map_._M_t,
    (std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::_Link_type)v5->capacity_map_._M_t._M_impl._M_header._M_parent);
  p_thread_group = (unsigned __int64)&v5->thread_group_;
  M_parent = (unsigned __int64)&v5->thread_group_;
  p_M_parent = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&v5->thread_group_.thread_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v5->thread_group_.thread_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_parent);
    goto LABEL_35;
  }
  v16 = v5->thread_group_.thread_vec_._M_impl._M_finish;
  if ( *(_BYTE *)((p_thread_group >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    v18 = p_thread_group;
    j = __asan_report_load8(p_thread_group);
    goto LABEL_36;
  }
  for ( j = *(_QWORD *)p_thread_group; v16 != (std::_Vector_base<std::thread>::pointer)j; j += 8LL )
  {
    v18 = j;
    if ( *(_BYTE *)((j >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(j);
LABEL_41:
      __asan_handle_no_return(v18);
      std::terminate();
    }
LABEL_36:
    if ( *(_QWORD *)j )
      goto LABEL_41;
  }
  if ( !*(_BYTE *)((M_parent >> 3) + 0x7FFF8000) )
  {
    if ( *(_QWORD *)M_parent )
      operator delete(*(void **)M_parent);
    p_callback_queue_vec = (unsigned __int64)v5->ioc_arr_;
    if ( v5 != (common::minet::http_client::HttpClientMgr *)-32LL )
      goto LABEL_84;
    goto LABEL_46;
  }
  v24 = M_parent;
  __asan_report_load8(M_parent);
  while ( 2 )
  {
    __asan_report_load8(v24);
LABEL_57:
    __asan_report_load8(v24);
LABEL_58:
    __asan_report_load8(v24);
LABEL_59:
    __asan_report_load8(v24);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v6 + 32);
LABEL_61:
      if ( !v6 )
        break;
      v24 = v6;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        goto LABEL_58;
      v24 = *(_QWORD *)v6 + 16LL;
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        goto LABEL_59;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v6 + 32);
        break;
      }
    }
    v25 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)i;
    if ( !*(_BYTE *)((i >> 3) + 0x7FFF8000) )
    {
      v6 = *(_QWORD *)i;
      goto LABEL_74;
    }
    __asan_report_load8(i);
LABEL_69:
    v26 = __asan_report_load8(v25);
LABEL_70:
    v27 = v26;
    __asan_report_load8(v26);
LABEL_71:
    __asan_report_load8(v27);
LABEL_72:
    __asan_report_load8(v28);
    do
    {
      *(_QWORD *)(v6 + 56) = M_finish;
LABEL_74:
      v25 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)(v6 + 56);
      if ( *(_BYTE *)(((v6 + 56) >> 3) + 0x7FFF8000) )
        goto LABEL_69;
      v27 = *(_QWORD *)(v6 + 56);
      if ( !v27 )
        goto LABEL_81;
      v26 = v27 + 32;
      if ( *(_BYTE *)(((v27 + 32) >> 3) + 0x7FFF8000) )
        goto LABEL_70;
      M_finish = *(std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *)(v27 + 32);
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        goto LABEL_71;
      v28 = *(_QWORD *)v27 + 8LL;
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        goto LABEL_72;
      (*(void (**)(void))(*(_QWORD *)v27 + 8LL))();
    }
    while ( !*(_BYTE *)(((v6 + 56) >> 3) + 0x7FFF8000) );
    __asan_report_store8();
LABEL_81:
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)i;
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(i);
LABEL_89:
      v21 = __asan_report_load8(p_M_refcount);
      goto LABEL_90;
    }
    v29 = *(common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> > **)i;
    if ( v29 )
    {
      pthread_mutex_destroy((pthread_mutex_t *)&v29->queue_.c._M_impl._M_map_size);
      M_parent = 64LL;
      operator delete(v29, 0x40uLL);
    }
LABEL_84:
    if ( p_callback_queue_vec != p_thread_group )
    {
      p_thread_group -= 16LL;
      i = p_thread_group;
      v24 = p_thread_group;
      if ( *(_BYTE *)((p_thread_group >> 3) + 0x7FFF8000) )
        continue;
      v24 = *(_QWORD *)p_thread_group + 56LL;
      if ( !*(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)p_thread_group + 56LL);
        goto LABEL_61;
      }
      goto LABEL_57;
    }
    break;
  }
LABEL_46:
  p_M_refcount = &v5->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v5->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_89;
  M_pi = (unsigned __int64)v5->_M_weak_this._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_53;
  v21 = M_pi + 12;
  if ( &_pthread_key_create )
  {
    v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
    if ( (char)((v21 & 7) + 3) < v22 || !v22 )
    {
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v21, 0xFFFFFFFF);
      goto LABEL_52;
    }
LABEL_90:
    M_pi = v21;
    __asan_report_store4(v21);
  }
  v30 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v30 && v30 )
  {
    M_pi += 12LL;
    __asan_report_load4(M_pi);
LABEL_95:
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
    }
    else
    {
      v31 = *(_QWORD *)M_pi + 24LL;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)M_pi + 24LL))();
        goto LABEL_53;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_100;
  }
  v23 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v23 - 1;
LABEL_52:
  if ( v23 == 1 )
    goto LABEL_95;
LABEL_53:
  M_parent = v33;
  if ( v41 == (char *)v33 )
  {
    *(_DWORD *)((v33 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v33 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v33 >> 3) + 0x7FFF8010) = 0;
    return;
  }
LABEL_100:
  *(_QWORD *)M_parent = 1172321806LL;
  *(_QWORD *)((v33 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v33 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v33 >> 3) + 0x7FFF8010) = -168430091;
};

// Line 31: range 000000000CBDB098-000000000CBDB78D
void __fastcall common::minet::http_client::HttpClientMgr::~HttpClientMgr(
        common::minet::http_client::HttpClientMgr *const this)
{
  unsigned __int64 M_head_impl; // rbp
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer i; // r14
  common::minet::http_client::HttpClientMgr *v3; // rbx
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r12
  _DWORD *v6; // r15
  __int64 v7; // rax
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // rax
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer M_start; // rdi
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  unsigned __int64 p_thread_group; // rdi
  __int64 p_M_finish; // rax
  std::_Vector_base<std::thread>::pointer M_finish; // rdx
  unsigned __int64 j; // rax
  void *v19; // rdi
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  unsigned __int64 M_pi; // rdi
  unsigned __int64 v22; // rax
  char v23; // cl
  signed __int32 v24; // eax
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer v29; // r12
  char v30; // cl
  unsigned __int64 v31; // rdx
  std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator v32; // [rsp-20h] [rbp-158h]
  std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >> *p_callback_queue_vec; // [rsp+8h] [rbp-130h]
  _QWORD *p_M_head_impl; // [rsp+10h] [rbp-128h]
  __m128i v35; // [rsp+20h] [rbp-118h] BYREF
  __m128i v36; // [rsp+30h] [rbp-108h]
  __int64 v37; // [rsp+40h] [rbp-F8h]
  __int64 v38; // [rsp+48h] [rbp-F0h]
  __int64 v39; // [rsp+50h] [rbp-E8h]
  __int64 v40; // [rsp+58h] [rbp-E0h]
  char v41[216]; // [rsp+60h] [rbp-D8h] BYREF

  v3 = this;
  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v4 = v7;
  }
  v5 = v4 + 160;
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 32 6 __last 96 32 7 __first";
  *(_QWORD *)(v4 + 16) = common::minet::http_client::HttpClientMgr::~HttpClientMgr;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218959118;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_9;
  }
  this->_vptr_HttpClientMgrBase = (int (**)(...))(&`vtable for'common::minet::http_client::HttpClientMgr + 2);
  p_callback_queue_vec = (std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >> *)&this->callback_queue_vec_;
  this = (common::minet::http_client::HttpClientMgr *const)((char *)this + 472);
  if ( *(_BYTE *)(((unsigned __int64)&v3->callback_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(this);
    goto LABEL_10;
  }
  p_M_head_impl = &v3->callback_queue_vec_._M_impl._M_finish->_M_t._M_t._M_head_impl;
  if ( *(_BYTE *)(((unsigned __int64)p_callback_queue_vec >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    v8 = p_callback_queue_vec;
    __asan_report_load8(p_callback_queue_vec);
    goto LABEL_11;
  }
  for ( i = v3->callback_queue_vec_._M_impl._M_start; p_M_head_impl != (_QWORD *)i; ++i )
  {
    v8 = i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
LABEL_11:
      __asan_report_load8(v8);
      goto LABEL_12;
    }
    M_head_impl = (unsigned __int64)i->_M_t._M_t._M_head_impl;
    if ( i->_M_t._M_t._M_head_impl )
    {
      v8 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)(M_head_impl + 48);
      if ( (*(_BYTE *)(((M_head_impl + 79) >> 3) + 0x7FFF8000) == 0
         || *(_BYTE *)(((M_head_impl + 79) >> 3) + 0x7FFF8000) > (unsigned __int8)((M_head_impl + 79) & 7))
        && *(char *)(((M_head_impl + 48) >> 3) + 0x7FFF8000) >= 0 )
      {
        v35 = _mm_loadu_si128((const __m128i *)(M_head_impl + 48));
        v36 = _mm_loadu_si128((const __m128i *)(M_head_impl + 64));
        if ( *(_BYTE *)(((M_head_impl + 47) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((M_head_impl + 47) >> 3) + 0x7FFF8000) <= (unsigned __int8)((M_head_impl + 47) & 7)
          || *(char *)(((M_head_impl + 16) >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_load_n(M_head_impl + 16, 32LL);
          break;
        }
        goto LABEL_13;
      }
LABEL_12:
      __asan_report_load_n(v8, 32LL);
LABEL_13:
      v9 = *(_QWORD *)(M_head_impl + 24);
      v37 = *(_QWORD *)(M_head_impl + 16);
      v38 = v9;
      v11 = *(_QWORD *)(M_head_impl + 40);
      v39 = *(_QWORD *)(M_head_impl + 32);
      v10 = v39;
      v40 = v11;
      *(_QWORD *)(v4 + 96) = v37;
      *(_QWORD *)(v4 + 104) = v9;
      *(_QWORD *)(v4 + 112) = v10;
      *(_QWORD *)(v4 + 120) = v11;
      *(__m128i *)(v4 + 32) = _mm_load_si128(&v35);
      v12 = v36;
      *(__m128i *)(v4 + 48) = v36;
      *(__m128i *)&v32._M_last = v12;
      *(_OWORD *)&v32._M_cur = *(_OWORD *)(v4 + 32);
      std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_destroy_data_aux(
        (std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> *const)M_head_impl,
        *(std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator *)(v4 + 96),
        v32);
      std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::~_Deque_base((std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>> *const)M_head_impl);
      operator delete((void *)M_head_impl, 0x80uLL);
      continue;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)p_callback_queue_vec >> 3) + 0x7FFF8000) )
  {
    p_M_parent = (std::_Rb_tree_node_base::_Base_ptr *)p_callback_queue_vec;
    __asan_report_load8(p_callback_queue_vec);
LABEL_32:
    __asan_report_load8(p_M_parent);
    goto LABEL_33;
  }
  M_start = v3->callback_queue_vec_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  p_M_parent = &v3->unfinished_num_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v3->unfinished_num_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
    goto LABEL_32;
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int>>,std::_Select1st<std::pair<unsigned int const,std::atomic<int>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int>>>>::_M_erase(
    &v3->unfinished_num_map_._M_t,
    (std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int> >,std::_Select1st<std::pair<unsigned int const,std::atomic<int> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int> > > >::_Link_type)v3->unfinished_num_map_._M_t._M_impl._M_header._M_parent);
  p_M_parent = &v3->capacity_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v3->capacity_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    p_M_finish = __asan_report_load8(p_M_parent);
    goto LABEL_34;
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_erase(
    &v3->capacity_map_._M_t,
    (std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::_Link_type)v3->capacity_map_._M_t._M_impl._M_header._M_parent);
  M_head_impl = (unsigned __int64)&v3->thread_group_;
  p_thread_group = (unsigned __int64)&v3->thread_group_;
  p_M_finish = (__int64)&v3->thread_group_.thread_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v3->thread_group_.thread_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    p_thread_group = p_M_finish;
    __asan_report_load8(p_M_finish);
    goto LABEL_35;
  }
  M_finish = v3->thread_group_.thread_vec_._M_impl._M_finish;
  if ( *(_BYTE *)((M_head_impl >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    j = __asan_report_load8(p_thread_group);
    goto LABEL_36;
  }
  for ( j = *(_QWORD *)M_head_impl; M_finish != (std::_Vector_base<std::thread>::pointer)j; j += 8LL )
  {
    if ( *(_BYTE *)((j >> 3) + 0x7FFF8000) )
    {
      p_thread_group = j;
      __asan_report_load8(j);
LABEL_41:
      __asan_handle_no_return(p_thread_group);
      std::terminate();
    }
LABEL_36:
    if ( *(_QWORD *)j )
      goto LABEL_41;
  }
  if ( !*(_BYTE *)((p_thread_group >> 3) + 0x7FFF8000) )
  {
    v19 = *(void **)p_thread_group;
    if ( v19 )
      operator delete(v19);
    p_M_head_impl = &v3->ioc_arr_[0].service_registry_;
    if ( v3 != (common::minet::http_client::HttpClientMgr *)-32LL )
      goto LABEL_84;
    goto LABEL_46;
  }
  __asan_report_load8(p_thread_group);
  while ( 2 )
  {
    __asan_report_load8(p_thread_group);
LABEL_57:
    __asan_report_load8(p_thread_group);
LABEL_58:
    __asan_report_load8(p_thread_group);
LABEL_59:
    __asan_report_load8(p_thread_group);
    while ( 1 )
    {
      i = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)i[4]._M_t._M_t._M_head_impl;
LABEL_61:
      if ( !i )
        break;
      p_thread_group = (unsigned __int64)i;
      if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
        goto LABEL_58;
      p_thread_group = (unsigned __int64)&i->_M_t._M_t._M_head_impl->queue_.c._M_impl._M_start;
      if ( *(_BYTE *)((p_thread_group >> 3) + 0x7FFF8000) )
        goto LABEL_59;
      ((void (__fastcall *)(std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer))i->_M_t._M_t._M_head_impl->queue_.c._M_impl._M_start._M_cur)(i);
      if ( *(_BYTE *)(((unsigned __int64)&i[4] >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&i[4]);
        break;
      }
    }
    v25 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *)v5;
    if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      i = *(std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *)v5;
      goto LABEL_74;
    }
    __asan_report_load8(v5);
LABEL_69:
    v26 = __asan_report_load8(v25);
LABEL_70:
    v27 = v26;
    __asan_report_load8(v26);
LABEL_71:
    __asan_report_load8(v27);
LABEL_72:
    __asan_report_load8(v28);
    do
    {
      i[7]._M_t._M_t._M_head_impl = (common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> > *)p_callback_queue_vec;
LABEL_74:
      v25 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *)&i[7];
      if ( *(_BYTE *)(((unsigned __int64)&i[7] >> 3) + 0x7FFF8000) )
        goto LABEL_69;
      v27 = (unsigned __int64)i[7]._M_t._M_t._M_head_impl;
      if ( !v27 )
        goto LABEL_81;
      v26 = v27 + 32;
      if ( *(_BYTE *)(((v27 + 32) >> 3) + 0x7FFF8000) )
        goto LABEL_70;
      p_callback_queue_vec = *(std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >> **)(v27 + 32);
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        goto LABEL_71;
      v28 = *(_QWORD *)v27 + 8LL;
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        goto LABEL_72;
      (*(void (**)(void))(*(_QWORD *)v27 + 8LL))();
    }
    while ( !*(_BYTE *)(((unsigned __int64)&i[7] >> 3) + 0x7FFF8000) );
    __asan_report_store8();
LABEL_81:
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)v5;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v5);
LABEL_89:
      v22 = __asan_report_load8(p_M_refcount);
      goto LABEL_90;
    }
    v29 = *(std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *)v5;
    if ( v29 )
    {
      pthread_mutex_destroy((pthread_mutex_t *)&v29[1]);
      operator delete(v29, 0x40uLL);
    }
LABEL_84:
    if ( p_M_head_impl != (_QWORD *)M_head_impl )
    {
      M_head_impl -= 16LL;
      v5 = M_head_impl;
      p_thread_group = M_head_impl;
      if ( *(_BYTE *)((M_head_impl >> 3) + 0x7FFF8000) )
        continue;
      p_thread_group = *(_QWORD *)M_head_impl + 56LL;
      if ( !*(_BYTE *)((p_thread_group >> 3) + 0x7FFF8000) )
      {
        i = *(std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *)(*(_QWORD *)M_head_impl + 56LL);
        goto LABEL_61;
      }
      goto LABEL_57;
    }
    break;
  }
LABEL_46:
  p_M_refcount = &v3->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_89;
  M_pi = (unsigned __int64)v3->_M_weak_this._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_53;
  v22 = M_pi + 12;
  if ( &_pthread_key_create )
  {
    v23 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
    if ( (char)((v22 & 7) + 3) < v23 || !v23 )
    {
      v24 = _InterlockedExchangeAdd((volatile signed __int32 *)v22, 0xFFFFFFFF);
      goto LABEL_52;
    }
LABEL_90:
    M_pi = v22;
    __asan_report_store4(v22);
  }
  v30 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v30 && v30 )
  {
    M_pi += 12LL;
    __asan_report_load4(M_pi);
LABEL_95:
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
    }
    else
    {
      v31 = *(_QWORD *)M_pi + 24LL;
      if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)M_pi + 24LL))();
        goto LABEL_53;
      }
    }
    __asan_report_load8(v31);
    goto LABEL_100;
  }
  v24 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v24 - 1;
LABEL_52:
  if ( v24 == 1 )
    goto LABEL_95;
LABEL_53:
  operator delete(v3, 0x1E8uLL);
  if ( v41 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    return;
  }
LABEL_100:
  *(_QWORD *)v4 = 1172321806LL;
  *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
};
