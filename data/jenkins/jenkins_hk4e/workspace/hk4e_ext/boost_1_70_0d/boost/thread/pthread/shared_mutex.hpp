// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/pthread/shared_mutex.hpp

// Line 35: range 000000000BEFEAB2-000000000BEFEBC1
void __cdecl boost::shared_mutex::state_data::state_data(boost::shared_mutex::state_data *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->shared_count = 0;
  v1 = ((_BYTE)this + 4) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) != 0
    && (char)v1 >= *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->exclusive, v1);
  }
  this->exclusive = 0;
  v2 = ((_BYTE)this + 5) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->upgrade >> 3) + 0x7FFF8000) != 0
    && (char)v2 >= *(_BYTE *)(((unsigned __int64)&this->upgrade >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->upgrade, v2);
  }
  this->upgrade = 0;
  v3 = ((_BYTE)this + 6) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive_waiting_blocked >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)(((unsigned __int64)&this->exclusive_waiting_blocked >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->exclusive_waiting_blocked, v3);
  }
  this->exclusive_waiting_blocked = 0;
};

// Line 42: range 000000000BEFEBC2-000000000BEFED0B
void __cdecl boost::shared_mutex::state_data::assert_free(const boost::shared_mutex::state_data *const this)
{
  bool *p_exclusive; // rax
  const boost::shared_mutex::state_data *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  p_exclusive = &this->exclusive;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) )
  {
    this = (const boost::shared_mutex::state_data *const)((char *)this + 4);
    __asan_report_load1(p_exclusive);
  }
  if ( thisa->exclusive )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "! exclusive",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/shared_mutex.hpp",
      0x2Cu,
      "void boost::shared_mutex::state_data::assert_free() const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->upgrade >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->upgrade >> 3) + 0x7FFF8000) )
  {
    this = (const boost::shared_mutex::state_data *const)&thisa->upgrade;
    __asan_report_load1(&thisa->upgrade);
  }
  if ( thisa->upgrade )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "! upgrade",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/shared_mutex.hpp",
      0x2Du,
      "void boost::shared_mutex::state_data::assert_free() const");
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)thisa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load4(thisa);
  }
  if ( thisa->shared_count )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "shared_count==0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/shared_mutex.hpp",
      0x2Eu,
      "void boost::shared_mutex::state_data::assert_free() const");
  }
};

// Line 49: range 000000000BEFED0C-000000000BEFEE52
void __cdecl boost::shared_mutex::state_data::assert_locked(const boost::shared_mutex::state_data *const this)
{
  bool *p_exclusive; // rax
  const boost::shared_mutex::state_data *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  p_exclusive = &this->exclusive;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) )
  {
    this = (const boost::shared_mutex::state_data *const)((char *)this + 4);
    __asan_report_load1(p_exclusive);
  }
  if ( !thisa->exclusive )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "exclusive",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/shared_mutex.hpp",
      0x33u,
      "void boost::shared_mutex::state_data::assert_locked() const");
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)thisa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load4(thisa);
  }
  if ( thisa->shared_count )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "shared_count==0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/shared_mutex.hpp",
      0x34u,
      "void boost::shared_mutex::state_data::assert_locked() const");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->upgrade >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->upgrade >> 3) + 0x7FFF8000) )
  {
    this = (const boost::shared_mutex::state_data *const)&thisa->upgrade;
    __asan_report_load1(&thisa->upgrade);
  }
  if ( thisa->upgrade )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "! upgrade",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/shared_mutex.hpp",
      0x35u,
      "void boost::shared_mutex::state_data::assert_locked() const");
  }
};

// Line 56: range 000000000BEFEE54-000000000BEFEF32
void __cdecl boost::shared_mutex::state_data::assert_lock_shared(const boost::shared_mutex::state_data *const this)
{
  bool *p_exclusive; // rax
  const boost::shared_mutex::state_data *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  p_exclusive = &this->exclusive;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) )
  {
    this = (const boost::shared_mutex::state_data *const)((char *)this + 4);
    __asan_report_load1(p_exclusive);
  }
  if ( thisa->exclusive )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "! exclusive",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/shared_mutex.hpp",
      0x3Au,
      "void boost::shared_mutex::state_data::assert_lock_shared() const");
  }
  if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)thisa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
  {
    this = thisa;
    __asan_report_load4(thisa);
  }
  if ( !thisa->shared_count )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "shared_count>0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/shared_mutex.hpp",
      0x3Bu,
      "void boost::shared_mutex::state_data::assert_lock_shared() const");
  }
};

