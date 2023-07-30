// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/pthread/thread_data.hpp

// Line 148: range 000000000BEFD696-000000000BEFDAD9
void __cdecl boost::detail::thread_data_base::thread_data_base(boost::detail::thread_data_base *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  char v5; // dl
  __int64 v6; // rsi

  boost::enable_shared_from_this<boost::detail::thread_data_base>::enable_shared_from_this((boost::enable_shared_from_this<boost::detail::thread_data_base> *const)((char *)this + 8));
  v2 = &`vtable for'boost::detail::thread_data_base + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this = v2;
  boost::shared_ptr<boost::detail::thread_data_base>::shared_ptr((boost::shared_ptr<boost::detail::thread_data_base> *const)((char *)this + 24));
  if ( *(_BYTE *)((((unsigned __int64)this + 40) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *((_QWORD *)this + 5) = 0LL;
  boost::mutex::mutex((boost::mutex *const)((char *)this + 48));
  boost::condition_variable::condition_variable((boost::condition_variable *const)this + 1);
  if ( *(char *)((((unsigned __int64)this + 176) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1((char *)this + 176, v1);
  *((_BYTE *)this + 176) = 0;
  v3 = ((_BYTE)this - 79) & 7;
  if ( *(_BYTE *)((((unsigned __int64)this + 177) >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)((((unsigned __int64)this + 177) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1((char *)this + 177, v3);
  }
  *((_BYTE *)this + 177) = 0;
  v4 = ((_BYTE)this - 78) & 7;
  if ( *(_BYTE *)((((unsigned __int64)this + 178) >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)((((unsigned __int64)this + 178) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1((char *)this + 178, v4);
  }
  *((_BYTE *)this + 178) = 0;
  if ( *(_BYTE *)((((unsigned __int64)this + 184) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *((_QWORD *)this + 23) = 0LL;
  std::map<void const*,boost::detail::tss_data_node>::map((std::map<void const*,boost::detail::tss_data_node> *const)this + 4);
  if ( *(_BYTE *)((((unsigned __int64)this + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *((_QWORD *)this + 30) = 0LL;
  if ( *(_BYTE *)((((unsigned __int64)this + 248) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *((_QWORD *)this + 31) = 0LL;
  if ( *(char *)((((unsigned __int64)this + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)this + 279) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)this + 279) >> 3) + 0x7FFF8000) )
  {
    v4 = 24LL;
    __asan_report_store_n((char *)this + 256, 24LL);
  }
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  std::vector<std::pair<boost::condition_variable *,boost::mutex *>>::vector((std::vector<std::pair<boost::condition_variable*,boost::mutex*>> *const)((char *)this + 256));
  v5 = *(_BYTE *)((((unsigned __int64)this + 303) >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v5 != 0;
  if ( *(char *)((((unsigned __int64)this + 280) >> 3) + 0x7FFF8000) < 0
    || v5 != 0 && (((unsigned __int8)this + 47) & 7) >= v5 )
  {
    v4 = 24LL;
    __asan_report_store_n((char *)this + 280, 24LL);
  }
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  std::vector<boost::shared_ptr<boost::detail::shared_state_base>>::vector((std::vector<boost::shared_ptr<boost::detail::shared_state_base>> *const)((char *)this + 280));
  if ( *(char *)((((unsigned __int64)this + 304) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1((char *)this + 304, v4);
  *((_BYTE *)this + 304) = 1;
  v6 = ((_BYTE)this + 49) & 7;
  if ( *(_BYTE *)((((unsigned __int64)this + 305) >> 3) + 0x7FFF8000) != 0
    && (char)v6 >= *(_BYTE *)((((unsigned __int64)this + 305) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1((char *)this + 305, v6);
  }
  *((_BYTE *)this + 305) = 0;
};

// Line 170: range 000000000BEFDADA-000000000BEFDC16
void __fastcall boost::detail::thread_data_base::notify_all_at_thread_exit(
        boost::detail::thread_data_base *const this,
        boost::condition_variable *cv,
        boost::mutex *m)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<boost::condition_variable*,boost::mutex*> __x; // [rsp+20h] [rbp-90h] BYREF
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 6 cv:170 64 8 5 m:170";
  *(_QWORD *)(v3 + 16) = boost::detail::thread_data_base::notify_all_at_thread_exit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  *(_QWORD *)(v3 + 32) = cv;
  *(_QWORD *)(v3 + 64) = m;
  std::pair<boost::condition_variable *,boost::mutex *>::pair<boost::condition_variable *&,boost::mutex *&,true>(
    &__x,
    (boost::condition_variable **)(v3 + 32),
    (boost::mutex **)(v3 + 64));
  std::vector<std::pair<boost::condition_variable *,boost::mutex *>>::push_back(
    (std::vector<std::pair<boost::condition_variable*,boost::mutex*>> *const)((char *)this + 256),
    &__x);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 193: range 000000000BEFDC18-000000000BEFDD06
void __cdecl boost::detail::interruption_checker::check_for_interruption(
        boost::detail::interruption_checker *const this)
{
  __int64 v1; // rsi
  boost::detail::thread_data_base *thread_info; // rdx
  char v3; // cl
  boost::detail::thread_data_base *v4; // rdx
  char v5; // cl
  void *exception; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  thread_info = this->thread_info;
  v3 = *(_BYTE *)((((unsigned __int64)this->thread_info + 305) >> 3) + 0x7FFF8000);
  if ( v3 != 0 && ((LOBYTE(this->thread_info) + 49) & 7) >= v3 )
    __asan_report_load1((char *)this->thread_info + 305);
  if ( *((_BYTE *)thread_info + 305) )
  {
    v4 = this->thread_info;
    v5 = *(_BYTE *)((((unsigned __int64)this->thread_info + 305) >> 3) + 0x7FFF8000);
    if ( v5 != 0 && ((LOBYTE(this->thread_info) + 49) & 7) >= v5 )
    {
      LOBYTE(v1) = v5 != 0;
      __asan_report_store1((char *)this->thread_info + 305, v1);
    }
    *((_BYTE *)v4 + 305) = 0;
    exception = __cxa_allocate_exception(1uLL);
    __asan_handle_no_return(1LL);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'boost::thread_interrupted, 0LL);
  }
};

// Line 206: range 000000000BEFDD08-000000000BEFE0DC
void __cdecl boost::detail::interruption_checker::interruption_checker(
        boost::detail::interruption_checker *const this,
        pthread_mutex_t *cond_mutex,
        pthread_cond_t *cond)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 current_thread_data; // rax
  __int64 thread_info; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  pthread_mutex_t *m; // rdi
  pthread_mutex_t *v13; // rdi
  boost::detail::interruption_checker *thisa; // [rsp+18h] [rbp-78h]
  char v17[96]; // [rsp+30h] [rbp-60h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (boost::detail::interruption_checker *const)64;
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 guard:212";
  *(_QWORD *)(v3 + 16) = boost::detail::interruption_checker::interruption_checker;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  current_thread_data = boost::detail::get_current_thread_data((boost::detail *)this);
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
    current_thread_data = __asan_report_store8();
  thisa->thread_info = (boost::detail::thread_data_base *const)current_thread_data;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->m = cond_mutex;
  if ( !thisa->thread_info )
    goto LABEL_13;
  thread_info = (__int64)thisa->thread_info;
  if ( *(char *)((((unsigned __int64)thisa->thread_info + 304) >> 3) + 0x7FFF8000) < 0 )
    thread_info = __asan_report_load1((char *)thisa->thread_info + 304);
  if ( *(_BYTE *)(thread_info + 304) )
    v8 = 1LL;
  else
LABEL_13:
    v8 = 0LL;
  if ( *(char *)(((unsigned __int64)&thisa->set >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&thisa->set, v8);
  thisa->set = v8;
  v9 = ((_BYTE)thisa + 17) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->done >> 3) + 0x7FFF8000) != 0
    && (char)v9 >= *(_BYTE *)(((unsigned __int64)&thisa->done >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&thisa->done, v9);
  }
  thisa->done = 0;
  if ( thisa->set )
  {
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    boost::lock_guard<boost::mutex>::lock_guard(
      (boost::lock_guard<boost::mutex> *const)(v3 + 32),
      (boost::mutex *)((char *)thisa->thread_info + 48));
    boost::detail::interruption_checker::check_for_interruption(thisa);
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (__int64)thisa->thread_info;
    if ( *(_BYTE *)((((unsigned __int64)thisa->thread_info + 240) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8();
    *(_QWORD *)(v10 + 240) = cond_mutex;
    v11 = (__int64)thisa->thread_info;
    if ( *(_BYTE *)((((unsigned __int64)thisa->thread_info + 248) >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8();
    *(_QWORD *)(v11 + 248) = cond;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    m = thisa->m;
    if ( pthread_mutex_lock(m) )
    {
      __asan_handle_no_return(m);
      __assert_fail(
        "!posix::pthread_mutex_lock(m)",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/p"
        "thread/thread_data.hpp",
        0xD8u,
        "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)");
    }
    boost::lock_guard<boost::mutex>::~lock_guard((boost::lock_guard<boost::mutex> *const)(v3 + 32));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->m >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = thisa->m;
    if ( pthread_mutex_lock(v13) )
    {
      __asan_handle_no_return(v13);
      __assert_fail(
        "!posix::pthread_mutex_lock(m)",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/p"
        "thread/thread_data.hpp",
        0xDCu,
        "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)");
    }
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 223: range 000000000BEFE0DE-000000000BEFE400
void __cdecl boost::detail::interruption_checker::unlock_if_locked(boost::detail::interruption_checker *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  pthread_mutex_t *m; // rdi
  __int64 thread_info; // rax
  __int64 v6; // rax
  pthread_mutex_t *v7; // rdi
  __int64 v8; // rsi
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 guard:229";
  *(_QWORD *)(v1 + 16) = boost::detail::interruption_checker::unlock_if_locked;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->done >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->done >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->done);
  }
  if ( !this->done )
  {
    if ( *(char *)(((unsigned __int64)&this->set >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->set);
    if ( this->set )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      m = this->m;
      if ( pthread_mutex_unlock(m) )
      {
        __asan_handle_no_return(m);
        __assert_fail(
          "!posix::pthread_mutex_unlock(m)",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread"
          "/pthread/thread_data.hpp",
          0xE4u,
          "void boost::detail::interruption_checker::unlock_if_locked()");
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      boost::lock_guard<boost::mutex>::lock_guard(
        (boost::lock_guard<boost::mutex> *const)(v1 + 32),
        (boost::mutex *)((char *)this->thread_info + 48));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      thread_info = (__int64)this->thread_info;
      if ( *(_BYTE *)((((unsigned __int64)this->thread_info + 240) >> 3) + 0x7FFF8000) )
        thread_info = __asan_report_store8();
      *(_QWORD *)(thread_info + 240) = 0LL;
      v6 = (__int64)this->thread_info;
      if ( *(_BYTE *)((((unsigned __int64)this->thread_info + 248) >> 3) + 0x7FFF8000) )
        v6 = __asan_report_store8();
      *(_QWORD *)(v6 + 248) = 0LL;
      boost::lock_guard<boost::mutex>::~lock_guard((boost::lock_guard<boost::mutex> *const)(v1 + 32));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = this->m;
      if ( pthread_mutex_unlock(v7) )
      {
        __asan_handle_no_return(v7);
        __assert_fail(
          "!posix::pthread_mutex_unlock(m)",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread"
          "/pthread/thread_data.hpp",
          0xEBu,
          "void boost::detail::interruption_checker::unlock_if_locked()");
      }
    }
    v8 = ((_BYTE)this + 17) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&this->done >> 3) + 0x7FFF8000) != 0
      && (char)v8 >= *(_BYTE *)(((unsigned __int64)&this->done >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->done, v8);
    }
    this->done = 1;
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 241: range 000000000BEFE402-000000000BEFE41C
void __cdecl boost::detail::interruption_checker::~interruption_checker(
        boost::detail::interruption_checker *const this)
{
  boost::detail::interruption_checker::unlock_if_locked(this);
};
