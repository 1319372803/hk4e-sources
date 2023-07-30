// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/http_client/src/async_http_client_mgr.cpp

// Line 28: range 000000000CBBB81E-000000000CBBC60A
int32_t __fastcall common::minet::http_client::HttpClientMgr::init(
        common::minet::http_client::HttpClientMgr *const this,
        uint32_t thread_num,
        uint32_t capacity,
        uint32_t work_thread_num)
{
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *p_callback_queue_vec; // r15
  unsigned __int64 p_unfinished_num_map; // rbx
  std::tuple<> *v7; // rbp
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::size_type p_status; // rsi
  char v9; // dl
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer p_capacity_map; // r12
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::iterator v11; // rax
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::iterator v12; // r9
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr M_node; // rdi
  unsigned __int64 v14; // rax
  char v15; // cl
  unsigned __int64 p_M_parent; // rdi
  char v17; // dl
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int> >,std::_Select1st<std::pair<unsigned int const,std::atomic<int> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int> > > >::iterator v18; // rax
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int> >,std::_Select1st<std::pair<unsigned int const,std::atomic<int> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int> > > >::iterator v19; // r9
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::atomic<int> > >::_Base_ptr v20; // rdi
  unsigned __int64 v21; // rax
  char v22; // cl
  unsigned __int64 p_M_finish; // rdi
  char v24; // dl
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer M_finish; // r13
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer M_start; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  char v29; // dl
  int32_t result; // eax
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *v31; // rdi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __m128i v36; // rax
  std::map<unsigned int,std::atomic<int>> *v37; // rdi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer v38; // rdi
  char v39; // al
  signed __int8 v40; // dl
  common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> > *M_head_impl; // r13
  unsigned int *p_M_start; // rdi
  __int64 M_first; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  __m128i v46; // rax
  unsigned int *v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int128 v52; // rax
  struct _Unwind_Exception *v53; // rbp
  char v54; // al
  char v55; // dl
  struct _Unwind_Exception *v56; // rbx
  std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator v57; // [rsp-20h] [rbp-248h]
  std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator v58; // [rsp-20h] [rbp-248h]
  std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator v59; // [rsp-20h] [rbp-248h]
  std::tuple<unsigned int&&> *v60; // [rsp+0h] [rbp-228h]
  unsigned __int64 __args_2; // [rsp+8h] [rbp-220h]
  _DWORD *v63; // [rsp+18h] [rbp-210h]
  std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >> *work_thread_numb; // [rsp+28h] [rbp-200h]
  std::atomic<common::minet::http_client::HttpClientMgr::Status> *v66; // [rsp+30h] [rbp-1F8h]
  std::tuple<> *v67; // [rsp+38h] [rbp-1F0h]
  std::tuple<> v68; // [rsp+43h] [rbp-1E5h] BYREF
  unsigned int __k; // [rsp+44h] [rbp-1E4h] BYREF
  std::tuple<unsigned int&&> v70; // [rsp+48h] [rbp-1E0h] BYREF
  __m128i v71; // [rsp+50h] [rbp-1D8h] BYREF
  __m128i v72; // [rsp+60h] [rbp-1C8h]
  std::_Rb_tree_node_base::_Base_ptr v73; // [rsp+70h] [rbp-1B8h]
  __int64 v74; // [rsp+78h] [rbp-1B0h]
  std::_Rb_tree_node_base::_Base_ptr v75; // [rsp+80h] [rbp-1A8h]
  __int64 v76; // [rsp+88h] [rbp-1A0h]
  __m128i v77; // [rsp+90h] [rbp-198h] BYREF
  __m128i v78; // [rsp+A0h] [rbp-188h]
  std::_Deque_iterator<std::shared_ptr<common::minet::http_client::HttpClient>,std::shared_ptr<common::minet::http_client::HttpClient>&,std::shared_ptr<common::minet::http_client::HttpClient>*>::_Elt_pointer M_cur; // [rsp+B0h] [rbp-178h]
  __int64 v80; // [rsp+B8h] [rbp-170h]
  std::_Deque_iterator<std::shared_ptr<common::minet::http_client::HttpClient>,std::shared_ptr<common::minet::http_client::HttpClient>&,std::shared_ptr<common::minet::http_client::HttpClient>*>::_Elt_pointer M_last; // [rsp+C0h] [rbp-168h]
  __int64 v82; // [rsp+C8h] [rbp-160h]
  std::tuple<> v83; // [rsp+D0h] [rbp-158h] BYREF

  p_unfinished_num_map = capacity;
  __args_2 = (unsigned __int64)&v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v28 = __asan_stack_malloc_3(288LL);
    if ( v28 )
      __args_2 = v28;
  }
  v67 = (std::tuple<> *)(__args_2 + 288);
  v7 = (std::tuple<> *)(__args_2 + 288);
  *(_QWORD *)__args_2 = 1102416563LL;
  *(_QWORD *)(__args_2 + 8) = "4 32 32 6 __last 96 32 7 __first 160 32 6 __last 224 32 7 __first";
  *(_QWORD *)(__args_2 + 16) = common::minet::http_client::HttpClientMgr::init;
  v63 = (_DWORD *)(__args_2 >> 3);
  v63[536862720] = -235802127;
  v63[536862722] = -218959118;
  v63[536862724] = -218959118;
  v63[536862726] = -218959118;
  v63[536862728] = -202116109;
  p_status = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::size_type)&this->status_;
  v66 = &this->status_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v9 && v9 )
  {
    __asan_report_load4(&this->status_);
LABEL_32:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(__args_2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client_mgr.cpp",
      "init",
      31);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(__args_2 + 248),
      "client_mgr status: ");
    v29 = *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v66 & 7) + 3) < v29 || !v29 )
    {
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(__args_2 + 248),
        this->status_._M_i);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
        *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(__args_2 + 248),
        ", can not init now");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(__args_2 + 224));
      result = -1;
      goto LABEL_123;
    }
    __asan_report_load4(v66);
    goto LABEL_36;
  }
  if ( this->status_._M_i )
    goto LABEL_32;
  if ( thread_num - 1 > 0xF )
  {
LABEL_36:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(__args_2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client_mgr.cpp",
      "init",
      36);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(__args_2 + 248),
      "invalid thread_num:");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(__args_2 + 248),
      thread_num);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(__args_2 + 224));
    result = -1;
    goto LABEL_123;
  }
  if ( !(_DWORD)p_unfinished_num_map )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(__args_2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client_mgr.cpp",
      "init",
      41);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(__args_2 + 248),
      "capacity cannot be 0!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(__args_2 + 224));
    result = -1;
    goto LABEL_123;
  }
  p_capacity_map = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)&this->capacity_map_;
  __k = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->capacity_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    v14 = __asan_report_load8(&this->capacity_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_39;
  }
  v11._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_lower_bound(
                  &this->capacity_map_._M_t,
                  (std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::_Link_type)this->capacity_map_._M_t._M_impl._M_header._M_parent,
                  &this->capacity_map_._M_t._M_impl._M_header,
                  &__k)._M_node;
  M_node = v11._M_node;
  p_status = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::size_type)v11._M_node;
  if ( &this->capacity_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v11._M_node )
  {
LABEL_12:
    v70._M_head_impl = &__k;
    M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<unsigned int &&>,std::tuple<>>(
               &this->capacity_map_._M_t,
               (std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::const_iterator)p_status,
               &std::piecewise_construct,
               &v70,
               &v68,
               (const std::piecewise_construct_t *)v12._M_node,
               v60,
               (std::tuple<> *)__args_2)._M_node;
    goto LABEL_13;
  }
  v14 = (unsigned __int64)&v11._M_node[1];
  v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
  if ( (char)((v14 & 7) + 3) >= v15 && v15 )
  {
LABEL_39:
    p_M_parent = v14;
    __asan_report_load4(v14);
LABEL_40:
    __asan_report_store4(p_M_parent);
    goto LABEL_41;
  }
  if ( __k < *(_DWORD *)(p_status + 32) )
    goto LABEL_12;
LABEL_13:
  p_M_parent = (unsigned __int64)(&M_node[1]._M_color + 1);
  v17 = *(_BYTE *)((p_M_parent >> 3) + 0x7FFF8000);
  if ( (char)((p_M_parent & 7) + 3) >= v17 && v17 )
    goto LABEL_40;
  *(_DWORD *)p_M_parent = p_unfinished_num_map;
  p_unfinished_num_map = (unsigned __int64)&this->unfinished_num_map_;
  __k = 0;
  p_capacity_map = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)&this->unfinished_num_map_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = (unsigned __int64)&this->unfinished_num_map_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->unfinished_num_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    v21 = __asan_report_load8(p_M_parent);
    goto LABEL_42;
  }
  v18._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int>>,std::_Select1st<std::pair<unsigned int const,std::atomic<int>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int>>>>::_M_lower_bound(
                  &this->unfinished_num_map_._M_t,
                  (std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int> >,std::_Select1st<std::pair<unsigned int const,std::atomic<int> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int> > > >::_Link_type)this->unfinished_num_map_._M_t._M_impl._M_header._M_parent,
                  &this->unfinished_num_map_._M_t._M_impl._M_header,
                  &__k)._M_node;
  v20 = v18._M_node;
  p_status = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::size_type)v18._M_node;
  if ( p_capacity_map == (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)v18._M_node )
  {
LABEL_20:
    v70._M_head_impl = &__k;
    v20 = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int>>,std::_Select1st<std::pair<unsigned int const,std::atomic<int>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<unsigned int &&>,std::tuple<>>(
            &this->unfinished_num_map_._M_t,
            (std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int> >,std::_Select1st<std::pair<unsigned int const,std::atomic<int> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int> > > >::const_iterator)p_status,
            &std::piecewise_construct,
            &v70,
            &v68,
            (const std::piecewise_construct_t *)v19._M_node,
            v60,
            (std::tuple<> *)__args_2)._M_node;
    goto LABEL_21;
  }
  v21 = (unsigned __int64)&v18._M_node[1];
  v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
  if ( (char)((v21 & 7) + 3) >= v22 && v22 )
  {
LABEL_42:
    p_M_finish = v21;
    __asan_report_load4(v21);
LABEL_43:
    __asan_report_store4(p_M_finish);
    goto LABEL_44;
  }
  if ( __k < *(_DWORD *)(p_status + 32) )
    goto LABEL_20;
