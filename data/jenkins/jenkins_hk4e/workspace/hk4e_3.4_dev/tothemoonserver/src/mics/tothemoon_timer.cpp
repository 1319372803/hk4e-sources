// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/mics/tothemoon_timer.cpp

// Line 16: range 000000000CBB5CBC-000000000CBB5E9C
void __cdecl ToTheMoonTimer::ToTheMoonTimer(ToTheMoonTimer *const this, common::tools::TimeoutFunc *p_callback)
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
  ServiceBox::findService<TothemoonService>();
  TothemoonService::getTimerMgrPtr((TothemoonService *const)&p_timer_mgr_ptr);
  common::tools::MiTimer::MiTimer(this, &p_timer_mgr_ptr, &v12);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&p_timer_mgr_ptr);
  v2 = &v12;
  std::function<void ()(unsigned long)>::~function(&v12);
  v3 = (int (**)(...))(&`vtable for'ToTheMoonTimer + 2);
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
      "./src/mics/tothemoon_timer.cpp",
      0x13u,
      "ToTheMoonTimer::ToTheMoonTimer(common::tools::TimeoutFunc)");
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
  ThreadSafeCountMgr::Add(CountTypeToTheMoonTimer, 1);
};

// Line 24: range 000000000CBB5E9E-000000000CBB5EFA
void __cdecl ToTheMoonTimer::~ToTheMoonTimer(ToTheMoonTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ToTheMoonTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_MiTimer = v1;
  ThreadSafeCountMgr::Add(CountTypeToTheMoonTimer, -1);
  common::tools::MiTimer::~MiTimer(this);
};

// Line 24: range 000000000CBB5EFC-000000000CBB5F26
void __cdecl ToTheMoonTimer::~ToTheMoonTimer(ToTheMoonTimer *const this)
{
  ToTheMoonTimer::~ToTheMoonTimer(this);
  operator delete(this, 0x50uLL);
};
