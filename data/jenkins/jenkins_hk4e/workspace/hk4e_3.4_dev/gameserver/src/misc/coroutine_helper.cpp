// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/coroutine_helper.cpp

// Line 24: range 0000000015576A92-0000000015576D96
void __fastcall PlayerCoroExec::PlayerCoroExec(PlayerCoroExec *const this, uint32_t coro_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::minet::Coroutine *v5; // rax
  common::minet::CoroutineContext *Context; // r13
  common::minet::Coroutine *v7; // rax
  common::minet::CoroutineContext *v8; // r13
  common::minet::Coroutine *v9; // rax
  common::minet::CoroutineContext *v10; // r13
  common::minet::Coroutine *v11; // rax
  common::minet::CoroutineContext *v12; // r13
  std::shared_ptr<common::milog::MilogContext> p_context; // [rsp+10h] [rbp-70h] BYREF
  char v14[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 coro_id:24";
  *(_QWORD *)(v2 + 16) = PlayerCoroExec::PlayerCoroExec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = coro_id;
  std::enable_shared_from_this<PlayerCoroExec>::enable_shared_from_this(this);
  std::queue<std::shared_ptr<common::minet::Packet>>::queue<std::deque<std::shared_ptr<common::minet::Packet>>,void>(&this->packet_queue);
  if ( *(_WORD *)(((unsigned __int64)&this->coro_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->coro_ptr_);
  common::tools::perf::make_shared<common::minet::Coroutine,unsigned int &>(
    (unsigned int *)&this->coro_ptr_,
    (unsigned int *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->yield_id_);
  }
  this->yield_id_ = 0;
  if ( std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->coro_ptr_) )
  {
    v5 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
    Context = common::minet::Coroutine::getContext(v5);
    common::tools::perf::make_shared<common::milog::MilogContext>();
    common::minet::CoroutineContext::push<std::shared_ptr<common::milog::MilogContext>>(Context, &p_context);
    std::shared_ptr<common::milog::MilogContext>::~shared_ptr(&p_context);
    v7 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
    v8 = common::minet::Coroutine::getContext(v7);
    common::tools::perf::make_shared<StatLogUtils::Context>();
    common::minet::CoroutineContext::push<std::shared_ptr<StatLogUtils::Context>>(
      v8,
      (std::shared_ptr<StatLogUtils::Context> *)&p_context);
    std::shared_ptr<StatLogUtils::Context>::~shared_ptr((std::shared_ptr<StatLogUtils::Context> *const)&p_context);
    v9 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
    v10 = common::minet::Coroutine::getContext(v9);
    common::tools::perf::make_shared<MonitorReportUtils::Context>();
    common::minet::CoroutineContext::push<std::shared_ptr<MonitorReportUtils::Context>>(
      v10,
      (std::shared_ptr<MonitorReportUtils::Context> *)&p_context);
    std::shared_ptr<MonitorReportUtils::Context>::~shared_ptr((std::shared_ptr<MonitorReportUtils::Context> *const)&p_context);
    v11 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
    v12 = common::minet::Coroutine::getContext(v11);
    common::tools::perf::make_shared<LuaScriptMgr>();
    common::minet::CoroutineContext::push<std::shared_ptr<LuaScriptMgr>>(
      v12,
      (std::shared_ptr<LuaScriptMgr> *)&p_context);
    std::shared_ptr<LuaScriptMgr>::~shared_ptr((std::shared_ptr<LuaScriptMgr> *const)&p_context);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 37: range 0000000015576D98-0000000015576ECB
void __cdecl PlayerCoroExec::start(
        PlayerCoroExec *const this,
        std::function<void()> *p_func,
        std::function<void()> *p_onExitCallback)
{
  common::minet::Coroutine *v3; // rbx
  std::function<void()> v4; // [rsp+0h] [rbp-70h]
  std::function<void()> v5; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v6; // [rsp+40h] [rbp-30h] BYREF

  v4._M_invoker = (std::function<void()>::_Invoker_type)this;
  v4._M_manager = (std::_Function_base::_Manager_type)p_func;
  *(_QWORD *)&v4._M_functor._M_pod_data[8] = p_onExitCallback;
  if ( std::operator==<common::minet::Coroutine>(&this->coro_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/misc/coroutine_helper.cpp",
      "start",
      40);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v6, (const char (*)[20])"coro_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v3 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
    std::function<void ()(void)>::function(
      (std::function<void()> *const)&v6,
      *(const std::function<void()> **)&v4._M_functor._M_pod_data[8]);
    std::function<void ()(void)>::function(&v5, p_func);
    common::minet::Coroutine::start(v3, v4, v5);
    std::function<void ()(void)>::~function(&v5);
    std::function<void ()(void)>::~function((std::function<void()> *const)&v6);
  }
};

// Line 47: range 0000000015576ECC-0000000015577018
int32_t __cdecl PlayerCoroExec::yield(PlayerCoroExec *const this)
{
  common::minet::Coroutine *v2; // rax
  uint32_t NextYieldId; // edx
  common::minet::Coroutine *v4; // rcx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::Coroutine>(&this->coro_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/misc/coroutine_helper.cpp",
      "yield",
      50);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v5, (const char (*)[20])"coro_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v2 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
    NextYieldId = common::minet::Coroutine::getNextYieldId(v2);
    if ( *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->yield_id_);
    }
    this->yield_id_ = NextYieldId;
    v4 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return common::minet::Coroutine::yield(v4, this->yield_id_);
  }
};

// Line 60: range 000000001557701A-0000000015577109
void __cdecl PlayerCoroExec::notify(PlayerCoroExec *const this)
{
  common::minet::Coroutine *v1; // rcx
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::Coroutine>(&this->coro_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/misc/coroutine_helper.cpp",
      "notify",
      63);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v2, (const char (*)[20])"coro_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
  else
  {
    v1 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::minet::Coroutine::notify(v1, this->yield_id_);
  }
};

// Line 70: range 000000001557710A-0000000015577214
void __cdecl PlayerCoroExec::pushPacket(PlayerCoroExec *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::minet::Coroutine *v2; // rcx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  std::queue<std::shared_ptr<common::minet::Packet>>::push(&this->packet_queue, p_packet_ptr);
  if ( std::operator!=<common::minet::Coroutine>(&this->coro_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->yield_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::minet::Coroutine::notify(v2, this->yield_id_);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/misc/coroutine_helper.cpp",
      "pushPacket",
      78);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v3, (const char (*)[20])"coro_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
};

// Line 82: range 0000000015577216-0000000015577341
void __cdecl PlayerCoroExec::clearPacketQueue(PlayerCoroExec *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 80 8 empty:83";
  *(_QWORD *)(v1 + 16) = PlayerCoroExec::clearPacketQueue;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862724] = -202116109;
  std::queue<std::shared_ptr<common::minet::Packet>>::queue<std::deque<std::shared_ptr<common::minet::Packet>>,void>((std::queue<std::shared_ptr<common::minet::Packet>> *const)(v1 + 48));
  std::queue<std::shared_ptr<common::minet::Packet>>::swap(
    &this->packet_queue,
    (std::queue<std::shared_ptr<common::minet::Packet>> *)(v1 + 48));
  std::queue<std::shared_ptr<common::minet::Packet>>::~queue((std::queue<std::shared_ptr<common::minet::Packet>> *const)(v1 + 48));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 88: range 0000000015577342-0000000015577387
bool __cdecl PlayerCoroExec::isDone(PlayerCoroExec *const this)
{
  common::minet::Coroutine *v1; // rax

  if ( !std::operator!=<common::minet::Coroutine>(&this->coro_ptr_, 0LL) )
    return 1;
  v1 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
  return common::minet::Coroutine::isDone(v1);
};

// Line 97: range 0000000015577388-00000000155773CD
int32_t __cdecl PlayerCoroExec::forceAwake(PlayerCoroExec *const this)
{
  common::minet::Coroutine *v1; // rax

  if ( !std::operator!=<common::minet::Coroutine>(&this->coro_ptr_, 0LL) )
    return 0;
  v1 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
  return common::minet::Coroutine::forceAwake(v1);
};

// Line 106: range 00000000155773CE-000000001557744D
uint32_t __cdecl PlayerCoroExec::getPlayerLuaStateMemoryAccount(PlayerCoroExec *const this)
{
  common::minet::Coroutine *v1; // rax
  std::__shared_ptr_access<LuaScriptMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *lua_script_mgr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<LuaScriptMgr> v4; // [rsp+20h] [rbp-10h] BYREF

  if ( !std::operator!=<common::minet::Coroutine>(&this->coro_ptr_, 0LL) )
    return 0;
  v1 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_ptr_);
  common::minet::Coroutine::getContext(v1);
  common::minet::CoroutineContext::get<std::shared_ptr<LuaScriptMgr>>((common::minet::CoroutineContext *const)&v4);
  lua_script_mgr = std::__shared_ptr_access<LuaScriptMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScriptMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4);
  std::shared_ptr<LuaScriptMgr>::~shared_ptr(&v4);
  return LuaScriptMgr::getLuaStateMemoryAccount(lua_script_mgr);
};

