// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/include/milog_utoa.h

// Line 6820: range 00000000171FBD91-00000000171FBE70
int64_t __cdecl common::milog::gettid()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // rcx

  v0 = (unsigned __int64)&`guard variable for'common::milog::gettid(void)::tid + __readfsqword(0);
  if ( *(_BYTE *)((v0 >> 3) + 0x7FFF8000) != 0 && (char)(v0 & 7) >= *(_BYTE *)((v0 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v0);
  if ( !*(_BYTE *)v0 )
  {
    *(_QWORD *)((char *)&common::milog::gettid(void)::tid + __readfsqword(0)) = syscall(186LL);
    v1 = (unsigned __int64)&`guard variable for'common::milog::gettid(void)::tid + __readfsqword(0);
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && (char)(v1 & 7) >= *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      __asan_report_store1(v1);
    *(_BYTE *)v1 = 1;
  }
  return *(_QWORD *)((char *)&common::milog::gettid(void)::tid + __readfsqword(0));
};