LABEL_21:
  p_M_finish = (unsigned __int64)(&v20[1]._M_color + 1);
  v24 = *(_BYTE *)((p_M_finish >> 3) + 0x7FFF8000);
  if ( (char)((p_M_finish & 7) + 3) >= v24 && v24 )
    goto LABEL_43;
  *(_DWORD *)p_M_finish = 0;
  _mm_mfence();
  p_callback_queue_vec = &this->callback_queue_vec_;
  p_status = work_thread_num;
  p_M_finish = (unsigned __int64)&this->callback_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_load8(p_M_finish);
    goto LABEL_45;
  }
  M_finish = this->callback_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)p_callback_queue_vec >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    v27 = __asan_report_load8(p_callback_queue_vec);
    goto LABEL_46;
  }
  M_start = this->callback_queue_vec_._M_impl._M_start;
  v27 = M_finish - M_start;
  if ( work_thread_num > v27 )
  {
LABEL_46:
    p_status -= v27;
    std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient>>>>::_M_default_append(
      p_callback_queue_vec,
      p_status);
    goto LABEL_47;
  }
  if ( work_thread_num < v27 )
  {
    work_thread_numb = &M_start[work_thread_num];
    if ( M_finish != work_thread_numb )
    {
      for ( p_capacity_map = &M_start[p_status]; ; ++p_capacity_map )
      {
        if ( M_finish == p_capacity_map )
        {
LABEL_62:
          v31 = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&this->callback_queue_vec_._M_impl._M_finish;
          if ( !*(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
          {
            this->callback_queue_vec_._M_impl._M_finish = work_thread_numb;
            goto LABEL_47;
          }
          __asan_report_store8();
LABEL_65:
          __asan_report_load8(v31);
          goto LABEL_66;
        }
        v37 = (std::map<unsigned int,std::atomic<int>> *)p_capacity_map;
        if ( *(_BYTE *)(((unsigned __int64)p_capacity_map >> 3) + 0x7FFF8000) )
          break;
        p_unfinished_num_map = (unsigned __int64)p_capacity_map->_M_t._M_t._M_head_impl;
        if ( p_capacity_map->_M_t._M_t._M_head_impl )
        {
          v37 = (std::map<unsigned int,std::atomic<int>> *)(p_unfinished_num_map + 48);
          if ( (*(_BYTE *)(((p_unfinished_num_map + 79) >> 3) + 0x7FFF8000) == 0
             || *(_BYTE *)(((p_unfinished_num_map + 79) >> 3) + 0x7FFF8000) > (unsigned __int8)((p_unfinished_num_map
                                                                                               + 79) & 7))
            && *(char *)(((p_unfinished_num_map + 48) >> 3) + 0x7FFF8000) >= 0 )
          {
            v71 = _mm_loadu_si128((const __m128i *)(p_unfinished_num_map + 48));
            v72 = _mm_loadu_si128((const __m128i *)(p_unfinished_num_map + 64));
            if ( *(_BYTE *)(((p_unfinished_num_map + 47) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((p_unfinished_num_map + 47) >> 3) + 0x7FFF8000) <= (unsigned __int8)((p_unfinished_num_map
                                                                                                 + 47) & 7)
              || *(char *)(((p_unfinished_num_map + 16) >> 3) + 0x7FFF8000) < 0 )
            {
              p_status = 32LL;
              __asan_report_load_n(p_unfinished_num_map + 16, 32LL);
              goto LABEL_62;
            }
            goto LABEL_52;
          }
LABEL_51:
          __asan_report_load_n(v37, 32LL);
LABEL_52:
          v33 = *(_QWORD *)(p_unfinished_num_map + 24);
          v73 = *(std::_Rb_tree_node_base::_Base_ptr *)(p_unfinished_num_map + 16);
          v74 = v33;
          v35 = *(_QWORD *)(p_unfinished_num_map + 40);
          v75 = *(std::_Rb_tree_node_base::_Base_ptr *)(p_unfinished_num_map + 32);
          v34 = (__int64)v75;
          v76 = v35;
          *(_QWORD *)v7[-64].gap0 = v73;
          *(_QWORD *)v7[-56].gap0 = v33;
          *(_QWORD *)v7[-48].gap0 = v34;
          *(_QWORD *)v7[-40].gap0 = v35;
          *(__m128i *)v7[-128].gap0 = _mm_load_si128(&v71);
          v36 = v72;
          *(__m128i *)v7[-112].gap0 = v72;
          *(__m128i *)&v57._M_last = v36;
          *(_OWORD *)&v57._M_cur = *(_OWORD *)v7[-128].gap0;
          std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_destroy_data_aux(
            (std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> *const)p_unfinished_num_map,
            *(std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator *)v7[-64].gap0,
            v57);
          std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::~_Deque_base((std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>> *const)p_unfinished_num_map);
          p_status = 128LL;
          operator delete((void *)p_unfinished_num_map, 0x80uLL);
          continue;
        }
      }
      __asan_report_load8(p_capacity_map);
      goto LABEL_51;
    }
  }
LABEL_47:
  v31 = &this->callback_queue_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_ >> 3) + 0x7FFF8000) )
    goto LABEL_65;
  v32 = this->callback_queue_vec_._M_impl._M_start;
  v31 = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&this->callback_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v31);
    goto LABEL_67;
  }
  p_callback_queue_vec = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)this->callback_queue_vec_._M_impl._M_finish;
  while ( 1 )
  {
    p_capacity_map = v32;
    if ( p_callback_queue_vec == (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)v32 )
    {
      v54 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
      if ( v54 && v54 <= 3 )
      {
        __asan_report_store4(&this->thread_num_);
      }
      else
      {
        this->thread_num_ = thread_num;
        p_status = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::size_type)&this->status_;
        v55 = *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v66 & 7) + 3) < v55 || !v55 )
        {
          this->status_._M_i = STATUS_INIT_6;
          _mm_mfence();
          result = 0;
          goto LABEL_123;
        }
      }
      v56 = (struct _Unwind_Exception *)__asan_report_store4(p_status);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v67[-192]);
      __asan_handle_no_return(&v67[-192]);
      _Unwind_Resume(v56);
    }
    p_unfinished_num_map = operator new(0x80uLL);
    if ( *(_BYTE *)((p_unfinished_num_map >> 3) + 0x7FFF8000) )
    {
LABEL_67:
      __asan_report_store8();
LABEL_68:
      __asan_report_store8();
LABEL_69:
      __asan_report_store8();
LABEL_70:
      __asan_report_store8();
LABEL_71:
      __asan_report_store8();
LABEL_72:
      __asan_report_store8();
LABEL_73:
      __asan_report_store8();
LABEL_74:
      __asan_report_store8();
LABEL_75:
      __asan_report_store8();
      goto LABEL_76;
    }
    *(_QWORD *)p_unfinished_num_map = 0LL;
    if ( *(_BYTE *)(((p_unfinished_num_map + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_68;
    *(_QWORD *)(p_unfinished_num_map + 8) = 0LL;
    if ( *(_BYTE *)(((p_unfinished_num_map + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_69;
    *(_QWORD *)(p_unfinished_num_map + 16) = 0LL;
    if ( *(_BYTE *)(((p_unfinished_num_map + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_70;
    *(_QWORD *)(p_unfinished_num_map + 24) = 0LL;
    if ( *(_BYTE *)(((p_unfinished_num_map + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_71;
    *(_QWORD *)(p_unfinished_num_map + 32) = 0LL;
    if ( *(_BYTE *)(((p_unfinished_num_map + 40) >> 3) + 0x7FFF8000) )
      goto LABEL_72;
    *(_QWORD *)(p_unfinished_num_map + 40) = 0LL;
    if ( *(_BYTE *)(((p_unfinished_num_map + 48) >> 3) + 0x7FFF8000) )
      goto LABEL_73;
    *(_QWORD *)(p_unfinished_num_map + 48) = 0LL;
    if ( *(_BYTE *)(((p_unfinished_num_map + 56) >> 3) + 0x7FFF8000) )
      goto LABEL_74;
    *(_QWORD *)(p_unfinished_num_map + 56) = 0LL;
    if ( *(_BYTE *)(((p_unfinished_num_map + 64) >> 3) + 0x7FFF8000) )
      goto LABEL_75;
    *(_QWORD *)(p_unfinished_num_map + 64) = 0LL;
    if ( !*(_BYTE *)(((p_unfinished_num_map + 72) >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(p_unfinished_num_map + 72) = 0LL;
      p_status = 0LL;
      std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_initialize_map(
        (std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>> *const)p_unfinished_num_map,
        0LL);
      goto LABEL_77;
    }
LABEL_76:
    __asan_report_store8();
LABEL_77:
    v38 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)(p_unfinished_num_map + 80);
    v39 = *(_BYTE *)(((p_unfinished_num_map + 80) >> 3) + 0x7FFF8000);
    if ( v39 && v39 <= 3 )
    {
      __asan_report_store4(v38);
LABEL_110:
      __asan_report_store_n(v38, 40LL);
LABEL_111:
      v53 = (struct _Unwind_Exception *)__asan_report_load8(v38);
      operator delete((void *)p_unfinished_num_map, 0x80uLL);
      __asan_handle_no_return(p_unfinished_num_map);
      _Unwind_Resume(v53);
    }
    *(_DWORD *)(p_unfinished_num_map + 80) = 0;
    v38 = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer)(p_unfinished_num_map + 88);
    v40 = *(_BYTE *)(((p_unfinished_num_map + 127) >> 3) + 0x7FFF8000);
    LOBYTE(p_status) = v40 <= (signed __int8)((p_unfinished_num_map + 127) & 7);
    if ( ((v40 != 0) & (unsigned __int8)p_status) != 0 || *(char *)(((p_unfinished_num_map + 88) >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_110;
    *(_QWORD *)(p_unfinished_num_map + 88) = 0LL;
    *(_QWORD *)(p_unfinished_num_map + 96) = 0LL;
    *(_QWORD *)(p_unfinished_num_map + 104) = 0LL;
    *(_QWORD *)(p_unfinished_num_map + 112) = 0LL;
    *(_QWORD *)(p_unfinished_num_map + 120) = 0LL;
    v70._M_head_impl = 0LL;
    v38 = p_capacity_map;
    if ( *(_BYTE *)(((unsigned __int64)p_capacity_map >> 3) + 0x7FFF8000) )
      goto LABEL_111;
    M_head_impl = p_capacity_map->_M_t._M_t._M_head_impl;
    p_capacity_map->_M_t._M_t._M_head_impl = (common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> > *)p_unfinished_num_map;
    if ( M_head_impl )
      break;
LABEL_88:
    v47 = v70._M_head_impl;
    if ( v70._M_head_impl )
    {
      p_M_start = v70._M_head_impl + 12;
      if ( *(_BYTE *)((((unsigned __int64)v70._M_head_impl + 79) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)v70._M_head_impl + 79) >> 3) + 0x7FFF8000) <= ((LOBYTE(v70._M_head_impl) + 79) & 7)
        || *(char *)(((unsigned __int64)(v70._M_head_impl + 12) >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_114;
      }
      *(__m128i *)v7[-128].gap0 = _mm_loadu_si128((const __m128i *)v70._M_head_impl + 3);
      *(__m128i *)v7[-112].gap0 = _mm_loadu_si128((const __m128i *)v47 + 4);
      p_M_start = v47 + 4;
      if ( *(_BYTE *)((((unsigned __int64)v47 + 47) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)v47 + 47) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v47 + 47) & 7)
        || *(char *)(((unsigned __int64)(v47 + 4) >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_115;
      }
      v48 = *((_QWORD *)v47 + 2);
      v49 = *((_QWORD *)v47 + 3);
      *(_QWORD *)v7[-64].gap0 = v48;
      *(_QWORD *)v7[-56].gap0 = v49;
      v50 = *((_QWORD *)v47 + 4);
      v51 = *((_QWORD *)v47 + 5);
      *(_QWORD *)v7[-48].gap0 = v50;
      *(_QWORD *)v7[-40].gap0 = v51;
      *(_QWORD *)v7[-192].gap0 = v48;
      *(_QWORD *)v7[-184].gap0 = v49;
      *(_QWORD *)v7[-176].gap0 = v50;
      *(_QWORD *)v7[-168].gap0 = v51;
      *(__m128i *)v7[-256].gap0 = _mm_load_si128((const __m128i *)&v7[-128]);
      v52 = *(_OWORD *)v7[-112].gap0;
      *(_OWORD *)v7[-240].gap0 = v52;
      *(_OWORD *)&v59._M_last = v52;
      *(_OWORD *)&v59._M_cur = *(_OWORD *)v7[-256].gap0;
      std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_destroy_data_aux(
        (std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> *const)v47,
        *(std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator *)v7[-192].gap0,
        v59);
      std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::~_Deque_base((std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>> *const)v47);
      p_status = 128LL;
      operator delete(v47, 0x80uLL);
    }
    p_M_start = (unsigned int *)p_capacity_map;
    if ( *(_BYTE *)(((unsigned __int64)p_capacity_map >> 3) + 0x7FFF8000) )
      goto LABEL_116;
    if ( !p_capacity_map->_M_t._M_t._M_head_impl )
      goto LABEL_117;
    v32 = p_capacity_map + 1;
  }
  p_M_start = (unsigned int *)&M_head_impl->queue_.c._M_impl._M_finish;
  if ( (*(_BYTE *)((((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)M_head_impl + 79) & 7))
    && *(char *)(((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) >= 0 )
  {
    v77 = _mm_loadu_si128((const __m128i *)&M_head_impl->queue_.c._M_impl._M_finish);
    v78 = _mm_loadu_si128((const __m128i *)&M_head_impl->queue_.c._M_impl._M_finish._M_last);
    p_M_start = (unsigned int *)&M_head_impl->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)((((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)((((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)M_head_impl + 47) & 7)
      || *(char *)(((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
    {
      goto LABEL_113;
    }
    M_first = (__int64)M_head_impl->queue_.c._M_impl._M_start._M_first;
    M_cur = M_head_impl->queue_.c._M_impl._M_start._M_cur;
    v80 = M_first;
    v45 = (__int64)M_head_impl->queue_.c._M_impl._M_start._M_node;
    M_last = M_head_impl->queue_.c._M_impl._M_start._M_last;
    v44 = (__int64)M_last;
    v82 = v45;
    *(_QWORD *)v7[-192].gap0 = M_cur;
    *(_QWORD *)v7[-184].gap0 = M_first;
    *(_QWORD *)v7[-176].gap0 = v44;
    *(_QWORD *)v7[-168].gap0 = v45;
    *(__m128i *)v7[-256].gap0 = _mm_load_si128(&v77);
    v46 = v78;
    *(__m128i *)v7[-240].gap0 = v78;
    *(__m128i *)&v58._M_last = v46;
    *(_OWORD *)&v58._M_cur = *(_OWORD *)v7[-256].gap0;
    std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_destroy_data_aux(
      &M_head_impl->queue_.c,
      *(std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator *)v7[-192].gap0,
      v58);
    std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::~_Deque_base(&M_head_impl->queue_.c);
    p_status = 128LL;
    operator delete(M_head_impl, 0x80uLL);
    goto LABEL_88;
  }
  __asan_report_load_n(p_M_start, 32LL);
LABEL_113:
  __asan_report_load_n(p_M_start, 32LL);
LABEL_114:
  __asan_report_load_n(p_M_start, 32LL);
LABEL_115:
  __asan_report_load_n(p_M_start, 32LL);
LABEL_116:
  __asan_report_load8(p_M_start);
LABEL_117:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v67[-192],
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/async_http_client_mgr.cpp",
    "init",
    54);
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)&v67[-192],
    "[ASYNC_HTTP_MGR] make_unique<SafeQueue> failed");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v67[-192]);
  result = -1;
LABEL_123:
  if ( &v83 == (std::tuple<> *)__args_2 )
  {
    v63[536862720] = 0;
    v63[536862722] = 0;
    v63[536862724] = 0;
    v63[536862726] = 0;
    v63[536862728] = 0;
  }
  else
  {
    *(_QWORD *)__args_2 = 1172321806LL;
    *((_QWORD *)v63 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v63 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v63 + 268431362) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v63 + 268431363) = 0xF5F5F5F5F5F5F5F5LL;
    v63[536862728] = -168430091;
  }
  return result;
};

// Line 84: range 000000000CBBA70E-000000000CBBA8CC
int32_t __fastcall common::minet::http_client::HttpClientMgr::start(
        common::minet::http_client::HttpClientMgr *const this)
{
  int v1; // r12d
  std::atomic<common::minet::http_client::HttpClientMgr::Status> *p_status; // rbp
  std::_Bind<void (common::minet::http_client::HttpClientMgr::*(common::minet::http_client::HttpClientMgr*,unsigned int))(unsigned int)> *v4; // rdx
  char v5; // dl
  uint32_t i; // ebp
  std::mutex *p_thread_num; // rdi
  char v9; // al
  common::milog::MiLogStream v10[2]; // [rsp+0h] [rbp-48h] BYREF

  p_status = &this->status_;
  v4 = (std::_Bind<void (common::minet::http_client::HttpClientMgr::*(common::minet::http_client::HttpClientMgr*,unsigned int))(unsigned int)> *)*(unsigned __int8 *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= (char)v4 && (_BYTE)v4 )
  {
    __asan_report_load4(&this->status_);
  }
  else
  {
    if ( this->status_._M_i == STATUS_INIT_6 )
      goto LABEL_9;
    common::milog::MiLogStream::MiLogStream(
      v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client_mgr.cpp",
      "start",
      87);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v10[0].ostr_, "client_mgr status: ");
    v5 = *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_status & 7) + 3) < v5 || !v5 )
    {
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v10[0].ostr_, this->status_._M_i);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v10[0].ostr_, ", can not start now");
      common::milog::MiLogStream::~MiLogStream(v10);
      return 1;
    }
  }
  __asan_report_load4(p_status);
LABEL_9:
  this->status_._M_i = STATUS_START_3;
  _mm_mfence();
  for ( i = 0; ; ++i )
  {
    p_thread_num = (std::mutex *)&this->thread_num_;
    v9 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
    if ( v9 && v9 <= 3 )
    {
      __asan_report_load4(p_thread_num);
LABEL_11:
      __asan_handle_no_return(p_thread_num);
      std::__throw_system_error(v1);
    }
    if ( this->thread_num_ <= i )
      break;
    v10[0].log_ = (common::milog::MiLog *)common::minet::http_client::HttpClientMgr::iosThreadHandler;
    v10[0].ostr_ptr_._M_ptr = 0LL;
    LODWORD(v10[0].ostr_ptr_._M_refcount._M_pi) = i;
    v10[0].ostr_ = (common::milog::MilogStringStream *)this;
    if ( &_pthread_key_create )
    {
      p_thread_num = &this->thread_group_.thread_mu_;
      v1 = pthread_mutex_lock(&this->thread_group_.thread_mu_._M_mutex);
      if ( v1 )
        goto LABEL_11;
    }
    std::vector<std::thread>::emplace_back<std::_Bind<void (common::minet::http_client::HttpClientMgr::*)(unsigned int) ()(common::minet::http_client::HttpClientMgr*,unsigned int)> &>(
      &this->thread_group_.thread_vec_,
      (std::_Bind<void (common::minet::http_client::HttpClientMgr::*(common::minet::http_client::HttpClientMgr*,unsigned int))(unsigned int)> *)v10,
      v4);
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&this->thread_group_.thread_mu_._M_mutex);
  }
  return 0;
};

// Line 101: range 000000000CBB91F0-000000000CBB953C
void __fastcall common::minet::http_client::HttpClientMgr::nonBlockStop(
        common::minet::http_client::HttpClientMgr *const this)
{
  boost::asio::io_context::impl_type *impl; // rbx
  int read_descriptor; // esi
  boost::asio::io_context *ioc_arr; // r12
  common::minet::http_client::HttpClientMgr *v4; // r13
  unsigned __int64 v5; // r14
  _DWORD *v6; // r15
  std::atomic<common::minet::http_client::HttpClientMgr::Status> *p_status; // rdi
  char v8; // dl
  __int64 v9; // rax
  pthread_cond_t *p_cond; // rdi
  void *p_state; // rdi
  boost::asio::detail::reactor *task; // rdx
  int epoll_fd; // edi
  int v14; // edx
  bool *p_stopped; // rdi
  __int64 v16; // rax
  char v17; // cl
  char v18; // al
  char v19[152]; // [rsp+10h] [rbp-98h] BYREF

  v4 = this;
  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_1(96LL);
    if ( v9 )
      v5 = v9;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 12 2 ev 64 16 4 lock";
  *(_QWORD *)(v5 + 16) = common::minet::http_client::HttpClientMgr::nonBlockStop;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -202178560;
  p_status = &this->status_;
  v8 = *(_BYTE *)(((unsigned __int64)&v4->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v4 + 24) & 7) + 3) >= v8 && v8 )
  {
    __asan_report_store4(p_status);
    goto LABEL_8;
  }
  v4->status_._M_i = STATUS_STOPPING_4;
  _mm_mfence();
  ioc_arr = v4->ioc_arr_;
  v4 = (common::minet::http_client::HttpClientMgr *)((char *)v4 + 288);
  while ( ioc_arr != (boost::asio::io_context *)v4 )
  {
    p_status = (std::atomic<common::minet::http_client::HttpClientMgr::Status> *)&ioc_arr->impl_;
    if ( *(_BYTE *)(((unsigned __int64)&ioc_arr->impl_ >> 3) + 0x7FFF8000) )
    {
LABEL_8:
      __asan_report_load8(p_status);
LABEL_9:
      __asan_report_load1(p_status);
LABEL_10:
      pthread_mutex_lock(&impl->mutex_.mutex_.mutex_);
      *(_BYTE *)(v5 + 72) = 1;
      goto LABEL_29;
    }
    impl = ioc_arr->impl_;
    *(_QWORD *)(v5 + 64) = &impl->mutex_;
    p_status = (std::atomic<common::minet::http_client::HttpClientMgr::Status> *)&impl->mutex_.enabled_;
    if ( *(char *)(((unsigned __int64)&impl->mutex_.enabled_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_9;
    if ( impl->mutex_.enabled_ )
      goto LABEL_10;
    *(_BYTE *)(v5 + 72) = 0;
LABEL_29:
    p_stopped = &impl->stopped_;
    if ( *(char *)(((unsigned __int64)&impl->stopped_ >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store1(p_stopped);
    }
    else
    {
      impl->stopped_ = 1;
      v16 = *(_QWORD *)(v5 + 64);
      p_stopped = (bool *)(v16 + 48);
      if ( *(char *)(((unsigned __int64)(v16 + 48) >> 3) + 0x7FFF8000) >= 0 )
      {
        if ( !*(_BYTE *)(v16 + 48) )
          goto LABEL_32;
        goto LABEL_13;
      }
    }
    __asan_report_load1(p_stopped);
LABEL_13:
    p_cond = &impl->wakeup_event_.event_.cond_;
    if ( !*(_BYTE *)(v5 + 72) )
    {
      __asan_handle_no_return(p_cond);
      __assert_fail(
        "lock.locked()",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/asio/detail/posix_event.hpp",
        0x38u,
        "void boost::asio::detail::posix_event::signal_all(Lock&) [with Lock = boost::asio::detail::conditionally_enabled"
        "_mutex::scoped_lock]");
    }
    if ( *(_BYTE *)(((unsigned __int64)&impl->wakeup_event_.event_.state_ >> 3) + 0x7FFF8000) )
    {
      p_state = &impl->wakeup_event_.event_.state_;
      __asan_report_load8(&impl->wakeup_event_.event_.state_);
LABEL_18:
      __asan_report_load1(p_state);
LABEL_19:
      __asan_report_load8(p_state);
LABEL_20:
      __asan_report_load4(p_state);
LABEL_21:
      epoll_fd = task->epoll_fd_;
      v14 = read_descriptor;
      read_descriptor = 3;
      epoll_ctl(epoll_fd, 3, v14, (struct epoll_event *)(v5 + 32));
LABEL_22:
      if ( !*(_BYTE *)(v5 + 72) )
        goto LABEL_23;
      goto LABEL_41;
    }
    impl->wakeup_event_.event_.state_ |= 1uLL;
    pthread_cond_broadcast(p_cond);
LABEL_32:
    p_state = &impl->task_interrupted_;
    if ( *(char *)(((unsigned __int64)&impl->task_interrupted_ >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_18;
    if ( impl->task_interrupted_ )
      goto LABEL_22;
    p_state = &impl->task_;
    if ( *(_BYTE *)(((unsigned __int64)&impl->task_ >> 3) + 0x7FFF8000) )
      goto LABEL_19;
    task = impl->task_;
    if ( !task )
      goto LABEL_22;
    impl->task_interrupted_ = 1;
    *(_DWORD *)(v5 + 32) = -2147483639;
    *(_QWORD *)(v5 + 36) = &task->interrupter_;
    p_state = &task->interrupter_;
    v17 = *(_BYTE *)(((unsigned __int64)&task->interrupter_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)task + 104) & 7) + 3) >= v17 && v17 )
      goto LABEL_20;
    read_descriptor = task->interrupter_.read_descriptor_;
    v18 = *(_BYTE *)(((unsigned __int64)&task->epoll_fd_ >> 3) + 0x7FFF8000);
    if ( !v18 || v18 > 3 )
      goto LABEL_21;
    __asan_report_load4(&task->epoll_fd_);
LABEL_41:
    pthread_mutex_unlock((pthread_mutex_t *)(*(_QWORD *)(v5 + 64) + 8LL));
LABEL_23:
    ++ioc_arr;
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 112: range 000000000CBBA13E-000000000CBBA32E
int32_t __fastcall common::minet::http_client::HttpClientMgr::join(
        common::minet::http_client::HttpClientMgr *const this)
{
  std::_Vector_base<std::thread>::pointer M_finish; // r13
  std::mutex *p_status; // rbp
  char v4; // dl
  char v5; // dl
  common::tools::ThreadGroup *p_thread_group; // r12
  std::mutex *p_thread_mu; // r14
  unsigned int v9; // eax
  common::tools::ThreadGroup *M_start; // rax
  common::tools::ThreadGroup *p_M_finish; // rdi
  char v12; // dl
  std::mutex *v13; // rdi
  struct _Unwind_Exception *v14; // rbx
  common::milog::MiLogStream v15[2]; // [rsp+0h] [rbp-48h] BYREF

  p_status = (std::mutex *)&this->status_;
  v4 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v4 && v4 )
  {
    __asan_report_load4(&this->status_);
LABEL_8:
    __asan_report_load4(p_status);
    goto LABEL_9;
  }
  if ( this->status_._M_i != STATUS_STOPPING_4 )
  {
    common::milog::MiLogStream::MiLogStream(
      v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client_mgr.cpp",
      "join",
      115);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v15[0].ostr_, "client_mgr status: ");
    v5 = *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_status & 7) + 3) < v5 || !v5 )
    {
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v15[0].ostr_, this->status_._M_i);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v15[0].ostr_, ", can not join now");
      common::milog::MiLogStream::~MiLogStream(v15);
      return 1;
    }
    goto LABEL_8;
  }
LABEL_9:
  p_thread_group = &this->thread_group_;
  p_thread_mu = &this->thread_group_.thread_mu_;
  if ( &_pthread_key_create )
  {
    v9 = pthread_mutex_lock(&this->thread_group_.thread_mu_._M_mutex);
    M_finish = (std::_Vector_base<std::thread>::pointer)v9;
    if ( v9 )
    {
      __asan_handle_no_return(&this->thread_group_.thread_mu_);
      std::__throw_system_error((int)M_finish);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)p_thread_group >> 3) + 0x7FFF8000) )
  {
    p_M_finish = &this->thread_group_;
    __asan_report_load8(&this->thread_group_);
    goto LABEL_16;
  }
  M_start = (common::tools::ThreadGroup *)this->thread_group_.thread_vec_._M_impl._M_start;
  p_M_finish = (common::tools::ThreadGroup *)&this->thread_group_.thread_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_group_.thread_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_M_finish);
    goto LABEL_17;
  }
  M_finish = this->thread_group_.thread_vec_._M_impl._M_finish;
  while ( 1 )
  {
    p_thread_group = M_start;
    if ( M_finish == (std::_Vector_base<std::thread>::pointer)M_start )
      break;
    p_M_finish = M_start;
    if ( *(_BYTE *)(((unsigned __int64)M_start >> 3) + 0x7FFF8000) )
    {
LABEL_17:
      __asan_report_load8(p_M_finish);
    }
    else if ( M_start->thread_vec_._M_impl._M_start )
    {
      std::thread::join((std::thread *)M_start);
    }
    M_start = (common::tools::ThreadGroup *)&p_thread_group->thread_vec_._M_impl._M_finish;
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->thread_group_.thread_mu_._M_mutex);
  v12 = *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_status & 7) + 3) >= v12 && v12 )
  {
    v13 = p_status;
    v14 = (struct _Unwind_Exception *)__asan_report_store4(p_status);
    if ( &_pthread_key_create )
    {
      v13 = p_thread_mu;
      pthread_mutex_unlock(&p_thread_mu->_M_mutex);
    }
    __asan_handle_no_return(v13);
    _Unwind_Resume(v14);
  }
  this->status_._M_i = STATUS_NONE_1;
  _mm_mfence();
  return 0;
};

// Line 126: range 000000000CBBA334-000000000CBBA709
int32_t __fastcall common::minet::http_client::HttpClientMgr::blockStop(
        common::minet::http_client::HttpClientMgr *const this)
{
  common::minet::http_client::HttpClientMgr *v1; // rbx
  int (**vptr_HttpClientMgrBase)(...); // rax

  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_5;
  }
  vptr_HttpClientMgrBase = this->_vptr_HttpClientMgrBase;
  this = (common::minet::http_client::HttpClientMgr *const)(this->_vptr_HttpClientMgrBase + 5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_5:
    __asan_report_load8(this);
    JUMPOUT(0xCBBA379LL);
  }
  vptr_HttpClientMgrBase[5](v1);
  return common::minet::http_client::HttpClientMgr::join(v1);
};

// Line 133: range 000000000CBBC60C-000000000CBBD100
uint32_t __fastcall common::minet::http_client::HttpClientMgr::update(
        common::minet::http_client::HttpClientMgr *const this,
        uint32_t work_thread_index)
{
  std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> *v2; // r13
  unsigned __int64 v3; // r14
  _DWORD *v4; // r12
  unsigned __int64 v5; // r15
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *p_M_finish; // rdi
  pthread_mutex_t *p_M_map_size; // r15
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_start; // rdi
  int (**v9)(...); // rax
  std::__weak_ptr<common::minet::http_client::HttpClientMgr,(__gnu_cxx::_Lock_policy)2>::element_type *v10; // rax
  boost::asio::io_context *v11; // rdi
  boost::asio::detail::service_registry *M_last; // rax
  boost::asio::detail::service_registry *M_cur; // rsi
  std::shared_ptr<common::minet::http_client::HttpClient> *v14; // rax
  char v15; // r13
  __int64 v16; // rax
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *p_M_node; // rdi
  __int64 v18; // rax
  char v19; // cl
  __int64 v20; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v21; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v22; // rdi
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdi
  volatile signed __int32 *v25; // rdx
  char v26; // cl
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int128 v29; // rax
  __int64 v30; // r10
  __int64 v31; // r11
  __int64 v32; // r8
  __int64 v33; // r9
  std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator v35; // [rsp-20h] [rbp-268h]
  std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator v36; // [rsp-20h] [rbp-268h]
  uint32_t work_thread_indexa; // [rsp+4h] [rbp-244h]
  std::_Deque_iterator<std::shared_ptr<common::minet::http_client::HttpClient>,std::shared_ptr<common::minet::http_client::HttpClient>&,std::shared_ptr<common::minet::http_client::HttpClient>*>::_Elt_pointer M_first; // [rsp+18h] [rbp-230h]
  boost::asio::io_context::impl_type *M_node; // [rsp+28h] [rbp-220h]
  boost::asio::io_context::impl_type *v40; // [rsp+38h] [rbp-210h]
  std::shared_ptr<common::minet::http_client::HttpClient> **v41; // [rsp+48h] [rbp-200h]
  char v42[504]; // [rsp+50h] [rbp-1F8h] BYREF

  v2 = (std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> *)this;
  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_3(448LL);
    if ( v16 )
      v3 = v16;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 16 14 client_ptr:156 80 32 6 __last 144 32 7 __first 208 32 6 __last 272 32 7 __first 336 8"
                        "0 23 finished_client_que:141";
  *(_QWORD *)(v3 + 16) = common::minet::http_client::HttpClientMgr::update;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862733] = -202116109;
  v5 = work_thread_index;
  p_M_finish = &this->callback_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v2[5]._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_34;
  }
  p_M_finish = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *)&v2[5]._M_impl._M_finish._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&v2[5]._M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_finish);
LABEL_35:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v3 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/async_http_client_mgr.cpp",
      "update",
      137);
    p_M_node = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&v2[5]._M_impl._M_finish._M_node;
    if ( *(_BYTE *)(((unsigned __int64)&v2[5]._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_node);
    }
    else
    {
      p_M_node = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&v2[5]._M_impl._M_finish._M_last;
      if ( !*(_BYTE *)(((unsigned __int64)&v2[5]._M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v3 + 272),
          "http_client_mgr work_thread_index=%u exceed callback queue_size=%lu",
          work_thread_index,
          ((char *)v2[5]._M_impl._M_finish._M_node - (char *)v2[5]._M_impl._M_finish._M_last) >> 3);
LABEL_40:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
        LODWORD(v2) = 0;
        goto LABEL_83;
      }
    }
    __asan_report_load8(p_M_node);
    goto LABEL_40;
  }
  if ( work_thread_index >= (unsigned __int64)(((char *)v2[5]._M_impl._M_finish._M_node
                                              - (char *)v2[5]._M_impl._M_finish._M_last) >> 3) )
    goto LABEL_35;
  *(_QWORD *)(v3 + 336) = 0LL;
  *(_QWORD *)(v3 + 344) = 0LL;
  *(_QWORD *)(v3 + 352) = 0LL;
  *(_QWORD *)(v3 + 360) = 0LL;
  *(_QWORD *)(v3 + 368) = 0LL;
  *(_QWORD *)(v3 + 376) = 0LL;
  *(_QWORD *)(v3 + 384) = 0LL;
  *(_QWORD *)(v3 + 392) = 0LL;
  *(_QWORD *)(v3 + 400) = 0LL;
  *(_QWORD *)(v3 + 408) = 0LL;
  std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_initialize_map(
    (std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>> *const)(v3 + 336),
    0LL);
  if ( *(_BYTE *)(((unsigned __int64)&v2[5]._M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v2[5]._M_impl._M_finish._M_last);
    goto LABEL_42;
  }
  v5 = (unsigned __int64)v2[5]._M_impl._M_finish._M_last + 8 * work_thread_index;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_load8(v5);
    goto LABEL_43;
  }
  v2 = *(std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> **)v5;
  if ( *(_QWORD *)v5 )
  {
    p_M_map_size = (pthread_mutex_t *)&v2[1]._M_impl._M_map_size;
    if ( &_pthread_key_create )
    {
      work_thread_indexa = pthread_mutex_lock((pthread_mutex_t *)&v2[1]._M_impl._M_map_size);
      if ( work_thread_indexa )
      {
        __asan_handle_no_return(&v2[1]._M_impl._M_map_size);
        std::__throw_system_error(work_thread_indexa);
      }
    }
    p_M_start = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&v2->_M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&v2->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_start);
    }
    else
    {
      p_M_start = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&v2->_M_impl._M_start;
      if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_impl._M_start >> 3) + 0x7FFF8000) )
      {
        if ( v2->_M_impl._M_finish._M_cur == v2->_M_impl._M_start._M_cur )
        {
LABEL_55:
          v15 = 0;
          goto LABEL_27;
        }
        *(__m128i *)(v3 + 272) = _mm_load_si128((const __m128i *)(v3 + 352));
        *(__m128i *)(v3 + 288) = _mm_load_si128((const __m128i *)(v3 + 368));
        p_M_start = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&v2->_M_impl._M_start;
        if ( (*(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) == 0
           || *(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 47) & 7))
          && *(char *)(((unsigned __int64)&v2->_M_impl._M_start >> 3) + 0x7FFF8000) >= 0 )
        {
          *(__m128i *)(v3 + 352) = _mm_loadu_si128((const __m128i *)&v2->_M_impl._M_start);
          *(__m128i *)(v3 + 368) = _mm_loadu_si128((const __m128i *)&v2->_M_impl._M_start._M_last);
          *(__m128i *)&v2->_M_impl._M_start._M_cur = _mm_load_si128((const __m128i *)(v3 + 272));
          *(__m128i *)&v2->_M_impl._M_start._M_last = _mm_load_si128((const __m128i *)(v3 + 288));
          *(__m128i *)(v3 + 272) = _mm_load_si128((const __m128i *)(v3 + 384));
          *(__m128i *)(v3 + 288) = _mm_load_si128((const __m128i *)(v3 + 400));
          p_M_start = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&v2->_M_impl._M_finish;
          if ( (*(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) == 0
             || *(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 79) & 7))
            && *(char *)(((unsigned __int64)&v2->_M_impl._M_finish >> 3) + 0x7FFF8000) >= 0 )
          {
            *(__m128i *)(v3 + 384) = _mm_loadu_si128((const __m128i *)&v2->_M_impl._M_finish);
            *(__m128i *)(v3 + 400) = _mm_loadu_si128((const __m128i *)&v2->_M_impl._M_finish._M_last);
            *(__m128i *)&v2->_M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v3 + 272));
            *(__m128i *)&v2->_M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v3 + 288));
            v9 = *(int (***)(...))(v3 + 336);
            if ( !*(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v3 + 336) = v2->_M_impl._M_map;
              v2->_M_impl._M_map = (std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::_Map_pointer)v9;
              v10 = *(std::__weak_ptr<common::minet::http_client::HttpClientMgr,(__gnu_cxx::_Lock_policy)2>::element_type **)(v3 + 344);
              v11 = (boost::asio::io_context *)&v2->_M_impl._M_map_size;
              if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_impl._M_map_size >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v3 + 344) = v2->_M_impl._M_map_size;
                v2->_M_impl._M_map_size = (std::size_t)v10;
                v11 = (boost::asio::io_context *)&v2->_M_impl._M_start;
                if ( (*(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) == 0
                   || *(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 47) & 7))
                  && *(char *)(((unsigned __int64)&v2->_M_impl._M_start >> 3) + 0x7FFF8000) >= 0 )
                {
                  M_first = v2->_M_impl._M_start._M_first;
                  M_last = (boost::asio::detail::service_registry *)v2->_M_impl._M_start._M_last;
                  M_node = (boost::asio::io_context::impl_type *)v2->_M_impl._M_start._M_node;
                  *(_QWORD *)(v3 + 144) = v2->_M_impl._M_start._M_cur;
                  *(_QWORD *)(v3 + 152) = M_first;
                  *(_QWORD *)(v3 + 160) = M_last;
                  *(_QWORD *)(v3 + 168) = M_node;
                  v11 = (boost::asio::io_context *)&v2->_M_impl._M_finish;
                  if ( (*(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) == 0
                     || *(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 79) & 7))
                    && *(char *)(((unsigned __int64)&v2->_M_impl._M_finish >> 3) + 0x7FFF8000) >= 0 )
                  {
                    M_cur = (boost::asio::detail::service_registry *)v2->_M_impl._M_finish._M_cur;
                    v40 = (boost::asio::io_context::impl_type *)v2->_M_impl._M_finish._M_first;
                    v14 = v2->_M_impl._M_finish._M_last;
                    v41 = v2->_M_impl._M_finish._M_node;
                    *(__m128i *)(v3 + 272) = _mm_load_si128((const __m128i *)(v3 + 144));
                    *(__m128i *)(v3 + 288) = _mm_load_si128((const __m128i *)(v3 + 160));
                    *(_QWORD *)(v3 + 208) = M_cur;
                    *(_QWORD *)(v3 + 216) = v40;
                    *(_QWORD *)(v3 + 224) = v14;
                    *(_QWORD *)(v3 + 232) = v41;
                    v35._M_node = v41;
                    v35._M_last = v14;
                    *(_OWORD *)&v35._M_cur = *(_OWORD *)(v3 + 208);
                    std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_destroy_data_aux(
                      v2,
                      *(std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator *)(v3 + 272),
                      v35);
                    v11 = (boost::asio::io_context *)&v2->_M_impl._M_finish._M_node;
                    if ( !*(_BYTE *)(((unsigned __int64)&v2->_M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
                    {
                      std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_destroy_nodes(
                        v2,
                        (std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::_Map_pointer)(*(_QWORD *)(v3 + 168) + 8LL),
                        v2->_M_impl._M_finish._M_node + 1);
                      v11 = (boost::asio::io_context *)&v2->_M_impl._M_finish;
                      if ( (*(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) == 0
                         || *(_BYTE *)((((unsigned __int64)&v2->_M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)v2 + 79) & 7))
                        && *(char *)(((unsigned __int64)&v2->_M_impl._M_finish >> 3) + 0x7FFF8000) >= 0 )
                      {
                        *(__m128i *)&v2->_M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v3 + 144));
                        *(__m128i *)&v2->_M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v3 + 160));
                        v15 = 1;
LABEL_27:
                        if ( &_pthread_key_create )
                          pthread_mutex_unlock(p_M_map_size);
                        if ( v15 )
                        {
                          LODWORD(v2) = 32 * (((__int64)(*(_QWORD *)(v3 + 408) - *(_QWORD *)(v3 + 376)) >> 3) - 1)
                                      + ((__int64)(*(_QWORD *)(v3 + 384) - *(_QWORD *)(v3 + 392)) >> 4)
                                      + ((__int64)(*(_QWORD *)(v3 + 368) - *(_QWORD *)(v3 + 352)) >> 4);
                          while ( 1 )
                          {
                            v23 = *(_QWORD *)(v3 + 352);
                            if ( *(_QWORD *)(v3 + 384) == v23 )
                              goto LABEL_82;
                            v24 = *(_QWORD **)(v3 + 352);
                            if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
                              break;
                            *(_QWORD *)(v3 + 48) = *(_QWORD *)v23;
                            v24 = (_QWORD *)(v23 + 8);
                            if ( *(_BYTE *)(((v23 + 8) >> 3) + 0x7FFF8000) )
                              goto LABEL_57;
                            v18 = *(_QWORD *)(v23 + 8);
                            *(_QWORD *)(v3 + 56) = v18;
                            if ( !v18 )
                              goto LABEL_78;
                            v25 = (volatile signed __int32 *)(v18 + 8);
                            if ( &_pthread_key_create )
                            {
                              v24 = (_QWORD *)(v18 + 8);
                              v26 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
                              if ( (char)(((unsigned __int8)v25 & 7) + 3) < v26 || !v26 )
                              {
                                _InterlockedAdd(v25, 1u);
                                goto LABEL_78;
                              }
                              goto LABEL_58;
                            }
LABEL_59:
                            v19 = *(_BYTE *)(((unsigned __int64)(v18 + 8) >> 3) + 0x7FFF8000);
                            if ( (char)(((v18 + 8) & 7) + 3) >= v19 && v19 )
                            {
                              __asan_report_load4(v18 + 8);
                              goto LABEL_63;
                            }
                            ++*(_DWORD *)(v18 + 8);
LABEL_78:
                            common::minet::http_client::HttpClient::onResult(*(common::minet::http_client::HttpClient *const *)(v3 + 48));
LABEL_63:
                            v20 = *(_QWORD *)(v3 + 352);
                            if ( v20 == *(_QWORD *)(v3 + 368) - 16LL )
                              goto LABEL_80;
                            if ( *(_BYTE *)(((unsigned __int64)(v20 + 8) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_load8(v20 + 8);
LABEL_80:
                              std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_pop_front_aux((std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> *const)(v3 + 336));
                              goto LABEL_68;
                            }
                            v21 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v20 + 8);
                            if ( v21 )
                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v21);
                            *(_QWORD *)(v3 + 352) += 16LL;
LABEL_68:
                            v22 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 56);
                            if ( v22 )
                              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v22);
                          }
                          __asan_report_load8(v24);
LABEL_57:
                          __asan_report_load8(v24);
LABEL_58:
                          v18 = __asan_report_store4(v24);
                          goto LABEL_59;
                        }
                        LODWORD(v2) = 0;
                        goto LABEL_82;
                      }
                      goto LABEL_54;
                    }
