// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/stat_log_mgr.cpp

// Line 21: range 0000000014EB144C-0000000014EB2090
int32_t __fastcall StatLogMgr::init(StatLogMgr *const this, const common::tools::PTree *pt)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  int32_t Value; // r15d
  uint32_t LogLevelByName; // eax
  std::forward_iterator_tag v8; // cl
  int32_t v9; // r15d
  char v10; // dl
  int32_t v11; // eax
  std::forward_iterator_tag v12; // cl
  unsigned int v13; // eax
  uint32_t *p_stat_log_soft_limit; // rdi
  char v15; // cl
  char v16; // dl
  char v17; // dl
  unsigned int v18; // eax
  std::forward_iterator_tag v19; // cl
  uint32_t *p_stat_log_limit; // rdi
  char v21; // dl
  char v22; // al
  char v23; // al
  unsigned int v24; // eax
  char v25; // cl
  unsigned int v26; // eax
  char v27; // dl
  uint32_t *p_max_busy_time_us; // rdi
  char v29; // al
  char v30; // dl
  char v31; // al
  char v32; // dl
  char *v33; // rdi
  std::string attr_name; // [rsp+10h] [rbp-150h] BYREF
  std::string v36; // [rsp+30h] [rbp-130h] BYREF
  std::string path; // [rsp+50h] [rbp-110h] BYREF
  std::string v38; // [rsp+70h] [rbp-F0h] BYREF
  std::string v39; // [rsp+90h] [rbp-D0h] BYREF
  common::milog::MiLogStream v40; // [rsp+B0h] [rbp-B0h] BYREF
  char v41[144]; // [rsp+D0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v3 = v5;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 17 log_level_name:22";
  *(_QWORD *)(v3 + 16) = StatLogMgr::init;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  *(_QWORD *)(v3 + 32) = v3 + 48;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_BYTE *)(v3 + 48) = 0;
  attr_name._M_dataplus._M_p = attr_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(
    &attr_name,
    &byte_1AE46558[-24],
    byte_1AE46558,
    (std::forward_iterator_tag)(v3 + 96));
  Value = common::tools::PTree::tryGetValue(pt, &attr_name, (std::string *)(v3 + 32));
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)attr_name._M_dataplus._M_p != &attr_name._anon_0 )
    operator delete(attr_name._M_dataplus._M_p);
  if ( Value )
  {
    common::milog::MiLogStream::MiLogStream(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/stat_log_mgr.cpp",
      "init",
      25);
    common::milog::MiLogStream::operator()(&v40, "stat_log_level not find");
    common::milog::MiLogStream::~MiLogStream(&v40);
    v9 = -1;
    goto LABEL_76;
  }
  LogLevelByName = common::milog::MiLog::getLogLevelByName(
                     &common::milog::MiLogDefault::default_log_obj_,
                     (const std::string *)(v3 + 32));
  v10 = *(_BYTE *)(((unsigned __int64)&this->stat_log_level_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
  {
    __asan_report_store4(&this->stat_log_level_);
    goto LABEL_15;
  }
  this->stat_log_level_ = LogLevelByName;
  if ( !LogLevelByName )
  {
LABEL_15:
    common::milog::MiLogStream::MiLogStream(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/stat_log_mgr.cpp",
      "init",
      32);
    common::milog::MiLogStream::operator()(&v40, "stat_log_level=%s not valid", *(const char **)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v40);
    v9 = -1;
    goto LABEL_76;
  }
  v36._M_dataplus._M_p = v36._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v36, &byte_1AE46655[-21], byte_1AE46655, v8);
  v11 = common::tools::PTree::tryGetValue(pt, &v36, &this->thread_name_);
  v9 = v11;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p != &v36._anon_0 )
    operator delete(v36._M_dataplus._M_p);
  if ( v9 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/stat_log_mgr.cpp",
      "init",
      38);
    common::milog::MiLogStream::operator()(&v40, "thread_name not find, log_level_name:%s", *(const char **)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v40);
    v9 = -1;
    goto LABEL_76;
  }
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&path, &byte_1AE466FD[-29], byte_1AE466FD, v12);
  v13 = common::tools::PTree::get<unsigned int>(pt, &path, 0x2710u);
  p_stat_log_soft_limit = &this->stat_log_soft_limit_;
  v15 = *(_BYTE *)(((unsigned __int64)&this->stat_log_soft_limit_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_store4(p_stat_log_soft_limit);
LABEL_30:
    __asan_report_load4(p_stat_log_soft_limit);
    goto LABEL_31;
  }
  this->stat_log_soft_limit_ = v13;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  p_stat_log_soft_limit = &this->stat_log_soft_limit_;
  v16 = *(_BYTE *)(((unsigned __int64)&this->stat_log_soft_limit_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v16 && v16 )
    goto LABEL_30;
  if ( !this->stat_log_soft_limit_ )
  {
LABEL_31:
    common::milog::MiLogStream::MiLogStream(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/stat_log_mgr.cpp",
      "init",
      45);
    v17 = *(_BYTE *)(((unsigned __int64)&this->stat_log_soft_limit_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v17 && v17 )
      __asan_report_load4(&this->stat_log_soft_limit_);
    else
      common::milog::MiLogStream::operator()(&v40, "invalid stat_log_soft_limit=%u", this->stat_log_soft_limit_);
    goto LABEL_35;
  }
  v38._M_dataplus._M_p = v38._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v38, &byte_1AE46778[-24], byte_1AE46778, (std::forward_iterator_tag)v15);
  v18 = common::tools::PTree::get<unsigned int>(pt, &v38, 0x4E20u);
  p_stat_log_limit = &this->stat_log_limit_;
  v21 = *(_BYTE *)(((unsigned __int64)&this->stat_log_limit_ >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
  {
    __asan_report_store4(p_stat_log_limit);
LABEL_45:
    __asan_report_load4(p_stat_log_limit);
    goto LABEL_46;
  }
  this->stat_log_limit_ = v18;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v38._M_dataplus._M_p != &v38._anon_0 )
    operator delete(v38._M_dataplus._M_p);
  p_stat_log_limit = &this->stat_log_limit_;
  v22 = *(_BYTE *)(((unsigned __int64)&this->stat_log_limit_ >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_45;
  if ( !this->stat_log_limit_ )
  {
LABEL_46:
    common::milog::MiLogStream::MiLogStream(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/stat_log_mgr.cpp",
      "init",
      52);
    v23 = *(_BYTE *)(((unsigned __int64)&this->stat_log_limit_ >> 3) + 0x7FFF8000);
    if ( v23 && v23 <= 3 )
      __asan_report_load4(&this->stat_log_limit_);
    else
      common::milog::MiLogStream::operator()(&v40, "invalid stat_log_limit=%u", this->stat_log_limit_);
LABEL_35:
    common::milog::MiLogStream::~MiLogStream(&v40);
    v9 = -1;
    goto LABEL_76;
  }
  v39._M_dataplus._M_p = v39._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v39, &byte_1AE467FA[-26], byte_1AE467FA, v19);
  v24 = common::tools::PTree::get<unsigned int>(pt, &v39, 0xF4240u);
  v25 = *(_BYTE *)(((unsigned __int64)&this->max_wait_time_us_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v25 && v25 )
  {
    __asan_report_store4(&this->max_wait_time_us_);
  }
  else
  {
    this->max_wait_time_us_ = v24;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39._M_dataplus._M_p != &v39._anon_0 )
      operator delete(v39._M_dataplus._M_p);
    v40.log_ = (common::milog::MiLog *)&v40.ostr_ptr_._M_refcount;
    std::string::_M_construct<char const*>(
      (std::string *const)&v40,
      &byte_1AE4683A[-26],
      byte_1AE4683A,
      (std::forward_iterator_tag)v25);
  }
  v26 = common::tools::PTree::get<unsigned int>(pt, (const std::string *)&v40, 0xF4240u);
  v27 = *(_BYTE *)(((unsigned __int64)&this->max_busy_time_us_ >> 3) + 0x7FFF8000);
  if ( v27 && v27 <= 3 )
  {
    __asan_report_store4(&this->max_busy_time_us_);
  }
  else
  {
    this->max_busy_time_us_ = v26;
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v40.log_ != &v40.ostr_ptr_._M_refcount )
      operator delete(v40.log_);
    common::milog::MiLogStream::MiLogStream(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/core_class/stat_log_mgr.cpp",
      "init",
      59);
  }
  p_max_busy_time_us = &this->max_busy_time_us_;
  v29 = *(_BYTE *)(((unsigned __int64)&this->max_busy_time_us_ >> 3) + 0x7FFF8000);
  if ( v29 && v29 <= 3 )
  {
    __asan_report_load4(p_max_busy_time_us);
LABEL_72:
    __asan_report_load4(p_max_busy_time_us);
LABEL_73:
    __asan_report_load4(p_max_busy_time_us);
LABEL_74:
    __asan_report_load4(p_max_busy_time_us);
    goto LABEL_75;
  }
  p_max_busy_time_us = &this->max_wait_time_us_;
  v30 = *(_BYTE *)(((unsigned __int64)&this->max_wait_time_us_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v30 && v30 )
    goto LABEL_72;
  p_max_busy_time_us = &this->stat_log_limit_;
  v31 = *(_BYTE *)(((unsigned __int64)&this->stat_log_limit_ >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
    goto LABEL_73;
  p_max_busy_time_us = &this->stat_log_soft_limit_;
  v32 = *(_BYTE *)(((unsigned __int64)&this->stat_log_soft_limit_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 36) & 7) + 3) >= v32 && v32 )
    goto LABEL_74;
  common::milog::MiLogStream::operator()(
    &v40,
    "init stat_log_mgr stat_log_level:%s soft_limit:%u limit:%u max_wait_time_us:%u max_busy_time_us:%u",
    *(const char **)(v3 + 32),
    this->stat_log_soft_limit_,
    this->stat_log_limit_,
    this->max_wait_time_us_,
    this->max_busy_time_us_);
LABEL_75:
  common::milog::MiLogStream::~MiLogStream(&v40);
LABEL_76:
  v33 = *(char **)(v3 + 32);
  if ( v33 != (char *)(v3 + 48) )
    operator delete(v33);
  if ( v41 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v9;
};

// Line 99: range 0000000014EB0C70-0000000014EB144B
int32_t __fastcall StatLogMgr::fini(StatLogMgr *const this)
{
  volatile signed __int32 *v1; // rbx
  _QWORD *p_M_ptr; // r13
  double v3; // xmm0_8
  common::tools::SafeQueue<StatLog> *p_stat_log_queue; // rbp
  std::mutex *p_queue_mu; // r12
  std::mutex *v6; // rdi
  unsigned int v7; // eax
  char v8; // dl
  signed __int32 v9; // eax
  unsigned __int64 v10; // rdi
  volatile signed __int32 *v11; // rax
  char v12; // cl
  signed __int32 v13; // eax
  unsigned __int64 v14; // rdi
  char v15; // dl
  char v16; // dl
  signed __int32 v17; // eax
  unsigned __int64 v18; // rdi
  volatile signed __int32 *v19; // rax
  char v20; // cl
  signed __int32 v21; // eax
  unsigned __int64 v22; // rdi
  char v23; // dl
  char v24; // dl
  signed __int32 v25; // eax
  unsigned __int64 v26; // rdi
  volatile signed __int32 *v27; // rax
  char v28; // cl
  signed __int32 v29; // eax
  unsigned __int64 v30; // rdi
  char v31; // dl
  unsigned __int64 v32; // rax
  signed __int32 v33; // eax
  unsigned __int64 p_M_start; // rdi
  std::_Deque_base<StatLog>::iterator *p_M_finish; // rdi
  volatile signed __int32 *v36; // rax
  char v37; // cl
  volatile signed __int32 *v38; // rax
  char v39; // cl
  volatile signed __int32 *v40; // rax
  char v41; // cl
  char v42; // cl
  char v43; // dl
  unsigned __int64 v44; // rdi
  volatile signed __int32 *v45; // rax
  char v46; // cl
  signed __int32 v47; // eax
  char v48; // dl

  p_stat_log_queue = &this->stat_log_queue_;
  p_queue_mu = &this->stat_log_queue_.queue_mu_;
  if ( &_pthread_key_create )
  {
    v6 = &this->stat_log_queue_.queue_mu_;
    v7 = pthread_mutex_lock(&v6->_M_mutex);
    v1 = (volatile signed __int32 *)v7;
    if ( v7 )
    {
      __asan_handle_no_return(v6);
      std::__throw_system_error((int)v1);
    }
  }
  while ( 1 )
  {
    p_M_finish = &p_stat_log_queue->queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&p_stat_log_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
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
      goto LABEL_9;
    }
    p_M_finish = &p_stat_log_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_stat_log_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_5;
    if ( p_stat_log_queue->queue_.c._M_impl._M_finish._M_cur == p_stat_log_queue->queue_.c._M_impl._M_start._M_cur )
      break;
    p_M_finish = &p_stat_log_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_stat_log_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    p_M_ptr = &p_stat_log_queue->queue_.c._M_impl._M_start._M_cur->head_ptr._M_ptr;
    p_M_finish = (std::_Deque_base<StatLog>::iterator *)&p_stat_log_queue->queue_.c._M_impl._M_start._M_last;
    if ( *(_BYTE *)(((unsigned __int64)&p_stat_log_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    if ( p_M_ptr == &p_stat_log_queue->queue_.c._M_impl._M_start._M_last[-1].head_ptr._M_ptr )
      goto LABEL_145;
    p_M_finish = (std::_Deque_base<StatLog>::iterator *)(p_M_ptr + 7);
    if ( *(_BYTE *)(((unsigned __int64)(p_M_ptr + 7) >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    v1 = (volatile signed __int32 *)p_M_ptr[7];
    if ( !v1 )
      goto LABEL_101;
    v36 = v1 + 2;
    if ( !&_pthread_key_create )
      goto LABEL_10;
    p_M_finish = (std::_Deque_base<StatLog>::iterator *)(v1 + 2);
    v37 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v36 & 7) + 3) < v37 || !v37 )
    {
      v9 = _InterlockedExchangeAdd(v36, 0xFFFFFFFF);
      goto LABEL_100;
    }
LABEL_9:
    __asan_report_store4(p_M_finish);
LABEL_10:
    v8 = *(_BYTE *)(((unsigned __int64)(v1 + 2) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v1 + 8) & 7) + 3) >= v8 && v8 )
    {
      v3 = __asan_report_load4(v1 + 2);
      goto LABEL_14;
    }
    v9 = *((_DWORD *)v1 + 2);
    *((_DWORD *)v1 + 2) = v9 - 1;
LABEL_100:
    if ( v9 != 1 )
      goto LABEL_101;
LABEL_14:
    v10 = (unsigned __int64)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v1);
LABEL_25:
      __asan_report_load8(v10);
LABEL_26:
      __asan_report_store4(v10);
LABEL_27:
      v14 = (unsigned __int64)(v1 + 3);
      v15 = *(_BYTE *)(((unsigned __int64)(v1 + 3) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v1 + 12) & 7) + 3) >= v15 && v15 )
      {
        v3 = __asan_report_load4(v14);
LABEL_31:
        __asan_report_load8(v14);
LABEL_32:
        __asan_report_load8(v14);
LABEL_33:
        __asan_report_load8(v14);
        goto LABEL_34;
      }
      v13 = *((_DWORD *)v1 + 3);
      *((_DWORD *)v1 + 3) = v13 - 1;
      goto LABEL_20;
    }
    v10 = *(_QWORD *)v1 + 16LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      goto LABEL_25;
    (*(void (__fastcall **)(volatile signed __int32 *, double))(*(_QWORD *)v1 + 16LL))(v1, v3);
    v11 = v1 + 3;
    if ( !&_pthread_key_create )
      goto LABEL_27;
    v10 = (unsigned __int64)(v1 + 3);
    v12 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v11 & 7) + 3) >= v12 && v12 )
      goto LABEL_26;
    v13 = _InterlockedExchangeAdd(v11, 0xFFFFFFFF);
