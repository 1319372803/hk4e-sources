// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/atomicops_internals_x86_gcc.h

// Line 256: range 00000000165A7A3E-00000000165A7A7B
google::protobuf::internal::Atomic64 __cdecl google::protobuf::internal::Acquire_Load(
        const volatile google::protobuf::internal::Atomic64 *ptr)
{
  if ( *(_BYTE *)(((unsigned __int64)ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *ptr;
};