LABEL_53:
                    __asan_report_load8(v11);
LABEL_54:
                    __asan_report_store_n(v11, 32LL);
                    goto LABEL_55;
                  }
LABEL_52:
                  __asan_report_load_n(v11, 32LL);
                  goto LABEL_53;
                }
LABEL_51:
                __asan_report_load_n(v11, 32LL);
                goto LABEL_52;
              }
LABEL_50:
              __asan_report_load8(v11);
              goto LABEL_51;
            }
LABEL_49:
            v11 = (boost::asio::io_context *)v2;
            __asan_report_load8(v2);
            goto LABEL_50;
          }
LABEL_48:
          __asan_report_load_n(p_M_start, 32LL);
          goto LABEL_49;
        }
LABEL_47:
        __asan_report_load_n(p_M_start, 32LL);
        goto LABEL_48;
      }
    }
    __asan_report_load8(p_M_start);
    goto LABEL_47;
  }
LABEL_43:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v3 + 272),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/async_http_client_mgr.cpp",
    "update",
    145);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v3 + 272), "callback_queue_ptr is nullptr");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
LABEL_82:
  v27 = *(_QWORD *)(v3 + 384);
  v28 = *(_QWORD *)(v3 + 392);
  *(_QWORD *)(v3 + 208) = v27;
  *(_QWORD *)(v3 + 216) = v28;
  v29 = *(_OWORD *)(v3 + 400);
  *(_OWORD *)(v3 + 224) = v29;
  v30 = *(_QWORD *)(v3 + 352);
  v31 = *(_QWORD *)(v3 + 360);
  *(_QWORD *)(v3 + 272) = v30;
  *(_QWORD *)(v3 + 280) = v31;
  v32 = *(_QWORD *)(v3 + 368);
  v33 = *(_QWORD *)(v3 + 376);
  *(_QWORD *)(v3 + 288) = v32;
  *(_QWORD *)(v3 + 296) = v33;
  *(_QWORD *)(v3 + 144) = v30;
  *(_QWORD *)(v3 + 152) = v31;
  *(_QWORD *)(v3 + 160) = v32;
  *(_QWORD *)(v3 + 168) = v33;
  *(_QWORD *)(v3 + 80) = v27;
  *(_QWORD *)(v3 + 88) = v28;
  *(_OWORD *)(v3 + 96) = v29;
  *(_OWORD *)&v36._M_last = v29;
  *(_OWORD *)&v36._M_cur = *(_OWORD *)(v3 + 80);
  std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_destroy_data_aux(
    (std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> *const)(v3 + 336),
    *(std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::iterator *)(v3 + 144),
    v36);
  std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>>::~_Deque_base((std::_Deque_base<std::shared_ptr<common::minet::http_client::HttpClient>> *const)(v3 + 336));
