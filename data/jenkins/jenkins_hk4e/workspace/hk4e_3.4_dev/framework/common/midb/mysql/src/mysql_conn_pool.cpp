// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/midb/mysql/src/mysql_conn_pool.cpp

// Line 18: range 000000000CA29219-000000000CA292C3
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/mysql_conn_pool.cpp");
    if ( __priority != 0xFFFF )
      goto LABEL_3;
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
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
    __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, &std::__ioinit);
    GLOBAL__sub_I_mysql_conn_pool_cpp();
  }
};