LABEL_20:
    if ( v13 == 1 )
    {
      v14 = (unsigned __int64)v1;
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
        goto LABEL_31;
      v14 = *(_QWORD *)v1 + 24LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        goto LABEL_32;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
    }
LABEL_101:
    v14 = (unsigned __int64)(p_M_ptr + 5);
    if ( *(_BYTE *)(((unsigned __int64)(p_M_ptr + 5) >> 3) + 0x7FFF8000) )
      goto LABEL_33;
    v1 = (volatile signed __int32 *)p_M_ptr[5];
    if ( !v1 )
      goto LABEL_108;
    v38 = v1 + 2;
    if ( !&_pthread_key_create )
      goto LABEL_35;
    v14 = (unsigned __int64)(v1 + 2);
    v39 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v38 & 7) + 3) < v39 || !v39 )
    {
      v17 = _InterlockedExchangeAdd(v38, 0xFFFFFFFF);
      goto LABEL_107;
    }
LABEL_34:
    __asan_report_store4(v14);
LABEL_35:
    v16 = *(_BYTE *)(((unsigned __int64)(v1 + 2) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v1 + 8) & 7) + 3) >= v16 && v16 )
    {
      v3 = __asan_report_load4(v1 + 2);
      goto LABEL_39;
    }
    v17 = *((_DWORD *)v1 + 2);
    *((_DWORD *)v1 + 2) = v17 - 1;
LABEL_107:
    if ( v17 != 1 )
      goto LABEL_108;
LABEL_39:
    v18 = (unsigned __int64)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v1);
LABEL_50:
      __asan_report_load8(v18);
LABEL_51:
      __asan_report_store4(v18);
LABEL_52:
      v22 = (unsigned __int64)(v1 + 3);
      v23 = *(_BYTE *)(((unsigned __int64)(v1 + 3) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v1 + 12) & 7) + 3) >= v23 && v23 )
      {
        v3 = __asan_report_load4(v22);
LABEL_56:
        __asan_report_load8(v22);
LABEL_57:
        __asan_report_load8(v22);
LABEL_58:
        __asan_report_load8(v22);
        goto LABEL_59;
      }
      v21 = *((_DWORD *)v1 + 3);
      *((_DWORD *)v1 + 3) = v21 - 1;
      goto LABEL_45;
    }
    v18 = *(_QWORD *)v1 + 16LL;
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      goto LABEL_50;
    (*(void (__fastcall **)(volatile signed __int32 *, double))(*(_QWORD *)v1 + 16LL))(v1, v3);
    v19 = v1 + 3;
    if ( !&_pthread_key_create )
      goto LABEL_52;
    v18 = (unsigned __int64)(v1 + 3);
    v20 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v19 & 7) + 3) >= v20 && v20 )
      goto LABEL_51;
    v21 = _InterlockedExchangeAdd(v19, 0xFFFFFFFF);
LABEL_45:
    if ( v21 == 1 )
    {
      v22 = (unsigned __int64)v1;
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
        goto LABEL_56;
      v22 = *(_QWORD *)v1 + 24LL;
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        goto LABEL_57;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
    }
LABEL_108:
    v22 = (unsigned __int64)(p_M_ptr + 3);
    if ( *(_BYTE *)(((unsigned __int64)(p_M_ptr + 3) >> 3) + 0x7FFF8000) )
      goto LABEL_58;
    v1 = (volatile signed __int32 *)p_M_ptr[3];
    if ( !v1 )
      goto LABEL_115;
    v40 = v1 + 2;
    if ( !&_pthread_key_create )
      goto LABEL_60;
    v22 = (unsigned __int64)(v1 + 2);
    v41 = *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v40 & 7) + 3) < v41 || !v41 )
    {
      v25 = _InterlockedExchangeAdd(v40, 0xFFFFFFFF);
      goto LABEL_114;
    }
LABEL_59:
    __asan_report_store4(v22);
LABEL_60:
    v24 = *(_BYTE *)(((unsigned __int64)(v1 + 2) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v1 + 8) & 7) + 3) >= v24 && v24 )
    {
      v3 = __asan_report_load4(v1 + 2);
      goto LABEL_64;
    }
    v25 = *((_DWORD *)v1 + 2);
    *((_DWORD *)v1 + 2) = v25 - 1;
LABEL_114:
    if ( v25 != 1 )
      goto LABEL_115;
LABEL_64:
    v26 = (unsigned __int64)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v1);
LABEL_75:
      __asan_report_load8(v26);
LABEL_76:
      __asan_report_store4(v26);
LABEL_77:
      v30 = (unsigned __int64)(v1 + 3);
      v31 = *(_BYTE *)(((unsigned __int64)(v1 + 3) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v1 + 12) & 7) + 3) >= v31 && v31 )
      {
        v3 = __asan_report_load4(v30);
LABEL_81:
        __asan_report_load8(v30);
LABEL_82:
        __asan_report_load8(v30);
LABEL_83:
        v32 = __asan_report_load8(v30);
LABEL_84:
        v33 = _InterlockedExchangeAdd((volatile signed __int32 *)v32, 0xFFFFFFFF);
        goto LABEL_85;
      }
      v29 = *((_DWORD *)v1 + 3);
      *((_DWORD *)v1 + 3) = v29 - 1;
      goto LABEL_70;
    }
    v26 = *(_QWORD *)v1 + 16LL;
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      goto LABEL_75;
    (*(void (__fastcall **)(volatile signed __int32 *, double))(*(_QWORD *)v1 + 16LL))(v1, v3);
    v27 = v1 + 3;
    if ( !&_pthread_key_create )
      goto LABEL_77;
    v26 = (unsigned __int64)(v1 + 3);
    v28 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v27 & 7) + 3) >= v28 && v28 )
      goto LABEL_76;
    v29 = _InterlockedExchangeAdd(v27, 0xFFFFFFFF);
LABEL_70:
    if ( v29 == 1 )
    {
      v30 = (unsigned __int64)v1;
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
        goto LABEL_81;
      v30 = *(_QWORD *)v1 + 24LL;
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        goto LABEL_82;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
    }
LABEL_115:
    v30 = (unsigned __int64)(p_M_ptr + 1);
    if ( *(_BYTE *)(((unsigned __int64)(p_M_ptr + 1) >> 3) + 0x7FFF8000) )
      goto LABEL_83;
    v1 = (volatile signed __int32 *)p_M_ptr[1];
    if ( !v1 )
      goto LABEL_86;
    v32 = (unsigned __int64)(v1 + 2);
    if ( &_pthread_key_create )
    {
      v42 = *(_BYTE *)((v32 >> 3) + 0x7FFF8000);
      if ( (char)((v32 & 7) + 3) < v42 || !v42 )
        goto LABEL_84;
      __asan_report_store4(v1 + 2);
    }
    v43 = *(_BYTE *)(((unsigned __int64)(v1 + 2) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v1 + 8) & 7) + 3) >= v43 && v43 )
    {
      v3 = __asan_report_load4(v1 + 2);
      goto LABEL_125;
    }
    v33 = *((_DWORD *)v1 + 2);
    *((_DWORD *)v1 + 2) = v33 - 1;
LABEL_85:
    if ( v33 != 1 )
      goto LABEL_86;
LABEL_125:
    v44 = (unsigned __int64)v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v1);
LABEL_136:
      __asan_report_load8(v44);
LABEL_137:
      __asan_report_store4(v44);
LABEL_138:
      p_M_start = (unsigned __int64)(v1 + 3);
      v48 = *(_BYTE *)(((unsigned __int64)(v1 + 3) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v1 + 12) & 7) + 3) >= v48 && v48 )
      {
        v3 = __asan_report_load4(p_M_start);
LABEL_142:
        __asan_report_load8(p_M_start);
LABEL_143:
        __asan_report_load8(p_M_start);
        goto LABEL_144;
      }
      v47 = *((_DWORD *)v1 + 3);
      *((_DWORD *)v1 + 3) = v47 - 1;
      goto LABEL_131;
    }
    v44 = *(_QWORD *)v1 + 16LL;
    if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
      goto LABEL_136;
    (*(void (__fastcall **)(volatile signed __int32 *, double))(*(_QWORD *)v1 + 16LL))(v1, v3);
    v45 = v1 + 3;
    if ( !&_pthread_key_create )
      goto LABEL_138;
    v44 = (unsigned __int64)(v1 + 3);
    v46 = *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v45 & 7) + 3) >= v46 && v46 )
      goto LABEL_137;
    v47 = _InterlockedExchangeAdd(v45, 0xFFFFFFFF);
LABEL_131:
    if ( v47 == 1 )
    {
      p_M_start = (unsigned __int64)v1;
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
        goto LABEL_142;
      p_M_start = *(_QWORD *)v1 + 24LL;
      if ( *(_BYTE *)((p_M_start >> 3) + 0x7FFF8000) )
        goto LABEL_143;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
    }
LABEL_86:
    p_M_start = (unsigned __int64)&p_stat_log_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_stat_log_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
    {
LABEL_144:
      __asan_report_load8(p_M_start);
LABEL_145:
      std::deque<StatLog>::_M_pop_front_aux(&p_stat_log_queue->queue_.c);
    }
    else
    {
      ++p_stat_log_queue->queue_.c._M_impl._M_start._M_cur;
    }
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_queue_mu->_M_mutex);
  return 0;
};

