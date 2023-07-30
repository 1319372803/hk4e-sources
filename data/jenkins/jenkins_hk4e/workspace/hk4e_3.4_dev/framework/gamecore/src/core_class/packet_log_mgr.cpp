// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/packet_log_mgr.cpp

// Line 27: range 0000000014EB74A0-0000000014EB772B
int32_t __fastcall PacketLogMgr::start(PacketLogMgr *const this)
{
  std::atomic<bool> *p_is_run; // rdi
  char v3; // al
  __m128i v4; // xmm0
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 p_work_thread; // rdi
  std::thread::native_handle_type M_thread; // rax
  struct _Unwind_Exception *v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rax
  std::thread::native_handle_type v14; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-70h] BYREF
  __m128i v16; // [rsp+10h] [rbp-68h] BYREF
  PacketLogMgr *thisa; // [rsp+20h] [rbp-58h]
  __m128i v18[2]; // [rsp+30h] [rbp-48h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-28h] BYREF

  p_is_run = &this->is_run_;
  v3 = *(_BYTE *)(((unsigned __int64)p_is_run >> 3) + 0x7FFF8000);
  if ( v3 <= ((unsigned __int8)p_is_run & 7) && v3 )
  {
    __asan_report_load1(p_is_run);
    goto LABEL_9;
  }
  if ( this->is_run_._M_base._M_i )
  {
LABEL_9:
    common::milog::MiLogStream::MiLogStream(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/packet_log_mgr.cpp",
      "start",
      30);
    common::milog::MiLogStream::operator()(&v19, "can not restart");
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -1;
  }
  this->is_run_._M_base._M_i = 1;
  _mm_mfence();
  v16.m128i_i64[0] = (__int64)PacketLogMgr::workThread;
  v16.m128i_i64[1] = 0LL;
  thisa = this;
  v14 = 0LL;
  v4 = _mm_load_si128(&v16);
  v18[0] = v4;
  v5 = operator new(0x20uLL);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    v6 = v5;
    __asan_report_store8(v5);
    goto LABEL_11;
  }
  *(_QWORD *)v5 = &`vtable for'std::thread::_State_impl<std::thread::_Invoker<std::tuple<std::_Bind<int (PacketLogMgr::*)(void) ()(PacketLogMgr*)>>>>
                + 2;
  v6 = v5 + 8;
  if ( *(_WORD *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store16(v6);
    goto LABEL_12;
  }
  *(__m128i *)(v5 + 8) = _mm_load_si128(v18);
  v6 = v5 + 24;
  if ( !*(_BYTE *)(((v5 + 24) >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v5 + 24) = this;
    v15 = v5;
    std::thread::_M_start_thread(&v14, &v15, &pthread_create);
    goto LABEL_13;
  }
LABEL_12:
  *(double *)v4.m128i_i64 = __asan_report_store8(v6);
LABEL_13:
  if ( !v15 )
    goto LABEL_17;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v15);
    goto LABEL_23;
  }
  v8 = *(_QWORD *)v15 + 8LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_work_thread = v8;
    __asan_report_load8(v8);
LABEL_24:
    v11 = (struct _Unwind_Exception *)__asan_report_load8(p_work_thread);
    v12 = (__int64 *)v15;
    if ( v15 )
    {
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v15);
      v13 = *v12;
      if ( *(_BYTE *)(((unsigned __int64)(*v12 + 8) >> 3) + 0x7FFF8000) )
      {
        v12 = (__int64 *)(*v12 + 8);
        v13 = __asan_report_load8(v12);
      }
      (*(void (__fastcall **)(double))(v13 + 8))(*(double *)v4.m128i_i64);
    }
    __asan_handle_no_return(v12);
    _Unwind_Resume(v11);
  }
  (*(void (__fastcall **)(double))(*(_QWORD *)v15 + 8LL))(*(double *)v4.m128i_i64);
LABEL_17:
  p_work_thread = (unsigned __int64)&this->work_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&this->work_thread_ >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  if ( this->work_thread_._M_id._M_thread )
  {
    __asan_handle_no_return(p_work_thread);
    std::terminate();
  }
  if ( *(_BYTE *)((p_work_thread >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_work_thread);
LABEL_33:
    __asan_handle_no_return(p_work_thread);
    std::terminate();
  }
  M_thread = this->work_thread_._M_id._M_thread;
  this->work_thread_._M_id._M_thread = v14;
  v14 = M_thread;
  if ( M_thread )
    goto LABEL_33;
  return 0;
};

// Line 60: range 0000000014EB77BA-0000000014EB7AA8
int32_t __fastcall PacketLogMgr::fini(PacketLogMgr *const this)
{
  unsigned __int64 M_cur; // rbp
  std::mutex *p_queue_mu; // r12
  std::mutex *v4; // rdi
  unsigned int v5; // eax
  unsigned __int64 v6; // rax
  signed __int32 v7; // eax
  unsigned __int64 p_M_start; // rdi
  std::_Deque_base<PacketLog>::iterator *p_M_finish; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v10; // rdi
  char v11; // cl
  char v12; // dl
  unsigned __int64 v13; // rdi
  volatile signed __int32 *v14; // rax
  char v15; // cl
  signed __int32 v16; // eax
  char v17; // dl

  p_queue_mu = &this->packet_log_queue_.queue_mu_;
  if ( &_pthread_key_create )
  {
    v4 = &this->packet_log_queue_.queue_mu_;
    v5 = pthread_mutex_lock(&v4->_M_mutex);
    M_cur = v5;
    if ( v5 )
    {
      __asan_handle_no_return(v4);
      std::__throw_system_error(M_cur);
    }
  }
  while ( 1 )
  {
    p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
LABEL_5:
      __asan_report_load8(p_M_finish);
LABEL_6:
      __asan_report_load8(p_M_finish);
LABEL_7:
      __asan_report_load8(p_M_finish);
LABEL_8:
      __asan_report_load8(p_M_finish);
LABEL_9:
      v6 = __asan_report_load8(p_M_finish);
LABEL_10:
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF);
      goto LABEL_11;
    }
    p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_5;
    if ( this->packet_log_queue_.queue_.c._M_impl._M_finish._M_cur == this->packet_log_queue_.queue_.c._M_impl._M_start._M_cur )
      break;
    p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    M_cur = (unsigned __int64)this->packet_log_queue_.queue_.c._M_impl._M_start._M_cur;
    p_M_finish = (std::_Deque_base<PacketLog>::iterator *)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_last;
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    if ( (std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer)M_cur == &this->packet_log_queue_.queue_.c._M_impl._M_start._M_last[-1] )
      goto LABEL_53;
    p_M_finish = (std::_Deque_base<PacketLog>::iterator *)(M_cur + 16);
    if ( *(_BYTE *)(((M_cur + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    v10 = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)(M_cur + 16);
    if ( v10 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(M_cur + 32) )
      operator delete(v10);
    p_M_finish = (std::_Deque_base<PacketLog>::iterator *)(M_cur + 8);
    if ( *(_BYTE *)(((M_cur + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    M_cur = *(_QWORD *)(M_cur + 8);
    if ( !M_cur )
      goto LABEL_12;
    v6 = M_cur + 8;
    if ( &_pthread_key_create )
    {
      v11 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
      if ( (char)((v6 & 7) + 3) < v11 || !v11 )
        goto LABEL_10;
      __asan_report_store4(M_cur + 8);
    }
    v12 = *(_BYTE *)(((M_cur + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((M_cur + 8) & 7) + 3) >= v12 && v12 )
    {
      __asan_report_load4(M_cur + 8);
      goto LABEL_33;
    }
    v7 = *(_DWORD *)(M_cur + 8);
    *(_DWORD *)(M_cur + 8) = v7 - 1;
LABEL_11:
    if ( v7 != 1 )
      goto LABEL_12;
LABEL_33:
    v13 = M_cur;
    if ( *(_BYTE *)((M_cur >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_cur);
LABEL_44:
      __asan_report_load8(v13);
LABEL_45:
      __asan_report_store4(v13);
LABEL_46:
      p_M_start = M_cur + 12;
      v17 = *(_BYTE *)(((M_cur + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((M_cur + 12) & 7) + 3) >= v17 && v17 )
      {
        __asan_report_load4(p_M_start);
LABEL_50:
        __asan_report_load8(p_M_start);
LABEL_51:
        __asan_report_load8(p_M_start);
        goto LABEL_52;
      }
      v16 = *(_DWORD *)(M_cur + 12);
      *(_DWORD *)(M_cur + 12) = v16 - 1;
      goto LABEL_39;
    }
    v13 = *(_QWORD *)M_cur + 16LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      goto LABEL_44;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_cur + 16LL))(M_cur);
    v14 = (volatile signed __int32 *)(M_cur + 12);
    if ( !&_pthread_key_create )
      goto LABEL_46;
    v13 = M_cur + 12;
    v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v14 & 7) + 3) >= v15 && v15 )
      goto LABEL_45;
    v16 = _InterlockedExchangeAdd(v14, 0xFFFFFFFF);
LABEL_39:
    if ( v16 == 1 )
    {
      p_M_start = M_cur;
      if ( *(_BYTE *)((M_cur >> 3) + 0x7FFF8000) )
        goto LABEL_50;
      p_M_start = *(_QWORD *)M_cur + 24LL;
      if ( *(_BYTE *)((p_M_start >> 3) + 0x7FFF8000) )
        goto LABEL_51;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_cur + 24LL))(M_cur);
    }
LABEL_12:
    p_M_start = (unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
    {
LABEL_52:
      __asan_report_load8(p_M_start);
LABEL_53:
      std::deque<PacketLog>::_M_pop_front_aux(&this->packet_log_queue_.queue_.c);
    }
    else
    {
      ++this->packet_log_queue_.queue_.c._M_impl._M_start._M_cur;
    }
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_queue_mu->_M_mutex);
  return 0;
};

// Line 67: range 0000000014EB7AAA-0000000014EB7C55
void __fastcall PacketLogMgr::pushPacketLog(PacketLogMgr *const this, PacketLog *packet_log)
{
  std::mutex *p_queue_mu; // r12
  std::mutex *v4; // rdi
  int v5; // r13d
  void *p_M_node; // rdi
  PacketLog *v7; // rdx
  char v8; // al
  uint32_t max_size; // eax

  p_queue_mu = &this->packet_log_queue_.queue_mu_;
  if ( &_pthread_key_create )
  {
    v4 = &this->packet_log_queue_.queue_mu_;
    v5 = pthread_mutex_lock(&v4->_M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return(v4);
      std::__throw_system_error(v5);
    }
  }
  p_M_node = &this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_16;
  }
  p_M_node = &this->packet_log_queue_.queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(p_M_node);
    goto LABEL_17;
  }
  p_M_node = &this->packet_log_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(p_M_node);
    goto LABEL_18;
  }
  p_M_node = &this->packet_log_queue_.queue_.c._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_M_node);
    goto LABEL_19;
  }
  p_M_node = &this->packet_log_queue_.queue_.c._M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(p_M_node);
    goto LABEL_20;
  }
  p_M_node = &this->packet_log_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(p_M_node);
LABEL_21:
    __asan_report_load4(p_M_node);
    goto LABEL_22;
  }
  v7 = (PacketLog *)(0xAAAAAAAAAAAAAAABLL
                   * (((char *)this->packet_log_queue_.queue_.c._M_impl._M_start._M_last
                     - (char *)this->packet_log_queue_.queue_.c._M_impl._M_start._M_cur) >> 4)
                   + 2
                   * (5
                    * (this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node
                     - this->packet_log_queue_.queue_.c._M_impl._M_start._M_node)
                    - 5)
                   - 0x5555555555555555LL
                   * (((char *)this->packet_log_queue_.queue_.c._M_impl._M_finish._M_cur
                     - (char *)this->packet_log_queue_.queue_.c._M_impl._M_finish._M_first) >> 4));
  p_M_node = &this->packet_log_queue_.max_size_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.max_size_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_21;
  max_size = this->packet_log_queue_.max_size_;
  if ( !max_size || (unsigned __int64)v7 < max_size )
    std::deque<PacketLog>::emplace_back<PacketLog>(&this->packet_log_queue_.queue_.c, packet_log, v7);
LABEL_22:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_queue_mu->_M_mutex);
};

// Line 73: range 0000000014EB7C72-0000000014EB9118
int32_t __fastcall PacketLogMgr::workThread(PacketLogMgr *const this)
{
  unsigned __int64 v1; // r14
  __m128i si128; // xmm0
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rdi
  void *v7; // rdi
  size_t v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  void *v11; // rdi
  size_t v12; // rbp
  pthread_t v13; // rax
  std::forward_iterator_tag v14; // cl
  void *p_is_run; // rdi
  char v16; // dl
  std::mutex *p_queue_mu; // rbp
  unsigned int v18; // eax
  void *p_M_finish; // rdi
  PacketLog **v20; // rax
  std::size_t v21; // rax
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer M_first; // rdi
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer v23; // rax
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Map_pointer M_node; // rdx
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer v25; // rsi
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer v26; // rdi
  __int128 v27; // rax
  unsigned __int64 v28; // rdi
  char v29; // dl
  char v30; // dl
  signed __int32 v31; // eax
  unsigned __int64 v32; // rdi
  volatile signed __int32 *v33; // rax
  char v34; // cl
  signed __int32 v35; // eax
  unsigned __int64 v36; // rdi
  char v37; // dl
  unsigned __int64 p_M_use_count; // rdx
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // rdi
  void *v41; // rdi
  volatile signed __int32 *v42; // rax
  char v43; // cl
  int v44; // eax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v45; // rax
  char v46; // cl
  common::minet::PacketPtr v47; // rdi
  unsigned int v48; // eax
  char v49; // dl
  unsigned __int64 v50; // rdi
  volatile signed __int32 *v51; // rax
  char v52; // cl
  int v53; // eax
  unsigned __int64 v54; // rdi
  char v55; // dl
  char v56; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbp
  _Atomic_word *v58; // rax
  char v59; // cl
  signed __int32 M_use_count; // eax
  char v61; // dl
  unsigned __int64 v62; // rdi
  volatile signed __int32 *p_M_weak_count; // rax
  char v64; // cl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v66; // rdi
  char v67; // dl
  volatile signed __int32 *v68; // rax
  char v69; // cl
  volatile signed __int32 *v70; // rax
  char v71; // cl
  uint32_t MinPacketLen; // ebp
  int v73; // ebp
  uint32_t BodyLen; // eax
  __int64 v75; // rcx
  __int64 v76; // rbx
  __int128 v77; // rax
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rsi
  __int64 v81; // rdi
  char *v82; // rdi
  char *v83; // rdi
  unsigned __int64 v84; // rbx
  volatile signed __int32 *v85; // rdi
  char v86; // dl
  signed __int32 v87; // eax
  char v89; // dl
  unsigned __int64 v90; // rdi
  char v91; // dl
  signed __int32 v92; // eax
  unsigned __int64 v93; // rdi
  char v94; // dl
  struct _Unwind_Exception *v95; // rbx
  std::deque<PacketLog>::iterator v96; // [rsp-20h] [rbp-2E8h]
  std::deque<PacketLog>::iterator v97; // [rsp-20h] [rbp-2E8h]
  unsigned __int64 v98; // [rsp+8h] [rbp-2C0h]
  _DWORD *v99; // [rsp+10h] [rbp-2B8h]
  common::minet::PacketPtr packet_ptr; // [rsp+20h] [rbp-2A8h] BYREF
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer M_cur; // [rsp+30h] [rbp-298h]
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer v102; // [rsp+38h] [rbp-290h]
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer M_last; // [rsp+40h] [rbp-288h]
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Map_pointer v104; // [rsp+48h] [rbp-280h]
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer v105; // [rsp+50h] [rbp-278h]
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer v106; // [rsp+58h] [rbp-270h]
  std::_Deque_iterator<PacketLog,PacketLog&,PacketLog*>::_Elt_pointer v107; // [rsp+60h] [rbp-268h]
  __int64 v108; // [rsp+68h] [rbp-260h]
  char v109[600]; // [rsp+70h] [rbp-258h] BYREF

  v98 = (unsigned __int64)v109;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v98 = v4;
  }
  *(_QWORD *)v98 = 1102416563LL;
  *(_QWORD *)(v98 + 8) = "7 32 32 10 log_str:80 96 32 6 __last 160 32 7 __first 224 32 6 __last 288 32 7 __first 352 48 1"
                         "3 packet_log:79 432 80 6 que:82";
  *(_QWORD *)(v98 + 16) = PacketLogMgr::workThread;
  v99 = (_DWORD *)(v98 >> 3);
  v99[536862720] = -235802127;
  v99[536862722] = -218959118;
  v99[536862724] = -218959118;
  v99[536862726] = -218959118;
  v99[536862728] = -218959118;
  v99[536862730] = -218959118;
  v99[536862732] = -219021312;
  v99[536862733] = 62194;
  v99[536862736] = -202116109;
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v98 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/core_class/packet_log_mgr.cpp",
    "workThread",
    74);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v98 + 288), "PacketLogMgr thread start");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v98 + 288));
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v98 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/core_class/packet_log_mgr.cpp",
    "workThread",
    76);
  v5 = *(_QWORD *)(v98 + 312);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    v6 = *(_QWORD *)(v98 + 312);
    __asan_report_load8(v6);
    goto LABEL_15;
  }
  v6 = v5 + 8;
  if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(v6);
LABEL_16:
    v10 = v5;
    __asan_report_load8(v5);
    goto LABEL_17;
  }
  v7 = *(void **)(v5 + 8);
  v8 = *(_DWORD *)v5 + 0x4000 - (int)v7;
  if ( v8 > 0xC )
    v8 = 13LL;
  memcpy(v7, "[THREAD] tid:", v8);
  *(_QWORD *)(v5 + 8) += v8;
  v9 = syscall(186LL);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v98 + 312),
    v9);
  v5 = *(_QWORD *)(v98 + 312);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  v10 = v5 + 8;
  if ( !*(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
    v11 = *(void **)(v5 + 8);
    v12 = *(_DWORD *)v5 + 0x4000 - (int)v11;
    if ( v12 > 0x11 )
      v12 = 18LL;
    memcpy(v11, " packet_log thread", v12);
    *(_QWORD *)(v5 + 8) += v12;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v98 + 288));
    v13 = pthread_self();
    pthread_setname_np(v13, "packet_log");
    *(_QWORD *)(v98 + 352) = 0LL;
    *(_QWORD *)(v98 + 360) = 0LL;
    *(_QWORD *)(v98 + 368) = v98 + 384;
    std::string::_M_construct<char const*>((std::string *const)(v98 + 368), byte_1AE473C0, byte_1AE473C0, v14);
    goto LABEL_18;
  }
LABEL_17:
  __asan_report_load8(v10);
LABEL_18:
  *(_QWORD *)(v98 + 32) = v98 + 48;
  *(_QWORD *)(v98 + 40) = 0LL;
  *(_BYTE *)(v98 + 48) = 0;
  *(_QWORD *)(v98 + 432) = 0LL;
  *(_QWORD *)(v98 + 440) = 0LL;
  *(_QWORD *)(v98 + 448) = 0LL;
  *(_QWORD *)(v98 + 456) = 0LL;
  *(_QWORD *)(v98 + 464) = 0LL;
  *(_QWORD *)(v98 + 472) = 0LL;
  *(_QWORD *)(v98 + 480) = 0LL;
  *(_QWORD *)(v98 + 488) = 0LL;
  *(_QWORD *)(v98 + 496) = 0LL;
  *(_QWORD *)(v98 + 504) = 0LL;
  std::_Deque_base<PacketLog>::_M_initialize_map((std::_Deque_base<PacketLog> *const)(v98 + 432), 0LL);
  while ( 1 )
  {
LABEL_19:
    p_is_run = &this->is_run_;
    v16 = *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000);
    if ( v16 <= (((unsigned __int8)this - 120) & 7) && v16 )
    {
      __asan_report_load1(p_is_run);
LABEL_46:
      __asan_handle_no_return(p_is_run);
      std::__throw_system_error(v5);
    }
    if ( !this->is_run_._M_base._M_i )
      break;
    p_queue_mu = &this->packet_log_queue_.queue_mu_;
    if ( &_pthread_key_create )
    {
      p_is_run = &this->packet_log_queue_.queue_mu_;
      v18 = pthread_mutex_lock(&this->packet_log_queue_.queue_mu_._M_mutex);
      v5 = v18;
      if ( v18 )
        goto LABEL_46;
    }
    p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
LABEL_48:
      __asan_report_load8(p_M_finish);
LABEL_49:
      __asan_report_load_n(p_M_finish, 32LL);
LABEL_50:
      __asan_report_load_n(p_M_finish, 32LL);
LABEL_51:
      __asan_report_load8(p_M_finish);
LABEL_52:
      __asan_report_load8(p_M_finish);
LABEL_53:
      __asan_report_load_n(p_M_finish, 32LL);
LABEL_54:
      __asan_report_load_n(p_M_finish, 32LL);
LABEL_55:
      __asan_report_load8(p_M_finish);
LABEL_56:
      __asan_report_store_n(p_M_finish, 32LL);
LABEL_57:
      __asan_report_load8(p_M_finish);
LABEL_58:
      __asan_report_load8(p_M_finish);
      goto LABEL_59;
    }
    p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_48;
    if ( this->packet_log_queue_.queue_.c._M_impl._M_finish._M_cur != this->packet_log_queue_.queue_.c._M_impl._M_start._M_cur )
    {
      si128 = _mm_load_si128((const __m128i *)(v98 + 448));
      *(__m128i *)(v98 + 288) = si128;
      *(__m128i *)(v98 + 304) = _mm_load_si128((const __m128i *)(v98 + 464));
      p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_start;
      if ( *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3)
                    + 0x7FFF8000) <= (((unsigned __int8)this + 47) & 7)
        || *(char *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_49;
      }
      *(__m128i *)(v98 + 448) = _mm_loadu_si128((const __m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_start);
      *(__m128i *)(v98 + 464) = _mm_loadu_si128((const __m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_last);
      *(__m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_cur = _mm_load_si128((const __m128i *)(v98 + 288));
      *(__m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_last = _mm_load_si128((const __m128i *)(v98 + 304));
      *(__m128i *)(v98 + 288) = _mm_load_si128((const __m128i *)(v98 + 480));
      *(__m128i *)(v98 + 304) = _mm_load_si128((const __m128i *)(v98 + 496));
      p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_finish;
      if ( *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                    + 0x7FFF8000) <= (((unsigned __int8)this + 79) & 7)
        || *(char *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_50;
      }
      si128 = _mm_loadu_si128((const __m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_finish);
      *(__m128i *)(v98 + 480) = si128;
      *(__m128i *)(v98 + 496) = _mm_loadu_si128((const __m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_last);
      *(__m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v98 + 288));
      *(__m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v98 + 304));
      v20 = *(PacketLog ***)(v98 + 432);
      p_M_finish = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        goto LABEL_51;
      *(_QWORD *)(v98 + 432) = this->packet_log_queue_.queue_.c._M_impl._M_map;
      this->packet_log_queue_.queue_.c._M_impl._M_map = v20;
      v21 = *(_QWORD *)(v98 + 440);
      p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_map_size;
      if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
        goto LABEL_52;
      *(_QWORD *)(v98 + 440) = this->packet_log_queue_.queue_.c._M_impl._M_map_size;
      this->packet_log_queue_.queue_.c._M_impl._M_map_size = v21;
      p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_start;
      if ( *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3)
                    + 0x7FFF8000) <= (((unsigned __int8)this + 47) & 7)
        || *(char *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_53;
      }
      M_first = this->packet_log_queue_.queue_.c._M_impl._M_start._M_first;
      M_cur = this->packet_log_queue_.queue_.c._M_impl._M_start._M_cur;
      v102 = M_first;
      M_node = this->packet_log_queue_.queue_.c._M_impl._M_start._M_node;
      M_last = this->packet_log_queue_.queue_.c._M_impl._M_start._M_last;
      v23 = M_last;
      v104 = M_node;
      *(_QWORD *)(v98 + 160) = M_cur;
      *(_QWORD *)(v98 + 168) = M_first;
      *(_QWORD *)(v98 + 176) = v23;
      *(_QWORD *)(v98 + 184) = M_node;
      p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_finish;
      if ( *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                    + 0x7FFF8000) <= (((unsigned __int8)this + 79) & 7)
        || *(char *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_54;
      }
      v26 = this->packet_log_queue_.queue_.c._M_impl._M_finish._M_first;
      v105 = this->packet_log_queue_.queue_.c._M_impl._M_finish._M_cur;
      v25 = v105;
      v106 = v26;
      *((_QWORD *)&v27 + 1) = this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node;
      v107 = this->packet_log_queue_.queue_.c._M_impl._M_finish._M_last;
      *(_QWORD *)&v27 = v107;
      v108 = *((_QWORD *)&v27 + 1);
      *(__m128i *)(v98 + 288) = _mm_load_si128((const __m128i *)(v98 + 160));
      *(__m128i *)(v98 + 304) = _mm_load_si128((const __m128i *)(v98 + 176));
      *(_QWORD *)(v98 + 224) = v25;
      *(_QWORD *)(v98 + 232) = v26;
      *(_OWORD *)(v98 + 240) = v27;
      *(_OWORD *)&v96._M_last = v27;
      *(_OWORD *)&v96._M_cur = *(_OWORD *)(v98 + 224);
      std::deque<PacketLog>::_M_destroy_data_aux(
        &this->packet_log_queue_.queue_.c,
        *(std::deque<PacketLog>::iterator *)(v98 + 288),
        v96);
      p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node;
      if ( *(_BYTE *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
        goto LABEL_55;
      std::_Deque_base<PacketLog>::_M_destroy_nodes(
        &this->packet_log_queue_.queue_.c,
        (std::_Deque_base<PacketLog>::_Map_pointer)(*(_QWORD *)(v98 + 184) + 8LL),
        this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node + 1);
      p_M_finish = &this->packet_log_queue_.queue_.c._M_impl._M_finish;
      if ( *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                    + 0x7FFF8000) <= (((unsigned __int8)this + 79) & 7)
        || *(char *)(((unsigned __int64)&this->packet_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_56;
      }
      *(__m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v98 + 160));
      *(__m128i *)&this->packet_log_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v98 + 176));
    }
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&this->packet_log_queue_.queue_mu_._M_mutex);
    if ( *(_QWORD *)(v98 + 480) != *(_QWORD *)(v98 + 448) )
    {
      while ( 1 )
      {
        p_queue_mu = *(std::mutex **)(v98 + 448);
        if ( *(std::mutex **)(v98 + 480) == p_queue_mu )
          goto LABEL_19;
        p_M_finish = *(void **)(v98 + 448);
        if ( *(_BYTE *)(((unsigned __int64)p_queue_mu >> 3) + 0x7FFF8000) )
          goto LABEL_57;
        *(_QWORD *)(v98 + 352) = p_queue_mu->_M_mutex.__align;
        p_M_finish = &p_queue_mu->_M_mutex.__align + 1;
        if ( *(_BYTE *)(((unsigned __int64)(&p_queue_mu->_M_mutex.__align + 1) >> 3) + 0x7FFF8000) )
          goto LABEL_58;
        v5 = *(&p_queue_mu->_M_mutex.__align + 1);
        if ( v5 != *(_QWORD *)(v98 + 360) )
          break;
LABEL_187:
        std::string::_M_assign(v98 + 368, &p_queue_mu->_M_mutex.__align + 2);
LABEL_88:
        v39 = *(_QWORD *)(v98 + 448);
        if ( v39 != *(_QWORD *)(v98 + 464) - 48LL )
        {
          v40 = v39 + 16;
          if ( *(_BYTE *)(((v39 + 16) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v40);
          }
          else
          {
            v41 = *(void **)(v39 + 16);
            if ( v41 != (void *)(v39 + 32) )
              operator delete(v41);
            v40 = v39 + 8;
            if ( !*(_BYTE *)(((v39 + 8) >> 3) + 0x7FFF8000) )
            {
              v39 = *(_QWORD *)(v39 + 8);
              if ( !v39 )
                goto LABEL_99;
              v42 = (volatile signed __int32 *)(v39 + 8);
              if ( &_pthread_key_create )
              {
                v40 = v39 + 8;
                v43 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v42 & 7) + 3) < v43 || !v43 )
                {
                  p_M_use_count = (unsigned int)_InterlockedExchangeAdd(v42, 0xFFFFFFFF);
                  v44 = p_M_use_count;
LABEL_98:
                  if ( v44 != 1 )
                    goto LABEL_99;
                  goto LABEL_113;
                }
LABEL_108:
                __asan_report_store4(v40);
              }
              v49 = *(_BYTE *)(((v39 + 8) >> 3) + 0x7FFF8000);
              if ( (char)(((v39 + 8) & 7) + 3) < v49 || !v49 )
              {
                v44 = *(_DWORD *)(v39 + 8);
                p_M_use_count = (unsigned int)(v44 - 1);
                *(_DWORD *)(v39 + 8) = p_M_use_count;
                goto LABEL_98;
              }
              *(double *)si128.m128i_i64 = __asan_report_load4(v39 + 8);
LABEL_113:
              v50 = v39;
              if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v39);
              }
              else
              {
                v50 = *(_QWORD *)v39 + 16LL;
                if ( !*(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
                {
                  (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v39 + 16LL))(
                    v39,
                    *(double *)si128.m128i_i64);
                  v51 = (volatile signed __int32 *)(v39 + 12);
                  if ( &_pthread_key_create )
                  {
                    v50 = v39 + 12;
                    v52 = *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000);
                    if ( (char)(((unsigned __int8)v51 & 7) + 3) < v52 || !v52 )
                    {
                      p_M_use_count = (unsigned int)_InterlockedExchangeAdd(v51, 0xFFFFFFFF);
                      v53 = p_M_use_count;
                      goto LABEL_119;
                    }
LABEL_125:
                    __asan_report_store4(v50);
                  }
                  v54 = v39 + 12;
                  v55 = *(_BYTE *)(((v39 + 12) >> 3) + 0x7FFF8000);
                  if ( (char)(((v39 + 12) & 7) + 3) >= v55 && v55 )
                  {
                    *(double *)si128.m128i_i64 = __asan_report_load4(v54);
                  }
                  else
                  {
                    v53 = *(_DWORD *)(v39 + 12);
                    p_M_use_count = (unsigned int)(v53 - 1);
                    *(_DWORD *)(v39 + 12) = p_M_use_count;
LABEL_119:
                    if ( v53 != 1 )
                      goto LABEL_99;
                    v54 = v39;
                    if ( !*(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
                    {
                      v54 = *(_QWORD *)v39 + 24LL;
                      if ( !*(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
                      {
                        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v39 + 24LL))(v39);
LABEL_99:
                        *(_QWORD *)(v98 + 448) += 48LL;
                        goto LABEL_100;
                      }
                      goto LABEL_131;
                    }
                  }
                  __asan_report_load8(v54);
LABEL_131:
                  __asan_report_load8(v54);
                  goto LABEL_132;
                }
              }
              __asan_report_load8(v50);
              goto LABEL_125;
            }
          }
          __asan_report_load8(v40);
          goto LABEL_108;
        }
LABEL_132:
        std::deque<PacketLog>::_M_pop_front_aux((std::deque<PacketLog> *const)(v98 + 432));
LABEL_100:
        packet_ptr._M_ptr = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)(v98 + 352);
        v45 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v98 + 360);
        packet_ptr._M_refcount._M_pi = v45;
        if ( !v45 )
          goto LABEL_105;
        p_M_use_count = (unsigned __int64)&v45->_M_use_count;
        if ( &_pthread_key_create )
        {
          v46 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)((p_M_use_count & 7) + 3) < v46 || !v46 )
          {
            _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
LABEL_105:
            v47._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v98 + 32);
            v47._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
            v48 = ProtoUtils::convertPacketToString(v47, (std::string *)p_M_use_count);
            goto LABEL_138;
          }
          v45 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(&v45->_M_use_count);
        }
        v56 = *(_BYTE *)(((unsigned __int64)&v45->_M_use_count >> 3) + 0x7FFF8000);
        p_M_use_count = (((_BYTE)v45 + 8) & 7u) + 3;
        if ( (char)((((_BYTE)v45 + 8) & 7) + 3) < v56 || !v56 )
        {
          ++v45->_M_use_count;
          goto LABEL_105;
        }
        *(double *)si128.m128i_i64 = __asan_report_load4(&v45->_M_use_count);
LABEL_138:
        v5 = v48;
        M_pi = packet_ptr._M_refcount._M_pi;
        if ( !packet_ptr._M_refcount._M_pi )
          goto LABEL_144;
        v58 = &packet_ptr._M_refcount._M_pi->_M_use_count;
        if ( &_pthread_key_create )
        {
          v59 = *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v58 & 7) + 3) < v59 || !v59 )
          {
            M_use_count = _InterlockedExchangeAdd(v58, 0xFFFFFFFF);
            goto LABEL_143;
          }
          __asan_report_store4(&packet_ptr._M_refcount._M_pi->_M_use_count);
        }
        v61 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v61 && v61 )
        {
          *(double *)si128.m128i_i64 = __asan_report_load4(&M_pi->_M_use_count);
          goto LABEL_151;
        }
        M_use_count = M_pi->_M_use_count;
        M_pi->_M_use_count = M_use_count - 1;
LABEL_143:
        if ( M_use_count != 1 )
          goto LABEL_144;
LABEL_151:
        v62 = (unsigned __int64)M_pi;
        if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(M_pi);
LABEL_162:
          __asan_report_load8(v62);
          goto LABEL_163;
        }
        v62 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 2);
        if ( *(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
          goto LABEL_162;
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *, double))M_pi->_vptr__Sp_counted_base
         + 2))(
          M_pi,
          *(double *)si128.m128i_i64);
        p_M_weak_count = &M_pi->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_164;
        v62 = (unsigned __int64)&M_pi->_M_weak_count;
        v64 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v64 || !v64 )
        {
          M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
          goto LABEL_157;
        }
LABEL_163:
        __asan_report_store4(v62);
LABEL_164:
        v66 = (unsigned __int64)&M_pi->_M_weak_count;
        v67 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v67 && v67 )
        {
          *(double *)si128.m128i_i64 = __asan_report_load4(v66);
LABEL_168:
          __asan_report_load8(v66);
          goto LABEL_169;
        }
        M_weak_count = M_pi->_M_weak_count;
        M_pi->_M_weak_count = M_weak_count - 1;
LABEL_157:
        if ( M_weak_count != 1 )
          goto LABEL_144;
        v66 = (unsigned __int64)M_pi;
        if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
          goto LABEL_168;
        v66 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
        if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
        {
LABEL_169:
          __asan_report_load8(v66);
LABEL_170:
          common::milog::MiLogStream::MiLogStream(
            (common::milog::MiLogStream *const)(v98 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "src/core_class/packet_log_mgr.cpp",
            "workThread",
            100);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)(v98 + 288),
            "parseToString fail",
            *(double *)si128.m128i_i64);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v98 + 288));
        }
        else
        {
          (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
LABEL_144:
          if ( (_DWORD)v5 )
            goto LABEL_170;
          v1 = *(_QWORD *)(v98 + 32);
          v5 = *(_QWORD *)(v98 + 352);
          MinPacketLen = common::minet::Packet::getMinPacketLen();
          v73 = proto::PacketHead::ByteSizeLong((const proto::PacketHead *const)(v5 + 16)) + MinPacketLen;
          BodyLen = common::minet::Packet::getBodyLen((const common::minet::Packet *const)v5);
          common::milog::MiLog::writeLog(
            &common::milog::MiLogDefault::default_log_obj_,
            0xCu,
            "|%s|%u|%s",
            *(const char **)(v98 + 368),
            v73 + BodyLen,
            (const char *)v1);
        }
      }
      if ( v5 )
      {
        v68 = (volatile signed __int32 *)(v5 + 8);
        if ( &_pthread_key_create )
        {
          p_M_finish = (void *)(v5 + 8);
          v69 = *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v68 & 7) + 3) < v69 || !v69 )
          {
            _InterlockedAdd(v68, 1u);
            goto LABEL_180;
          }
LABEL_59:
          __asan_report_store4(p_M_finish);
        }
        v28 = v5 + 8;
        v29 = *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 8) & 7) + 3) < v29 || !v29 )
        {
          ++*(_DWORD *)(v5 + 8);
          goto LABEL_180;
        }
        *(double *)si128.m128i_i64 = __asan_report_load4(v28);
LABEL_64:
        __asan_report_store4(v28);
LABEL_65:
        v30 = *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((v1 + 8) & 7) + 3) < v30 || !v30 )
        {
          v31 = *(_DWORD *)(v1 + 8);
          *(_DWORD *)(v1 + 8) = v31 - 1;
          goto LABEL_185;
        }
        *(double *)si128.m128i_i64 = __asan_report_load4(v1 + 8);
LABEL_69:
        v32 = v1;
        if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v1);
        }
        else
        {
          v32 = *(_QWORD *)v1 + 16LL;
          if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v1 + 16LL))(v1, *(double *)si128.m128i_i64);
            v33 = (volatile signed __int32 *)(v1 + 12);
            if ( &_pthread_key_create )
            {
              v32 = v1 + 12;
              v34 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)v33 & 7) + 3) < v34 || !v34 )
              {
                v35 = _InterlockedExchangeAdd(v33, 0xFFFFFFFF);
                goto LABEL_75;
              }
LABEL_81:
              __asan_report_store4(v32);
            }
            v36 = v1 + 12;
            v37 = *(_BYTE *)(((v1 + 12) >> 3) + 0x7FFF8000);
            if ( (char)(((v1 + 12) & 7) + 3) >= v37 && v37 )
            {
              *(double *)si128.m128i_i64 = __asan_report_load4(v36);
LABEL_86:
              __asan_report_load8(v36);
LABEL_87:
              __asan_report_load8(v36);
              goto LABEL_88;
            }
            v35 = *(_DWORD *)(v1 + 12);
            *(_DWORD *)(v1 + 12) = v35 - 1;
LABEL_75:
            if ( v35 == 1 )
            {
              v36 = v1;
              if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
                goto LABEL_86;
              v36 = *(_QWORD *)v1 + 24LL;
              if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
                goto LABEL_87;
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v1 + 24LL))(v1);
            }
LABEL_186:
            *(_QWORD *)(v98 + 360) = v5;
            goto LABEL_187;
          }
        }
        __asan_report_load8(v32);
        goto LABEL_81;
      }
LABEL_180:
      v1 = *(_QWORD *)(v98 + 360);
      if ( v1 )
      {
        v70 = (volatile signed __int32 *)(v1 + 8);
        if ( !&_pthread_key_create )
          goto LABEL_65;
        v28 = v1 + 8;
        v71 = *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v70 & 7) + 3) >= v71 && v71 )
          goto LABEL_64;
        v31 = _InterlockedExchangeAdd(v70, 0xFFFFFFFF);
LABEL_185:
        if ( v31 == 1 )
          goto LABEL_69;
      }
      goto LABEL_186;
    }
    usleep(0x3E8u);
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v98 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/core_class/packet_log_mgr.cpp",
    "workThread",
    108);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v98 + 288), "PacketLogMgr thread stop");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v98 + 288));
  v75 = *(_QWORD *)(v98 + 480);
  v76 = *(_QWORD *)(v98 + 488);
  *(_QWORD *)(v98 + 288) = v75;
  *(_QWORD *)(v98 + 296) = v76;
  v77 = *(_OWORD *)(v98 + 496);
  *(_OWORD *)(v98 + 304) = v77;
  v78 = *(_QWORD *)(v98 + 448);
  v79 = *(_QWORD *)(v98 + 456);
  *(_QWORD *)(v98 + 224) = v78;
  *(_QWORD *)(v98 + 232) = v79;
  v80 = *(_QWORD *)(v98 + 464);
  v81 = *(_QWORD *)(v98 + 472);
  *(_QWORD *)(v98 + 240) = v80;
  *(_QWORD *)(v98 + 248) = v81;
  *(_QWORD *)(v98 + 160) = v78;
  *(_QWORD *)(v98 + 168) = v79;
  *(_QWORD *)(v98 + 176) = v80;
  *(_QWORD *)(v98 + 184) = v81;
  *(_QWORD *)(v98 + 96) = v75;
  *(_QWORD *)(v98 + 104) = v76;
  *(_OWORD *)(v98 + 112) = v77;
  *(_OWORD *)&v97._M_last = v77;
  *(_OWORD *)&v97._M_cur = *(_OWORD *)(v98 + 96);
  std::deque<PacketLog>::_M_destroy_data_aux(
    (std::deque<PacketLog> *const)(v98 + 432),
    *(std::deque<PacketLog>::iterator *)(v98 + 160),
    v97);
  std::_Deque_base<PacketLog>::~_Deque_base((std::_Deque_base<PacketLog> *const)(v98 + 432));
  v82 = *(char **)(v98 + 32);
  if ( v82 != (char *)(v98 + 48) )
    operator delete(v82);
  v83 = *(char **)(v98 + 368);
  if ( v83 != (char *)(v98 + 384) )
    operator delete(v83);
  v84 = *(_QWORD *)(v98 + 360);
  if ( !v84 )
    goto LABEL_198;
  v85 = (volatile signed __int32 *)(v84 + 8);
  if ( &_pthread_key_create )
  {
    v86 = *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v85 & 7) + 3) < v86 || !v86 )
    {
      v87 = _InterlockedExchangeAdd(v85, 0xFFFFFFFF);
      goto LABEL_197;
    }
    __asan_report_store4(v85);
  }
  v89 = *(_BYTE *)(((v84 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v84 + 8) & 7) + 3) >= v89 && v89 )
  {
    __asan_report_load4(v84 + 8);
    goto LABEL_206;
  }
  v87 = *(_DWORD *)(v84 + 8);
  *(_DWORD *)(v84 + 8) = v87 - 1;
LABEL_197:
  if ( v87 == 1 )
  {
LABEL_206:
    if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
    {
      v90 = v84;
      __asan_report_load8(v84);
    }
    else
    {
      v90 = *(_QWORD *)v84 + 16LL;
      if ( !*(_BYTE *)((v90 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v84 + 16LL))(v84);
        v90 = v84 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_219;
        v91 = *(_BYTE *)((v90 >> 3) + 0x7FFF8000);
        if ( (char)((v90 & 7) + 3) < v91 || !v91 )
        {
          v92 = _InterlockedExchangeAdd((volatile signed __int32 *)v90, 0xFFFFFFFF);
          goto LABEL_212;
        }
LABEL_218:
        __asan_report_store4(v90);
LABEL_219:
        v94 = *(_BYTE *)(((v84 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v84 + 12) & 7) + 3) >= v94 && v94 )
        {
          __asan_report_load4(v84 + 12);
          goto LABEL_223;
        }
        v92 = *(_DWORD *)(v84 + 12);
        *(_DWORD *)(v84 + 12) = v92 - 1;
LABEL_212:
        if ( v92 != 1 )
          goto LABEL_198;
        if ( !*(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
        {
          v93 = *(_QWORD *)v84 + 24LL;
          if ( !*(_BYTE *)((v93 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v84 + 24LL))(v84);
            goto LABEL_198;
          }
LABEL_224:
          v95 = (struct _Unwind_Exception *)__asan_report_load8(v93);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v98 + 288));
          __asan_handle_no_return(v98 + 288);
          _Unwind_Resume(v95);
        }
LABEL_223:
        v93 = v84;
        __asan_report_load8(v84);
        goto LABEL_224;
      }
    }
    __asan_report_load8(v90);
    goto LABEL_218;
  }
LABEL_198:
  if ( v109 == (char *)v98 )
  {
    *(_DWORD *)((v98 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v98 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v98 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v98 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v98 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v98 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v98 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v98 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v98 = 1172321806LL;
    *(_QWORD *)((v98 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v98 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v98 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v98 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v98 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v98 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v98 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v98 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v98 >> 3) + 0x7FFF8040) = -168430091;
  }
  return 0;
};

// Line 110: range 0000000014EB7C5A-0000000014EB7C71
void __cdecl GLOBAL__sub_I_packet_log_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 110: range 0000000014EB737E-0000000014EB749E
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/core_class/packet_log_mgr.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
          JUMPOUT(0x14EB742DLL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
