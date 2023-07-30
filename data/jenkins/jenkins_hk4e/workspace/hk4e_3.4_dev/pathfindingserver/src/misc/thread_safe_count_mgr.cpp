// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/misc/thread_safe_count_mgr.cpp

// Line 19: range 000000000CB711F0-000000000CB71224
void __cdecl ThreadSafeCountMgr::Add(ThreadSafeCountType type, int32_t value)
{
  std::__atomic_base<int>::operator+=(&ThreadSafeCountMgr::count_[type], value);
};

// Line 24: range 000000000CB71226-000000000CB712A3
int32_t __cdecl ThreadSafeCountMgr::Get(ThreadSafeCountType type)
{
  int32_t *v1; // rdx
  unsigned __int64 v3; // [rsp+18h] [rbp-8h]

  v3 = (unsigned __int64)&ThreadSafeCountMgr::count_[type];
  std::operator&(memory_order_seq_cst, __memory_order_mask);
  v1 = (int32_t *)v3;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)((v3 & 7) + 3) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v3);
  return *v1;
};