// Line 126: range 0000000014EB2096-0000000014EB58E3
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StatLogMgr::workThread(StatLogMgr *const this)
{
  double v1; // xmm0_8
  unsigned __int64 v3; // r15
  char *v4; // rbx
  __int64 v5; // rax
  uint64_t NowMs; // r12
  uint64_t v7; // rdi
  void *v8; // rdi
  size_t v9; // rbp
  __int64 v10; // rsi
  std::string::size_type *p_M_string_length; // rdi
  void *v12; // rdi
  size_t v13; // rbp
  uint64_t v14; // rdi
  void *v15; // rdi
  size_t M_string_length; // rbp
  const char *M_p; // rbp
  pthread_t v18; // rax
  void *p_is_run; // rdi
  char v20; // dl
  std::mutex *p_queue_mu; // r13
  void *p_M_finish; // rdi
  StatLog **v23; // rax
  std::size_t v24; // rax
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer M_first; // rdi
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer v26; // rax
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Map_pointer M_node; // rdx
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer v28; // rsi
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer v29; // rdi
  __int128 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rbp
  __int64 *v35; // rdi
  volatile signed __int32 *p_owner; // rax
  char v37; // cl
  volatile signed __int32 *v38; // rax
  __int64 *v39; // rdi
  char v40; // cl
  signed __int32 v41; // eax
  unsigned __int64 v42; // rdi
  volatile signed __int32 *v43; // rax
  char v44; // cl
  volatile signed __int32 *v45; // rax
  __int64 *v46; // rdi
  char v47; // cl
  signed __int32 v48; // eax
  unsigned __int64 v49; // rdi
  volatile signed __int32 *v50; // rax
  char v51; // cl
  volatile signed __int32 *v52; // rax
  __int64 *v53; // rdi
  char v54; // cl
  signed __int32 v55; // eax
  unsigned __int64 v56; // rdi
  volatile signed __int32 *v57; // rax
  char v58; // cl
  volatile signed __int32 *v59; // rax
  unsigned __int64 v60; // rdi
  char v61; // cl
  signed __int32 v62; // eax
  unsigned __int64 v63; // rdi
  volatile signed __int32 *v64; // rax
  char v65; // cl
  signed __int32 v66; // eax
  unsigned __int64 v67; // rdi
  volatile signed __int32 *v68; // rax
  char v69; // cl
  signed __int32 v70; // eax
  unsigned __int64 v71; // rdi
  volatile signed __int32 *v72; // rax
  char v73; // cl
  signed __int32 v74; // eax
  unsigned __int64 v75; // rdi
  volatile signed __int32 *v76; // rax
  char v77; // cl
  signed __int32 v78; // eax
  char v79; // dl
  char v80; // dl
  unsigned __int64 v81; // rdi
  volatile signed __int32 *v82; // rax
  char v83; // cl
  signed __int32 v84; // eax
  char v85; // dl
  char v86; // dl
  char v87; // dl
  unsigned __int64 v88; // rdi
  volatile signed __int32 *v89; // rax
  char v90; // cl
  signed __int32 v91; // eax
  char v92; // dl
  char v93; // dl
  char v94; // dl
  unsigned __int64 v95; // rdi
  volatile signed __int32 *v96; // rax
  char v97; // cl
  signed __int32 v98; // eax
  char v99; // dl
  char v100; // dl
  char v101; // dl
  unsigned __int64 v102; // rdi
  volatile signed __int32 *v103; // rax
  char v104; // cl
  signed __int32 v105; // eax
  char v106; // dl
  char v107; // dl
  unsigned __int64 v108; // rdi
  volatile signed __int32 *v109; // rax
  char v110; // cl
  signed __int32 v111; // eax
  char v112; // dl
  char v113; // dl
  unsigned __int64 v114; // rdi
  volatile signed __int32 *v115; // rax
  char v116; // cl
  signed __int32 v117; // eax
  char v118; // dl
  char v119; // dl
  unsigned __int64 v120; // rdi
  volatile signed __int32 *v121; // rax
  char v122; // cl
  signed __int32 v123; // eax
  char v124; // dl
  char v125; // dl
  unsigned __int64 v126; // rdi
  volatile signed __int32 *v127; // rax
  char v128; // cl
  signed __int32 v129; // eax
  unsigned __int64 v130; // rdi
  char v131; // dl
  __int64 v132; // r9 OVERLAPPED
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v133; // rax
  volatile signed __int32 *p_M_use_count; // rdx
  char v135; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v136; // rax
  volatile signed __int32 *v137; // rdx
  _Atomic_word *v138; // rdi
  char v139; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v140; // rax
  volatile signed __int32 *v141; // rdx
  _Atomic_word *v142; // rdi
  char v143; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v144; // rax
  volatile signed __int32 *v145; // rdx
  _Atomic_word *v146; // rdi
  char v147; // cl
  StatLogUtils::MessagePtr v148; // rdx
  StatLogUtils::MessagePtr v149; // rdi
  char *v150; // r8
  int32_t v151; // eax
  char v152; // cl
  char v153; // cl
  char v154; // cl
  char v155; // cl
  int32_t v156; // r12d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rbp
  _Atomic_word *v158; // rax
  char v159; // cl
  signed __int32 M_use_count; // eax
  _Atomic_word *v161; // rax
  _Atomic_word *p_M_weak_count; // rdi
  char v163; // cl
  signed __int32 v164; // eax
  _Atomic_word *v165; // rax
  _Atomic_word *v166; // rdi
  char v167; // cl
  signed __int32 v168; // eax
  _Atomic_word *v169; // rax
  _Atomic_word *v170; // rdi
  char v171; // cl
  signed __int32 v172; // eax
  char v173; // dl
  unsigned __int64 v174; // rdi
  volatile signed __int32 *v175; // rax
  char v176; // cl
  signed __int32 M_weak_count; // eax
  char v178; // dl
  char v179; // dl
  unsigned __int64 v180; // rdi
  volatile signed __int32 *v181; // rax
  char v182; // cl
  signed __int32 v183; // eax
  char v184; // dl
  char v185; // dl
  unsigned __int64 v186; // rdi
  volatile signed __int32 *v187; // rax
  char v188; // cl
  signed __int32 v189; // eax
  char v190; // dl
  char v191; // dl
  unsigned __int64 v192; // rdi
  volatile signed __int32 *v193; // rax
  char v194; // cl
  signed __int32 v195; // eax
  unsigned __int64 v196; // rdi
  char v197; // dl
  char v198; // al
  int v199; // r12d
  uint32_t *p_max_wait_time_us; // rdi
  char v201; // dl
  char v202; // al
  common::milog::MilogStringStream *ostr; // r13
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v206; // rbp
  common::milog::MilogStringStream *v207; // r13
  char *v208; // rdi
  size_t v209; // rbp
  common::milog::MilogStringStream *v210; // r13
  char *v211; // rdi
  size_t v212; // rbp
  common::milog::MilogStringStream *v213; // r13
  char *v214; // rdi
  size_t v215; // rbp
  common::milog::MilogStringStream *v216; // r13
  common::milog::MilogStringStream *v217; // rdi
  char *v218; // rdi
  size_t v219; // rbp
  common::milog::MilogStringStream *v220; // r13
  char *v221; // rdi
  size_t v222; // rbp
  common::milog::MilogStringStream *v223; // r13
  char *v224; // rdi
  size_t v225; // rbp
  common::milog::MilogStringStream *v226; // r13
  common::milog::MilogStringStream *v227; // rdi
  char *v228; // rdi
  size_t v229; // rbp
  common::milog::MilogStringStream *v230; // r13
  char *v231; // rdi
  size_t v232; // rbp
  common::milog::MilogStringStream *v233; // r13
  char *v234; // rdi
  size_t v235; // rbp
  common::milog::MilogStringStream *v236; // r13
  char *v237; // rdi
  size_t v238; // rbp
  common::milog::MilogStringStream *v239; // r13
  char *v240; // rdi
  size_t v241; // rbp
  common::milog::MilogStringStream *v242; // r13
  char *v243; // rdi
  size_t v244; // rbp
  common::milog::MilogStringStream *v245; // r13
  char *v246; // rdi
  size_t v247; // rbp
  const char *v248; // rdx
  __int64 align; // rcx
  __int64 v250; // rbx
  __int128 v251; // rax
  StatLog *v252; // r8
  StatLog *v253; // r9
  StatLog *v254; // rsi
  StatLog **v255; // rdi
  StatLogMgr *v256; // rdi
  volatile signed __int32 *v257; // rbx
  volatile signed __int32 *v258; // rdi
  char v259; // dl
  signed __int32 v260; // eax
  volatile signed __int32 *v261; // rdi
  char v262; // dl
  signed __int32 v263; // eax
  volatile signed __int32 *v264; // rdi
  char v265; // dl
  signed __int32 v266; // eax
  volatile signed __int32 *v267; // rdi
  char v268; // dl
  signed __int32 v269; // eax
  char v271; // dl
  volatile signed __int32 *v272; // rdi
  char v273; // dl
  signed __int32 v274; // eax
  char v275; // dl
  char v276; // dl
  volatile signed __int32 *v277; // rdi
  char v278; // dl
  signed __int32 v279; // eax
  char v280; // dl
  char v281; // dl
  volatile signed __int32 *v282; // rdi
  char v283; // dl
  signed __int32 v284; // eax
  char v285; // dl
  char v286; // dl
  volatile signed __int32 *v287; // rdi
  char v288; // dl
  signed __int32 v289; // eax
  unsigned __int64 v290; // rdi
  char v291; // dl
  struct _Unwind_Exception *v292; // rbx
  std::deque<StatLog>::iterator v293; // [rsp-20h] [rbp-3F8h]
  std::deque<StatLog>::iterator v294; // [rsp-20h] [rbp-3F8h]
  StatLogUtils::MessagePtr v295; // [rsp+0h] [rbp-3D8h]
  std::string *t2; // [rsp+10h] [rbp-3C8h]
  __int64 queue_size; // [rsp+18h] [rbp-3C0h]
  unsigned int acc_queue_size; // [rsp+20h] [rbp-3B8h]
  unsigned int wait_time; // [rsp+24h] [rbp-3B4h]
  unsigned __int64 last_time_ms; // [rsp+28h] [rbp-3B0h]
  signed int acc_busy_time; // [rsp+30h] [rbp-3A8h]
  unsigned int acc_wait_time; // [rsp+34h] [rbp-3A4h]
  unsigned int acc_frame_count; // [rsp+38h] [rbp-3A0h]
  bool has_slow_frame; // [rsp+3Fh] [rbp-399h]
  unsigned __int64 v305; // [rsp+48h] [rbp-390h]
  _DWORD *v306; // [rsp+50h] [rbp-388h]
  StatLogUtils::MessagePtr head_ptr; // [rsp+60h] [rbp-378h] BYREF
  __int64 v308; // [rsp+70h] [rbp-368h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v309; // [rsp+78h] [rbp-360h]
  StatLogUtils::MessagePtr head_ext_ptr; // [rsp+80h] [rbp-358h] BYREF
  __int64 v311; // [rsp+90h] [rbp-348h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v312; // [rsp+98h] [rbp-340h]
  common::milog::MiLogStream v313; // [rsp+A0h] [rbp-338h] BYREF
  common::milog::MiLogStream v314; // [rsp+C0h] [rbp-318h] BYREF
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer M_cur; // [rsp+E0h] [rbp-2F8h]
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer v316; // [rsp+E8h] [rbp-2F0h]
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer M_last; // [rsp+F0h] [rbp-2E8h]
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Map_pointer v318; // [rsp+F8h] [rbp-2E0h]
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer v319; // [rsp+100h] [rbp-2D8h]
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer v320; // [rsp+108h] [rbp-2D0h]
  std::_Deque_iterator<StatLog,StatLog&,StatLog*>::_Elt_pointer v321; // [rsp+110h] [rbp-2C8h]
  __int64 v322; // [rsp+118h] [rbp-2C0h]
  char v323[696]; // [rsp+120h] [rbp-2B8h] BYREF

  v305 = (unsigned __int64)v323;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(640LL);
    if ( v5 )
      v305 = v5;
  }
  v3 = v305 + 640;
  *(_QWORD *)v305 = 1102416563LL;
  *(_QWORD *)(v305 + 8) = "9 48 16 9 timer:136 80 16 10 timer2:155 112 32 11 log_str:133 176 32 6 __last 240 32 7 __first"
                          " 304 32 6 __last 368 32 7 __first 432 64 12 stat_log:132 528 80 7 que:135";
  *(_QWORD *)(v305 + 16) = StatLogMgr::workThread;
  v306 = (_DWORD *)(v305 >> 3);
  v306[536862720] = -235802127;
  v306[536862721] = 61937;
  v306[536862722] = 62194;
  v306[536862723] = 62194;
  v306[536862724] = -219021312;
  v306[536862725] = 62194;
  v306[536862726] = -219021312;
  v306[536862727] = 62194;
  v306[536862728] = -219021312;
  v306[536862729] = 62194;
  v306[536862730] = -219021312;
  v306[536862731] = 62194;
  v306[536862732] = -219021312;
  v306[536862733] = 62194;
  v306[536862735] = -219021312;
  v306[536862736] = 62194;
  v306[536862739] = -202116109;
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v305 + 368),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/core_class/stat_log_mgr.cpp",
    "workThread",
    127);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v305 + 368), "StatLogMgr thread start");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v305 + 368));
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v305 + 368),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/core_class/stat_log_mgr.cpp",
    "workThread",
    129);
  NowMs = *(_QWORD *)(v305 + 392);
  if ( *(_BYTE *)((NowMs >> 3) + 0x7FFF8000) )
  {
    v7 = *(_QWORD *)(v305 + 392);
    __asan_report_load8(v7);
    goto LABEL_20;
  }
  v7 = NowMs + 8;
  if ( *(_BYTE *)(((NowMs + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(v7);
LABEL_21:
    p_M_string_length = (std::string::size_type *)NowMs;
    __asan_report_load8(NowMs);
    goto LABEL_22;
  }
  v8 = *(void **)(NowMs + 8);
  v9 = *(_DWORD *)NowMs + 0x4000 - (int)v8;
  if ( v9 > 0xC )
    v9 = 13LL;
  memcpy(v8, "[THREAD] tid:", v9);
  *(_QWORD *)(NowMs + 8) += v9;
  v10 = syscall(186LL);
  v3 = v305 + 640;
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v305 + 392),
    v10);
  NowMs = *(_QWORD *)(v305 + 392);
  if ( *(_BYTE *)((NowMs >> 3) + 0x7FFF8000) )
    goto LABEL_21;
  p_M_string_length = (std::string::size_type *)(NowMs + 8);
  if ( *(_BYTE *)(((NowMs + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_string_length);
    goto LABEL_23;
  }
  v12 = *(void **)(NowMs + 8);
  v13 = *(_DWORD *)NowMs + 0x4000 - (_DWORD)v12 != 0LL;
  memcpy(v12, " ", v13);
  *(_QWORD *)(NowMs + 8) += v13;
  NowMs = *(_QWORD *)(v305 + 392);
  p_M_string_length = &this->thread_name_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_name_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(p_M_string_length);
    goto LABEL_24;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(this);
    goto LABEL_25;
  }
  if ( *(_BYTE *)((NowMs >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    v14 = NowMs;
    __asan_report_load8(NowMs);
    goto LABEL_26;
  }
  v14 = NowMs + 8;
  if ( *(_BYTE *)(((NowMs + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(v14);
LABEL_27:
    __asan_report_load8(this);
    goto LABEL_28;
  }
  v15 = *(void **)(NowMs + 8);
  M_string_length = *(_DWORD *)NowMs + 0x4000 - (int)v15;
  if ( this->thread_name_._M_string_length <= M_string_length )
    M_string_length = this->thread_name_._M_string_length;
  memcpy(v15, this->thread_name_._M_dataplus._M_p, M_string_length);
  *(_QWORD *)(NowMs + 8) += M_string_length;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v305 + 368));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_27;
  M_p = this->thread_name_._M_dataplus._M_p;
  v18 = pthread_self();
  pthread_setname_np(v18, M_p);
  v3 = v305 + 640;
  *(_QWORD *)(v305 + 432) = 0LL;
  *(_QWORD *)(v305 + 440) = 0LL;
  *(_QWORD *)(v305 + 448) = 0LL;
  *(_QWORD *)(v305 + 456) = 0LL;
  *(_QWORD *)(v305 + 464) = 0LL;
  *(_QWORD *)(v305 + 472) = 0LL;
  *(_QWORD *)(v305 + 480) = 0LL;
  *(_QWORD *)(v305 + 488) = 0LL;
  *(_QWORD *)(v305 + 112) = v305 + 128;
  *(_QWORD *)(v305 + 120) = 0LL;
  *(_BYTE *)(v305 + 128) = 0;
  *(_QWORD *)(v305 + 528) = 0LL;
  *(_QWORD *)(v305 + 536) = 0LL;
  *(_QWORD *)(v305 + 544) = 0LL;
  *(_QWORD *)(v305 + 552) = 0LL;
  *(_QWORD *)(v305 + 560) = 0LL;
  *(_QWORD *)(v305 + 568) = 0LL;
  *(_QWORD *)(v305 + 576) = 0LL;
  *(_QWORD *)(v305 + 584) = 0LL;
  *(_QWORD *)(v305 + 592) = 0LL;
  *(_QWORD *)(v305 + 600) = 0LL;
  std::_Deque_base<StatLog>::_M_initialize_map((std::_Deque_base<StatLog> *const)(v305 + 528), 0LL);
LABEL_28:
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 - 592));
  last_time_ms = common::tools::TimeUtils::getNowMs();
  acc_frame_count = 0;
  acc_queue_size = 0;
  acc_busy_time = 0;
  acc_wait_time = 0;
  has_slow_frame = 0;
  while ( 1 )
  {
    p_is_run = &this->is_run_;
    v20 = *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000);
    if ( v20 <= (((unsigned __int8)this - 72) & 7) && v20 )
    {
      __asan_report_load1(p_is_run);
LABEL_55:
      __asan_handle_no_return(p_is_run);
      std::__throw_system_error(NowMs);
    }
    if ( !this->is_run_._M_base._M_i )
      break;
    p_queue_mu = &this->stat_log_queue_.queue_mu_;
    if ( &_pthread_key_create )
    {
      p_is_run = &this->stat_log_queue_.queue_mu_;
      LODWORD(NowMs) = pthread_mutex_lock(&this->stat_log_queue_.queue_mu_._M_mutex);
      if ( (_DWORD)NowMs )
        goto LABEL_55;
    }
    p_M_finish = &this->stat_log_queue_.queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
LABEL_57:
      __asan_report_load8(p_M_finish);
LABEL_58:
      __asan_report_load_n(p_M_finish, 32LL);
LABEL_59:
      __asan_report_load_n(p_M_finish, 32LL);
LABEL_60:
      __asan_report_load8(p_M_finish);
LABEL_61:
      __asan_report_load8(p_M_finish);
LABEL_62:
      __asan_report_load_n(p_M_finish, 32LL);
LABEL_63:
      __asan_report_load_n(p_M_finish, 32LL);
LABEL_64:
      __asan_report_load8(p_M_finish);
      goto LABEL_65;
    }
    p_M_finish = &this->stat_log_queue_.queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_57;
    if ( this->stat_log_queue_.queue_.c._M_impl._M_finish._M_cur == this->stat_log_queue_.queue_.c._M_impl._M_start._M_cur )
      goto LABEL_51;
    *(__m128i *)(v305 + 368) = _mm_load_si128((const __m128i *)(v305 + 544));
    *(__m128i *)(v305 + 384) = _mm_load_si128((const __m128i *)(v305 + 560));
    p_M_finish = &this->stat_log_queue_.queue_.c._M_impl._M_start;
    if ( *(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 95) & 7)
      || *(char *)(((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
    {
      goto LABEL_58;
    }
    *(__m128i *)(v305 + 544) = _mm_loadu_si128((const __m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_start);
    *(__m128i *)(v305 + 560) = _mm_loadu_si128((const __m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_start._M_last);
    *(__m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_start._M_cur = _mm_load_si128((const __m128i *)(v305 + 368));
    *(__m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_start._M_last = _mm_load_si128((const __m128i *)(v305 + 384));
    *(__m128i *)(v305 + 368) = _mm_load_si128((const __m128i *)(v305 + 576));
    *(__m128i *)(v305 + 384) = _mm_load_si128((const __m128i *)(v305 + 592));
    p_M_finish = &this->stat_log_queue_.queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 127) & 7)
      || *(char *)(((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
    {
      goto LABEL_59;
    }
    *(__m128i *)(v305 + 576) = _mm_loadu_si128((const __m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_finish);
    *(__m128i *)(v305 + 592) = _mm_loadu_si128((const __m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_last);
    *(__m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v305 + 368));
    *(__m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v305 + 384));
    v23 = *(StatLog ***)(v305 + 528);
    p_M_finish = &this->stat_log_queue_;
    if ( *(_BYTE *)(((unsigned __int64)&this->stat_log_queue_ >> 3) + 0x7FFF8000) )
      goto LABEL_60;
    *(_QWORD *)(v305 + 528) = this->stat_log_queue_.queue_.c._M_impl._M_map;
    this->stat_log_queue_.queue_.c._M_impl._M_map = v23;
    v24 = *(_QWORD *)(v305 + 536);
    p_M_finish = &this->stat_log_queue_.queue_.c._M_impl._M_map_size;
    if ( *(_BYTE *)(((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
      goto LABEL_61;
    *(_QWORD *)(v305 + 536) = this->stat_log_queue_.queue_.c._M_impl._M_map_size;
    this->stat_log_queue_.queue_.c._M_impl._M_map_size = v24;
    p_M_finish = &this->stat_log_queue_.queue_.c._M_impl._M_start;
    if ( *(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 95) & 7)
      || *(char *)(((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
    {
      goto LABEL_62;
    }
    M_first = this->stat_log_queue_.queue_.c._M_impl._M_start._M_first;
    M_cur = this->stat_log_queue_.queue_.c._M_impl._M_start._M_cur;
    v316 = M_first;
    M_node = this->stat_log_queue_.queue_.c._M_impl._M_start._M_node;
    M_last = this->stat_log_queue_.queue_.c._M_impl._M_start._M_last;
    v26 = M_last;
    v318 = M_node;
    *(_QWORD *)(v305 + 240) = M_cur;
    *(_QWORD *)(v305 + 248) = M_first;
    *(_QWORD *)(v305 + 256) = v26;
    *(_QWORD *)(v305 + 264) = M_node;
    p_M_finish = &this->stat_log_queue_.queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this + 127) & 7)
      || *(char *)(((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
    {
      goto LABEL_63;
    }
    v29 = this->stat_log_queue_.queue_.c._M_impl._M_finish._M_first;
    v319 = this->stat_log_queue_.queue_.c._M_impl._M_finish._M_cur;
    v28 = v319;
    v320 = v29;
    *((_QWORD *)&v30 + 1) = this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node;
    v321 = this->stat_log_queue_.queue_.c._M_impl._M_finish._M_last;
    *(_QWORD *)&v30 = v321;
    v322 = *((_QWORD *)&v30 + 1);
    *(__m128i *)(v305 + 368) = _mm_load_si128((const __m128i *)(v305 + 240));
    *(__m128i *)(v305 + 384) = _mm_load_si128((const __m128i *)(v305 + 256));
    *(_QWORD *)(v305 + 304) = v28;
    *(_QWORD *)(v305 + 312) = v29;
    *(_OWORD *)(v305 + 320) = v30;
    *(_OWORD *)&v293._M_last = v30;
    *(_OWORD *)&v293._M_cur = *(_OWORD *)(v305 + 304);
    std::deque<StatLog>::_M_destroy_data_aux(
      &this->stat_log_queue_.queue_.c,
      *(std::deque<StatLog>::iterator *)(v305 + 368),
      v293);
    p_M_finish = &this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node;
    if ( *(_BYTE *)(((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
      goto LABEL_64;
    std::_Deque_base<StatLog>::_M_destroy_nodes(
      &this->stat_log_queue_.queue_.c,
      (std::_Deque_base<StatLog>::_Map_pointer)(*(_QWORD *)(v305 + 264) + 8LL),
      this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node + 1);
    p_M_finish = &this->stat_log_queue_.queue_.c._M_impl._M_finish;
    if ( (*(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                   + 0x7FFF8000) == 0
       || *(_BYTE *)((((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                   + 0x7FFF8000) > (((unsigned __int8)this + 127) & 7))
      && *(char *)(((unsigned __int64)&this->stat_log_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) >= 0 )
    {
      *(__m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v305 + 240));
      *(__m128i *)&this->stat_log_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v305 + 256));
LABEL_51:
      if ( &_pthread_key_create )
        pthread_mutex_unlock(&this->stat_log_queue_.queue_mu_._M_mutex);
      v31 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v305 + 48));
      goto LABEL_66;
    }
LABEL_65:
    v31 = __asan_report_store_n(p_M_finish, 32LL);
LABEL_66:
    wait_time = v31;
    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v305 + 48));
    v4 = (char *)(v305 + 640);
    queue_size = *((_QWORD *)v4 - 5)
               - *((_QWORD *)v4 - 9)
               + ((__int64)(*((_QWORD *)v4 - 8) - *((_QWORD *)v4 - 7)) >> 6)
               - 8
               + ((__int64)(*((_QWORD *)v4 - 10) - *((_QWORD *)v4 - 12)) >> 6);
    t2 = 0LL;
    HIDWORD(v295._M_refcount._M_pi) = 0;
    while ( *(_QWORD *)(v305 + 576) != *(_QWORD *)(v305 + 544) )
    {
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v305 + 80));
      v32 = *(_QWORD *)(v305 + 552);
      v33 = *(_QWORD *)(v305 + 544);
      *(_QWORD *)(v305 + 368) = v33;
      *(_QWORD *)(v305 + 376) = v32;
      *(__m128i *)(v305 + 384) = _mm_load_si128((const __m128i *)(v305 + 560));
      v34 = v33;
      v35 = (__int64 *)v33;
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v33);
LABEL_159:
        __asan_report_load8(v35);
LABEL_160:
        __asan_report_store4(v35);
        goto LABEL_161;
      }
      *(_QWORD *)(v305 + 432) = *(_QWORD *)v33;
      v35 = (__int64 *)(v33 + 8);
      if ( *(_BYTE *)(((v33 + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_159;
      p_queue_mu = *(std::mutex **)(v33 + 8);
      if ( p_queue_mu == *(std::mutex **)(v305 + 440) )
        goto LABEL_82;
      if ( !p_queue_mu )
        goto LABEL_75;
      p_owner = &p_queue_mu->_M_mutex.__data.__owner;
      if ( &_pthread_key_create )
      {
        v35 = &p_queue_mu->_M_mutex.__align + 1;
        v37 = *(_BYTE *)(((unsigned __int64)p_owner >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)p_owner & 7) + 3) < v37 || !v37 )
        {
          _InterlockedAdd(p_owner, 1u);
          goto LABEL_75;
        }
        goto LABEL_160;
      }
LABEL_161:
      v39 = &p_queue_mu->_M_mutex.__align + 1;
      v79 = *(_BYTE *)(((unsigned __int64)(&p_queue_mu->_M_mutex.__align + 1) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)p_queue_mu + 8) & 7) + 3) >= v79 && v79 )
      {
        v1 = __asan_report_load4(v39);
LABEL_165:
        __asan_report_store4(v39);
LABEL_166:
        v80 = *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((v3 + 8) & 7) + 3) >= v80 && v80 )
        {
          v1 = __asan_report_load4(v3 + 8);
LABEL_170:
          v81 = v3;
          if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v3);
          }
          else
          {
            v81 = *(_QWORD *)v3 + 16LL;
            if ( !*(_BYTE *)((v81 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v3 + 16LL))(v3, v1);
              v82 = (volatile signed __int32 *)(v3 + 12);
              if ( &_pthread_key_create )
              {
                v81 = v3 + 12;
                v83 = *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v82 & 7) + 3) < v83 || !v83 )
                {
                  v84 = _InterlockedExchangeAdd(v82, 0xFFFFFFFF);
LABEL_176:
                  if ( v84 == 1 )
                  {
                    v42 = v3;
                    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                      goto LABEL_187;
                    v42 = *(_QWORD *)v3 + 24LL;
                    if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
                      goto LABEL_188;
                    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
                  }
                  goto LABEL_81;
                }
LABEL_182:
                __asan_report_store4(v81);
              }
              v42 = v3 + 12;
              v85 = *(_BYTE *)(((v3 + 12) >> 3) + 0x7FFF8000);
              if ( (char)(((v3 + 12) & 7) + 3) >= v85 && v85 )
              {
                v1 = __asan_report_load4(v42);
LABEL_187:
                __asan_report_load8(v42);
LABEL_188:
                __asan_report_load8(v42);
LABEL_189:
                __asan_report_load8(v42);
LABEL_190:
                __asan_report_load8(v42);
LABEL_191:
                __asan_report_store4(v42);
                goto LABEL_192;
              }
              v84 = *(_DWORD *)(v3 + 12);
              *(_DWORD *)(v3 + 12) = v84 - 1;
              goto LABEL_176;
            }
          }
          __asan_report_load8(v81);
          goto LABEL_182;
        }
        v41 = *(_DWORD *)(v3 + 8);
        *(_DWORD *)(v3 + 8) = v41 - 1;
        goto LABEL_80;
      }
      ++p_queue_mu->_M_mutex.__data.__owner;
LABEL_75:
      v3 = *(_QWORD *)(v305 + 440);
      if ( !v3 )
        goto LABEL_81;
      v38 = (volatile signed __int32 *)(v3 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_166;
      v39 = (__int64 *)(v3 + 8);
      v40 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v38 & 7) + 3) >= v40 && v40 )
        goto LABEL_165;
      v41 = _InterlockedExchangeAdd(v38, 0xFFFFFFFF);
LABEL_80:
      if ( v41 == 1 )
        goto LABEL_170;
LABEL_81:
      *(_QWORD *)(v305 + 440) = p_queue_mu;
LABEL_82:
      v42 = v33 + 16;
      if ( *(_BYTE *)(((v33 + 16) >> 3) + 0x7FFF8000) )
        goto LABEL_189;
      *(_QWORD *)(v305 + 448) = *(_QWORD *)(v33 + 16);
      v42 = v33 + 24;
      if ( *(_BYTE *)(((v33 + 24) >> 3) + 0x7FFF8000) )
        goto LABEL_190;
      p_queue_mu = *(std::mutex **)(v33 + 24);
      if ( p_queue_mu == *(std::mutex **)(v305 + 456) )
        goto LABEL_97;
      if ( !p_queue_mu )
        goto LABEL_90;
      v43 = &p_queue_mu->_M_mutex.__data.__owner;
      if ( &_pthread_key_create )
      {
        v42 = (unsigned __int64)(&p_queue_mu->_M_mutex.__align + 1);
        v44 = *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v43 & 7) + 3) < v44 || !v44 )
        {
          _InterlockedAdd(v43, 1u);
          goto LABEL_90;
        }
        goto LABEL_191;
      }
LABEL_192:
      v46 = &p_queue_mu->_M_mutex.__align + 1;
      v86 = *(_BYTE *)(((unsigned __int64)(&p_queue_mu->_M_mutex.__align + 1) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)p_queue_mu + 8) & 7) + 3) >= v86 && v86 )
      {
        v1 = __asan_report_load4(v46);
LABEL_196:
        __asan_report_store4(v46);
LABEL_197:
        v87 = *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((v3 + 8) & 7) + 3) >= v87 && v87 )
        {
          v1 = __asan_report_load4(v3 + 8);
LABEL_201:
          v88 = v3;
          if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v3);
          }
          else
          {
            v88 = *(_QWORD *)v3 + 16LL;
            if ( !*(_BYTE *)((v88 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v3 + 16LL))(v3, v1);
              v89 = (volatile signed __int32 *)(v3 + 12);
              if ( &_pthread_key_create )
              {
                v88 = v3 + 12;
                v90 = *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v89 & 7) + 3) < v90 || !v90 )
                {
                  v91 = _InterlockedExchangeAdd(v89, 0xFFFFFFFF);
LABEL_207:
                  if ( v91 == 1 )
                  {
                    v49 = v3;
                    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                      goto LABEL_218;
                    v49 = *(_QWORD *)v3 + 24LL;
                    if ( *(_BYTE *)((v49 >> 3) + 0x7FFF8000) )
                      goto LABEL_219;
                    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
                  }
                  goto LABEL_96;
                }
