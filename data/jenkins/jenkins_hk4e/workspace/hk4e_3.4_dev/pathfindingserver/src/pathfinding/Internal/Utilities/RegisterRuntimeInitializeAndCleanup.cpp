// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/RegisterRuntimeInitializeAndCleanup.cpp

// Line 20: range 000000000CCA0BDD-000000000CCA0C5E
bool __cdecl operator<(const OrderedCallback *lhs, const OrderedCallback *rhs)
{
  int order; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(lhs);
  }
  order = lhs->order;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(rhs);
  }
  return order < rhs->order;
};

// Line 24: range 000000000CCA0C60-000000000CCA0C94
void __cdecl RegisterRuntimeInitializeAndCleanup::RegisterRuntimeInitializeAndCleanup(
        RegisterRuntimeInitializeAndCleanup *const this,
        RegisterRuntimeInitializeAndCleanup::CallbackFunction *Initialize,
        RegisterRuntimeInitializeAndCleanup::CallbackFunction *Cleanup,
        int order,
        void *data)
{
  RegisterRuntimeInitializeAndCleanup::Register(Initialize, Cleanup, order, data);
};

// Line 30: range 000000000CCA0C96-000000000CCA0FA0
void __cdecl RegisterRuntimeInitializeAndCleanup::Register(
        RegisterRuntimeInitializeAndCleanup::CallbackFunction *Initialize,
        RegisterRuntimeInitializeAndCleanup::CallbackFunction *Cleanup,
        int order,
        void *data)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  char v8; // al
  int v9; // edx
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  if ( gNumRegisteredCallbacks > 499 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/Utilities/RegisterRuntimeInitializeAndCleanup.cpp",
      "Register",
      34);
    common::milog::MiLogStream::operator()(
      &v12,
      "RegisterRuntimeInitializeAndCleanup::Register has reached the limit %d MaxLimit %d",
      (unsigned int)gNumRegisteredCallbacks,
      500LL);
    common::milog::MiLogStream::~MiLogStream(&v12);
    __asan_handle_no_return(&v12);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/Utilities/RegisterRuntimeInitializeAndCleanup.cpp",
      0x22u,
      "static void RegisterRuntimeInitializeAndCleanup::Register(void (*)(void*), void (*)(void*), int, void*)");
  }
  v4 = gNumRegisteredCallbacks;
  if ( *(_BYTE *)(((unsigned __int64)&gCallbacks[gNumRegisteredCallbacks].init >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  gCallbacks[v4].init = Initialize;
  v5 = gNumRegisteredCallbacks;
  if ( *(_BYTE *)(((unsigned __int64)&gCallbacks[gNumRegisteredCallbacks].cleanup >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  gCallbacks[v5].cleanup = Cleanup;
  v6 = gNumRegisteredCallbacks;
  if ( *(_BYTE *)(((unsigned __int64)&gCallbacks[gNumRegisteredCallbacks].data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  gCallbacks[v6].data = data;
  v7 = gNumRegisteredCallbacks;
  v8 = *(_BYTE *)(((unsigned __int64)&gCallbacks[gNumRegisteredCallbacks] >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
    __asan_report_store4(&gCallbacks[gNumRegisteredCallbacks]);
  gCallbacks[v7].order = order;
  v9 = gNumRegisteredCallbacks;
  if ( *(char *)(((unsigned __int64)&gCallbacks[gNumRegisteredCallbacks].initCalled >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&gCallbacks[gNumRegisteredCallbacks].initCalled);
  gCallbacks[v9].initCalled = 0;
  ++gNumRegisteredCallbacks;
};

// Line 52: range 000000000CCA0FA2-000000000CCA11D9
void __cdecl RegisterRuntimeInitializeAndCleanup::ExecuteInitializations()
{
  OrderedCallback *v0; // rsi
  RegisterRuntimeInitializeAndCleanup::CallbackFunction *init; // rcx
  int i; // [rsp+Ch] [rbp-4h]

  v0 = &gCallbacks[gNumRegisteredCallbacks];
  std::sort<OrderedCallback *>(gCallbacks, v0);
  for ( i = 0; i < gNumRegisteredCallbacks; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gCallbacks[i].init >> 3) + 0x7FFF8000) )
      __asan_report_load8(&gCallbacks[i].init, v0);
    if ( gCallbacks[i].init )
    {
      if ( *(char *)(((unsigned __int64)&gCallbacks[i].initCalled >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&gCallbacks[i].initCalled);
      if ( !gCallbacks[i].initCalled )
      {
        init = gCallbacks[i].init;
        if ( *(_BYTE *)(((unsigned __int64)&gCallbacks[i].data >> 3) + 0x7FFF8000) )
          __asan_report_load8(&gCallbacks[i].data, v0);
        init(gCallbacks[i].data);
        if ( *(char *)(((unsigned __int64)&gCallbacks[i].initCalled >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&gCallbacks[i].initCalled);
        gCallbacks[i].initCalled = 1;
      }
    }
  }
};

// Line 66: range 000000000CCA11DA-000000000CCA12F9
void __cdecl RegisterRuntimeInitializeAndCleanup::ExecuteCleanup()
{
  __int64 v0; // rsi
  RegisterRuntimeInitializeAndCleanup::CallbackFunction *cleanup; // rcx
  int i; // [rsp+Ch] [rbp-4h]

  for ( i = gNumRegisteredCallbacks - 1; i >= 0; --i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gCallbacks[i].cleanup >> 3) + 0x7FFF8000) )
      __asan_report_load8(&gCallbacks[i].cleanup, v0);
    if ( gCallbacks[i].cleanup )
    {
      cleanup = gCallbacks[i].cleanup;
      if ( *(_BYTE *)(((unsigned __int64)&gCallbacks[i].data >> 3) + 0x7FFF8000) )
        __asan_report_load8(&gCallbacks[i].data, v0);
      cleanup(gCallbacks[i].data);
    }
  }
};