LABEL_83:
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (unsigned int)v2;
};

// Line 165: range 000000000CBBD6D8-000000000CBBE6BA
__int64 __fastcall common::minet::http_client::HttpClientMgr::asyncHttpRequest(
        common::minet::http_client::HttpClientMgr *const this,
        common::minet::http_client::HttpRequest *req,
        common::minet::http_client::HttpClient *timeout,
        uint32_t work_thread_index,
        uint32_t type,
        void *a6)
{
  unsigned __int64 v9; // r13
  _DWORD *v10; // r12
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *p_M_finish; // rdi
  char v12; // dl
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::const_iterator v13; // rsi
  std::atomic<unsigned int> *p_client_seq; // rdi
  char v15; // dl
  unsigned __int32 v16; // eax
  char v17; // dl
  char v18; // al
  __int64 v19; // rax
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *p_callback_queue_vec; // rdi
  unsigned int v21; // ebp
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::iterator v22; // rax
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::iterator v23; // r9
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr M_node; // rdi
  unsigned __int64 v25; // rax
  char v26; // cl
  unsigned __int64 v27; // rdi
  char v28; // cl
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rdi
  char v31; // al
  char v32; // dl
  void **v33; // rdi
  char v34; // al
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rdi
  char v37; // al
  char v38; // dl
  char v39; // al
  unsigned __int64 v40; // rdi
  char v41; // al
  char v42; // dl
  void **v43; // rdi
  char v44; // al
  unsigned __int64 v45; // rdi
  char v46; // al
  char v47; // dl
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *p_is_ssl; // rdi
  const char *v49; // rsi
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v52; // rdi
  std::tuple<unsigned int const&> *v54; // [rsp+0h] [rbp-1B8h]
  common::minet::http_client::HttpRequest *reqa; // [rsp+8h] [rbp-1B0h]
  boost::asio::io_context *ioc; // [rsp+18h] [rbp-1A0h]
  uint32_t thread_idx; // [rsp+24h] [rbp-194h]
  common::minet::http_client::ResponseCallBackFunc funca; // [rsp+28h] [rbp-190h] BYREF
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> __refcount; // [rsp+48h] [rbp-170h] BYREF
  common::minet::http_client::HttpClient *v61; // [rsp+50h] [rbp-168h]
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> v62; // [rsp+58h] [rbp-160h] BYREF
  common::milog::MiLogStream v63; // [rsp+60h] [rbp-158h] BYREF
  common::milog::MiLogStream v64; // [rsp+80h] [rbp-138h] BYREF
  common::milog::MiLogStream v65; // [rsp+A0h] [rbp-118h] BYREF
  char v66[248]; // [rsp+C0h] [rbp-F8h] BYREF

  reqa = req;
  funca._M_functor._M_unused._M_object = a6;
  v9 = (unsigned __int64)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_2(192LL);
    if ( v19 )
      v9 = v19;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "7 32 1 4 __a2 48 1 4 __a2 64 4 18 unfinished_num:183 80 4 8 type:164 96 8 11 timeout:164 128 16 "
                        "14 client_ptr:203 160 16 7 __guard";
  *(_QWORD *)(v9 + 16) = common::minet::http_client::HttpClientMgr::asyncHttpRequest;
  v10 = (_DWORD *)(v9 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234753535;
  v10[536862722] = -234556924;
  v10[536862723] = -218959360;
  v10[536862724] = -219021312;
  v10[536862725] = -202178560;
  *(_QWORD *)(v9 + 96) = timeout;
  *(_DWORD *)(v9 + 80) = type;
  p_M_finish = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&this->callback_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_26;
  }
  p_M_finish = &this->callback_queue_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_finish);
