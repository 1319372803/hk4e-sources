// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/include/singleton.h

// Line 24: range 000000000C65B123-000000000C65B19C
DispatchApp *__cdecl Singleton<DispatchApp>::instance()
{
  DispatchApp *v0; // rbx

  if ( !Singleton<DispatchApp>::inst_ptr_ )
  {
    v0 = (DispatchApp *)operator new(0x1F0uLL);
    DispatchApp::DispatchApp(v0);
    Singleton<DispatchApp>::inst_ptr_ = v0;
    atexit(Singleton<DispatchApp>::destroy);
  }
  return Singleton<DispatchApp>::inst_ptr_;
};

// Line 38: range 000000000C657DBC-000000000C657DC6
void __cdecl Singleton<DispatchApp>::Singleton(Singleton<DispatchApp> *const this)
{
  ;
};

// Line 41: range 000000000C6690F7-000000000C66917E
void __cdecl Singleton<DispatchApp>::destroy()
{
  DispatchApp *volatile v0; // rax
  unsigned __int64 v1; // rdx

  if ( Singleton<DispatchApp>::inst_ptr_ )
  {
    v0 = Singleton<DispatchApp>::inst_ptr_;
    if ( Singleton<DispatchApp>::inst_ptr_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)Singleton<DispatchApp>::inst_ptr_ >> 3) + 0x7FFF8000) )
        v0 = (DispatchApp *volatile)__asan_report_load8(Singleton<DispatchApp>::inst_ptr_);
      v1 = *(_QWORD *)v0->gap0 + 8LL;
      if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
        v0 = (DispatchApp *volatile)__asan_report_load8(*(_QWORD *)v0->gap0 + 8LL);
      (*(void (__fastcall **)(DispatchApp *volatile))v1)(v0);
    }
    Singleton<DispatchApp>::inst_ptr_ = 0LL;
  }
};