// Line 118: range 0000000015577532-0000000015577BFC
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl CoroutineHelper::asyncTask(
        AsyncTaskFunc *p_func,
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context)
{
  std::shared_ptr<common::minet::Coroutine> *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  char v6; // r14
  std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  char v9; // r15
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdx
  int v12; // r14d
  uint32_t *p_coroutine_timeout; // r14
  GameserverService *v14; // rax
  unsigned int *GameThreadLocal; // rax
  std::shared_ptr<common::tools::TimerMgr> *v16; // r8
  unsigned int *v17; // r9
  GameserverService *v18; // r14
  std::__shared_ptr_access<common::minet::TimeoutCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t result; // eax
  AsyncTaskFunc v21; // [rsp+0h] [rbp-130h]
  AsyncTaskCallbackFunc v22; // [rsp+20h] [rbp-110h] OVERLAPPED BYREF
  std::shared_ptr<common::minet::Packet> p___args_0; // [rsp+40h] [rbp-F0h] BYREF
  std::any context; // [rsp+50h] [rbp-E0h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> v25; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream packet_ptr; // [rsp+80h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+A0h] [rbp-90h] BYREF

  v21._M_invoker = (std::function<int(std::shared_ptr<common::minet::Packet>,std::any)>::_Invoker_type)p_func;
  v21._M_manager = (std::_Function_base::_Manager_type)p_packet_ptr;
  *(_QWORD *)&v21._M_functor._M_pod_data[8] = p_context;
  v3 = (std::shared_ptr<common::minet::Coroutine> *)v27;
  v21._M_functor._M_unused._M_object = v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::shared_ptr<common::minet::Coroutine> *)v4;
  }
  v3->_M_ptr = (std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"2 32 16 12 coro_ptr:119 64 16 12 exec_ptr:134";
  v3[1]._M_ptr = (std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *)CoroutineHelper::asyncTask;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  common::minet::Coroutine::thisCoro();
  v6 = 0;
  if ( std::operator==<common::minet::Coroutine>(v3 + 2, 0LL) )
    goto LABEL_11;
  v7 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[2]);
  if ( *(char *)(((unsigned __int64)&v7->disabled >> 3) + 0x7FFF8000) < 0 )
    v7 = (std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v7->disabled);
  if ( !v7->disabled )
    goto LABEL_12;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&context);
  v6 = 1;
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context);
  if ( *(_BYTE *)(((unsigned __int64)&v8->coroutine_disabled >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v8 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v8->coroutine_disabled >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v8->coroutine_disabled);
  }
  if ( v8->coroutine_disabled )
LABEL_11:
    v9 = 1;
  else
LABEL_12:
    v9 = 0;
  if ( v6 )
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&context);
  if ( v9 )
  {
    v10 = ZTWN11ThreadLocal17is_in_work_threadE();
    v11 = (_BYTE *)v10;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v10);
    if ( *v11 )
    {
      common::milog::MiLogStream::create(
        &packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/misc/coroutine_helper.cpp",
        "asyncTask",
        124);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &packet_ptr,
        (const char (*)[32])"task called sync in work thread");
    }
    else
    {
      common::milog::MiLogStream::create(
        &packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/misc/coroutine_helper.cpp",
        "asyncTask",
        128);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
        &packet_ptr,
        (const char (*)[17])"task called sync");
    }
    common::milog::MiLogStream::~MiLogStream(&packet_ptr);
    std::any::any(&context, *(const std::any **)&v21._M_functor._M_pod_data[8]);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p___args_0, p_packet_ptr);
    v12 = std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::operator()(
            p_func,
            &p___args_0,
            &context);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p___args_0);
    std::any::~any(&context);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&context);
    p_coroutine_timeout = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context)->coroutine_timeout;
    v14 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int *)GameserverService::getGameThreadLocal(v14);
    common::tools::perf::make_shared<common::minet::TimeoutCoroExec,std::shared_ptr<common::minet::Coroutine> &,std::shared_ptr&<common::tools::TimerMgr>,unsigned int &>(
      v3 + 4,
      (std::shared_ptr<common::tools::TimerMgr> *)&v3[2],
      GameThreadLocal,
      (std::shared_ptr<common::minet::Coroutine> *)p_coroutine_timeout,
      v16,
      v17);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&context);
    if ( std::operator==<common::minet::TimeoutCoroExec>(
           (const std::shared_ptr<common::minet::TimeoutCoroExec> *)&v3[4],
           0LL) )
    {
      common::milog::MiLogStream::create(
        &packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/misc/coroutine_helper.cpp",
        "asyncTask",
        137);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &packet_ptr,
        (const char (*)[31])"create CoroExecBase ptr error ");
      common::milog::MiLogStream::~MiLogStream(&packet_ptr);
      v12 = -1;
    }
    else
    {
      std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::reset(v3 + 2);
      v18 = ServiceBox::findService<GameserverService>();
      std::any::any(&context, *(const std::any **)&v21._M_functor._M_pod_data[8]);
      std::shared_ptr<common::minet::Packet>::shared_ptr(&p___args_0, p_packet_ptr);
      std::shared_ptr<common::minet::TimeoutCoroExec>::shared_ptr(
        (std::shared_ptr<common::minet::TimeoutCoroExec> *const)&v22._M_manager,
        (const std::shared_ptr<common::minet::TimeoutCoroExec> *)&v3[4]);
      std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<CoroutineHelper::asyncTask(std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>,std::shared_ptr<common::minet::Packet>,std::any)::{lambda(std::shared_ptr<common::minet::Packet>,std::any,int)#1},void,void>(
        (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr,
        (CoroutineHelper::asyncTask::<lambda(common::minet::PacketPtr, std::any, int32_t)> *)&v22._M_manager);
      std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function(&v25, p_func);
      *(_DWORD *)&v22._M_functor._M_pod_data[12] = ServiceBase::pushAsyncTask(
                                                     v18,
                                                     v21,
                                                     v22,
                                                     (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &v25),
                                                     (std::any)__PAIR128__(&context, &p___args_0));
      std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function(&v25);
      std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr);
      CoroutineHelper::asyncTask(std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>,std::shared_ptr<common::minet::Packet>,std::any)::{lambda(std::shared_ptr<common::minet::Packet>,std::any,int)#1}::~function((CoroutineHelper::asyncTask::<lambda(common::minet::PacketPtr, std::any, int32_t)> *const)&v22._M_manager);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p___args_0);
      std::any::~any(&context);
      if ( *(_DWORD *)&v22._M_functor._M_pod_data[12] )
      {
        v12 = *(_DWORD *)&v22._M_functor._M_pod_data[12];
      }
      else
      {
        v19 = std::__shared_ptr_access<common::minet::TimeoutCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::TimeoutCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[4]);
        v12 = common::minet::TimeoutCoroExec::yield(v19, 0);
      }
    }
    std::shared_ptr<common::minet::TimeoutCoroExec>::~shared_ptr((std::shared_ptr<common::minet::TimeoutCoroExec> *const)&v3[4]);
  }
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr(v3 + 2);
  result = v12;
  if ( v21._M_functor._M_unused._M_object == v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_ptr = (std::__shared_ptr<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 142: range 000000001557744E-0000000015577515
int32_t __cdecl CoroutineHelper::asyncTask(std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>,std::shared_ptr<common::minet::Packet>,std::any)::{lambda(std::shared_ptr<common::minet::Packet>,std::any,int)#1}::operator()(
        const CoroutineHelper::asyncTask::<lambda(common::minet::PacketPtr, std::any, int32_t)> *const __closure,
        common::minet::PacketPtr *p_,
        std::any *p__,
        int32_t ret)
{
  std::__shared_ptr_access<common::minet::TimeoutCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int val; // [rsp+28h] [rbp-38h] BYREF
  int32_t coro_ret; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  v4 = std::__shared_ptr_access<common::minet::TimeoutCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::TimeoutCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  coro_ret = common::minet::TimeoutCoroExec::resume(v4, ret);
  if ( coro_ret )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/misc/coroutine_helper.cpp",
      "operator()",
      147);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v10,
           (const char (*)[34])"[ECS] asyncTask resume error,ret:");
    val = coro_ret;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  return ret;
};