LABEL_27:
    common::milog::MiLogStream::MiLogStream(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/async_http_client_mgr.cpp",
      "asyncHttpRequest",
      169);
    p_callback_queue_vec = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&this->callback_queue_vec_._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_callback_queue_vec);
    }
    else
    {
      p_callback_queue_vec = &this->callback_queue_vec_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_ >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(
          &v65,
          "http_client_mgr work_thread_index=%u exceed callback queue_size=%lu",
          work_thread_index,
          this->callback_queue_vec_._M_impl._M_finish - this->callback_queue_vec_._M_impl._M_start);
LABEL_32:
        common::milog::MiLogStream::~MiLogStream(&v65);
        v21 = -1;
        goto LABEL_155;
      }
    }
    __asan_report_load8(p_callback_queue_vec);
    goto LABEL_32;
  }
  if ( work_thread_index >= (unsigned __int64)(this->callback_queue_vec_._M_impl._M_finish
                                             - this->callback_queue_vec_._M_impl._M_start) )
    goto LABEL_27;
  v12 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v12 && v12 )
  {
    __asan_report_load4(&this->status_);
    goto LABEL_34;
  }
  if ( this->status_._M_i != STATUS_START_3 )
  {
LABEL_34:
    common::milog::MiLogStream::MiLogStream(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client_mgr.cpp",
      "asyncHttpRequest",
      174);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, "status_ not Start");
    common::milog::MiLogStream::~MiLogStream(&v65);
    v21 = -1;
    goto LABEL_155;
  }
  if ( &this->capacity_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::find(
                                                                                           &this->capacity_map_._M_t,
                                                                                           (const unsigned int *)(v9 + 80))._M_node )
    *(_DWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 64) = 0;
  v13._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)*(unsigned int *)(v9 + 80);
  if ( common::minet::http_client::HttpClientMgr::findUnfinishedNum(this, (uint32_t)v13._M_node, (int32_t *)(v9 + 64)) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/async_http_client_mgr.cpp",
      "asyncHttpRequest",
      186);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, "findUnfinishedNum type:");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, *(_DWORD *)(v9 + 80));
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, " fails");
    common::milog::MiLogStream::~MiLogStream(&v65);
    v21 = -1;
    goto LABEL_155;
  }
  if ( *(int *)(v9 + 64) <= 0 )
    goto LABEL_12;
  timeout = (common::minet::http_client::HttpClient *)&this->capacity_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->capacity_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    v25 = __asan_report_load8(&this->capacity_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_47;
  }
  v22._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_lower_bound(
                  &this->capacity_map_._M_t,
                  (std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> > >::_Link_type)this->capacity_map_._M_t._M_impl._M_header._M_parent,
                  &this->capacity_map_._M_t._M_impl._M_header,
                  (const unsigned int *)(v9 + 80))._M_node;
  M_node = v22._M_node;
  v13._M_node = v22._M_node;
  if ( timeout == (common::minet::http_client::HttpClient *)v22._M_node )
  {
LABEL_41:
    funca._M_manager = (std::_Function_base::_Manager_type)(v9 + 80);
    M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<unsigned int const&>,std::tuple<>>(
               &this->capacity_map_._M_t,
               v13,
               &std::piecewise_construct,
               (std::tuple<unsigned int const&> *)&funca._M_manager,
               (std::tuple<> *)(v9 + 48),
               (const std::piecewise_construct_t *)v23._M_node,
               v54,
               (std::tuple<> *)reqa)._M_node;
    goto LABEL_42;
  }
  v25 = (unsigned __int64)&v22._M_node[1];
  v26 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
  if ( (char)((v25 & 7) + 3) >= v26 && v26 )
  {
LABEL_47:
    v27 = v25;
    __asan_report_load4(v25);
LABEL_48:
    __asan_report_load4(v27);
    goto LABEL_49;
  }
  if ( *(_DWORD *)(v9 + 80) < v13._M_node[1]._M_color )
    goto LABEL_41;
LABEL_42:
  v27 = (unsigned __int64)(&M_node[1]._M_color + 1);
  v28 = *(_BYTE *)((v27 >> 3) + 0x7FFF8000);
  if ( (char)((v27 & 7) + 3) >= v28 && v28 )
    goto LABEL_48;
  if ( *(_DWORD *)v27 <= *(_DWORD *)(v9 + 64) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/async_http_client_mgr.cpp",
      "asyncHttpRequest",
      191);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
      v65.ostr_,
      "too many waiting http request: ");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, *(_DWORD *)(v9 + 64));
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, " type:");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, *(_DWORD *)(v9 + 80));
    common::milog::MiLogStream::~MiLogStream(&v65);
    v21 = -1;
    goto LABEL_155;
  }
