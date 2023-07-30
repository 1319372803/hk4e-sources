// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/src/milog_define.cpp

// Line 20: range 000000000C98A0D6-000000000C98A1A8
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/milog_define.cpp");
    if ( __priority != 0xFFFF )
      goto LABEL_3;
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    common::milog::MiLog::MiLog(&common::milog::MiLogDefault::default_log_obj_);
    __cxa_atexit(
      (void (__fastcall *)(void *))common::milog::MiLog::~MiLog,
      &common::milog::MiLogDefault::default_log_obj_,
      &_dso_handle);
    if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      goto LABEL_3;
    `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                   + 0x7FFF8000) )
    {
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                           + 9;
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    __asan_report_store8(
      &common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
      &common::milog::MiLogDefault::default_log_obj_);
    GLOBAL__sub_I_milog_define_cpp();
  }
};