// Line 77: range 000000000BEFEF34-000000000BEFEFD5
bool __cdecl boost::shared_mutex::state_data::can_lock(const boost::shared_mutex::state_data *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( this->shared_count )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->exclusive);
  }
  return !this->exclusive;
};

// Line 93: range 000000000BEFEFD6-000000000BEFF07D
bool __cdecl boost::shared_mutex::state_data::can_lock_shared(const boost::shared_mutex::state_data *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->exclusive >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->exclusive);
  }
  if ( this->exclusive )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive_waiting_blocked >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 6) & 7) >= *(_BYTE *)(((unsigned __int64)&this->exclusive_waiting_blocked >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&this->exclusive_waiting_blocked);
  }
  return !this->exclusive_waiting_blocked;
};

// Line 98: range 000000000BEFF07E-000000000BEFF0CD
bool __cdecl boost::shared_mutex::state_data::no_shared(const boost::shared_mutex::state_data *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->shared_count == 0;
};

// Line 108: range 000000000BEFF0CE-000000000BEFF122
void __cdecl boost::shared_mutex::state_data::lock_shared(boost::shared_mutex::state_data *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  ++this->shared_count;
};

// Line 114: range 000000000BEFF124-000000000BEFF178
void __cdecl boost::shared_mutex::state_data::unlock_shared(boost::shared_mutex::state_data *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  --this->shared_count;
};

// Line 150: range 000000000BEFF17A-000000000BEFF1AA
void __cdecl boost::shared_mutex::release_waiters(boost::shared_mutex *const this)
{
  boost::condition_variable::notify_one(&this->exclusive_cond);
  boost::condition_variable::notify_all(&this->shared_cond);
};

// Line 160: range 000000000BEFF1AC-000000000BEFF25D
void __cdecl boost::shared_mutex::shared_mutex(boost::shared_mutex *const this)
{
  boost::shared_mutex::state_data::state_data(&this->state);
  boost::mutex::mutex(&this->state_change);
  boost::condition_variable::condition_variable(&this->shared_cond);
  boost::condition_variable::condition_variable(&this->exclusive_cond);
  boost::condition_variable::condition_variable(&this->upgrade_cond);
};

// Line 164: range 000000000BEFF25E-000000000BEFF2B0
void __cdecl boost::shared_mutex::~shared_mutex(boost::shared_mutex *const this)
{
  boost::condition_variable::~condition_variable(&this->upgrade_cond);
  boost::condition_variable::~condition_variable(&this->exclusive_cond);
  boost::condition_variable::~condition_variable(&this->shared_cond);
  boost::mutex::~mutex(&this->state_change);
};