LABEL_213:
                __asan_report_store4(v88);
              }
              v49 = v3 + 12;
              v92 = *(_BYTE *)(((v3 + 12) >> 3) + 0x7FFF8000);
              if ( (char)(((v3 + 12) & 7) + 3) >= v92 && v92 )
              {
                v1 = __asan_report_load4(v49);
LABEL_218:
                __asan_report_load8(v49);
LABEL_219:
                __asan_report_load8(v49);
LABEL_220:
                __asan_report_load8(v49);
LABEL_221:
                __asan_report_load8(v49);
LABEL_222:
                __asan_report_store4(v49);
                goto LABEL_223;
              }
              v91 = *(_DWORD *)(v3 + 12);
              *(_DWORD *)(v3 + 12) = v91 - 1;
              goto LABEL_207;
            }
          }
          __asan_report_load8(v88);
          goto LABEL_213;
        }
        v48 = *(_DWORD *)(v3 + 8);
        *(_DWORD *)(v3 + 8) = v48 - 1;
        goto LABEL_95;
      }
      ++p_queue_mu->_M_mutex.__data.__owner;
LABEL_90:
      v3 = *(_QWORD *)(v305 + 456);
      if ( !v3 )
        goto LABEL_96;
      v45 = (volatile signed __int32 *)(v3 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_197;
      v46 = (__int64 *)(v3 + 8);
      v47 = *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v45 & 7) + 3) >= v47 && v47 )
        goto LABEL_196;
      v48 = _InterlockedExchangeAdd(v45, 0xFFFFFFFF);
LABEL_95:
      if ( v48 == 1 )
        goto LABEL_201;
LABEL_96:
      *(_QWORD *)(v305 + 456) = p_queue_mu;
LABEL_97:
      v49 = v33 + 32;
      if ( *(_BYTE *)(((v33 + 32) >> 3) + 0x7FFF8000) )
        goto LABEL_220;
      *(_QWORD *)(v305 + 464) = *(_QWORD *)(v33 + 32);
      v49 = v33 + 40;
      if ( *(_BYTE *)(((v33 + 40) >> 3) + 0x7FFF8000) )
        goto LABEL_221;
      p_queue_mu = *(std::mutex **)(v33 + 40);
      if ( p_queue_mu == *(std::mutex **)(v305 + 472) )
        goto LABEL_112;
      if ( !p_queue_mu )
        goto LABEL_105;
      v50 = &p_queue_mu->_M_mutex.__data.__owner;
      if ( &_pthread_key_create )
      {
        v49 = (unsigned __int64)(&p_queue_mu->_M_mutex.__align + 1);
        v51 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v50 & 7) + 3) < v51 || !v51 )
        {
          _InterlockedAdd(v50, 1u);
          goto LABEL_105;
        }
        goto LABEL_222;
      }