// Line 142: range 0000000015599BA6-0000000015599BCB
void __cdecl CoroutineHelper::asyncTask(std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>,std::shared_ptr<common::minet::Packet>,std::any)::{lambda(std::shared_ptr<common::minet::Packet>,std::any,int)#1}::function(
        CoroutineHelper::asyncTask::<lambda(common::minet::PacketPtr, std::any, int32_t)> *const this,
        CoroutineHelper::asyncTask::<lambda(common::minet::PacketPtr, std::any, int32_t)> *a2)
{
  std::shared_ptr<common::minet::TimeoutCoroExec>::shared_ptr(&this->__exec_ptr, &a2->__exec_ptr);
};

// Line 142: range 0000000015599C96-0000000015599CBB
void __cdecl CoroutineHelper::asyncTask(std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>,std::shared_ptr<common::minet::Packet>,std::any)::{lambda(std::shared_ptr<common::minet::Packet>,std::any,int)#1}::function(
        CoroutineHelper::asyncTask::<lambda(common::minet::PacketPtr, std::any, int32_t)> *const this,
        const CoroutineHelper::asyncTask::<lambda(common::minet::PacketPtr, std::any, int32_t)> *a2)
{
  std::shared_ptr<common::minet::TimeoutCoroExec>::shared_ptr(&this->__exec_ptr, &a2->__exec_ptr);
};