// Line 168: range 000000000BEFF2B2-000000000BEFF4C8
void __cdecl boost::shared_mutex::lock_shared(boost::shared_mutex *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  boost::shared_mutex::state_data *v4; // [rsp+28h] [rbp-C8h]
  boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > > pred; // [rsp+40h] [rbp-B0h] BYREF
  char v6[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 18 do_not_disturb:171 64 16 6 lk:173";
  *(_QWORD *)(v1 + 16) = boost::shared_mutex::lock_shared;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  boost::this_thread::disable_interruption::disable_interruption((boost::this_thread::disable_interruption *)(v1 + 48));
  boost::unique_lock<boost::mutex>::unique_lock((boost::unique_lock<boost::mutex> *const)(v1 + 64), &this->state_change);
  v4 = boost::addressof<boost::shared_mutex::state_data>(&this->state);
  boost::bind<bool,boost::shared_mutex::state_data,boost::reference_wrapper<boost::shared_mutex::state_data>>(
    &pred,
    (bool (*)(const boost::shared_mutex::state_data *))boost::shared_mutex::state_data::can_lock_shared,
    0LL,
    (__int64)v4);
  boost::condition_variable::wait<boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>>(
    &this->shared_cond,
    (boost::unique_lock<boost::mutex> *)(v1 + 64),
    pred);
  boost::shared_mutex::state_data::lock_shared(&this->state);
  boost::unique_lock<boost::mutex>::~unique_lock((boost::unique_lock<boost::mutex> *const)(v1 + 64));
  boost::this_thread::disable_interruption::~disable_interruption((boost::this_thread::disable_interruption *)(v1 + 48));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 241: range 000000000BEFF4CA-000000000BEFF6B9
void __cdecl boost::shared_mutex::unlock_shared(boost::shared_mutex *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rsi
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 lk:243";
  *(_QWORD *)(v1 + 16) = boost::shared_mutex::unlock_shared;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::unique_lock<boost::mutex>::unique_lock((boost::unique_lock<boost::mutex> *const)(v1 + 32), &this->state_change);
  boost::shared_mutex::state_data::assert_lock_shared(&this->state);
  boost::shared_mutex::state_data::unlock_shared(&this->state);
  if ( boost::shared_mutex::state_data::no_shared(&this->state) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->state.upgrade >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->state.upgrade >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->state.upgrade);
    }
    if ( this->state.upgrade )
    {
      this->state.upgrade = 0;
      v4 = ((_BYTE)this + 4) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&this->state.exclusive >> 3) + 0x7FFF8000) != 0
        && (char)v4 >= *(_BYTE *)(((unsigned __int64)&this->state.exclusive >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->state.exclusive, v4);
      }
      this->state.exclusive = 1;
      boost::condition_variable::notify_one(&this->upgrade_cond);
    }
    else
    {
      v5 = ((_BYTE)this + 6) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&this->state.exclusive_waiting_blocked >> 3) + 0x7FFF8000) != 0
        && (char)v5 >= *(_BYTE *)(((unsigned __int64)&this->state.exclusive_waiting_blocked >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->state.exclusive_waiting_blocked, v5);
      }
      this->state.exclusive_waiting_blocked = 0;
    }
    boost::shared_mutex::release_waiters(this);
  }
  boost::unique_lock<boost::mutex>::~unique_lock((boost::unique_lock<boost::mutex> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 266: range 000000000BEFF6BA-000000000BEFF94F
void __cdecl boost::shared_mutex::lock(boost::shared_mutex *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rsi
  boost::shared_mutex::state_data *v6; // [rsp+28h] [rbp-C8h]
  boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > > pred; // [rsp+40h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 18 do_not_disturb:269 64 16 6 lk:271";
  *(_QWORD *)(v1 + 16) = boost::shared_mutex::lock;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  boost::this_thread::disable_interruption::disable_interruption((boost::this_thread::disable_interruption *)(v1 + 48));
  boost::unique_lock<boost::mutex>::unique_lock((boost::unique_lock<boost::mutex> *const)(v1 + 64), &this->state_change);
  v4 = ((_BYTE)this + 6) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->state.exclusive_waiting_blocked >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&this->state.exclusive_waiting_blocked >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->state.exclusive_waiting_blocked, v4);
  }
  this->state.exclusive_waiting_blocked = 1;
  v6 = boost::addressof<boost::shared_mutex::state_data>(&this->state);
  boost::bind<bool,boost::shared_mutex::state_data,boost::reference_wrapper<boost::shared_mutex::state_data>>(
    &pred,
    (bool (*)(const boost::shared_mutex::state_data *))boost::shared_mutex::state_data::can_lock,
    0LL,
    (__int64)v6);
  boost::condition_variable::wait<boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>>(
    &this->exclusive_cond,
    (boost::unique_lock<boost::mutex> *)(v1 + 64),
    pred);
  v5 = ((_BYTE)this + 4) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->state.exclusive >> 3) + 0x7FFF8000) != 0
    && (char)v5 >= *(_BYTE *)(((unsigned __int64)&this->state.exclusive >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->state.exclusive, v5);
  }
  this->state.exclusive = 1;
  boost::unique_lock<boost::mutex>::~unique_lock((boost::unique_lock<boost::mutex> *const)(v1 + 64));
  boost::this_thread::disable_interruption::~disable_interruption((boost::this_thread::disable_interruption *)(v1 + 48));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 349: range 000000000BEFF950-000000000BEFFACB
void __cdecl boost::shared_mutex::unlock(boost::shared_mutex *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rsi
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 6 lk:351";
  *(_QWORD *)(v1 + 16) = boost::shared_mutex::unlock;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  boost::unique_lock<boost::mutex>::unique_lock((boost::unique_lock<boost::mutex> *const)(v1 + 32), &this->state_change);
  boost::shared_mutex::state_data::assert_locked(&this->state);
  v4 = ((_BYTE)this + 4) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->state.exclusive >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&this->state.exclusive >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->state.exclusive, v4);
  }
  this->state.exclusive = 0;
  v5 = ((_BYTE)this + 6) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->state.exclusive_waiting_blocked >> 3) + 0x7FFF8000) != 0
    && (char)v5 >= *(_BYTE *)(((unsigned __int64)&this->state.exclusive_waiting_blocked >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->state.exclusive_waiting_blocked, v5);
  }
  this->state.exclusive_waiting_blocked = 0;
  boost::shared_mutex::state_data::assert_free(&this->state);
  boost::shared_mutex::release_waiters(this);
  boost::unique_lock<boost::mutex>::~unique_lock((boost::unique_lock<boost::mutex> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