LABEL_223:
      v53 = &p_queue_mu->_M_mutex.__align + 1;
      v93 = *(_BYTE *)(((unsigned __int64)(&p_queue_mu->_M_mutex.__align + 1) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)p_queue_mu + 8) & 7) + 3) >= v93 && v93 )
      {
        v1 = __asan_report_load4(v53);
LABEL_227:
        __asan_report_store4(v53);
LABEL_228:
        v94 = *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((v3 + 8) & 7) + 3) >= v94 && v94 )
        {
          v1 = __asan_report_load4(v3 + 8);
LABEL_232:
          v95 = v3;
          if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v3);
          }
          else
          {
            v95 = *(_QWORD *)v3 + 16LL;
            if ( !*(_BYTE *)((v95 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v3 + 16LL))(v3, v1);
              v96 = (volatile signed __int32 *)(v3 + 12);
              if ( &_pthread_key_create )
              {
                v95 = v3 + 12;
                v97 = *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v96 & 7) + 3) < v97 || !v97 )
                {
                  v98 = _InterlockedExchangeAdd(v96, 0xFFFFFFFF);
LABEL_238:
                  if ( v98 == 1 )
                  {
                    v56 = v3;
                    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                      goto LABEL_249;
                    v56 = *(_QWORD *)v3 + 24LL;
                    if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
                      goto LABEL_250;
                    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
                  }
                  goto LABEL_111;
                }
LABEL_244:
                __asan_report_store4(v95);
              }
              v56 = v3 + 12;
              v99 = *(_BYTE *)(((v3 + 12) >> 3) + 0x7FFF8000);
              if ( (char)(((v3 + 12) & 7) + 3) >= v99 && v99 )
              {
                v1 = __asan_report_load4(v56);
LABEL_249:
                __asan_report_load8(v56);
LABEL_250:
                __asan_report_load8(v56);
LABEL_251:
                __asan_report_load8(v56);
LABEL_252:
                __asan_report_load8(v56);
LABEL_253:
                __asan_report_store4(v56);
                goto LABEL_254;
              }
              v98 = *(_DWORD *)(v3 + 12);
              *(_DWORD *)(v3 + 12) = v98 - 1;
              goto LABEL_238;
            }
          }
          __asan_report_load8(v95);
          goto LABEL_244;
        }
        v55 = *(_DWORD *)(v3 + 8);
        *(_DWORD *)(v3 + 8) = v55 - 1;
        goto LABEL_110;
      }
      ++p_queue_mu->_M_mutex.__data.__owner;
LABEL_105:
      v3 = *(_QWORD *)(v305 + 472);
      if ( !v3 )
        goto LABEL_111;
      v52 = (volatile signed __int32 *)(v3 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_228;
      v53 = (__int64 *)(v3 + 8);
      v54 = *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v52 & 7) + 3) >= v54 && v54 )
        goto LABEL_227;
      v55 = _InterlockedExchangeAdd(v52, 0xFFFFFFFF);
LABEL_110:
      if ( v55 == 1 )
        goto LABEL_232;
LABEL_111:
      *(_QWORD *)(v305 + 472) = p_queue_mu;
LABEL_112:
      v56 = v33 + 48;
      if ( *(_BYTE *)(((v33 + 48) >> 3) + 0x7FFF8000) )
        goto LABEL_251;
      *(_QWORD *)(v305 + 480) = *(_QWORD *)(v33 + 48);
      v56 = v33 + 56;
      v34 = (v33 + 56) >> 3;
      if ( *(_BYTE *)(v34 + 0x7FFF8000) )
        goto LABEL_252;
      v34 = *(_QWORD *)(v33 + 56);
      if ( v34 == *(_QWORD *)(v305 + 488) )
        goto LABEL_127;
      if ( !v34 )
        goto LABEL_120;
      v57 = (volatile signed __int32 *)(v34 + 8);
      if ( &_pthread_key_create )
      {
        v56 = v34 + 8;
        v58 = *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v57 & 7) + 3) < v58 || !v58 )
        {
          _InterlockedAdd(v57, 1u);
          goto LABEL_120;
        }
        goto LABEL_253;
      }
LABEL_254:
      v60 = v34 + 8;
      v100 = *(_BYTE *)(((v34 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v34 + 8) & 7) + 3) >= v100 && v100 )
      {
        v1 = __asan_report_load4(v60);
LABEL_258:
        __asan_report_store4(v60);
LABEL_259:
        v101 = *(_BYTE *)(((v33 + 8) >> 3) + 0x7FFF8000);
        if ( (char)(((v33 + 8) & 7) + 3) >= v101 && v101 )
        {
          v1 = __asan_report_load4(v33 + 8);
LABEL_263:
          v102 = v33;
          if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v33);
          }
          else
          {
            v102 = *(_QWORD *)v33 + 16LL;
            if ( !*(_BYTE *)((v102 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v33 + 16LL))(v33, v1);
              v103 = (volatile signed __int32 *)(v33 + 12);
              if ( &_pthread_key_create )
              {
                v102 = v33 + 12;
                v104 = *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v103 & 7) + 3) < v104 || !v104 )
                {
                  v105 = _InterlockedExchangeAdd(v103, 0xFFFFFFFF);
LABEL_269:
                  if ( v105 == 1 )
                  {
                    v63 = v33;
                    if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
                      goto LABEL_280;
                    v63 = *(_QWORD *)v33 + 24LL;
                    if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
                      goto LABEL_281;
                    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v33 + 24LL))(v33);
                  }
                  goto LABEL_126;
                }
LABEL_275:
                __asan_report_store4(v102);
              }
              v63 = v33 + 12;
              v106 = *(_BYTE *)(((v33 + 12) >> 3) + 0x7FFF8000);
              if ( (char)(((v33 + 12) & 7) + 3) >= v106 && v106 )
              {
                v1 = __asan_report_load4(v63);
LABEL_280:
                __asan_report_load8(v63);
LABEL_281:
                __asan_report_load8(v63);
LABEL_282:
                __asan_report_load8(v63);
                goto LABEL_283;
              }
              v105 = *(_DWORD *)(v33 + 12);
              *(_DWORD *)(v33 + 12) = v105 - 1;
              goto LABEL_269;
            }
          }
          __asan_report_load8(v102);
          goto LABEL_275;
        }
        v62 = *(_DWORD *)(v33 + 8);
        *(_DWORD *)(v33 + 8) = v62 - 1;
        goto LABEL_125;
      }
      ++*(_DWORD *)(v34 + 8);
LABEL_120:
      v33 = *(_QWORD *)(v305 + 488);
      if ( !v33 )
        goto LABEL_126;
      v59 = (volatile signed __int32 *)(v33 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_259;
      v60 = v33 + 8;
      v61 = *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v59 & 7) + 3) >= v61 && v61 )
        goto LABEL_258;
      v62 = _InterlockedExchangeAdd(v59, 0xFFFFFFFF);
LABEL_125:
      if ( v62 == 1 )
        goto LABEL_263;
LABEL_126:
      *(_QWORD *)(v305 + 488) = v34;
LABEL_127:
      v34 = *(_QWORD *)(v305 + 544);
      if ( v34 == *(_QWORD *)(v305 + 560) - 64LL )
        goto LABEL_382;
      v63 = v34 + 56;
      if ( *(_BYTE *)(((v34 + 56) >> 3) + 0x7FFF8000) )
        goto LABEL_282;
      v33 = *(_QWORD *)(v34 + 56);
      if ( !v33 )
        goto LABEL_135;
      v64 = (volatile signed __int32 *)(v33 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_284;
      v63 = v33 + 8;
      v65 = *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v64 & 7) + 3) < v65 || !v65 )
      {
        v66 = _InterlockedExchangeAdd(v64, 0xFFFFFFFF);
        goto LABEL_134;
      }
LABEL_283:
      __asan_report_store4(v63);
LABEL_284:
      v107 = *(_BYTE *)(((v33 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v33 + 8) & 7) + 3) >= v107 && v107 )
      {
        v1 = __asan_report_load4(v33 + 8);
        goto LABEL_288;
      }
      v66 = *(_DWORD *)(v33 + 8);
      *(_DWORD *)(v33 + 8) = v66 - 1;
LABEL_134:
      if ( v66 != 1 )
        goto LABEL_135;
LABEL_288:
      v108 = v33;
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v33);
LABEL_299:
        __asan_report_load8(v108);
LABEL_300:
        __asan_report_store4(v108);
LABEL_301:
        v67 = v33 + 12;
        v112 = *(_BYTE *)(((v33 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v33 + 12) & 7) + 3) >= v112 && v112 )
        {
          v1 = __asan_report_load4(v67);
LABEL_305:
          __asan_report_load8(v67);
LABEL_306:
          __asan_report_load8(v67);
LABEL_307:
          __asan_report_load8(v67);
          goto LABEL_308;
        }
        v111 = *(_DWORD *)(v33 + 12);
        *(_DWORD *)(v33 + 12) = v111 - 1;
        goto LABEL_294;
      }
      v108 = *(_QWORD *)v33 + 16LL;
      if ( *(_BYTE *)((v108 >> 3) + 0x7FFF8000) )
        goto LABEL_299;
      (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v33 + 16LL))(v33, v1);
      v109 = (volatile signed __int32 *)(v33 + 12);
      if ( !&_pthread_key_create )
        goto LABEL_301;
      v108 = v33 + 12;
      v110 = *(_BYTE *)(((unsigned __int64)v109 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v109 & 7) + 3) >= v110 && v110 )
        goto LABEL_300;
      v111 = _InterlockedExchangeAdd(v109, 0xFFFFFFFF);
LABEL_294:
      if ( v111 == 1 )
      {
        v67 = v33;
        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          goto LABEL_305;
        v67 = *(_QWORD *)v33 + 24LL;
        if ( *(_BYTE *)((v67 >> 3) + 0x7FFF8000) )
          goto LABEL_306;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v33 + 24LL))(v33);
      }
LABEL_135:
      v67 = v34 + 40;
      if ( *(_BYTE *)(((v34 + 40) >> 3) + 0x7FFF8000) )
        goto LABEL_307;
      v33 = *(_QWORD *)(v34 + 40);
      if ( !v33 )
        goto LABEL_142;
      v68 = (volatile signed __int32 *)(v33 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_309;
      v67 = v33 + 8;
      v69 = *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v68 & 7) + 3) < v69 || !v69 )
      {
        v70 = _InterlockedExchangeAdd(v68, 0xFFFFFFFF);
        goto LABEL_141;
      }
LABEL_308:
      __asan_report_store4(v67);
LABEL_309:
      v113 = *(_BYTE *)(((v33 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v33 + 8) & 7) + 3) >= v113 && v113 )
      {
        v1 = __asan_report_load4(v33 + 8);
        goto LABEL_313;
      }
      v70 = *(_DWORD *)(v33 + 8);
      *(_DWORD *)(v33 + 8) = v70 - 1;
LABEL_141:
      if ( v70 != 1 )
        goto LABEL_142;
LABEL_313:
      v114 = v33;
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v33);
LABEL_324:
        __asan_report_load8(v114);
LABEL_325:
        __asan_report_store4(v114);
LABEL_326:
        v71 = v33 + 12;
        v118 = *(_BYTE *)(((v33 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v33 + 12) & 7) + 3) >= v118 && v118 )
        {
          v1 = __asan_report_load4(v71);
LABEL_330:
          __asan_report_load8(v71);
LABEL_331:
          __asan_report_load8(v71);
LABEL_332:
          __asan_report_load8(v71);
          goto LABEL_333;
        }
        v117 = *(_DWORD *)(v33 + 12);
        *(_DWORD *)(v33 + 12) = v117 - 1;
        goto LABEL_319;
      }
      v114 = *(_QWORD *)v33 + 16LL;
      if ( *(_BYTE *)((v114 >> 3) + 0x7FFF8000) )
        goto LABEL_324;
      (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v33 + 16LL))(v33, v1);
      v115 = (volatile signed __int32 *)(v33 + 12);
      if ( !&_pthread_key_create )
        goto LABEL_326;
      v114 = v33 + 12;
      v116 = *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v115 & 7) + 3) >= v116 && v116 )
        goto LABEL_325;
      v117 = _InterlockedExchangeAdd(v115, 0xFFFFFFFF);
LABEL_319:
      if ( v117 == 1 )
      {
        v71 = v33;
        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          goto LABEL_330;
        v71 = *(_QWORD *)v33 + 24LL;
        if ( *(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
          goto LABEL_331;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v33 + 24LL))(v33);
      }
LABEL_142:
      v71 = v34 + 24;
      if ( *(_BYTE *)(((v34 + 24) >> 3) + 0x7FFF8000) )
        goto LABEL_332;
      v33 = *(_QWORD *)(v34 + 24);
      if ( !v33 )
        goto LABEL_149;
      v72 = (volatile signed __int32 *)(v33 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_334;
      v71 = v33 + 8;
      v73 = *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v72 & 7) + 3) < v73 || !v73 )
      {
        v74 = _InterlockedExchangeAdd(v72, 0xFFFFFFFF);
        goto LABEL_148;
      }
LABEL_333:
      __asan_report_store4(v71);
LABEL_334:
      v119 = *(_BYTE *)(((v33 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v33 + 8) & 7) + 3) >= v119 && v119 )
      {
        v1 = __asan_report_load4(v33 + 8);
        goto LABEL_338;
      }
      v74 = *(_DWORD *)(v33 + 8);
      *(_DWORD *)(v33 + 8) = v74 - 1;
LABEL_148:
      if ( v74 != 1 )
        goto LABEL_149;
LABEL_338:
      v120 = v33;
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v33);
LABEL_349:
        __asan_report_load8(v120);
LABEL_350:
        __asan_report_store4(v120);
LABEL_351:
        v75 = v33 + 12;
        v124 = *(_BYTE *)(((v33 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v33 + 12) & 7) + 3) >= v124 && v124 )
        {
          v1 = __asan_report_load4(v75);
LABEL_355:
          __asan_report_load8(v75);
LABEL_356:
          __asan_report_load8(v75);
LABEL_357:
          __asan_report_load8(v75);
          goto LABEL_358;
        }
        v123 = *(_DWORD *)(v33 + 12);
        *(_DWORD *)(v33 + 12) = v123 - 1;
        goto LABEL_344;
      }
      v120 = *(_QWORD *)v33 + 16LL;
      if ( *(_BYTE *)((v120 >> 3) + 0x7FFF8000) )
        goto LABEL_349;
      (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v33 + 16LL))(v33, v1);
      v121 = (volatile signed __int32 *)(v33 + 12);
      if ( !&_pthread_key_create )
        goto LABEL_351;
      v120 = v33 + 12;
      v122 = *(_BYTE *)(((unsigned __int64)v121 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v121 & 7) + 3) >= v122 && v122 )
        goto LABEL_350;
      v123 = _InterlockedExchangeAdd(v121, 0xFFFFFFFF);
LABEL_344:
      if ( v123 == 1 )
      {
        v75 = v33;
        if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
          goto LABEL_355;
        v75 = *(_QWORD *)v33 + 24LL;
        if ( *(_BYTE *)((v75 >> 3) + 0x7FFF8000) )
          goto LABEL_356;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v33 + 24LL))(v33);
      }
