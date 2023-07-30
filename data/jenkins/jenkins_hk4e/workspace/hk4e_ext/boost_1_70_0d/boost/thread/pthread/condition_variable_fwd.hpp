// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/thread/pthread/condition_variable_fwd.hpp

// Line 53: range 000000000BEFD42E-000000000BEFD537
void __cdecl boost::condition_variable::condition_variable(boost::condition_variable *const this)
{
  int res; // [rsp+1Ch] [rbp-54h]
  int resa; // [rsp+1Ch] [rbp-54h]
  boost::thread_resource_error e; // [rsp+20h] [rbp-50h] BYREF

  res = pthread_mutex_init(&this->internal_mutex, 0LL);
  if ( res )
  {
    boost::thread_resource_error::thread_resource_error(
      &e,
      res,
      "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::thread_resource_error>(&e);
  }
  resa = boost::pthread::cond_init(&this->cond);
  if ( resa )
  {
    if ( pthread_mutex_destroy(&this->internal_mutex) )
    {
      __asan_handle_no_return(this);
      __assert_fail(
        "!pthread_mutex_destroy(&internal_mutex)",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/p"
        "thread/condition_variable_fwd.hpp",
        0x48u,
        "boost::condition_variable::condition_variable()");
    }
    boost::thread_resource_error::thread_resource_error(
      &e,
      resa,
      "boost::condition_variable::condition_variable() constructor failed in pthread::cond_init");
    __asan_handle_no_return(&e);
    boost::throw_exception<boost::thread_resource_error>(&e);
  }
};

// Line 77: range 000000000BEFD538-000000000BEFD5CC
void __cdecl boost::condition_variable::~condition_variable(boost::condition_variable *const this)
{
  int ret; // [rsp+1Ch] [rbp-4h]
  int reta; // [rsp+1Ch] [rbp-4h]

  do
    ret = pthread_mutex_destroy(&this->internal_mutex);
  while ( ret == 4 );
  if ( ret )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!ret",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/condition_variable_fwd.hpp",
      0x55u,
      "boost::condition_variable::~condition_variable()");
  }
  do
    reta = pthread_cond_destroy(&this->cond);
  while ( reta == 4 );
  if ( reta )
  {
    __asan_handle_no_return(&this->cond);
    __assert_fail(
      "!ret",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/thread/pth"
      "read/condition_variable_fwd.hpp",
      0x5Au,
      "boost::condition_variable::~condition_variable()");
  }
};

// Line 96: range 000000000BF0C370-000000000BF0C498
void __fastcall boost::condition_variable::wait<boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>>(
        boost::condition_variable *const this,
        boost::unique_lock<boost::mutex> *m,
        boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > > pred)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 7 pred:96";
  *(_QWORD *)(v3 + 16) = boost::condition_variable::wait<boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  *(boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > > *)(v3 + 32) = pred;
  while ( !boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data>>>::operator()((boost::_bi::bind_t<bool,boost::_mfi::cmf0<bool,boost::shared_mutex::state_data>,boost::_bi::list1<boost::reference_wrapper<boost::shared_mutex::state_data> > > *const)(v3 + 32)) )
    boost::condition_variable::wait(this, m);
  if ( v6 == (char *)v3 )
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
