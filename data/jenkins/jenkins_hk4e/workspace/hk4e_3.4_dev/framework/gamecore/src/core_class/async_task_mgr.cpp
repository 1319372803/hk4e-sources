// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/async_task_mgr.cpp

// Line 26: range 0000000014E6692E-0000000014E6749E
int32_t __fastcall AsyncTaskMgr::init(AsyncTaskMgr *const this, uint32_t async_thread_num, uint32_t work_thread_num, const std::string *service_name);

// Line 53: range 0000000014E660C4-0000000014E66358
int32_t __fastcall AsyncTaskMgr::start(AsyncTaskMgr *const this)
{
  int v1; // r12d
  std::atomic<bool> *p_is_run; // rdi
  char v4; // al
  std::_Bind<int (AsyncTaskMgr::*(AsyncTaskMgr*,unsigned int))(unsigned int)> *v5; // rdx
  char v6; // al
  uint32_t i; // ebp
  void *p_thread_mu; // rdi
  char v10; // al
  char v11; // al
  common::milog::MiLogStream v12[2]; // [rsp+0h] [rbp-48h] BYREF

  p_is_run = &this->is_run_;
  v4 = *(_BYTE *)(((unsigned __int64)p_is_run >> 3) + 0x7FFF8000);
  v5 = (std::_Bind<int (AsyncTaskMgr::*(AsyncTaskMgr*,unsigned int))(unsigned int)> *)((unsigned __int8)p_is_run & 7);
  if ( v4 <= (char)v5 && v4 )
  {
    __asan_report_load1(p_is_run);
    goto LABEL_9;
  }
  if ( this->is_run_._M_base._M_i )
  {
LABEL_9:
    common::milog::MiLogStream::MiLogStream(
      v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/async_task_mgr.cpp",
      "start",
      56);
    common::milog::MiLogStream::operator()(v12, "[ASYNC_TASK_MGR] is running, can not restart");
    common::milog::MiLogStream::~MiLogStream(v12);
    return -1;
  }
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
  {
    __asan_report_load4(this);
    goto LABEL_11;
  }
  if ( !this->async_thread_num_ )
  {
LABEL_11:
    common::milog::MiLogStream::MiLogStream(
      v12,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/core_class/async_task_mgr.cpp",
      "start",
      62);
    common::milog::MiLogStream::operator()(v12, "[ASYNC_TASK_MGR] start with async_thread_num 0, skip");
    common::milog::MiLogStream::~MiLogStream(v12);
    return 0;
  }
  this->is_run_._M_base._M_i = 1;
  _mm_mfence();
  for ( i = 0; ; ++i )
  {
    p_thread_mu = this;
    v10 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
    if ( v10 && v10 <= 3 )
    {
      __asan_report_load4(this);
LABEL_13:
      __asan_handle_no_return(p_thread_mu);
      std::__throw_system_error(v1);
    }
    if ( this->async_thread_num_ <= i )
      break;
    v12[0].log_ = (common::milog::MiLog *)AsyncTaskMgr::workThread;
    v12[0].ostr_ptr_._M_ptr = 0LL;
    LODWORD(v12[0].ostr_ptr_._M_refcount._M_pi) = i;
    v12[0].ostr_ = (common::milog::MilogStringStream *)this;
    if ( &_pthread_key_create )
    {
      p_thread_mu = &this->thread_group_.thread_mu_;
      v1 = pthread_mutex_lock(&this->thread_group_.thread_mu_._M_mutex);
      if ( v1 )
        goto LABEL_13;
    }
    std::vector<std::thread>::emplace_back<std::_Bind<int (AsyncTaskMgr::*)(unsigned int) ()(AsyncTaskMgr*,unsigned int)> &>(
      &this->thread_group_.thread_vec_,
      (std::_Bind<int (AsyncTaskMgr::*(AsyncTaskMgr*,unsigned int))(unsigned int)> *)v12,
      v5);
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&this->thread_group_.thread_mu_._M_mutex);
  }
  common::milog::MiLogStream::MiLogStream(
    v12,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/core_class/async_task_mgr.cpp",
    "start",
    73);
  v11 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    __asan_report_load4(this);
  else
    common::milog::MiLogStream::operator()(
      v12,
      "[ASYNC_TASK_MGR] start with async_thread_num %u",
      this->async_thread_num_);
  common::milog::MiLogStream::~MiLogStream(v12);
  return 0;
};

// Line 97: range 0000000014E6635E-0000000014E6692C
int32_t __fastcall AsyncTaskMgr::fini(AsyncTaskMgr *const this);

// Line 151: range 0000000014E674A4-0000000014E6EF91
bool __fastcall AsyncTaskMgr::execTaskCallback(AsyncTaskMgr *const this);

// Line 362: range 0000000014E6EF96-0000000014E6EFAD
void __cdecl GLOBAL__sub_I_async_task_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 362: range 0000000014E65E46-0000000014E660BE
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/core_class/async_task_mgr.cpp");
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
          JUMPOUT(0x14E65EF5LL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