LABEL_149:
      v75 = v34 + 8;
      if ( *(_BYTE *)(((v34 + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_357;
      v34 = *(_QWORD *)(v34 + 8);
      if ( !v34 )
        goto LABEL_156;
      v76 = (volatile signed __int32 *)(v34 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_359;
      v75 = v34 + 8;
      v77 = *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v76 & 7) + 3) < v77 || !v77 )
      {
        v78 = _InterlockedExchangeAdd(v76, 0xFFFFFFFF);
        goto LABEL_155;
      }
LABEL_358:
      __asan_report_store4(v75);
LABEL_359:
      v125 = *(_BYTE *)(((v34 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v34 + 8) & 7) + 3) >= v125 && v125 )
      {
        v1 = __asan_report_load4(v34 + 8);
        goto LABEL_363;
      }
      v78 = *(_DWORD *)(v34 + 8);
      *(_DWORD *)(v34 + 8) = v78 - 1;
LABEL_155:
      if ( v78 != 1 )
        goto LABEL_156;
LABEL_363:
      v126 = v34;
      if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v34);
LABEL_374:
        __asan_report_load8(v126);
LABEL_375:
        __asan_report_store4(v126);
LABEL_376:
        v130 = v34 + 12;
        v131 = *(_BYTE *)(((v34 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v34 + 12) & 7) + 3) >= v131 && v131 )
        {
          v1 = __asan_report_load4(v130);
LABEL_380:
          __asan_report_load8(v130);
LABEL_381:
          __asan_report_load8(v130);
LABEL_382:
          std::deque<StatLog>::_M_pop_front_aux((std::deque<StatLog> *const)(v305 + 528));
          goto LABEL_157;
        }
        v129 = *(_DWORD *)(v34 + 12);
        *(_DWORD *)(v34 + 12) = v129 - 1;
        goto LABEL_369;
      }
      v126 = *(_QWORD *)v34 + 16LL;
      if ( *(_BYTE *)((v126 >> 3) + 0x7FFF8000) )
        goto LABEL_374;
      (*(void (__fastcall **)(unsigned __int64, double))(*(_QWORD *)v34 + 16LL))(v34, v1);
      v127 = (volatile signed __int32 *)(v34 + 12);
      if ( !&_pthread_key_create )
        goto LABEL_376;
      v126 = v34 + 12;
      v128 = *(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v127 & 7) + 3) >= v128 && v128 )
        goto LABEL_375;
      v129 = _InterlockedExchangeAdd(v127, 0xFFFFFFFF);
LABEL_369:
      if ( v129 == 1 )
      {
        v130 = v34;
        if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
          goto LABEL_380;
        v130 = *(_QWORD *)v34 + 24LL;
        if ( *(_BYTE *)((v130 >> 3) + 0x7FFF8000) )
          goto LABEL_381;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v34 + 24LL))(v34);
      }
LABEL_156:
      *(_QWORD *)(v305 + 544) += 64LL;
LABEL_157:
      HIDWORD(v295._M_refcount._M_pi) += common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v305 + 80));
      common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v305 + 80));
      v311 = *(_QWORD *)(v305 + 480);
      v133 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v305 + 488);
      v312 = v133;
      if ( v133 )
      {
        p_M_use_count = &v133->_M_use_count;
        if ( &_pthread_key_create )
        {
          v135 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v135 || !v135 )
          {
            _InterlockedAdd(p_M_use_count, 1u);
            goto LABEL_388;
          }
          v133 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(&v133->_M_use_count);
        }
        v138 = &v133->_M_use_count;
        v152 = *(_BYTE *)(((unsigned __int64)&v133->_M_use_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v133 + 8) & 7) + 3) >= v152 && v152 )
        {
          v1 = __asan_report_load4(v138);
LABEL_409:
          v136 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v138);
          goto LABEL_410;
        }
        ++v133->_M_use_count;
      }
LABEL_388:
      head_ext_ptr._M_ptr = *(std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)(v305 + 464);
      v136 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v305 + 472);
      head_ext_ptr._M_refcount._M_pi = v136;
      if ( !v136 )
        goto LABEL_393;
      v137 = &v136->_M_use_count;
      if ( &_pthread_key_create )
      {
        v138 = &v136->_M_use_count;
        v139 = *(_BYTE *)(((unsigned __int64)v137 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v137 & 7) + 3) < v139 || !v139 )
        {
          _InterlockedAdd(v137, 1u);
          goto LABEL_393;
        }
        goto LABEL_409;
      }
LABEL_410:
      v142 = &v136->_M_use_count;
      v153 = *(_BYTE *)(((unsigned __int64)&v136->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v136 + 8) & 7) + 3) >= v153 && v153 )
      {
        v1 = __asan_report_load4(v142);
        goto LABEL_414;
      }
      ++v136->_M_use_count;
LABEL_393:
      v308 = *(_QWORD *)(v305 + 448);
      v140 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v305 + 456);
      v309 = v140;
      if ( !v140 )
        goto LABEL_398;
      v141 = &v140->_M_use_count;
      if ( !&_pthread_key_create )
        goto LABEL_415;
      v142 = &v140->_M_use_count;
      v143 = *(_BYTE *)(((unsigned __int64)v141 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v141 & 7) + 3) < v143 || !v143 )
      {
        _InterlockedAdd(v141, 1u);
        goto LABEL_398;
      }
LABEL_414:
      v140 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v142);
LABEL_415:
      v146 = &v140->_M_use_count;
      v154 = *(_BYTE *)(((unsigned __int64)&v140->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v140 + 8) & 7) + 3) >= v154 && v154 )
      {
        v1 = __asan_report_load4(v146);
LABEL_419:
        v144 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v146);
        goto LABEL_420;
      }
      ++v140->_M_use_count;
LABEL_398:
      head_ptr._M_ptr = *(std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type **)(v305 + 432);
      v144 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v305 + 440);
      head_ptr._M_refcount._M_pi = v144;
      if ( !v144 )
        goto LABEL_403;
      v145 = &v144->_M_use_count;
      if ( &_pthread_key_create )
      {
        v146 = &v144->_M_use_count;
        v147 = *(_BYTE *)(((unsigned __int64)v145 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v145 & 7) + 3) < v147 || !v147 )
        {
          _InterlockedAdd(v145, 1u);
LABEL_403:
          v148._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&v311;
          v148._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)&head_ext_ptr;
          v149._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&v308;
          v149._M_ptr = (std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *)&head_ptr;
          v150 = (char *)(v305 + 112);
          v151 = StatLogUtils::parseToString(v149, v148, *(const StatLogUtils::MessagePtr *)(&v132 - 1), v295, t2);
          goto LABEL_424;
        }
        goto LABEL_419;
      }
LABEL_420:
      v155 = *(_BYTE *)(((unsigned __int64)&v144->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v144 + 8) & 7) + 3) < v155 || !v155 )
      {
        ++v144->_M_use_count;
        goto LABEL_403;
      }
      v1 = __asan_report_load4(&v144->_M_use_count);
LABEL_424:
      v156 = v151;
      M_pi = head_ptr._M_refcount._M_pi;
      if ( !head_ptr._M_refcount._M_pi )
        goto LABEL_430;
      v158 = &head_ptr._M_refcount._M_pi->_M_use_count;
      if ( &_pthread_key_create )
      {
        v159 = *(_BYTE *)(((unsigned __int64)v158 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v158 & 7) + 3) < v159 || !v159 )
        {
          M_use_count = _InterlockedExchangeAdd(v158, 0xFFFFFFFF);
          goto LABEL_429;
        }
        __asan_report_store4(&head_ptr._M_refcount._M_pi->_M_use_count);
      }
      v173 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v173 && v173 )
      {
        v1 = __asan_report_load4(&M_pi->_M_use_count);
        goto LABEL_455;
      }
      M_use_count = M_pi->_M_use_count;
      M_pi->_M_use_count = M_use_count - 1;
LABEL_429:
      if ( M_use_count != 1 )
        goto LABEL_430;
LABEL_455:
      v174 = (unsigned __int64)M_pi;
      if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(M_pi);
LABEL_466:
        __asan_report_load8(v174);
LABEL_467:
        __asan_report_store4(v174);
LABEL_468:
        p_M_weak_count = &M_pi->_M_weak_count;
        v178 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v178 && v178 )
        {
          v1 = __asan_report_load4(p_M_weak_count);
LABEL_472:
          __asan_report_load8(p_M_weak_count);
LABEL_473:
          __asan_report_load8(p_M_weak_count);
          goto LABEL_474;
        }
        M_weak_count = M_pi->_M_weak_count;
        M_pi->_M_weak_count = M_weak_count - 1;
        goto LABEL_461;
      }
      v174 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 2);
      if ( *(_BYTE *)((v174 >> 3) + 0x7FFF8000) )
        goto LABEL_466;
      (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *, double))M_pi->_vptr__Sp_counted_base
       + 2))(
        M_pi,
        v1);
      v175 = &M_pi->_M_weak_count;
      if ( !&_pthread_key_create )
        goto LABEL_468;
      v174 = (unsigned __int64)&M_pi->_M_weak_count;
      v176 = *(_BYTE *)(((unsigned __int64)v175 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v175 & 7) + 3) >= v176 && v176 )
        goto LABEL_467;
      M_weak_count = _InterlockedExchangeAdd(v175, 0xFFFFFFFF);
LABEL_461:
      if ( M_weak_count == 1 )
      {
        p_M_weak_count = (_Atomic_word *)M_pi;
        if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
          goto LABEL_472;
        p_M_weak_count = (_Atomic_word *)(M_pi->_vptr__Sp_counted_base + 3);
        if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
          goto LABEL_473;
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
      }
LABEL_430:
      M_pi = v309;
      if ( !v309 )
        goto LABEL_436;
      v161 = &v309->_M_use_count;
      if ( !&_pthread_key_create )
        goto LABEL_475;
      p_M_weak_count = &v309->_M_use_count;
      v163 = *(_BYTE *)(((unsigned __int64)v161 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v161 & 7) + 3) < v163 || !v163 )
      {
        v164 = _InterlockedExchangeAdd(v161, 0xFFFFFFFF);
        goto LABEL_435;
      }
LABEL_474:
      __asan_report_store4(p_M_weak_count);
LABEL_475:
      v179 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v179 && v179 )
      {
        v1 = __asan_report_load4(&M_pi->_M_use_count);
        goto LABEL_479;
      }
      v164 = M_pi->_M_use_count;
      M_pi->_M_use_count = v164 - 1;
LABEL_435:
      if ( v164 != 1 )
        goto LABEL_436;
LABEL_479:
      v180 = (unsigned __int64)M_pi;
      if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(M_pi);
LABEL_490:
        __asan_report_load8(v180);
LABEL_491:
        __asan_report_store4(v180);
LABEL_492:
        v166 = &M_pi->_M_weak_count;
        v184 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v184 && v184 )
        {
          v1 = __asan_report_load4(v166);
LABEL_496:
          __asan_report_load8(v166);
LABEL_497:
          __asan_report_load8(v166);
          goto LABEL_498;
        }
        v183 = M_pi->_M_weak_count;
        M_pi->_M_weak_count = v183 - 1;
        goto LABEL_485;
      }
      v180 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 2);
      if ( *(_BYTE *)((v180 >> 3) + 0x7FFF8000) )
        goto LABEL_490;
      (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *, double))M_pi->_vptr__Sp_counted_base
       + 2))(
        M_pi,
        v1);
      v181 = &M_pi->_M_weak_count;
      if ( !&_pthread_key_create )
        goto LABEL_492;
      v180 = (unsigned __int64)&M_pi->_M_weak_count;
      v182 = *(_BYTE *)(((unsigned __int64)v181 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v181 & 7) + 3) >= v182 && v182 )
        goto LABEL_491;
      v183 = _InterlockedExchangeAdd(v181, 0xFFFFFFFF);
LABEL_485:
      if ( v183 == 1 )
      {
        v166 = (_Atomic_word *)M_pi;
        if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
          goto LABEL_496;
        v166 = (_Atomic_word *)(M_pi->_vptr__Sp_counted_base + 3);
        if ( *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) )
          goto LABEL_497;
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
      }
LABEL_436:
      M_pi = head_ext_ptr._M_refcount._M_pi;
      if ( !head_ext_ptr._M_refcount._M_pi )
        goto LABEL_442;
      v165 = &head_ext_ptr._M_refcount._M_pi->_M_use_count;
      if ( !&_pthread_key_create )
        goto LABEL_499;
      v166 = &head_ext_ptr._M_refcount._M_pi->_M_use_count;
      v167 = *(_BYTE *)(((unsigned __int64)v165 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v165 & 7) + 3) < v167 || !v167 )
      {
        v168 = _InterlockedExchangeAdd(v165, 0xFFFFFFFF);
        goto LABEL_441;
      }
LABEL_498:
      __asan_report_store4(v166);
LABEL_499:
      v185 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v185 && v185 )
      {
        v1 = __asan_report_load4(&M_pi->_M_use_count);
        goto LABEL_503;
      }
      v168 = M_pi->_M_use_count;
      M_pi->_M_use_count = v168 - 1;
LABEL_441:
      if ( v168 != 1 )
        goto LABEL_442;
LABEL_503:
      v186 = (unsigned __int64)M_pi;
      if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(M_pi);
LABEL_514:
        __asan_report_load8(v186);
LABEL_515:
        __asan_report_store4(v186);
LABEL_516:
        v170 = &M_pi->_M_weak_count;
        v190 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v190 && v190 )
        {
          v1 = __asan_report_load4(v170);
LABEL_520:
          __asan_report_load8(v170);
LABEL_521:
          __asan_report_load8(v170);
          goto LABEL_522;
        }
        v189 = M_pi->_M_weak_count;
        M_pi->_M_weak_count = v189 - 1;
        goto LABEL_509;
      }
      v186 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 2);
      if ( *(_BYTE *)((v186 >> 3) + 0x7FFF8000) )
        goto LABEL_514;
      (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *, double))M_pi->_vptr__Sp_counted_base
       + 2))(
        M_pi,
        v1);
      v187 = &M_pi->_M_weak_count;
      if ( !&_pthread_key_create )
        goto LABEL_516;
      v186 = (unsigned __int64)&M_pi->_M_weak_count;
      v188 = *(_BYTE *)(((unsigned __int64)v187 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v187 & 7) + 3) >= v188 && v188 )
        goto LABEL_515;
      v189 = _InterlockedExchangeAdd(v187, 0xFFFFFFFF);
LABEL_509:
      if ( v189 == 1 )
      {
        v170 = (_Atomic_word *)M_pi;
        if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
          goto LABEL_520;
        v170 = (_Atomic_word *)(M_pi->_vptr__Sp_counted_base + 3);
        if ( *(_BYTE *)(((unsigned __int64)v170 >> 3) + 0x7FFF8000) )
          goto LABEL_521;
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
      }
LABEL_442:
      M_pi = v312;
      if ( !v312 )
        goto LABEL_448;
      v169 = &v312->_M_use_count;
      if ( !&_pthread_key_create )
        goto LABEL_523;
      v170 = &v312->_M_use_count;
      v171 = *(_BYTE *)(((unsigned __int64)v169 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v169 & 7) + 3) < v171 || !v171 )
      {
        v172 = _InterlockedExchangeAdd(v169, 0xFFFFFFFF);
        goto LABEL_447;
      }