LABEL_12:
  if ( *(int *)(v9 + 64) < 0 )
  {
LABEL_49:
    common::milog::MiLogStream::MiLogStream(
      &v65,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/async_http_client_mgr.cpp",
      "asyncHttpRequest",
      196);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, "type:");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, *(_DWORD *)(v9 + 80));
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, " unfinished_num:");
    v13._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)*(unsigned int *)(v9 + 64);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, (int)v13._M_node);
    common::milog::MiLogStream::~MiLogStream(&v65);
  }
  p_client_seq = &this->client_seq_;
  v15 = *(_BYTE *)(((unsigned __int64)&this->client_seq_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 104) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_store4(p_client_seq);
LABEL_51:
    __asan_report_load4(p_client_seq);
    goto LABEL_52;
  }
  v16 = _InterlockedExchangeAdd((volatile signed __int32 *)p_client_seq, 1u);
  p_client_seq = (std::atomic<unsigned int> *)&this->thread_num_;
  v17 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
    goto LABEL_51;
  thread_idx = v16 % this->thread_num_;
  ioc = &this->ioc_arr_[thread_idx];
  *(_QWORD *)(v9 + 128) = 0LL;
  *(_QWORD *)(v9 + 136) = 0LL;
  p_client_seq = (std::atomic<unsigned int> *)&reqa->is_ssl;
  if ( *(char *)(((unsigned __int64)&reqa->is_ssl >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_52:
    __asan_report_load1(p_client_seq);
    goto LABEL_53;
  }
  if ( reqa->is_ssl )
  {
    p_client_seq = (std::atomic<unsigned int> *)&common::tools::perf::MemoryPerf::is_record;
    v18 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
    if ( v18 > (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) || !v18 )
    {
      if ( common::tools::perf::MemoryPerf::is_record )
      {
        funca._M_invoker = 0LL;
        v13._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)(v9 + 32);
        std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::http_client::SslClient,common::tools::perf::allocator<common::minet::http_client::SslClient,common::minet::http_client::SslClient>,(__gnu_cxx::_Lock_policy)2>,common::minet::http_client::SslClient>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::http_client::SslClient,common::tools::perf::allocator<common::minet::http_client::SslClient,common::minet::http_client::SslClient>,(__gnu_cxx::_Lock_policy)2>,common::minet::http_client::SslClient> *)(v9 + 32));
LABEL_54:
        v29 = *(_QWORD *)(v9 + 168);
        v30 = v29 + 8;
        v31 = *(_BYTE *)(((v29 + 8) >> 3) + 0x7FFF8000);
        if ( v31 && v31 <= 3 )
        {
          __asan_report_store4(v30);
        }
        else
        {
          *(_DWORD *)(v29 + 8) = 1;
          v30 = v29 + 12;
          v32 = *(_BYTE *)(((v29 + 12) >> 3) + 0x7FFF8000);
          if ( (char)(((v29 + 12) & 7) + 3) < v32 || !v32 )
          {
            *(_DWORD *)(v29 + 12) = 1;
            if ( !*(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)v29 = &`vtable for'std::_Sp_counted_ptr_inplace<common::minet::http_client::SslClient,common::tools::perf::allocator<common::minet::http_client::SslClient,common::minet::http_client::SslClient>,(__gnu_cxx::_Lock_policy)2>
                             + 2;
              timeout = (common::minet::http_client::HttpClient *)(v29 + 16);
              if ( !common::tools::perf::MemoryPerf::is_record )
                goto LABEL_73;
              v33 = &`typeinfo for'common::minet::http_client::SslClient + 1;
              if ( !*(_BYTE *)(((unsigned __int64)(&`typeinfo for'common::minet::http_client::SslClient + 1) >> 3)
                             + 0x7FFF8000) )
              {
                v13._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)*(&`typeinfo for'common::minet::http_client::SslClient + 1);
                v33 = (void **)v13._M_node;
                v34 = *(_BYTE *)(((unsigned __int64)v13._M_node >> 3) + 0x7FFF8000);
                if ( v34 > (*(_BYTE *)(&`typeinfo for'common::minet::http_client::SslClient + 1) & 7) || !v34 )
                {
                  if ( LOBYTE(v13._M_node->_M_color) != 42 )
                  {
LABEL_64:
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)&v65,
                      (const char *)v13._M_node,
                      (const std::allocator<char> *)(v9 + 48));
                    common::tools::perf::MemoryPerfRecorder::construct(
                      &common::tools::perf::MemoryPerf::recorder,
                      (const std::string *)&v65,
                      0x2E0uLL);
                    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v65.log_ != &v65.ostr_ptr_._M_refcount )
                      operator delete(v65.log_);
LABEL_73:
                    common::minet::http_client::SslClient::SslClient(
                      (common::minet::http_client::SslClient *const)timeout,
                      this,
                      ioc,
                      thread_idx,
                      work_thread_index,
                      *(_DWORD *)(v9 + 80));
                    *(_QWORD *)(v9 + 168) = 0LL;
                    __refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v29;
                    funca._M_invoker = (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)>::_Invoker_type)timeout;
                    if ( !timeout || timeout == (common::minet::http_client::HttpClient *)-8LL )
                      goto LABEL_76;
                    goto LABEL_75;
                  }
LABEL_70:
                  ++v13._M_node;
                  goto LABEL_64;
                }
LABEL_69:
                __asan_report_load1(v33);
                goto LABEL_70;
              }
LABEL_68:
              __asan_report_load8(v33);
              goto LABEL_69;
            }
LABEL_67:
            v33 = (void **)v29;
            __asan_report_store8();
            goto LABEL_68;
          }
        }
        __asan_report_store4(v30);
        goto LABEL_67;
      }
      funca._M_invoker = 0LL;
      std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::minet::http_client::SslClient,std::allocator<common::minet::http_client::SslClient>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::minet::http_client::SslClient,std::allocator<common::minet::http_client::SslClient>,(__gnu_cxx::_Lock_policy)2> > *)(v9 + 48));
      v29 = *(_QWORD *)(v9 + 168);
      v36 = v29 + 8;
      v37 = *(_BYTE *)(((v29 + 8) >> 3) + 0x7FFF8000);
      if ( v37 && v37 <= 3 )
      {
        __asan_report_store4(v36);
      }
      else
      {
        *(_DWORD *)(v29 + 8) = 1;
        v36 = v29 + 12;
        v38 = *(_BYTE *)(((v29 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v29 + 12) & 7) + 3) < v38 || !v38 )
        {
          *(_DWORD *)(v29 + 12) = 1;
          if ( !*(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v29 = &`vtable for'std::_Sp_counted_ptr_inplace<common::minet::http_client::SslClient,std::allocator<common::minet::http_client::SslClient>,(__gnu_cxx::_Lock_policy)2>
                           + 2;
            timeout = (common::minet::http_client::HttpClient *)(v29 + 16);
            common::minet::http_client::SslClient::SslClient(
              (common::minet::http_client::SslClient *const)(v29 + 16),
              this,
              ioc,
              thread_idx,
              work_thread_index,
              *(_DWORD *)(v9 + 80));
LABEL_90:
            *(_QWORD *)(v9 + 168) = 0LL;
            __refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v29;
            funca._M_invoker = (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)>::_Invoker_type)timeout;
            if ( !timeout || timeout == (common::minet::http_client::HttpClient *)-8LL )
              goto LABEL_76;
LABEL_75:
            std::__weak_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::_M_assign(
              &timeout->_M_weak_this,
              timeout,
              &__refcount);
LABEL_76:
            *(_QWORD *)(v9 + 128) = funca._M_invoker;
            *(std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v9 + 136) = __refcount;
            goto LABEL_77;
          }
LABEL_89:
          __asan_report_store8();
          goto LABEL_90;
        }
      }
      __asan_report_store4(v36);
      goto LABEL_89;
    }
LABEL_53:
    __asan_report_load1(p_client_seq);
    goto LABEL_54;
  }
  v39 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v39 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v39 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
    goto LABEL_98;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    v61 = 0LL;
    v13._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)(v9 + 32);
    std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::http_client::HttpClient,common::tools::perf::allocator<common::minet::http_client::HttpClient,common::minet::http_client::HttpClient>,(__gnu_cxx::_Lock_policy)2>,common::minet::http_client::HttpClient>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::http_client::HttpClient,common::tools::perf::allocator<common::minet::http_client::HttpClient,common::minet::http_client::HttpClient>,(__gnu_cxx::_Lock_policy)2>,common::minet::http_client::HttpClient> *)(v9 + 32));
LABEL_98:
    v29 = *(_QWORD *)(v9 + 168);
    v40 = v29 + 8;
    v41 = *(_BYTE *)(((v29 + 8) >> 3) + 0x7FFF8000);
    if ( v41 && v41 <= 3 )
    {
      __asan_report_store4(v40);
    }
    else
    {
      *(_DWORD *)(v29 + 8) = 1;
      v40 = v29 + 12;
      v42 = *(_BYTE *)(((v29 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v29 + 12) & 7) + 3) < v42 || !v42 )
      {
        *(_DWORD *)(v29 + 12) = 1;
        if ( !*(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v29 = &`vtable for'std::_Sp_counted_ptr_inplace<common::minet::http_client::HttpClient,common::tools::perf::allocator<common::minet::http_client::HttpClient,common::minet::http_client::HttpClient>,(__gnu_cxx::_Lock_policy)2>
                         + 2;
          timeout = (common::minet::http_client::HttpClient *)(v29 + 16);
          if ( !common::tools::perf::MemoryPerf::is_record )
            goto LABEL_117;
          v43 = &`typeinfo for'common::minet::http_client::HttpClient + 1;
          if ( !*(_BYTE *)(((unsigned __int64)(&`typeinfo for'common::minet::http_client::HttpClient + 1) >> 3)
                         + 0x7FFF8000) )
          {
            v13._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)*(&`typeinfo for'common::minet::http_client::HttpClient + 1);
            v43 = (void **)v13._M_node;
            v44 = *(_BYTE *)(((unsigned __int64)v13._M_node >> 3) + 0x7FFF8000);
            if ( v44 > (*(_BYTE *)(&`typeinfo for'common::minet::http_client::HttpClient + 1) & 7) || !v44 )
            {
              if ( LOBYTE(v13._M_node->_M_color) != 42 )
              {
LABEL_108:
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)&v65,
                  (const char *)v13._M_node,
                  (const std::allocator<char> *)(v9 + 48));
                common::tools::perf::MemoryPerfRecorder::construct(
                  &common::tools::perf::MemoryPerf::recorder,
                  (const std::string *)&v65,
                  0x2C0uLL);
                if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v65.log_ != &v65.ostr_ptr_._M_refcount )
                  operator delete(v65.log_);
LABEL_117:
                common::minet::http_client::HttpClient::HttpClient(
                  timeout,
                  this,
                  ioc,
                  thread_idx,
                  work_thread_index,
                  *(_DWORD *)(v9 + 80));
                *(_QWORD *)(v9 + 168) = 0LL;
                v62._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v29;
                v61 = timeout;
                if ( !timeout || timeout == (common::minet::http_client::HttpClient *)-8LL )
                  goto LABEL_120;
                goto LABEL_119;
              }
LABEL_114:
              ++v13._M_node;
              goto LABEL_108;
            }
LABEL_113:
            __asan_report_load1(v43);
            goto LABEL_114;
          }
LABEL_112:
          __asan_report_load8(v43);
          goto LABEL_113;
        }
LABEL_111:
        v43 = (void **)v29;
        __asan_report_store8();
        goto LABEL_112;
      }
    }
    __asan_report_store4(v40);
    goto LABEL_111;
  }
  v61 = 0LL;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::minet::http_client::HttpClient,std::allocator<common::minet::http_client::HttpClient>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::minet::http_client::HttpClient,std::allocator<common::minet::http_client::HttpClient>,(__gnu_cxx::_Lock_policy)2> > *)(v9 + 48));
  v29 = *(_QWORD *)(v9 + 168);
  v45 = v29 + 8;
  v46 = *(_BYTE *)(((v29 + 8) >> 3) + 0x7FFF8000);
  if ( v46 && v46 <= 3 )
  {
    __asan_report_store4(v45);
LABEL_128:
    __asan_report_store4(v45);
    goto LABEL_129;
  }
  *(_DWORD *)(v29 + 8) = 1;
  v45 = v29 + 12;
  v47 = *(_BYTE *)(((v29 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v29 + 12) & 7) + 3) >= v47 && v47 )
    goto LABEL_128;
  *(_DWORD *)(v29 + 12) = 1;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
LABEL_129:
    __asan_report_store8();
    goto LABEL_130;
  }
  *(_QWORD *)v29 = &`vtable for'std::_Sp_counted_ptr_inplace<common::minet::http_client::HttpClient,std::allocator<common::minet::http_client::HttpClient>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  timeout = (common::minet::http_client::HttpClient *)(v29 + 16);
  common::minet::http_client::HttpClient::HttpClient(
    (common::minet::http_client::HttpClient *const)(v29 + 16),
    this,
    ioc,
    thread_idx,
    work_thread_index,
    *(_DWORD *)(v9 + 80));
LABEL_130:
  *(_QWORD *)(v9 + 168) = 0LL;
  v62._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v29;
  v61 = timeout;
  if ( !timeout || timeout == (common::minet::http_client::HttpClient *)-8LL )
    goto LABEL_120;
LABEL_119:
  std::__weak_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::_M_assign(
    &timeout->_M_weak_this,
    timeout,
    &v62);
LABEL_120:
  *(_QWORD *)(v9 + 128) = v61;
  *(std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(v9 + 136) = v62;
LABEL_77:
  v35 = *(_QWORD *)(v9 + 128);
  if ( v35 )
  {
    if ( !*(_QWORD *)(v9 + 96) )
      *(_QWORD *)(v9 + 96) = 1LL;
    common::milog::MiLogStream::MiLogStream(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/async_http_client_mgr.cpp",
      "asyncHttpRequest",
      221);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v64.ostr_, "create http_client: ");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v64.ostr_, (const void *)v35);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v64.ostr_, " is_ssl: ");
    p_is_ssl = (common::tools::StringStream<common::tools::FixedBuffer<16384> > *)&reqa->is_ssl;
    if ( *(char *)(((unsigned __int64)&reqa->is_ssl >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_load1(p_is_ssl);
    }
    else
    {
      p_is_ssl = v64.ostr_;
      if ( reqa->is_ssl )
      {
        v49 = "true";
        goto LABEL_137;
      }
    }
    v49 = "false";
LABEL_137:
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(p_is_ssl, v49);
    common::milog::MiLogStream::~MiLogStream(&v64);
    if ( *(__int64 *)(v9 + 96) > 10 )
      v50 = (unsigned __int64)"\n";
    else
      v50 = v9 + 96;
    if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v50);
    }
    else
    {
      LODWORD(timeout) = 1000 * *(_DWORD *)v50;
      if ( !*(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
      {
        v51 = *(_QWORD *)v35 + 16LL;
        if ( !*(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
        {
          v29 = *(_QWORD *)(*(_QWORD *)v35 + 16LL);
          std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function(
            (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v65,
            (const std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *)funca._M_functor._M_unused._M_object);
LABEL_149:
          v21 = ((__int64 (__fastcall *)(unsigned __int64, common::minet::http_client::HttpRequest *, _QWORD, common::milog::MiLogStream *))v29)(
                  v35,
                  reqa,
                  (unsigned int)timeout,
                  &v65);
          if ( v65.ostr_ptr_._M_refcount._M_pi )
            ((void (__fastcall *)(common::milog::MiLogStream *, common::milog::MiLogStream *, __int64))v65.ostr_ptr_._M_refcount._M_pi)(
              &v65,
              &v65,
              3LL);
          if ( v21 )
          {
            common::milog::MiLogStream::MiLogStream(
              &v65,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "src/async_http_client_mgr.cpp",
              "asyncHttpRequest",
              226);
            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v65.ostr_, "request fails");
            common::milog::MiLogStream::~MiLogStream(&v65);
            v21 = -1;
          }
          goto LABEL_153;
        }
LABEL_148:
        __asan_report_load8(v51);
        goto LABEL_149;
      }
    }
    v51 = v35;
    __asan_report_load8(v35);
    goto LABEL_148;
  }
  common::milog::MiLogStream::MiLogStream(
    &v63,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/async_http_client_mgr.cpp",
    "asyncHttpRequest",
    214);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v63.ostr_, "client_ptr is null");
  common::milog::MiLogStream::~MiLogStream(&v63);
  v21 = -1;
LABEL_153:
  v52 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v9 + 136);
  if ( v52 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v52);
LABEL_155:
  if ( v66 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v21;
};

// Line 233: range 000000000CBB9858-000000000CBBA139
__int64 __fastcall common::minet::http_client::HttpClientMgr::asyncHttpRequest(
        common::minet::http_client::HttpClientMgr *const this,
        std::string *url,
        time_t timeout,
        uint32_t work_thread_index,
        uint32_t type,
        void *a6)
{
  unsigned __int64 v6; // r12
  char *v7; // r14
  unsigned __int64 v8; // r13
  _DWORD *v9; // rbp
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *p_M_finish; // rdi
  char v11; // dl
  __int64 v12; // rax
  char *v13; // rdi
  unsigned int v14; // r12d
  std::string::size_type M_string_length; // rax
  std::string::pointer M_p; // rsi
  char **p_cur; // rdi
  char *cur; // rdi
  size_t v19; // r14
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  char *v22; // rdi
  char *v23; // rdi
  char *v24; // rdi
  char *v25; // rdi
  char *v26; // rdi
  char *v27; // rdi
  char *v28; // rdi
  char *v29; // rdi
  char *v30; // rdi
  char *v31; // rdi
  char *v32; // rdi
  char *v33; // rdi
  char *v34; // rdi
  common::minet::http_client::ResponseCallBackFunc funca; // [rsp+18h] [rbp-340h] BYREF
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v40; // [rsp+38h] [rbp-320h]
  char v41[792]; // [rsp+40h] [rbp-318h] BYREF

  v6 = (unsigned __int64)this;
  v7 = (char *)url;
  funca._M_functor._M_unused._M_object = a6;
  v8 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_4(736LL);
    if ( v12 )
      v8 = v12;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "3 32 32 9 proto:256 96 240 11 request:255 400 264 14 url_parser:247";
  *(_QWORD *)(v8 + 16) = common::minet::http_client::HttpClientMgr::asyncHttpRequest;
  v9 = (_DWORD *)(v8 >> 3);
  v9[536862720] = -235802127;
  v9[536862722] = -218959118;
  v9[536862730] = -219021312;
  v9[536862731] = -218959118;
  v9[536862732] = 62194;
  v9[536862740] = -218103808;
  v9[536862741] = -202116109;
  v9[536862742] = -202116109;
  p_M_finish = &this->callback_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((v6 + 472) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_14;
  }
  p_M_finish = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *)(v6 + 464);
  if ( *(_BYTE *)(((v6 + 464) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(p_M_finish);
LABEL_15:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&funca._M_functor._M_pod_data[8],
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/async_http_client_mgr.cpp",
      "asyncHttpRequest",
      237);
    v13 = (char *)(v6 + 472);
    if ( *(_BYTE *)(((v6 + 472) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v13);
    }
    else
    {
      v13 = (char *)(v6 + 464);
      if ( !*(_BYTE *)(((v6 + 464) >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&funca._M_functor._M_pod_data[8],
          "http_client_mgr work_thread_index=%u exceed callback queue_size=%lu",
          work_thread_index,
          (__int64)(*(_QWORD *)(v6 + 472) - *(_QWORD *)(v6 + 464)) >> 3);
LABEL_20:
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&funca._M_functor._M_pod_data[8]);
        v14 = -1;
        goto LABEL_74;
      }
    }
    __asan_report_load8(v13);
    goto LABEL_20;
  }
  if ( work_thread_index >= (unsigned __int64)((__int64)(*(_QWORD *)(v6 + 472) - *(_QWORD *)(v6 + 464)) >> 3) )
    goto LABEL_15;
  v11 = *(_BYTE *)(((v6 + 24) >> 3) + 0x7FFF8000);
  if ( (char)(((v6 + 24) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(v6 + 24);
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v6 + 24) != 2 )
  {
LABEL_22:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&funca._M_functor._M_pod_data[8],
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client_mgr.cpp",
      "asyncHttpRequest",
      242);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v40, "status_ not Start");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&funca._M_functor._M_pod_data[8]);
    v14 = -1;
    goto LABEL_74;
  }
  LUrlParser::clParseURL::ParseURL((LUrlParser::clParseURL_0 *)(v8 + 400), url);
  if ( *(_DWORD *)(v8 + 400) )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&funca._M_functor._M_pod_data[8],
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/async_http_client_mgr.cpp",
      "asyncHttpRequest",
      250);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v40, "url invalid: ");
    v6 = (unsigned __int64)v40;
    if ( *(_BYTE *)(((unsigned __int64)&url->_M_string_length >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&url->_M_string_length);
    }
    else
    {
      M_string_length = url->_M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)url >> 3) + 0x7FFF8000) )
      {
        M_p = url->_M_dataplus._M_p;
        if ( !*(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
        {
          v7 = v40->buffer_.data_ + 0x4000;
          p_cur = &v40->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v40->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            cur = v40->buffer_.cur_;
            v19 = (int)v7 - (int)cur;
            if ( M_string_length <= v19 )
              v19 = M_string_length;
            memcpy(cur, M_p, v19);
            *(_QWORD *)(v6 + 8) += v19;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&funca._M_functor._M_pod_data[8]);
            v14 = -1;
            goto LABEL_58;
          }
          goto LABEL_33;
        }
LABEL_32:
        p_cur = (char **)v6;
        __asan_report_load8(v6);
LABEL_33:
        __asan_report_load8(p_cur);
        goto LABEL_34;
      }
    }
    __asan_report_load8(url);
    goto LABEL_32;
  }
  *(_QWORD *)(v8 + 96) = v8 + 112;
  *(_QWORD *)(v8 + 104) = 0LL;
  *(_BYTE *)(v8 + 112) = 0;
  *(_QWORD *)(v8 + 128) = v8 + 144;
  *(_QWORD *)(v8 + 136) = 0LL;
  *(_BYTE *)(v8 + 144) = 0;
  *(_QWORD *)(v8 + 160) = v8 + 176;
  *(_QWORD *)(v8 + 168) = 0LL;
  *(_BYTE *)(v8 + 176) = 0;
  *(_DWORD *)(v8 + 200) = 0;
  *(_QWORD *)(v8 + 208) = 0LL;
  *(_QWORD *)(v8 + 216) = v8 + 200;
  *(_QWORD *)(v8 + 224) = v8 + 200;
  *(_QWORD *)(v8 + 232) = 0LL;
  *(_DWORD *)(v8 + 248) = 0;
  *(_QWORD *)(v8 + 256) = 0LL;
  *(_QWORD *)(v8 + 264) = v8 + 248;
  *(_QWORD *)(v8 + 272) = v8 + 248;
  *(_QWORD *)(v8 + 280) = 0LL;
  *(_QWORD *)(v8 + 288) = v8 + 304;
  *(_QWORD *)(v8 + 296) = 0LL;
  *(_BYTE *)(v8 + 304) = 0;
  *(_DWORD *)(v8 + 320) = 0;
  *(_DWORD *)(v8 + 324) = 0;
  *(_BYTE *)(v8 + 328) = 0;
  *(_QWORD *)(v8 + 32) = v8 + 48;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_BYTE *)(v8 + 48) = 0;
  if ( *(_QWORD *)(v8 + 416) )
    std::string::_M_assign(v8 + 32, v8 + 408);
LABEL_34:
  *(_BYTE *)(v8 + 328) = (unsigned int)std::string::compare(v8 + 32, "https") == 0;
  std::string::_M_assign(v8 + 96, v8 + 440);
  std::string::_M_assign(v8 + 160, v8 + 504);
  common::minet::http_client::HttpUtils::parseParamStr(
    (const std::string *)(v8 + 536),
    (std::map<std::string,std::string> *)(v8 + 240));
  v20 = *(_QWORD *)(v8 + 168);
  if ( v20 )
    v20 = 0LL;
  std::string::_M_replace(v8 + 160, 0LL, v20, "/", 1LL);
  if ( *(_QWORD *)(v8 + 480) )
  {
    std::string::_M_assign(v8 + 128, v8 + 472);
  }
  else if ( *(_BYTE *)(v8 + 328) )
  {
    std::string::_M_replace(v8 + 128, 0LL, *(_QWORD *)(v8 + 136), "443", 3LL);
  }
  else
  {
    std::string::_M_replace(v8 + 128, 0LL, *(_QWORD *)(v8 + 136), "80", 2LL);
  }
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    v21 = v6;
    __asan_report_load8(v6);
    goto LABEL_45;
  }
  v21 = *(_QWORD *)v6 + 64LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load8(v21);
    goto LABEL_46;
  }
  v7 = *(char **)(*(_QWORD *)v6 + 64LL);
  std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function(
    (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&funca._M_functor._M_pod_data[8],
    (const std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *)funca._M_functor._M_unused._M_object);
LABEL_46:
  v14 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, time_t, _QWORD, _QWORD, char *))v7)(
          v6,
          v8 + 96,
          timeout,
          work_thread_index,
          type,
          &funca._M_functor._M_pod_data[8]);
  if ( funca._M_invoker )
    ((void (__fastcall *)(char *, char *, __int64))funca._M_invoker)(
      &funca._M_functor._M_pod_data[8],
      &funca._M_functor._M_pod_data[8],
      3LL);
  v22 = *(char **)(v8 + 32);
  if ( v22 != (char *)(v8 + 48) )
    operator delete(v22);
  v23 = *(char **)(v8 + 288);
  if ( v23 != (char *)(v8 + 304) )
    operator delete(v23);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v8 + 240),
    *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v8 + 256));
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v8 + 192),
    *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v8 + 208));
  v24 = *(char **)(v8 + 160);
  if ( v24 != (char *)(v8 + 176) )
    operator delete(v24);
  v25 = *(char **)(v8 + 128);
  if ( v25 != (char *)(v8 + 144) )
    operator delete(v25);
  v26 = *(char **)(v8 + 96);
  if ( v26 != (char *)(v8 + 112) )
    operator delete(v26);
LABEL_58:
  v27 = *(char **)(v8 + 632);
  if ( v27 != (char *)(v8 + 648) )
    operator delete(v27);
  v28 = *(char **)(v8 + 600);
  if ( v28 != (char *)(v8 + 616) )
    operator delete(v28);
  v29 = *(char **)(v8 + 568);
  if ( v29 != (char *)(v8 + 584) )
    operator delete(v29);
  v30 = *(char **)(v8 + 536);
  if ( v30 != (char *)(v8 + 552) )
    operator delete(v30);
  v31 = *(char **)(v8 + 504);
  if ( v31 != (char *)(v8 + 520) )
    operator delete(v31);
  v32 = *(char **)(v8 + 472);
  if ( v32 != (char *)(v8 + 488) )
    operator delete(v32);
  v33 = *(char **)(v8 + 440);
  if ( v33 != (char *)(v8 + 456) )
    operator delete(v33);
  v34 = *(char **)(v8 + 408);
  if ( v34 != (char *)(v8 + 424) )
    operator delete(v34);
