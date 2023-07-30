// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/misc/pathfinding_timer.cpp

// Line 17: range 000000000CB6EB9A-000000000CB6ED7A
void __cdecl PathfindingTimer::PathfindingTimer(PathfindingTimer *const this, common::tools::TimeoutFunc *p_callback)
{
  void *v2; // rdi
  int (**v3)(...); // rdx
  unsigned __int64 v4; // rax
  _BYTE *v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  uint32_t *v8; // rdx
  uint32_t v9; // ecx
  common::tools::TimerMgrPtr p_timer_mgr_ptr; // [rsp+10h] [rbp-40h] BYREF
  std::function<void(long unsigned int)> v12; // [rsp+20h] [rbp-30h] BYREF

  std::function<void ()(unsigned long)>::function(&v12, p_callback);
  ServiceBox::findService<PathfindingService>();
  PathfindingService::getTimerMgrPtr((PathfindingService *const)&p_timer_mgr_ptr);
  common::tools::MiTimer::MiTimer(this, &p_timer_mgr_ptr, &v12);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&p_timer_mgr_ptr);
  v2 = &v12;
  std::function<void ()(unsigned long)>::~function(&v12);
  v3 = (int (**)(...))(&`vtable for'PathfindingTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v2 = this;
    __asan_report_store8();
  }
  this->_vptr_MiTimer = v3;
  v4 = ZTWN11ThreadLocal17is_in_work_threadE(v2);
  v5 = (_BYTE *)v4;
  v6 = v4 & 7;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)v6 >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    v6 = v4;
    __asan_report_load1(v4);
  }
  if ( !*v5 )
  {
    __asan_handle_no_return(v6);
    __assert_fail(
      "ThreadLocal::is_in_work_thread",
      "./src/misc/pathfinding_timer.cpp",
      0x14u,
      "PathfindingTimer::PathfindingTimer(common::tools::TimeoutFunc)");
  }
  v7 = ZTWN11ThreadLocal17work_thread_indexE(v6);
  v8 = (uint32_t *)v7;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v7);
  v9 = *v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->thread_index);
  }
  this->thread_index = v9;
  ThreadSafeCountMgr::Add(CountTypePathfindingTimer, 1);
};

// Line 25: range 000000000CB6ED7C-000000000CB6EDD8
void __cdecl PathfindingTimer::~PathfindingTimer(PathfindingTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PathfindingTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MiTimer = v1;
  ThreadSafeCountMgr::Add(CountTypePathfindingTimer, -1);
  common::tools::MiTimer::~MiTimer(this);
};

// Line 25: range 000000000CB6EDDA-000000000CB6EE04
void __cdecl PathfindingTimer::~PathfindingTimer(PathfindingTimer *const this)
{
  PathfindingTimer::~PathfindingTimer(this);
  operator delete(this, 0x50uLL);
};