LABEL_522:
      __asan_report_store4(v170);
LABEL_523:
      v191 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v191 && v191 )
      {
        v1 = __asan_report_load4(&M_pi->_M_use_count);
        goto LABEL_527;
      }
      v172 = M_pi->_M_use_count;
      M_pi->_M_use_count = v172 - 1;
LABEL_447:
      if ( v172 != 1 )
        goto LABEL_448;
LABEL_527:
      v192 = (unsigned __int64)M_pi;
      if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(M_pi);
LABEL_538:
        __asan_report_load8(v192);
        goto LABEL_539;
      }
      v192 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 2);
      if ( *(_BYTE *)((v192 >> 3) + 0x7FFF8000) )
        goto LABEL_538;
      (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *, double))M_pi->_vptr__Sp_counted_base
       + 2))(
        M_pi,
        v1);
      v193 = &M_pi->_M_weak_count;
      if ( !&_pthread_key_create )
        goto LABEL_540;
      v192 = (unsigned __int64)&M_pi->_M_weak_count;
      v194 = *(_BYTE *)(((unsigned __int64)v193 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v193 & 7) + 3) < v194 || !v194 )
      {
        v195 = _InterlockedExchangeAdd(v193, 0xFFFFFFFF);
        goto LABEL_533;
      }
LABEL_539:
      __asan_report_store4(v192);
LABEL_540:
      v196 = (unsigned __int64)&M_pi->_M_weak_count;
      v197 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v197 && v197 )
      {
        v1 = __asan_report_load4(v196);
LABEL_544:
        __asan_report_load8(v196);
        goto LABEL_545;
      }
      v195 = M_pi->_M_weak_count;
      M_pi->_M_weak_count = v195 - 1;
LABEL_533:
      if ( v195 != 1 )
        goto LABEL_448;
      v196 = (unsigned __int64)M_pi;
      if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        goto LABEL_544;
      v196 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
      if ( *(_BYTE *)((v196 >> 3) + 0x7FFF8000) )
      {
LABEL_545:
        __asan_report_load8(v196);
LABEL_546:
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)(v305 + 368),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/stat_log_mgr.cpp",
          "workThread",
          168);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v305 + 368),
          "parseToString fail",
          v1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v305 + 368));
        common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v305 + 80));
      }
      else
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
LABEL_448:
        if ( v156 )
          goto LABEL_546;
        LODWORD(t2) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v305 + 80))
                    + (_DWORD)t2;
        common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v305 + 80));
        v198 = *(_BYTE *)(((unsigned __int64)&this->stat_log_level_ >> 3) + 0x7FFF8000);
        if ( v198 && v198 <= 3 )
          v1 = __asan_report_load4(&this->stat_log_level_);
        else
          common::milog::MiLog::writeLog(
            &common::milog::MiLogDefault::default_log_obj_,
            this->stat_log_level_,
            "%s",
            *(const char **)(v305 + 112));
        HIDWORD(t2) += common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v305 + 80));
        common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v305 + 80));
      }
    }
    v199 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v305 + 48));
    p_max_wait_time_us = &this->max_wait_time_us_;
    v201 = *(_BYTE *)(((unsigned __int64)&this->max_wait_time_us_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 68) & 7) + 3) >= v201 && v201 )
    {
      __asan_report_load4(p_max_wait_time_us);
LABEL_562:
      __asan_report_load4(p_max_wait_time_us);
LABEL_563:
      ostr = v313.ostr_;
      p_cur = v313.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v313.ostr_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v313.ostr_);
      }
      else
      {
        p_cur = (common::milog::MilogStringStream *)&v313.ostr_->buffer_.cur_;
        if ( !*(_BYTE *)(((unsigned __int64)&v313.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        {
          cur = v313.ostr_->buffer_.cur_;
          v206 = (size_t)&v313.ostr_->buffer_.data_[-(int)cur + 0x4000];
          if ( v206 > 0x15 )
            v206 = 22LL;
          memcpy(cur, "slow frame! wait_time:", v206);
          ostr->buffer_.cur_ += v206;
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v313.ostr_, wait_time);
          v207 = v313.ostr_;
          p_cur = v313.ostr_;
          if ( !*(_BYTE *)(((unsigned __int64)v313.ostr_ >> 3) + 0x7FFF8000) )
          {
            p_cur = (common::milog::MilogStringStream *)&v313.ostr_->buffer_.cur_;
            if ( !*(_BYTE *)(((unsigned __int64)&v313.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
            {
              v208 = v313.ostr_->buffer_.cur_;
              v209 = (size_t)&v313.ostr_->buffer_.data_[-(int)v208 + 0x4000];
              if ( v209 > 0xB )
                v209 = 12LL;
              memcpy(v208, " queue_size:", v209);
              v207->buffer_.cur_ += v209;
              common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v313.ostr_, queue_size);
              v210 = v313.ostr_;
              p_cur = v313.ostr_;
              if ( !*(_BYTE *)(((unsigned __int64)v313.ostr_ >> 3) + 0x7FFF8000) )
              {
                p_cur = (common::milog::MilogStringStream *)&v313.ostr_->buffer_.cur_;
                if ( !*(_BYTE *)(((unsigned __int64)&v313.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                {
                  v211 = v313.ostr_->buffer_.cur_;
                  v212 = (size_t)&v313.ostr_->buffer_.data_[-(int)v211 + 0x4000];
                  if ( v212 > 0xA )
                    v212 = 11LL;
                  memcpy(v211, " busy_time:", v212);
                  v210->buffer_.cur_ += v212;
                  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v313.ostr_, v199);
                  v213 = v313.ostr_;
                  p_cur = v313.ostr_;
                  if ( !*(_BYTE *)(((unsigned __int64)v313.ostr_ >> 3) + 0x7FFF8000) )
                  {
                    p_cur = (common::milog::MilogStringStream *)&v313.ostr_->buffer_.cur_;
                    if ( !*(_BYTE *)(((unsigned __int64)&v313.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                    {
                      v214 = v313.ostr_->buffer_.cur_;
                      v215 = (size_t)&v313.ostr_->buffer_.data_[-(int)v214 + 0x4000];
                      if ( v215 > 0xD )
                        v215 = 14LL;
                      memcpy(v214, " average_time:", v215);
                      v213->buffer_.cur_ += v215;
                      if ( (_DWORD)queue_size )
                      {
                        v1 = (double)v199 / (double)(int)queue_size;
                        goto LABEL_581;
                      }
LABEL_604:
                      v1 = 0.0;
LABEL_581:
                      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v313.ostr_, v1);
                      v216 = v313.ostr_;
                      v217 = v313.ostr_;
                      if ( *(_BYTE *)(((unsigned __int64)v313.ostr_ >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8(v313.ostr_);
                      }
                      else
                      {
                        v217 = (common::milog::MilogStringStream *)&v313.ostr_->buffer_.cur_;
                        if ( !*(_BYTE *)(((unsigned __int64)&v313.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                        {
                          v218 = v313.ostr_->buffer_.cur_;
                          v219 = (size_t)&v313.ostr_->buffer_.data_[-(int)v218 + 0x4000];
                          if ( v219 > 3 )
                            v219 = 4LL;
                          memcpy(v218, " t1:", v219);
                          v216->buffer_.cur_ += v219;
                          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                            v313.ostr_,
                            HIDWORD(v295._M_refcount._M_pi));
                          v220 = v313.ostr_;
                          v217 = v313.ostr_;
                          if ( !*(_BYTE *)(((unsigned __int64)v313.ostr_ >> 3) + 0x7FFF8000) )
                          {
                            v217 = (common::milog::MilogStringStream *)&v313.ostr_->buffer_.cur_;
                            if ( !*(_BYTE *)(((unsigned __int64)&v313.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                            {
                              v221 = v313.ostr_->buffer_.cur_;
                              v222 = (size_t)&v313.ostr_->buffer_.data_[-(int)v221 + 0x4000];
                              if ( v222 > 3 )
                                v222 = 4LL;
                              memcpy(v221, " t2:", v222);
                              v220->buffer_.cur_ += v222;
                              common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                v313.ostr_,
                                (unsigned int)t2);
                              v223 = v313.ostr_;
                              v217 = v313.ostr_;
                              if ( !*(_BYTE *)(((unsigned __int64)v313.ostr_ >> 3) + 0x7FFF8000) )
                              {
                                v217 = (common::milog::MilogStringStream *)&v313.ostr_->buffer_.cur_;
                                if ( !*(_BYTE *)(((unsigned __int64)&v313.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                {
                                  v224 = v313.ostr_->buffer_.cur_;
                                  v225 = (size_t)&v313.ostr_->buffer_.data_[-(int)v224 + 0x4000];
                                  if ( v225 > 3 )
                                    v225 = 4LL;
                                  memcpy(v224, " t3:", v225);
                                  v223->buffer_.cur_ += v225;
                                  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                    v313.ostr_,
                                    HIDWORD(t2));
                                  common::milog::MiLogStream::~MiLogStream(&v313);
                                  has_slow_frame = 1;
                                  goto LABEL_594;
                                }
                                goto LABEL_610;
                              }
LABEL_609:
                              __asan_report_load8(v217);
LABEL_610:
                              __asan_report_load8(v217);
                              goto LABEL_611;
                            }
LABEL_608:
                            __asan_report_load8(v217);
                            goto LABEL_609;
                          }
LABEL_607:
                          __asan_report_load8(v217);
                          goto LABEL_608;
                        }
                      }
                      __asan_report_load8(v217);
                      goto LABEL_607;
                    }
LABEL_603:
                    __asan_report_load8(p_cur);
                    goto LABEL_604;
                  }
LABEL_602:
                  __asan_report_load8(p_cur);
                  goto LABEL_603;
                }
LABEL_601:
                __asan_report_load8(p_cur);
                goto LABEL_602;
              }
LABEL_600:
              __asan_report_load8(p_cur);
              goto LABEL_601;
            }
LABEL_599:
            __asan_report_load8(p_cur);
            goto LABEL_600;
          }
LABEL_598:
          __asan_report_load8(p_cur);
          goto LABEL_599;
        }
      }
      __asan_report_load8(p_cur);
      goto LABEL_598;
    }
    if ( wait_time >= this->max_wait_time_us_ )
      goto LABEL_560;
    p_max_wait_time_us = &this->max_busy_time_us_;
    v202 = *(_BYTE *)(((unsigned __int64)&this->max_busy_time_us_ >> 3) + 0x7FFF8000);
    if ( v202 && v202 <= 3 )
      goto LABEL_562;
    if ( v199 >= this->max_busy_time_us_ )
    {
LABEL_560:
      common::milog::MiLogStream::MiLogStream(
        &v313,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/core_class/stat_log_mgr.cpp",
        "workThread",
        183);
      goto LABEL_563;
    }
LABEL_594:
    if ( !(_DWORD)queue_size )
      usleep(0x3E8u);
LABEL_611:
    acc_wait_time += wait_time;
    acc_busy_time += v199;
    acc_queue_size += queue_size;
    v3 = acc_queue_size;
    ++acc_frame_count;
    NowMs = common::tools::TimeUtils::getNowMs();
    if ( NowMs / 0x3E8 == last_time_ms / 0x3E8 )
      goto LABEL_645;
    if ( !acc_queue_size && !has_slow_frame )
    {
      acc_frame_count = acc_queue_size;
      acc_busy_time = acc_queue_size;
      acc_wait_time = acc_queue_size;
      last_time_ms = NowMs;
      goto LABEL_645;
    }
    common::milog::MiLogStream::MiLogStream(
      &v314,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/core_class/stat_log_mgr.cpp",
      "workThread",
      202);
    v226 = v314.ostr_;
    v227 = v314.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v314.ostr_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v314.ostr_);
LABEL_647:
      __asan_report_load8(v227);
LABEL_648:
      __asan_report_load8(v227);
LABEL_649:
      __asan_report_load8(v227);
LABEL_650:
      __asan_report_load8(v227);
LABEL_651:
      __asan_report_load8(v227);
LABEL_652:
      __asan_report_load8(v227);
LABEL_653:
      __asan_report_load8(v227);
LABEL_654:
      __asan_report_load8(v227);
LABEL_655:
      __asan_report_load8(v227);
LABEL_656:
      __asan_report_load8(v227);
LABEL_657:
      __asan_report_load8(v227);
LABEL_658:
      __asan_report_load8(v227);
LABEL_659:
      __asan_report_load8(v227);
      goto LABEL_660;
    }
    v227 = (common::milog::MilogStringStream *)&v314.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v314.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_647;
    v228 = v314.ostr_->buffer_.cur_;
    v229 = (size_t)&v314.ostr_->buffer_.data_[-(int)v228 + 0x4000];
    if ( v229 > 0xC )
      v229 = 13LL;
    memcpy(v228, "last_time_ms:", v229);
    v226->buffer_.cur_ += v229;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v314.ostr_, last_time_ms);
    v230 = v314.ostr_;
    v227 = v314.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v314.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_648;
    v227 = (common::milog::MilogStringStream *)&v314.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v314.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_649;
    v231 = v314.ostr_->buffer_.cur_;
    v232 = (size_t)&v314.ostr_->buffer_.data_[-(int)v231 + 0x4000];
    if ( v232 > 7 )
      v232 = 8LL;
    memcpy(v231, " now_ms:", v232);
    v230->buffer_.cur_ += v232;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v314.ostr_, NowMs);
    v233 = v314.ostr_;
    v227 = v314.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v314.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_650;
    v227 = (common::milog::MilogStringStream *)&v314.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v314.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_651;
    v234 = v314.ostr_->buffer_.cur_;
    v235 = (size_t)&v314.ostr_->buffer_.data_[-(int)v234 + 0x4000];
    if ( v235 > 0xE )
      v235 = 15LL;
    memcpy(v234, " acc_wait_time:", v235);
    v233->buffer_.cur_ += v235;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v314.ostr_, acc_wait_time);
    v236 = v314.ostr_;
    v227 = v314.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v314.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_652;
    v227 = (common::milog::MilogStringStream *)&v314.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v314.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_653;
    v237 = v314.ostr_->buffer_.cur_;
    v238 = (size_t)&v314.ostr_->buffer_.data_[-(int)v237 + 0x4000];
    if ( v238 > 0xE )
      v238 = 15LL;
    memcpy(v237, " acc_busy_time:", v238);
    v236->buffer_.cur_ += v238;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v314.ostr_, acc_busy_time);
    v239 = v314.ostr_;
    v227 = v314.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v314.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_654;
    v227 = (common::milog::MilogStringStream *)&v314.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v314.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_655;
    v240 = v314.ostr_->buffer_.cur_;
    v241 = (size_t)&v314.ostr_->buffer_.data_[-(int)v240 + 0x4000];
    if ( v241 > 0xF )
      v241 = 16LL;
    memcpy(v240, " acc_queue_size:", v241);
    v239->buffer_.cur_ += v241;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v314.ostr_, acc_queue_size);
    v242 = v314.ostr_;
    v227 = v314.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v314.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_656;
    v227 = (common::milog::MilogStringStream *)&v314.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v314.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_657;
    v243 = v314.ostr_->buffer_.cur_;
    v244 = (size_t)&v314.ostr_->buffer_.data_[-(int)v243 + 0x4000];
    if ( v244 > 0x10 )
      v244 = 17LL;
    memcpy(v243, " acc_frame_count:", v244);
    v242->buffer_.cur_ += v244;
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v314.ostr_, acc_frame_count);
    v245 = v314.ostr_;
    v227 = v314.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v314.ostr_ >> 3) + 0x7FFF8000) )
      goto LABEL_658;
    v227 = (common::milog::MilogStringStream *)&v314.ostr_->buffer_.cur_;
    if ( *(_BYTE *)(((unsigned __int64)&v314.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      goto LABEL_659;
    v246 = v314.ostr_->buffer_.cur_;
    v247 = (size_t)&v314.ostr_->buffer_.data_[-(int)v246 + 0x4000];
    if ( v247 > 0x12 )
      v247 = 19LL;
    memcpy(v246, " average_busy_time:", v247);
    v245->buffer_.cur_ += v247;
    if ( acc_queue_size )
    {
      v1 = (double)acc_busy_time / (double)(int)acc_queue_size;
      goto LABEL_644;
    }
LABEL_660:
    v1 = 0.0;
LABEL_644:
    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v314.ostr_, v1);
    common::milog::MiLogStream::~MiLogStream(&v314);
    last_time_ms = NowMs;
    acc_frame_count = 0;
    acc_queue_size = 0;
    acc_busy_time = 0;
    acc_wait_time = 0;
    has_slow_frame = 0;
LABEL_645:
    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v305 + 48));
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v305 + 368),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/core_class/stat_log_mgr.cpp",
    "workThread",
    216);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
  }
  else
  {
    v248 = this->thread_name_._M_dataplus._M_p;
    this = (StatLogMgr *const)(v305 + 640);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v305 + 368),
      "StatLogMgr thread:%s stop",
      v248);
  }
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&this[-2].stat_log_queue_.max_size_);
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)&this[-3].thread_name_._M_string_length);
  align = this[-1].stat_log_queue_.queue_mu_._M_mutex.__align;
  v250 = *(&this[-1].stat_log_queue_.queue_mu_._M_mutex.__align + 1);
  *(_QWORD *)&this[-2].stat_log_queue_.max_size_ = align;
  this[-2].stat_log_queue_.queue_mu_._M_mutex.__align = v250;
  v251 = *((_OWORD *)&this[-1].stat_log_queue_.queue_mu_._M_mutex.__align + 1);
  *(_OWORD *)(&this[-2].stat_log_queue_.queue_mu_._M_mutex.__align + 1) = v251;
  v252 = this[-1].stat_log_queue_.queue_.c._M_impl._M_finish._M_first;
  v253 = this[-1].stat_log_queue_.queue_.c._M_impl._M_finish._M_last;
  this[-2].stat_log_queue_.queue_.c._M_impl._M_start._M_cur = v252;
  this[-2].stat_log_queue_.queue_.c._M_impl._M_start._M_first = v253;
  v254 = (StatLog *)this[-1].stat_log_queue_.queue_.c._M_impl._M_finish._M_node;
  v255 = *(StatLog ***)&this[-1].stat_log_queue_.max_size_;
  this[-2].stat_log_queue_.queue_.c._M_impl._M_start._M_last = v254;
  this[-2].stat_log_queue_.queue_.c._M_impl._M_start._M_node = v255;
  this[-2].thread_name_._M_dataplus._M_p = (std::string::pointer)v252;
  this[-2].thread_name_._M_string_length = (std::string::size_type)v253;
  this[-2].thread_name_._anon_0._M_allocated_capacity = (std::string::size_type)v254;
  *(&this[-2].thread_name_._anon_0._M_allocated_capacity + 1) = (std::string::size_type)v255;
  this[-3].stat_log_queue_.queue_mu_._M_mutex.__align = align;
  *(&this[-3].stat_log_queue_.queue_mu_._M_mutex.__align + 1) = v250;
  *((_OWORD *)&this[-3].stat_log_queue_.queue_mu_._M_mutex.__align + 1) = v251;
  *(_OWORD *)&v294._M_last = v251;
  *(_OWORD *)&v294._M_cur = *(_OWORD *)&this[-3].stat_log_queue_.queue_mu_._M_mutex.__data.__lock;
  std::deque<StatLog>::_M_destroy_data_aux(
    (std::deque<StatLog> *const)&this[-1].stat_log_queue_.queue_.c._M_impl._M_start._M_node,
    (std::deque<StatLog>::iterator)this[-2].thread_name_,
    v294);
  std::_Deque_base<StatLog>::~_Deque_base((std::_Deque_base<StatLog> *const)&this[-1].stat_log_queue_.queue_.c._M_impl._M_start._M_node);
  v256 = (StatLogMgr *)this[-3].stat_log_queue_.queue_.c._M_impl._M_start._M_first;
  if ( v256 != (StatLogMgr *)&this[-3].stat_log_queue_.queue_.c._M_impl._M_start._M_node )
    operator delete(v256);
  v257 = *(volatile signed __int32 **)(v305 + 488);
  if ( !v257 )
    goto LABEL_673;
  v258 = v257 + 2;
  if ( &_pthread_key_create )
  {
    v259 = *(_BYTE *)(((unsigned __int64)v258 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v258 & 7) + 3) < v259 || !v259 )
    {
      v260 = _InterlockedExchangeAdd(v258, 0xFFFFFFFF);
      goto LABEL_672;
    }
    __asan_report_store4(v258);
  }
  v271 = *(_BYTE *)(((unsigned __int64)(v257 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v257 + 8) & 7) + 3) >= v271 && v271 )
  {
    __asan_report_load4(v257 + 2);
    goto LABEL_699;
  }
  v260 = *((_DWORD *)v257 + 2);
  *((_DWORD *)v257 + 2) = v260 - 1;
