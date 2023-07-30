// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/service/gameserver_mgr.cpp

// Line 27: range 000000000C760156-000000000C760311
int32_t __cdecl GameserverMgr::init(GameserverMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  GameserverMgrConfig *p_gameserver_mgr_config; // rdx
  int v5; // r14d
  int32_t result; // eax
  ServerLBMgrConfig init_config; // [rsp+14h] [rbp-9Ch] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 7 lock:29 64 16 13 config_ptr:31";
  *(_QWORD *)(v1 + 16) = GameserverMgr::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32), &this->mu_);
  ServiceBox::findService<GateserverService>();
  GateserverService::getConfig((GateserverService *const)(v1 + 64));
  p_gameserver_mgr_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->gameserver_mgr_config;
  init_config = GameserverMgr::getLBConfigFromSelfConfig(this, p_gameserver_mgr_config);
  v5 = ServerLBMgr::init(&this->lb_mgr_, &init_config);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 36: range 000000000C760312-000000000C7604C8
void __cdecl GameserverMgr::onReloadConfig(GameserverMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  GameserverMgrConfig *p_gameserver_mgr_config; // rdx
  ServerLBMgrConfig new_config; // [rsp+14h] [rbp-9Ch] BYREF
  char v6[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 7 lock:38 64 16 13 config_ptr:40";
  *(_QWORD *)(v1 + 16) = GameserverMgr::onReloadConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32), &this->mu_);
  ServiceBox::findService<GateserverService>();
  GateserverService::getConfig((GateserverService *const)(v1 + 64));
  p_gameserver_mgr_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->gameserver_mgr_config;
  new_config = GameserverMgr::getLBConfigFromSelfConfig(this, p_gameserver_mgr_config);
  ServerLBMgr::onReloadConfig(&this->lb_mgr_, &new_config);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 47: range 000000000C7604CA-000000000C76076F
int __cdecl GameserverMgr::addGameserver(GameserverMgr *const this, uint32_t app_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const char *v5; // rax
  int v6; // r14d
  const char *v7; // rax
  int result; // eax
  int ret; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 7 lock:49 64 32 13 app_id_str:51";
  *(_QWORD *)(v2 + 16) = GameserverMgr::addGameserver;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -202116109;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &this->mu_);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v2 + 64), app_id);
  ret = ServerLBMgr::addServer(&this->lb_mgr_, app_id, 10000);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/gameserver_mgr.cpp",
      "addGameserver",
      56);
    v5 = (const char *)std::string::c_str(v2 + 64);
    common::milog::MiLogStream::operator()(&v10, "add gameserver failed. app_id=%s", v5);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = ret;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/service/gameserver_mgr.cpp",
      "addGameserver",
      60);
    v7 = (const char *)std::string::c_str(v2 + 64);
    common::milog::MiLogStream::operator()(&v10, "add gameserver app_id=%s", v7);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = 0;
  }
  std::string::~string((void *)(v2 + 64));
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 66: range 000000000C760770-000000000C760A10
int __cdecl GameserverMgr::delGameserver(GameserverMgr *const this, uint32_t app_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const char *v5; // rax
  int v6; // r14d
  const char *v7; // rax
  int result; // eax
  int ret; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 7 lock:68 64 32 13 app_id_str:70";
  *(_QWORD *)(v2 + 16) = GameserverMgr::delGameserver;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -202116109;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &this->mu_);
  common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v2 + 64), app_id);
  ret = ServerLBMgr::delServer(&this->lb_mgr_, app_id);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/gameserver_mgr.cpp",
      "delGameserver",
      76);
    v5 = (const char *)std::string::c_str(v2 + 64);
    common::milog::MiLogStream::operator()(&v10, "del gameserver failed. app_id=%s", v5);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = ret;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/service/gameserver_mgr.cpp",
      "delGameserver",
      80);
    v7 = (const char *)std::string::c_str(v2 + 64);
    common::milog::MiLogStream::operator()(&v10, "del gameserver app_id=%s", v7);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = 0;
  }
  std::string::~string((void *)(v2 + 64));
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 87: range 000000000C760A12-000000000C760BB3
uint32_t __cdecl GameserverMgr::chooseGameserverId(GameserverMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t v4; // r14d
  uint32_t result; // eax
  uint32_t choosed_app_id; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-90h] BYREF
  char v8[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 lock:89";
  *(_QWORD *)(v1 + 16) = GameserverMgr::chooseGameserverId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32), &this->mu_);
  choosed_app_id = ServerLBMgr::chooseServer(&this->lb_mgr_);
  if ( choosed_app_id )
  {
    v4 = choosed_app_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/gameserver_mgr.cpp",
      "chooseGameserverId",
      94);
    common::milog::MiLogStream::operator()(&v7, "failed to choose a game server");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v4 = 0;
  }
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v1 + 32));
  result = v4;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 102: range 000000000C760BB4-000000000C760CCF
int __cdecl GameserverMgr::syncGameserverLoad(GameserverMgr *const this, uint32_t app_id, uint32_t load)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 lock:104";
  *(_QWORD *)(v3 + 16) = GameserverMgr::syncGameserverLoad;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32), &this->mu_);
  ServerLBMgr::updateLoad(&this->lb_mgr_, app_id, load);
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v3 + 32));
  result = 0;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 113: range 000000000C760CD0-000000000C760E7B
ServerLBMgrConfig __cdecl GameserverMgr::getLBConfigFromSelfConfig(
        GameserverMgr *const this,
        const GameserverMgrConfig *self_config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  ServerLBMgrConfig v5; // rax
  char v6[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 13 lb_config:116";
  *(_QWORD *)(v2 + 16) = GameserverMgr::getLBConfigFromSelfConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  ServerLBMgrConfig::ServerLBMgrConfig((ServerLBMgrConfig *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)self_config >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)self_config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)self_config >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(self_config);
  }
  *(_DWORD *)(v2 + 32) = self_config->threshold_load_0;
  if ( *(_BYTE *)(((unsigned __int64)&self_config->threshold_load_1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)self_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&self_config->threshold_load_1 >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&self_config->threshold_load_1);
  }
  *(_DWORD *)(v2 + 36) = self_config->threshold_load_1;
  if ( *(_BYTE *)(((unsigned __int64)&self_config->choose_add_load >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)self_config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&self_config->choose_add_load >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&self_config->choose_add_load);
  }
  *(_DWORD *)(v2 + 40) = self_config->choose_add_load;
  *(_QWORD *)v5.threshold = *(_QWORD *)(v2 + 32);
  v5.choose_add_load = *(_DWORD *)(v2 + 40);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v5;
};