LABEL_74:
  if ( v41 == (char *)v8 )
  {
    *(_DWORD *)((v8 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8058) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v14;
};

// Line 293: range 000000000CBBAD8C-000000000CBBB818
void __fastcall common::minet::http_client::HttpClientMgr::iosThreadHandler(
        common::minet::http_client::HttpClientMgr *const this,
        uint32_t thread_idx)
{
  unsigned __int64 p_status; // rbp
  unsigned __int64 impl; // r12
  boost::asio::io_context *v4; // r13
  unsigned __int64 v6; // rax
  char *v7; // rbx
  unsigned __int64 v8; // r15
  char v9; // al
  char v10; // dl
  __int64 v11; // rax
  std::string::size_type M_string_length; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  char v15; // dl
  char v16; // dl
  unsigned __int64 v17; // rdx
  unsigned __int64 p_impl; // rdi
  char v19; // dl
  pthread_t v20; // rax
  uint32_t v21; // ecx
  boost::asio::io_context::impl_type **v22; // rdi
  volatile signed __int64 *v23; // rdi
  char v24; // dl
  char v25; // dl
  boost::asio::io_context::impl_type **v26; // rdi
  __int64 v27; // rax
  boost::asio::detail::scheduler *v28; // rdi
  volatile signed __int64 *p_M_i; // rax
  __m128i si128; // [rsp+0h] [rbp-168h] BYREF
  uint32_t thread_idxa; // [rsp+14h] [rbp-154h]
  char *v32; // [rsp+18h] [rbp-150h]
  char *v33; // [rsp+20h] [rbp-148h]
  std::string v34; // [rsp+30h] [rbp-138h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-118h] BYREF
  char v36[248]; // [rsp+70h] [rbp-F8h] BYREF

  thread_idxa = thread_idx;
  v32 = v36;
  v33 = v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_2(192LL);
    if ( v14 )
      v32 = (char *)v14;
  }
  v6 = (unsigned __int64)v32;
  v7 = v32 + 192;
  *(_QWORD *)v32 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 16 14 work_guard:316 64 16 4 lock 96 64 1 e";
  *(_QWORD *)(v6 + 16) = common::minet::http_client::HttpClientMgr::iosThreadHandler;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -219021312;
  *(_DWORD *)(v8 + 2147450888) = -219021312;
  *(_DWORD *)(v8 + 2147450900) = -202116109;
  v9 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_load4(&this->thread_num_);
LABEL_14:
    common::milog::MiLogStream::MiLogStream(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/async_http_client_mgr.cpp",
      "iosThreadHandler",
      296);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, "invalid thread_idx:");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, thread_idxa);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, ", thread_num_:");
    v15 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 96) & 7) + 3) < v15 || !v15 )
    {
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, this->thread_num_);
      common::milog::MiLogStream::~MiLogStream(&v35);
      goto LABEL_91;
    }
    __asan_report_load4(&this->thread_num_);
    goto LABEL_18;
  }
  if ( this->thread_num_ <= thread_idxa )
    goto LABEL_14;
  p_status = (unsigned __int64)&this->status_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v10 && v10 )
  {
LABEL_18:
    __asan_report_load4(p_status);
    goto LABEL_19;
  }
  if ( this->status_._M_i )
  {
    impl = (unsigned __int64)&v35;
    common::milog::MiLogStream::MiLogStream(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/async_http_client_mgr.cpp",
      "iosThreadHandler",
      304);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, "start thread:");
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, thread_idxa);
    common::milog::MiLogStream::~MiLogStream(&v35);
    common::milog::MiLogStream::MiLogStream(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/async_http_client_mgr.cpp",
      "iosThreadHandler",
      305);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, "[THREAD] tid:");
    v11 = syscall(186LL);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, v11);
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, " async http thread: ");
    v4 = (boost::asio::io_context *)thread_idxa;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, thread_idxa);
    common::milog::MiLogStream::~MiLogStream(&v35);
    __gnu_cxx::__to_xstring<std::string,char>(
      &v34,
      (int (*)(char *, std::size_t, const char *, ___va_list_tag *))&vsnprintf,
      0x10uLL,
      "%u",
      thread_idxa);
    M_string_length = v34._M_string_length;
    if ( v34._M_string_length )
      M_string_length = 0LL;
    v13 = std::string::_M_replace(&v34, 0LL, M_string_length, "http:", 5LL);
    goto LABEL_23;
  }
LABEL_19:
  common::milog::MiLogStream::MiLogStream(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/async_http_client_mgr.cpp",
    "iosThreadHandler",
    301);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, "invalid status_:");
  v16 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) < v16 || !v16 )
  {
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, this->status_._M_i);
    common::milog::MiLogStream::~MiLogStream(&v35);
    goto LABEL_91;
  }
  v13 = __asan_report_load4(&this->status_);
LABEL_23:
  v35.log_ = (common::milog::MiLog *)&v35.ostr_ptr_._M_refcount;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
    v13 = __asan_report_load8(v13);
  }
  else
  {
    v17 = v13 + 16;
    if ( *(_QWORD *)v13 != v13 + 16 )
    {
      v35.log_ = *(common::milog::MiLog **)v13;
      p_impl = v13 + 16;
      if ( !*(_BYTE *)(((v13 + 16) >> 3) + 0x7FFF8000) )
      {
        v35.ostr_ptr_._M_refcount._M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v13 + 16);
        goto LABEL_27;
      }
LABEL_40:
      __asan_report_load8(p_impl);
      goto LABEL_41;
    }
  }
  p_impl = v17;
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v17 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v17 & 7)
    || *(_BYTE *)(((v13 + 31) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v13 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v13 + 31) & 7) )
  {
    __asan_report_load_n(v17, 16LL);
    goto LABEL_40;
  }
  *(__m128i *)&v35.ostr_ptr_._M_refcount._M_pi = _mm_loadu_si128((const __m128i *)(v13 + 16));