LABEL_672:
  if ( v260 == 1 )
  {
LABEL_699:
    if ( *(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) )
    {
      v272 = v257;
      __asan_report_load8(v257);
    }
    else
    {
      v272 = (volatile signed __int32 *)(*(_QWORD *)v257 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v272 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v257 + 16LL))(v257);
        v272 = v257 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_712;
        v273 = *(_BYTE *)(((unsigned __int64)v272 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v272 & 7) + 3) < v273 || !v273 )
        {
          v274 = _InterlockedExchangeAdd(v272, 0xFFFFFFFF);
          goto LABEL_705;
        }
LABEL_711:
        __asan_report_store4(v272);
LABEL_712:
        v275 = *(_BYTE *)(((unsigned __int64)(v257 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v257 + 12) & 7) + 3) >= v275 && v275 )
        {
          __asan_report_load4(v257 + 3);
          goto LABEL_716;
        }
        v274 = *((_DWORD *)v257 + 3);
        *((_DWORD *)v257 + 3) = v274 - 1;
LABEL_705:
        if ( v274 != 1 )
          goto LABEL_673;
        if ( !*(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) )
        {
          v261 = (volatile signed __int32 *)(*(_QWORD *)v257 + 24LL);
          if ( !*(_BYTE *)(((unsigned __int64)v261 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v257 + 24LL))(v257);
            goto LABEL_673;
          }
          goto LABEL_717;
        }
LABEL_716:
        v261 = v257;
        __asan_report_load8(v257);
LABEL_717:
        __asan_report_load8(v261);
        goto LABEL_718;
      }
    }
    __asan_report_load8(v272);
    goto LABEL_711;
  }
LABEL_673:
  v257 = *(volatile signed __int32 **)(v305 + 472);
  if ( !v257 )
    goto LABEL_679;
  v261 = v257 + 2;
  if ( &_pthread_key_create )
  {
    v262 = *(_BYTE *)(((unsigned __int64)v261 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v261 & 7) + 3) < v262 || !v262 )
    {
      v263 = _InterlockedExchangeAdd(v261, 0xFFFFFFFF);
      goto LABEL_678;
    }
LABEL_718:
    __asan_report_store4(v261);
  }
  v276 = *(_BYTE *)(((unsigned __int64)(v257 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v257 + 8) & 7) + 3) >= v276 && v276 )
  {
    __asan_report_load4(v257 + 2);
    goto LABEL_723;
  }
  v263 = *((_DWORD *)v257 + 2);
  *((_DWORD *)v257 + 2) = v263 - 1;
LABEL_678:
  if ( v263 == 1 )
  {
LABEL_723:
    if ( *(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) )
    {
      v277 = v257;
      __asan_report_load8(v257);
    }
    else
    {
      v277 = (volatile signed __int32 *)(*(_QWORD *)v257 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v277 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v257 + 16LL))(v257);
        v277 = v257 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_736;
        v278 = *(_BYTE *)(((unsigned __int64)v277 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v277 & 7) + 3) < v278 || !v278 )
        {
          v279 = _InterlockedExchangeAdd(v277, 0xFFFFFFFF);
          goto LABEL_729;
        }
LABEL_735:
        __asan_report_store4(v277);
LABEL_736:
        v280 = *(_BYTE *)(((unsigned __int64)(v257 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v257 + 12) & 7) + 3) >= v280 && v280 )
        {
          __asan_report_load4(v257 + 3);
          goto LABEL_740;
        }
        v279 = *((_DWORD *)v257 + 3);
        *((_DWORD *)v257 + 3) = v279 - 1;
LABEL_729:
        if ( v279 != 1 )
          goto LABEL_679;
        if ( !*(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) )
        {
          v264 = (volatile signed __int32 *)(*(_QWORD *)v257 + 24LL);
          if ( !*(_BYTE *)(((unsigned __int64)v264 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v257 + 24LL))(v257);
            goto LABEL_679;
          }
          goto LABEL_741;
        }
LABEL_740:
        v264 = v257;
        __asan_report_load8(v257);
LABEL_741:
        __asan_report_load8(v264);
        goto LABEL_742;
      }
    }
    __asan_report_load8(v277);
    goto LABEL_735;
  }
LABEL_679:
  v257 = *(volatile signed __int32 **)(v305 + 456);
  if ( !v257 )
    goto LABEL_685;
  v264 = v257 + 2;
  if ( &_pthread_key_create )
  {
    v265 = *(_BYTE *)(((unsigned __int64)v264 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v264 & 7) + 3) < v265 || !v265 )
    {
      v266 = _InterlockedExchangeAdd(v264, 0xFFFFFFFF);
      goto LABEL_684;
    }
LABEL_742:
    __asan_report_store4(v264);
  }
  v281 = *(_BYTE *)(((unsigned __int64)(v257 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v257 + 8) & 7) + 3) >= v281 && v281 )
  {
    __asan_report_load4(v257 + 2);
    goto LABEL_747;
  }
  v266 = *((_DWORD *)v257 + 2);
  *((_DWORD *)v257 + 2) = v266 - 1;
LABEL_684:
  if ( v266 == 1 )
  {
LABEL_747:
    if ( *(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) )
    {
      v282 = v257;
      __asan_report_load8(v257);
    }
    else
    {
      v282 = (volatile signed __int32 *)(*(_QWORD *)v257 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v282 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v257 + 16LL))(v257);
        v282 = v257 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_760;
        v283 = *(_BYTE *)(((unsigned __int64)v282 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v282 & 7) + 3) < v283 || !v283 )
        {
          v284 = _InterlockedExchangeAdd(v282, 0xFFFFFFFF);
          goto LABEL_753;
        }
LABEL_759:
        __asan_report_store4(v282);
LABEL_760:
        v285 = *(_BYTE *)(((unsigned __int64)(v257 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v257 + 12) & 7) + 3) >= v285 && v285 )
        {
          __asan_report_load4(v257 + 3);
          goto LABEL_764;
        }
        v284 = *((_DWORD *)v257 + 3);
        *((_DWORD *)v257 + 3) = v284 - 1;
LABEL_753:
        if ( v284 != 1 )
          goto LABEL_685;
        if ( !*(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) )
        {
          v267 = (volatile signed __int32 *)(*(_QWORD *)v257 + 24LL);
          if ( !*(_BYTE *)(((unsigned __int64)v267 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v257 + 24LL))(v257);
            goto LABEL_685;
          }
          goto LABEL_765;
        }
LABEL_764:
        v267 = v257;
        __asan_report_load8(v257);
LABEL_765:
        __asan_report_load8(v267);
        goto LABEL_766;
      }
    }
    __asan_report_load8(v282);
    goto LABEL_759;
  }
LABEL_685:
  v257 = *(volatile signed __int32 **)(v305 + 440);
  if ( !v257 )
    goto LABEL_691;
  v267 = v257 + 2;
  if ( &_pthread_key_create )
  {
    v268 = *(_BYTE *)(((unsigned __int64)v267 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v267 & 7) + 3) < v268 || !v268 )
    {
      v269 = _InterlockedExchangeAdd(v267, 0xFFFFFFFF);
      goto LABEL_690;
    }
LABEL_766:
    __asan_report_store4(v267);
  }
  v286 = *(_BYTE *)(((unsigned __int64)(v257 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v257 + 8) & 7) + 3) >= v286 && v286 )
  {
    __asan_report_load4(v257 + 2);
    goto LABEL_771;
  }
  v269 = *((_DWORD *)v257 + 2);
  *((_DWORD *)v257 + 2) = v269 - 1;
LABEL_690:
  if ( v269 == 1 )
  {
LABEL_771:
    if ( *(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) )
    {
      v287 = v257;
      __asan_report_load8(v257);
    }
    else
    {
      v287 = (volatile signed __int32 *)(*(_QWORD *)v257 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v287 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v257 + 16LL))(v257);
        v287 = v257 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_784;
        v288 = *(_BYTE *)(((unsigned __int64)v287 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v287 & 7) + 3) < v288 || !v288 )
        {
          v289 = _InterlockedExchangeAdd(v287, 0xFFFFFFFF);
          goto LABEL_777;
        }
LABEL_783:
        __asan_report_store4(v287);
LABEL_784:
        v291 = *(_BYTE *)(((unsigned __int64)(v257 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v257 + 12) & 7) + 3) >= v291 && v291 )
        {
          __asan_report_load4(v257 + 3);
          goto LABEL_788;
        }
        v289 = *((_DWORD *)v257 + 3);
        *((_DWORD *)v257 + 3) = v289 - 1;
LABEL_777:
        if ( v289 != 1 )
          goto LABEL_691;
        if ( !*(_BYTE *)(((unsigned __int64)v257 >> 3) + 0x7FFF8000) )
        {
          v290 = *(_QWORD *)v257 + 24LL;
          if ( !*(_BYTE *)((v290 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v257 + 24LL))(v257);
            goto LABEL_691;
          }
LABEL_789:
          v292 = (struct _Unwind_Exception *)__asan_report_load8(v290);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v305 + 368));
          __asan_handle_no_return(v305 + 368);
          _Unwind_Resume(v292);
        }
LABEL_788:
        v290 = (unsigned __int64)v257;
        __asan_report_load8(v257);
        goto LABEL_789;
      }
    }
    __asan_report_load8(v287);
    goto LABEL_783;
  }
LABEL_691:
  if ( v323 == (char *)v305 )
  {
    *(_QWORD *)((v305 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v305 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v305 = 1172321806LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v305 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return 0;
};

// Line 218: range 0000000014EB58E8-0000000014EB58FF
void __cdecl GLOBAL__sub_I_stat_log_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