// Line 142: range 0000000015577516-0000000015577530
void __cdecl CoroutineHelper::asyncTask(std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>,std::shared_ptr<common::minet::Packet>,std::any)::{lambda(std::shared_ptr<common::minet::Packet>,std::any,int)#1}::~function(
        CoroutineHelper::asyncTask::<lambda(common::minet::PacketPtr, std::any, int32_t)> *const this)
{
  std::shared_ptr<common::minet::TimeoutCoroExec>::~shared_ptr(&this->__exec_ptr);
};

// Line 160: range 0000000015577BFE-0000000015577E02
void __cdecl CoroutineHelper::setContextPacketPtr(common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::minet::Coroutine *v4; // rax
  common::minet::CoroutineContext *Context; // r14
  std::shared_ptr<common::minet::Packet> *v6; // rdx
  std::shared_ptr<common::minet::Packet> p_context; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 coro_ptr:161";
  *(_QWORD *)(v1 + 16) = CoroutineHelper::setContextPacketPtr;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::minet::Coroutine::thisCoro();
  if ( std::operator!=<common::minet::Coroutine>((const std::shared_ptr<common::minet::Coroutine> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Context = common::minet::Coroutine::getContext(v4);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_context, p_packet_ptr);
    common::minet::CoroutineContext::set<std::shared_ptr<common::minet::Packet>>(Context, &p_context);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_context);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/misc/coroutine_helper.cpp",
      "setContextPacketPtr",
      168);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v8,
      (const char (*)[35])"packet ptr not in coroutine local ");
    common::milog::MiLogStream::~MiLogStream(&v8);
    v6 = (std::shared_ptr<common::minet::Packet> *)ZTWN11ThreadLocal14cur_packet_ptrE();
    std::shared_ptr<common::minet::Packet>::operator=(v6, p_packet_ptr);
  }
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 172: range 0000000015577E04-0000000015577F3D
void __cdecl CoroutineHelper::clearContextPacketPtr()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  common::minet::Coroutine *v3; // rax
  common::minet::CoroutineContext *Context; // rax
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2> *v5; // rax
  char v6[112]; // [rsp+0h] [rbp-70h] BYREF

  v0 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_0(64LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 16 12 coro_ptr:173";
  *(_QWORD *)(v0 + 16) = CoroutineHelper::clearContextPacketPtr;
  v2 = v0 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202178560;
  common::minet::Coroutine::thisCoro();
  if ( std::operator!=<common::minet::Coroutine>((const std::shared_ptr<common::minet::Coroutine> *)(v0 + 32), 0LL) )
  {
    v3 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v0 + 32));
    Context = common::minet::Coroutine::getContext(v3);
    common::minet::CoroutineContext::erase<std::shared_ptr<common::minet::Packet>>(Context);
  }
  else
  {
    v5 = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2> *)ZTWN11ThreadLocal14cur_packet_ptrE();
    std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::reset(v5);
  }
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)(v0 + 32));
  if ( v6 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 183: range 0000000015577F3E-00000000155780A1
common::minet::PacketPtr __cdecl CoroutineHelper::getContextPacketPtr()
{
  common::minet::CoroutineContext *v0; // rdi
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::minet::Coroutine *v4; // rax
  const std::shared_ptr<common::minet::Packet> *v5; // rdx
  common::minet::PacketPtr result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 coro_ptr:184";
  *(_QWORD *)(v1 + 16) = CoroutineHelper::getContextPacketPtr;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::minet::Coroutine::thisCoro();
  if ( std::operator!=<common::minet::Coroutine>((const std::shared_ptr<common::minet::Coroutine> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    common::minet::Coroutine::getContext(v4);
    if ( *(_WORD *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
      __asan_report_store16(v0);
    common::minet::CoroutineContext::get<std::shared_ptr<common::minet::Packet>>(v0);
  }
  else
  {
    v5 = (const std::shared_ptr<common::minet::Packet> *)ZTWN11ThreadLocal14cur_packet_ptrE();
    std::shared_ptr<common::minet::Packet>::shared_ptr((std::shared_ptr<common::minet::Packet> *const)v0, v5);
  }
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)v0;
  return result;
};

// Line 193: range 00000000155780A2-0000000015578215
PlayerPtr __cdecl CoroutineHelper::getPlayerFromContextPacket()
{
  std::shared_ptr<Player> *v0; // rdi
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  GameserverService *v4; // rax
  uint32_t v5; // r14d
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerPtr result; // rax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 packet_ptr:194";
  *(_QWORD *)(v1 + 16) = CoroutineHelper::getPlayerFromContextPacket;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  CoroutineHelper::getContextPacketPtr();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v1 + 32)) )
  {
    std::shared_ptr<Player>::shared_ptr(v0, 0LL);
  }
  else
  {
    v4 = ServiceBox::findService<GameserverService>();
    v5 = (unsigned int)GameserverService::getGameThreadLocal(v4) + 16;
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    common::minet::Packet::getUserId(v6);
    if ( *(_WORD *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
      __asan_report_store16(v0);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)v0, v5);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)v0;
  return result;
};

// Line 204: range 0000000015578216-0000000015578325
void __cdecl CoroutineHelper::resetTime()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  common::minet::Coroutine *v3; // rax
  char v4[96]; // [rsp+0h] [rbp-60h] BYREF

  v0 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_0(64LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 16 12 coro_ptr:205";
  *(_QWORD *)(v0 + 16) = CoroutineHelper::resetTime;
  v2 = v0 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202178560;
  common::minet::Coroutine::thisCoro();
  if ( std::operator!=<common::minet::Coroutine>((const std::shared_ptr<common::minet::Coroutine> *)(v0 + 32), 0LL) )
  {
    v3 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v0 + 32));
    common::minet::Coroutine::resetTime(v3);
  }
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)(v0 + 32));
  if ( v4 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 212: range 0000000015578326-0000000015578446
int __cdecl CoroutineHelper::time()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  common::minet::Coroutine *v3; // rax
  int v4; // r14d
  int result; // eax
  char v6[112]; // [rsp+0h] [rbp-70h] BYREF

  v0 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_0(64LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 16 12 coro_ptr:213";
  *(_QWORD *)(v0 + 16) = CoroutineHelper::time;
  v2 = v0 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202178560;
  common::minet::Coroutine::thisCoro();
  if ( std::operator!=<common::minet::Coroutine>((const std::shared_ptr<common::minet::Coroutine> *)(v0 + 32), 0LL) )
  {
    v3 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v0 + 32));
    v4 = common::minet::Coroutine::time(v3);
  }
  else
  {
    v4 = 0;
  }
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)(v0 + 32));
  result = v4;
  if ( v6 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 222: range 0000000015578448-0000000015578611
std::string *__cdecl CoroutineHelper::debugTime[abi:cxx11](std::string *retstr)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::minet::Coroutine *v4; // rsi
  std::allocator<char> __a; // [rsp+1Fh] [rbp-61h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 coro_ptr:223";
  *(_QWORD *)(v1 + 16) = CoroutineHelper::debugTime[abi:cxx11];
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::minet::Coroutine::thisCoro();
  if ( std::operator!=<common::minet::Coroutine>((const std::shared_ptr<common::minet::Coroutine> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Coroutine,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      v4 = (common::minet::Coroutine *)32;
      __asan_report_store_n(retstr, 32LL);
    }
    common::minet::Coroutine::debugTime[abi:cxx11](retstr, v4);
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, byte_257A0640, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr((std::shared_ptr<common::minet::Coroutine> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