LABEL_27:
  p_impl = v13 + 8;
  if ( *(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(p_impl);
LABEL_42:
    __asan_report_store1(p_impl);
    goto LABEL_43;
  }
  v35.ostr_ptr_._M_ptr = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)(v13 + 8);
  *(_QWORD *)v13 = v17;
  *(_QWORD *)(v13 + 8) = 0LL;
  p_impl = v13 + 16;
  v19 = *(_BYTE *)(((v13 + 16) >> 3) + 0x7FFF8000);
  if ( v19 <= (char)((v13 + 16) & 7) && v19 )
    goto LABEL_42;
  *(_BYTE *)(v13 + 16) = 0;
  v20 = pthread_self();
  pthread_setname_np(v20, (const char *)v35.log_);
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v35.log_ != &v35.ostr_ptr_._M_refcount )
    operator delete(v35.log_);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v34._M_dataplus._M_p != &v34._anon_0 )
    operator delete(v34._M_dataplus._M_p);
  v21 = thread_idxa;
  *(uint32_t *)((char *)&common::minet::http_client::HttpClientMgr::cur_thread_idx + __readfsqword(0)) = thread_idxa;
  v4 = &this->ioc_arr_[v21];
  while ( 1 )
  {
    p_impl = p_status;
    v25 = *(_BYTE *)((p_status >> 3) + 0x7FFF8000);
    if ( (char)((p_status & 7) + 3) >= v25 && v25 )
    {
LABEL_43:
      __asan_report_load4(p_impl);
LABEL_44:
      __asan_report_load8(p_impl);
LABEL_45:
      __asan_report_store8();
LABEL_46:
      __asan_report_load8(p_impl);
      goto LABEL_47;
    }
    if ( *(_DWORD *)p_status != 2 )
      goto LABEL_90;
    *((_QWORD *)v7 - 20) = v4;
    *(v7 - 152) = 1;
    p_impl = (unsigned __int64)&v4->impl_;
    if ( *(_BYTE *)(((unsigned __int64)&v4->impl_ >> 3) + 0x7FFF8000) )
      goto LABEL_44;
    p_impl = (unsigned __int64)&v4->impl_->outstanding_work_;
    if ( *(_BYTE *)((p_impl >> 3) + 0x7FFF8000) )
      goto LABEL_45;
    _InterlockedAdd64(&v4->impl_->outstanding_work_._M_i, 1uLL);
    *((_DWORD *)v7 - 32) = 0;
    *(v7 - 124) = 0;
    *((_QWORD *)v7 - 15) = &boost::system::detail::cat_holder<void>::system_category_instance;
    p_impl = (unsigned __int64)&v4->impl_;
    if ( *(_BYTE *)(((unsigned __int64)&v4->impl_ >> 3) + 0x7FFF8000) )
      goto LABEL_46;
    boost::asio::detail::scheduler::run(v4->impl_, (boost::system::error_code *)v7 - 8);
LABEL_47:
    if ( *((_DWORD *)v7 - 32) )
    {
      si128 = _mm_load_si128((const __m128i *)v7 - 8);
      std::runtime_error::runtime_error((std::runtime_error *)(v7 - 96), byte_1A1CDB20);
      *((_QWORD *)v7 - 12) = &`vtable for'boost::system::system_error + 2;
      *((__m128i *)v7 - 5) = _mm_load_si128(&si128);
      *((_QWORD *)v7 - 8) = v7 - 48;
      *((_QWORD *)v7 - 7) = 0LL;
      *(v7 - 48) = 0;
      __asan_handle_no_return(v7 - 96);
      boost::throw_exception<boost::system::system_error>((const boost::system::system_error *)(v7 - 96));
    }
    v22 = &this->ioc_arr_[thread_idxa].impl_;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v22);
LABEL_68:
      __asan_report_load1(v22);
      goto LABEL_69;
    }
    impl = (unsigned __int64)this->ioc_arr_[thread_idxa].impl_;
    si128.m128i_i64[0] = impl + 48;
    v22 = (boost::asio::io_context::impl_type **)(impl + 96);
    if ( *(char *)(((impl + 96) >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_68;
    if ( !*(_BYTE *)(impl + 96) )
    {
      *(v7 - 120) = 0;
      goto LABEL_52;
    }
LABEL_69:
    pthread_mutex_lock((pthread_mutex_t *)(impl + 56));
    *(v7 - 120) = 1;
LABEL_52:
    if ( *(char *)(((impl + 232) >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_load1(impl + 232);
    }
    else
    {
      impl = *(unsigned __int8 *)(impl + 232);
      if ( !*(v7 - 120) )
        goto LABEL_54;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(si128.m128i_i64[0] + 8));
LABEL_54:
    if ( !(_BYTE)impl )
      goto LABEL_55;
    v26 = &this->ioc_arr_[thread_idxa].impl_;
    if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v26);
LABEL_80:
      __asan_report_load1(v26);
LABEL_81:
      pthread_mutex_lock((pthread_mutex_t *)(impl + 56));
      *(v7 - 120) = 1;
      goto LABEL_76;
    }
    impl = (unsigned __int64)this->ioc_arr_[thread_idxa].impl_;
    si128.m128i_i64[0] = impl + 48;
    v26 = (boost::asio::io_context::impl_type **)(impl + 96);
    if ( *(char *)(((impl + 96) >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_80;
    if ( *(_BYTE *)(impl + 96) )
      goto LABEL_81;
    *(v7 - 120) = 0;
LABEL_76:
    if ( *(char *)(((impl + 232) >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store1(impl + 232);
      goto LABEL_83;
    }
    *(_BYTE *)(impl + 232) = 0;
    if ( *(v7 - 120) )
      pthread_mutex_unlock((pthread_mutex_t *)(si128.m128i_i64[0] + 8));
LABEL_55:
    if ( !*(v7 - 152) )
      goto LABEL_56;
LABEL_83:
    v27 = *((_QWORD *)v7 - 20);
    if ( *(_BYTE *)(((unsigned __int64)(v27 + 8) >> 3) + 0x7FFF8000) )
      break;
    v28 = *(boost::asio::detail::scheduler **)(v27 + 8);
    p_M_i = &v28->outstanding_work_._M_i;
    if ( *(_BYTE *)(((unsigned __int64)&v28->outstanding_work_ >> 3) + 0x7FFF8000) )
      goto LABEL_88;
    if ( _InterlockedExchangeAdd64(p_M_i, 0xFFFFFFFFFFFFFFFFLL) == 1 )
      boost::asio::detail::scheduler::stop(v28);
LABEL_56:
    v23 = (volatile signed __int64 *)p_status;
    v24 = *(_BYTE *)((p_status >> 3) + 0x7FFF8000);
    if ( (char)((p_status & 7) + 3) >= v24 && v24 )
      goto LABEL_89;
    *(_DWORD *)p_status = *(_DWORD *)p_status;
    _mm_mfence();
  }
  p_M_i = (volatile signed __int64 *)__asan_report_load8(v27 + 8);
LABEL_88:
  v23 = p_M_i;
  __asan_report_store8();
LABEL_89:
  __asan_report_load4(v23);
LABEL_90:
  common::milog::MiLogStream::MiLogStream(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/async_http_client_mgr.cpp",
    "iosThreadHandler",
    329);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, "stop thread:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v35.ostr_, thread_idxa);
  common::milog::MiLogStream::~MiLogStream(&v35);
LABEL_91:
  if ( v33 == v32 )
  {
    *(_QWORD *)(v8 + 2147450880) = 0LL;
    *(_DWORD *)(v8 + 2147450888) = 0;
    *(_DWORD *)(v8 + 2147450900) = 0;
  }
  else
  {
    *(_QWORD *)v32 = 1172321806LL;
    *(_QWORD *)(v8 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v8 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v8 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 334: range 000000000CBBD106-000000000CBBD6D3
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::minet::http_client::HttpClientMgr::finishHttpClient(
        common::minet::http_client::HttpClientMgr *const this,
        common::minet::http_client::HttpClientPtr client_ptr)
{
  unsigned int v2; // r12d
  int v3; // r13d
  std::__shared_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  char v6; // cl
  __int64 v7; // rdx
  std::__shared_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::element_type *v8; // rdi
  char v9; // al
  std::atomic<common::minet::http_client::HttpClientMgr::Status> *v10; // rdi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *p_M_finish; // rax
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *p_callback_queue_vec; // rcx
  std::atomic<common::minet::http_client::HttpClientMgr::Status> *p_status; // rdx
  char v14; // cl
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *v16; // rdi
  pthread_mutex_t *v17; // rdi
  __int64 align; // rbp
  pthread_mutex_t *v19; // r12
  __int64 v20; // rdi
  char v21; // dl
  unsigned int v22; // edx
  int (***v23)(...); // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  std::__weak_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::element_type *v27; // rax
  volatile signed __int32 *v28; // rdx
  std::enable_shared_from_this<common::minet::http_client::HttpClient> *v29; // rdi
  char v30; // dl
  char v31; // cl
  common::milog::MiLogStream v32[2]; // [rsp+0h] [rbp-48h] BYREF

  common::milog::MiLogStream::MiLogStream(
    v32,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/async_http_client_mgr.cpp",
    "finishHttpClient",
    335);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v32[0].ostr_, "finishHttpClient, addr=");
  if ( *(_BYTE *)(((unsigned __int64)client_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(client_ptr._M_ptr);
    goto LABEL_18;
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    v32[0].ostr_,
    client_ptr._M_ptr->_vptr_HttpClient);
  common::milog::MiLogStream::~MiLogStream(v32);
  if ( *(_BYTE *)(((unsigned __int64)client_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    M_ptr = client_ptr._M_ptr;
    __asan_report_load8(client_ptr._M_ptr);
LABEL_19:
    __asan_report_load4(M_ptr);
    goto LABEL_20;
  }
  M_ptr = (std::__shared_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::element_type *)((char *)client_ptr._M_ptr->_vptr_HttpClient + 700);
  v6 = *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000);
  if ( (char)((((__int64)client_ptr._M_ptr->_vptr_HttpClient - 68) & 7) + 3) >= v6 && v6 )
    goto LABEL_19;
  common::minet::http_client::HttpClientMgr::subUnfinishedNum(
    this,
    *((_DWORD *)client_ptr._M_ptr->_vptr_HttpClient + 175));
  if ( *(_BYTE *)(((unsigned __int64)client_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    v8 = client_ptr._M_ptr;
    __asan_report_load8(client_ptr._M_ptr);
LABEL_21:
    p_M_finish = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>>::pointer *)__asan_report_load4(v8);
    goto LABEL_22;
  }
  client_ptr._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)client_ptr._M_ptr->_vptr_HttpClient;
  v8 = (std::__shared_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::element_type *)(client_ptr._M_ptr->_vptr_HttpClient + 87);
  v9 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_21;
  v2 = *(_DWORD *)(v7 + 696);
  v10 = (std::atomic<common::minet::http_client::HttpClientMgr::Status> *)v2;
  p_M_finish = &this->callback_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_finish);
    goto LABEL_23;
  }
  p_callback_queue_vec = &this->callback_queue_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_callback_queue_vec);
LABEL_24:
    common::milog::MiLogStream::MiLogStream(
      v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/async_http_client_mgr.cpp",
      "finishHttpClient",
      343);
    v16 = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::http_client::HttpClient> >>> *)&this->callback_queue_vec_._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v16);
    }
    else
    {
      v16 = &this->callback_queue_vec_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->callback_queue_vec_ >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(
          v32,
          "http_client_mgr work_thread_index=%u exceed callback queue_size=%lu",
          v2,
          this->callback_queue_vec_._M_impl._M_finish - this->callback_queue_vec_._M_impl._M_start);
LABEL_29:
        common::milog::MiLogStream::~MiLogStream(v32);
        return 0xFFFFFFFFLL;
      }
    }
    __asan_report_load8(v16);
    goto LABEL_29;
  }
  if ( v2 >= (unsigned __int64)(this->callback_queue_vec_._M_impl._M_finish - this->callback_queue_vec_._M_impl._M_start) )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)(v7 + 424) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7 + 424);
LABEL_31:
    v10 = p_status;
    __asan_report_load4(p_status);
    goto LABEL_32;
  }
  if ( !*(_QWORD *)(v7 + 424) )
    return 0LL;
  p_status = &this->status_;
  v14 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 24) & 7) + 3) >= v14 && v14 )
    goto LABEL_31;
  if ( this->status_._M_i != STATUS_START_3 )
    return 0LL;
LABEL_32:
  v17 = (pthread_mutex_t *)&this->callback_queue_vec_._M_impl._M_start[(_QWORD)v10];
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v17);
    goto LABEL_62;
  }
  align = v17->__align;
  v19 = (pthread_mutex_t *)(v17->__align + 88);
  if ( &_pthread_key_create )
  {
    v17 = (pthread_mutex_t *)(v17->__align + 88);
    v3 = pthread_mutex_lock(v17);
    if ( v3 )
    {
LABEL_62:
      __asan_handle_no_return(v17);
      std::__throw_system_error(v3);
    }
  }
  v20 = align + 72;
  if ( *(_BYTE *)(((unsigned __int64)(align + 72) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v20);
    goto LABEL_64;
  }
  v20 = align + 40;
  if ( *(_BYTE *)(((unsigned __int64)(align + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(v20);
    goto LABEL_65;
  }
  v20 = align + 48;
  if ( *(_BYTE *)(((unsigned __int64)(align + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_65:
    __asan_report_load8(v20);
    goto LABEL_66;
  }
  v20 = align + 56;
  if ( *(_BYTE *)(((unsigned __int64)(align + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_load8(v20);
    goto LABEL_67;
  }
  v20 = align + 32;
  if ( *(_BYTE *)(((unsigned __int64)(align + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8(v20);
    goto LABEL_68;
  }
  v20 = align + 16;
  if ( *(_BYTE *)(((unsigned __int64)(align + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_68:
    __asan_report_load8(v20);
LABEL_69:
    __asan_report_load4(v20);
    goto LABEL_70;
  }
  v20 = align + 80;
  v21 = *(_BYTE *)(((unsigned __int64)(align + 80) >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_69;
  v22 = *(_DWORD *)(align + 80);
  if ( !v22
    || ((__int64)(*(_QWORD *)(align + 32) - *(_QWORD *)(align + 16)) >> 4)
     + 32 * (((__int64)(*(_QWORD *)(align + 72) - *(_QWORD *)(align + 40)) >> 3) - 1)
     + ((__int64)(*(_QWORD *)(align + 48) - *(_QWORD *)(align + 56)) >> 4) < (unsigned __int64)v22 )
  {
    v20 = align + 48;
    if ( !*(_BYTE *)(((unsigned __int64)(align + 48) >> 3) + 0x7FFF8000) )
    {
      v23 = *(int (****)(...))(align + 48);
      v24 = align + 64;
      v25 = (unsigned __int64)(align + 64) >> 3;
      if ( !*(_BYTE *)(v25 + 0x7FFF8000) )
      {
        if ( v23 == (int (***)(...))(*(_QWORD *)(align + 64) - 16LL) )
          goto LABEL_81;
        if ( !*(_BYTE *)(((unsigned __int64)client_ptr._M_ptr >> 3) + 0x7FFF8000) )
        {
          if ( !*(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            *v23 = client_ptr._M_ptr->_vptr_HttpClient;
            v26 = (__int64)&client_ptr._M_ptr->std::enable_shared_from_this<common::minet::http_client::HttpClient>;
            if ( !*(_BYTE *)(((unsigned __int64)&client_ptr._M_ptr->std::enable_shared_from_this<common::minet::http_client::HttpClient> >> 3)
                           + 0x7FFF8000) )
            {
              v27 = client_ptr._M_ptr->_M_weak_this.std::__shared_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::_M_ptr;
              v28 = (volatile signed __int32 *)(v23 + 1);
              if ( !*(_BYTE *)(((unsigned __int64)(v23 + 1) >> 3) + 0x7FFF8000) )
              {
                v23[1] = (int (**)(...))v27;
                if ( !v27 )
                {
LABEL_57:
                  *(_QWORD *)(align + 48) += 16LL;
                  goto LABEL_58;
                }
                v29 = &v27->std::enable_shared_from_this<common::minet::http_client::HttpClient>;
                if ( !&_pthread_key_create )
                  goto LABEL_77;
                v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
                {
                  _InterlockedAdd((volatile signed __int32 *)v29, 1u);
                  goto LABEL_57;
                }
LABEL_76:
                v27 = (std::__weak_ptr<common::minet::http_client::HttpClient,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(v29);
LABEL_77:
                v31 = *(_BYTE *)(((unsigned __int64)&v27->std::enable_shared_from_this<common::minet::http_client::HttpClient> >> 3)
                               + 0x7FFF8000);
                if ( (char)((((_BYTE)v27 + 8) & 7) + 3) < v31 || !v31 )
                {
                  ++LODWORD(v27->_M_weak_this._M_ptr);
                  goto LABEL_57;
                }
                __asan_report_load4(&v27->std::enable_shared_from_this<common::minet::http_client::HttpClient>);
LABEL_81:
                std::deque<std::shared_ptr<common::minet::http_client::HttpClient>>::_M_push_back_aux<std::shared_ptr<common::minet::http_client::HttpClient> const&>(
                  (std::deque<std::shared_ptr<common::minet::http_client::HttpClient>> *const)align,
                  (const std::shared_ptr<common::minet::http_client::HttpClient> *)client_ptr._M_ptr,
                  (const std::shared_ptr<common::minet::http_client::HttpClient> *)client_ptr._M_refcount._M_pi);
                goto LABEL_58;
              }
LABEL_75:
              v29 = (std::enable_shared_from_this<common::minet::http_client::HttpClient> *)v28;
              __asan_report_store8();
              goto LABEL_76;
            }
LABEL_74:
            __asan_report_load8(v26);
            goto LABEL_75;
          }
LABEL_73:
          v26 = __asan_report_store8();
          goto LABEL_74;
        }
LABEL_72:
        __asan_report_load8(client_ptr._M_ptr);
        goto LABEL_73;
      }
LABEL_71:
      __asan_report_load8(v24);
      goto LABEL_72;
    }
LABEL_70:
    v24 = __asan_report_load8(v20);
    goto LABEL_71;
  }
LABEL_58:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v19);
  return 0LL;
};

// Line 357: range 000000000CBBA8D2-000000000CBBAA87
int32_t __fastcall common::minet::http_client::HttpClientMgr::findUnfinishedNum(
        common::minet::http_client::HttpClientMgr *const this,
        uint32_t type,
        int32_t *unfinished_num)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int> >,std::_Select1st<std::pair<unsigned int const,std::atomic<int> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int> > > >::iterator v6; // rax
  char v7; // cl
  char v8; // dl
  int32_t result; // eax
  __int64 v10; // rax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-98h] BYREF
  char v12[120]; // [rsp+30h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v4 = v10;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 8 type:356";
  *(_QWORD *)(v4 + 16) = common::minet::http_client::HttpClientMgr::findUnfinishedNum;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = type;
  v6._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int>>,std::_Select1st<std::pair<unsigned int const,std::atomic<int>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int>>>>::find(
                 &this->unfinished_num_map_._M_t,
                 (const unsigned int *)(v4 + 32))._M_node;
  if ( (std::_Rb_tree_header *)v6._M_node != &this->unfinished_num_map_._M_t._M_impl.std::_Rb_tree_header )
  {
    v7 = *(_BYTE *)(((unsigned __int64)(&v6._M_node[1]._M_color + 1) >> 3) + 0x7FFF8000);
    if ( (char)(((LOBYTE(v6._M_node) + 36) & 7) + 3) >= v7 && v7 )
    {
      __asan_report_load4(&v6._M_node[1]._M_color + 1);
    }
    else
    {
      v8 = *(_BYTE *)(((unsigned __int64)unfinished_num >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)unfinished_num & 7) + 3) < v8 || !v8 )
      {
        *unfinished_num = *((_DWORD *)&v6._M_node[1]._M_color + 1);
        result = 0;
        goto LABEL_8;
      }
    }
    __asan_report_store4(unfinished_num);
  }
  common::milog::MiLogStream::MiLogStream(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/async_http_client_mgr.cpp",
    "findUnfinishedNum",
    365);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v11.ostr_, "Not found type:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v11.ostr_, *(_DWORD *)(v4 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v11.ostr_, " in unfinished_num_map!");
  common::milog::MiLogStream::~MiLogStream(&v11);
  result = -1;
LABEL_8:
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 371: range 000000000CBBAA8C-000000000CBBAC07
void __fastcall common::minet::http_client::HttpClientMgr::addUnfinishedNum(
        common::minet::http_client::HttpClientMgr *const this,
        uint32_t type)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int> >,std::_Select1st<std::pair<unsigned int const,std::atomic<int> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int> > > >::iterator v4; // rax
  volatile signed __int32 *v5; // rax
  char v6; // cl
  __int64 v7; // rax
  common::milog::MiLogStream v8; // [rsp+0h] [rbp-98h] BYREF
  char v9[120]; // [rsp+20h] [rbp-78h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v2 = v7;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 type:370";
  *(_QWORD *)(v2 + 16) = common::minet::http_client::HttpClientMgr::addUnfinishedNum;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = type;
  v4._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int>>,std::_Select1st<std::pair<unsigned int const,std::atomic<int>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int>>>>::find(
                 &this->unfinished_num_map_._M_t,
                 (const unsigned int *)(v2 + 32))._M_node;
  if ( (std::_Rb_tree_header *)v4._M_node != &this->unfinished_num_map_._M_t._M_impl.std::_Rb_tree_header )
  {
    v5 = (volatile signed __int32 *)(&v4._M_node[1]._M_color + 1);
    v6 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v5 & 7) + 3) < v6 || !v6 )
    {
      _InterlockedAdd(v5, 1u);
      goto LABEL_6;
    }
    __asan_report_store4(v5);
  }
  common::milog::MiLogStream::MiLogStream(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/async_http_client_mgr.cpp",
    "addUnfinishedNum",
    379);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8.ostr_, "Not found type:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8.ostr_, *(_DWORD *)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8.ostr_, " in unfinished_num_map!");
  common::milog::MiLogStream::~MiLogStream(&v8);
LABEL_6:
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 384: range 000000000CBBAC0C-000000000CBBAD87
void __fastcall common::minet::http_client::HttpClientMgr::subUnfinishedNum(
        common::minet::http_client::HttpClientMgr *const this,
        uint32_t type)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int> >,std::_Select1st<std::pair<unsigned int const,std::atomic<int> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int> > > >::iterator v4; // rax
  volatile signed __int32 *v5; // rax
  char v6; // cl
  __int64 v7; // rax
  common::milog::MiLogStream v8; // [rsp+0h] [rbp-98h] BYREF
  char v9[120]; // [rsp+20h] [rbp-78h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v2 = v7;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 type:383";
  *(_QWORD *)(v2 + 16) = common::minet::http_client::HttpClientMgr::subUnfinishedNum;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = type;
  v4._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::atomic<int>>,std::_Select1st<std::pair<unsigned int const,std::atomic<int>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::atomic<int>>>>::find(
                 &this->unfinished_num_map_._M_t,
                 (const unsigned int *)(v2 + 32))._M_node;
  if ( (std::_Rb_tree_header *)v4._M_node != &this->unfinished_num_map_._M_t._M_impl.std::_Rb_tree_header )
  {
    v5 = (volatile signed __int32 *)(&v4._M_node[1]._M_color + 1);
    v6 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v5 & 7) + 3) < v6 || !v6 )
    {
      _InterlockedSub(v5, 1u);
      goto LABEL_6;
    }
    __asan_report_store4(v5);
  }
  common::milog::MiLogStream::MiLogStream(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/async_http_client_mgr.cpp",
    "subUnfinishedNum",
    392);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8.ostr_, "Not found type:");
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8.ostr_, *(_DWORD *)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v8.ostr_, " in unfinished_num_map!");
  common::milog::MiLogStream::~MiLogStream(&v8);
LABEL_6:
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 395: range 000000000CBBE6BF-000000000CBBE6D6
void __cdecl GLOBAL__sub_I_async_http_client_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 395: range 000000000CBB953E-000000000CBB9852
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  std::ios_base::Init *v2; // rsi
  _BYTE *v3; // rax
  _BYTE *v4; // rax

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/async_http_client_mgr.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    v2 = &std::__ioinit;
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_[0] )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_[0] = 1;
      v2 = (std::ios_base::Init *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
        &_dso_handle);
    }
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
        v3 = (_BYTE *)__asan_report_store16(&boost::asio::ssl::detail::openssl_init<true>::instance_, v2);
LABEL_31:
        *v3 = 1;
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
            v4 = (_BYTE *)__asan_report_store8();
            goto LABEL_33;
          }
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                               + 9;
        }
        v4 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        if ( `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id[0] )
        {
LABEL_22:
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
LABEL_33:
        *v4 = 1;
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
    v3 = `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
    if ( `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_[0] )
      goto LABEL_14;
    goto LABEL_31;
  }
};
